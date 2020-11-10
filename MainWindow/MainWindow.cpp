#include "MainWindow.h"
#include "stdafx.h"
#include "AddDialog.h"
#include <QMessageBox>
#include "AddWindow.h"
#include <QCloseEvent>

MainWindow::MainWindow(QWidget *parent) : QWidget(parent) {
    ui.setupUi(this);
    
    connect(&aggiungi, SIGNAL(addItem(QString, QString, QString, QString, QString, QString)),
            this, SLOT(updateTable(QString, QString, QString, QString, QString, QString)));
}

void MainWindow::updateTable(QString PhotoURL, QString Name, QString Surname, QString Address, QString Phone, QString Mail) {
        
    ui.addressList->insertRow(ui.addressList->rowCount());
	int row = ui.addressList->rowCount() - 1;

    QTableWidgetItem* photoItem = new QTableWidgetItem();
    if (PhotoURL.isEmpty()) {
        photoItem->setData(Qt::DecorationRole,
                           QPixmap("C:/Users/Rossella/Visual_Studio_2019/VisualStudio_Source/repos/MainWindow/Images/man256.png").scaled(100, 100,
                                                                                                                                         Qt::KeepAspectRatio, 
                                                                                                                                         Qt::SmoothTransformation));
    } else {
        photoItem->setData(Qt::DecorationRole, QPixmap(PhotoURL).scaled(100, 100, Qt::KeepAspectRatio, Qt::SmoothTransformation));
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

//void MainWindow::on_addressList_currentItemChanged() {
//   
//    for (int row = 0; row < 6; row++) {
//        for (int column = 0; column < 6; column++) {
//            
//        }
//    }
//    
//    
//    
//    /*QListWidgetItem* curItem = ui.addressList->currentItem();
//
//    if (curItem) {
//        ui.nameLabel->setText("Name: " + curItem->text());
//        ui.emailLabel->setText("E-Mail: " + curItem->data(Qt::UserRole).toString());
//    } else {
//        ui.nameLabel->setText("<No item selected>");
//        ui.emailLabel->clear();
//    }*/
//}

//void MainWindow::on_deleteButton_clicked() {
//    QListWidgetItem* curItem = ui.addressList->currentItem();
//
//    if (curItem) {
//        int row = ui.addressList->row(curItem);
//        ui.addressList->takeItem(row);
//        delete curItem;
//
//        if (ui.addressList->count() > 0) {
//            ui.addressList->setCurrentRow(0);
//        } else {
//            on_addressList_currentItemChanged();
//        }
//    }
//}