#include "MainWindow.h"
#include "stdafx.h"
#include <QMessageBox>
#include "AddWindow.h"
#include <QCloseEvent>
#include <QDebug>
#include "libxl.h"
#include <sstream>

using namespace libxl;

MainWindow::MainWindow(QWidget *parent) : QWidget(parent) {
    ui.setupUi(this);

    //Load xls file of the address book
    //Unable to upload photos
    Book* book = xlCreateBook();

    if (book->load(L"address_book.xls")) {
        Sheet* sheet = book->getSheet(0);
        if (sheet) {

            for (int row = 2; row < sheet->lastRow(); ++row) {

                QString loadName = QString::fromWCharArray(sheet->readStr(row, 1));
                QString loadSurname = QString::fromWCharArray(sheet->readStr(row, 2));
                QString loadAddress = QString::fromWCharArray(sheet->readStr(row, 3));
                QString loadPhone = QString::fromWCharArray(sheet->readStr(row, 4));
                QString loadMail = QString::fromWCharArray(sheet->readStr(row, 5));

                updateTable(NULL, loadName, loadSurname, loadAddress, loadPhone, loadMail);
            }
        }
    }

    //Signals
    connect(&aggiungi, SIGNAL(addItem(QString, QString, QString, QString, QString, QString)),
            this, SLOT(updateTable(QString, QString, QString, QString, QString, QString)));

    connect(this, SIGNAL(sendObject(QString, QString, QString, QString, QString, QString)),
            &aggiungi, SLOT(receiveFromGUI(QString, QString, QString, QString, QString, QString)));

}

void MainWindow::updateTable(QString PhotoURL, QString Name, QString Surname, QString Address, QString Phone, QString Mail) {
   
    //qInfo() << "Current_ROW:" << row;
    int row = ui.addressList->rowCount();

    //If curItem is selected set row = row of currentItem
    //else add a new row
    if(curItem){
        //qInfo() << "Current_ROW:" << ui.addressList->row(curItem);
        row = ui.addressList->row(curItem);

    } else {
        ui.addressList->insertRow(ui.addressList->rowCount());
	    row = ui.addressList->rowCount() - 1;
    }
    
    //Set photo
    QTableWidgetItem* photoItem = new QTableWidgetItem();
    if (PhotoURL.isEmpty()) {
        photoItem->setData(Qt::DecorationRole,
                            QPixmap("C:/...../Images/man256.png").scaled(100, 100,
                                                                                                                                 Qt::KeepAspectRatio, 
                                                                                                                                 Qt::SmoothTransformation));

        listURL.append("C:/...../Images/man256.png");
    } else {
        photoItem->setData(Qt::DecorationRole, QPixmap(PhotoURL).scaled(100, 100, Qt::KeepAspectRatio, Qt::SmoothTransformation));
        listURL.append(PhotoURL);

        if (listURL.at(row) != NULL) {
            listURL.replace(row, PhotoURL);
        }
        
    }

	ui.addressList->setItem(row, 0, photoItem);
	ui.addressList->setItem(row, 1, new QTableWidgetItem(Name));
	ui.addressList->setItem(row, 2, new QTableWidgetItem(Surname));
	ui.addressList->setItem(row, 3, new QTableWidgetItem(Address));
	ui.addressList->setItem(row, 4, new QTableWidgetItem(Phone));
	ui.addressList->setItem(row, 5, new QTableWidgetItem(Mail));
	        
	ui.addressList->setColumnWidth(0, 100);
	ui.addressList->setRowHeight(row, 100);
    ui.addressList->resizeColumnsToContents();

}

void MainWindow::on_addButton_clicked() {
    aggiungi.show();
    curItem = NULL;
}

void MainWindow::closeEvent(QCloseEvent* event) {
    QMessageBox::StandardButton resBtn = QMessageBox::question(this, tr("Address Book"),
                                                               tr("Are you sure?\n"),
                                                               QMessageBox::Cancel | QMessageBox::No | QMessageBox::Yes,
                                                               QMessageBox::Yes);
    if (resBtn != QMessageBox::Yes) {
        event->ignore();
    } else {
        event->accept();
    }
}

