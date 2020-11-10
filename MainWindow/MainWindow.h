#pragma once

#include <QtWidgets/QWidget>
#include "ui_MainWindow.h"
#include "AddWindow.h"

class MainWindow : public QWidget
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = Q_NULLPTR);
    QTableWidget addressList;

private:
    Ui::MainWindowClass ui;
    AddWindow aggiungi;
    void closeEvent(QCloseEvent* event);

signals:

private slots:
    void updateTable(QString PhotoURL, QString Name, QString Surname, QString Address, QString Phone, QString Mail);
    void on_addButton_clicked();
    //void on_addressList_currentItemChanged();
    //void on_deleteButton_clicked();
};
