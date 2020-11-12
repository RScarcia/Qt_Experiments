#include "MainWindow.h"
#include "stdafx.h"
#include <QMessageBox>
#include "AddWindow.h"
#include <QCloseEvent>
#include <QDebug>

MainWindow::MainWindow(QWidget *parent) : QWidget(parent) {
    ui.setupUi(this);
    
    connect(&aggiungi, SIGNAL(addItem(QString, QString, QString, QString, QString, QString)),
            this, SLOT(updateTable(QString, QString, QString, QString, QString, QString)));

    connect(this, SIGNAL(sendObject(QString, QString, QString, QString, QString, QString)),
            &aggiungi, SLOT(receiveFromGUI(QString, QString, QString, QString, QString, QString)));
}

void MainWindow::updateTable(QString PhotoURL, QString Name, QString Surname, QString Address, QString Phone, QString Mail) {
    
    QTableWidgetItem* curItem = ui.addressList->currentItem();
    int row = 0;
    if(curItem){
        //qInfo() << "Current_ROW:" << ui.addressList->row(curItem);
        row = ui.addressList->row(curItem);

    } else {
        ui.addressList->insertRow(ui.addressList->rowCount());
	    row = ui.addressList->rowCount() - 1;
    }
       
    QTableWidgetItem* photoItem = new QTableWidgetItem();
    if (PhotoURL.isEmpty()) {
        photoItem->setData(Qt::DecorationRole,
                            QPixmap("C:/Users/Rossella/Documents/GitHub/Address_Book_FINAL/MainWindow/Images/man256.png").scaled(100, 100,
                                                                                                                                 Qt::KeepAspectRatio, 
                                                                                                                                 Qt::SmoothTransformation));
        pixURL = "C:/Users/Rossella/Documents/GitHub/Address_Book_FINAL/MainWindow/Images/man256.png";
    } else {
        photoItem->setData(Qt::DecorationRole, QPixmap(PhotoURL).scaled(100, 100, Qt::KeepAspectRatio, Qt::SmoothTransformation));
        pixURL = PhotoURL;
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
        for (int i = 0; i < 6; i++) {
            ui.addressList->takeItem(row, i);
        }
        delete curItem;
        ui.addressList->removeRow(row);
    }
}

void MainWindow::on_editButton_clicked() {
    QTableWidgetItem* curItem = ui.addressList->currentItem();

    if (curItem) { 
        int row = ui.addressList->row(curItem);
        
        QString curName = ui.addressList->item(row, 1)->text();
        QString curSurname = ui.addressList->item(row, 2)->text();
        QString curAddress = ui.addressList->item(row, 3)->text();
        QString curPhone = ui.addressList->item(row, 4)->text();
        QString curMail = ui.addressList->item(row, 5)->text();

        emit sendObject(pixURL, curName, curSurname, curAddress, curPhone, curMail);
        aggiungi.show();
    }
    /*qInfo() << "Row:" << ui.addressList->row(curItem);
    qInfo() << "RowCount:" << ui.addressList->rowCount();*/
}