void MainWindow::on_deleteButton_clicked() {
    QTableWidgetItem* curItem = ui.addressList->currentItem();

    if (curItem) {
        int row = ui.addressList->row(curItem);
        listURL.takeAt(row);
        for (int i = 0; i < 6; i++) {
            ui.addressList->takeItem(row, i);
        }
        delete curItem;
        ui.addressList->removeRow(row);
    }
}

void MainWindow::on_editButton_clicked() {
    curItem = ui.addressList->currentItem();

    if (curItem) { 
        int row = ui.addressList->row(curItem);

        QString curPhoto = listURL.at(row);
        QString curName = ui.addressList->item(row, 1)->text();
        QString curSurname = ui.addressList->item(row, 2)->text();
        QString curAddress = ui.addressList->item(row, 3)->text();
        QString curPhone = ui.addressList->item(row, 4)->text();
        QString curMail = ui.addressList->item(row, 5)->text();

        emit sendObject(curPhoto, curName, curSurname, curAddress, curPhone, curMail);
        aggiungi.show();
    }
    /*qInfo() << "Row:" << ui.addressList->row(curItem);
    qInfo() << "RowCount:" << ui.addressList->rowCount();*/
}

void MainWindow::on_saveButton_clicked() {
    
    Book* book = xlCreateBook();
    Sheet* sheet = book->addSheet(L"Address Book");

    //style
    Font* titleFont = book->addFont();
    titleFont->setSize(12);
    titleFont->setBold(true);
    titleFont->setName(L"Lato");

    Font* textFont = book->addFont();
    textFont->setSize(10);
    textFont->setName(L"Lato");

    //format
    Format* titleFormat = book->addFormat();
    titleFormat->setFont(titleFont);
    titleFormat->setAlignH(ALIGNH_CENTER);

    Format* textFormat = book->addFormat();
    textFormat->setFont(textFont);
    textFormat->setAlignH(ALIGNH_DISTRIBUTED);


    sheet->writeStr(1, 0, L"Photo", titleFormat);
    sheet->writeStr(1, 1, L"Name", titleFormat);
    sheet->writeStr(1, 2, L"Surname", titleFormat);
    sheet->writeStr(1, 3, L"Address", titleFormat);
    sheet->writeStr(1, 4, L"Phone", titleFormat);
    sheet->writeStr(1, 5, L"E-Mail", titleFormat);

   
    //items
    for (int row = 0; row < (ui.addressList->rowCount()); ++row) {
        //altezza
        sheet->setRow(row + 2, 45);
        //larghezza
        sheet->setCol(0, 0, 8);
        sheet->setCol(1, 4, 13);
        sheet->setCol(5, 5, 20);
        qInfo() << "PICTURE:" << listURL.at(row);
        int id = book->addPicture(listURL.at(row).toStdWString().c_str());
        sheet->setPicture(row + 2, 0, id, 0);
        
        for (int col = 1; col < 6; ++col) {
            QString nome = ui.addressList->item(row, col)->text();
            QString cognome = ui.addressList->item(row, col)->text();
            QString indirizzo = ui.addressList->item(row, col)->text();
            QString telefono = ui.addressList->item(row, col)->text();
            QString internet = ui.addressList->item(row, col)->text();
            
            sheet->writeStr(row + 2, col, nome.toStdWString().c_str(), textFormat);
            sheet->writeStr(row + 2, col, cognome.toStdWString().c_str(), textFormat);
            sheet->writeStr(row + 2, col, indirizzo.toStdWString().c_str(), textFormat);
            sheet->writeStr(row + 2, col, telefono.toStdWString().c_str(), textFormat);
            sheet->writeStr(row + 2, col, internet.toStdWString().c_str(), textFormat);
            /*qInfo() << "Nome:" << nome;
            qInfo() << "Nome_ROW:" << nome->row();*/    
        }
    }

    //saving
    //Unable to choose saving path
    book->save(L"address_book.xls");
    qInfo() << "SAVED";
    book->release();

    QMessageBox::information(this, tr("Info"), tr("File saved in local directory."), QMessageBox::Ok);
}
