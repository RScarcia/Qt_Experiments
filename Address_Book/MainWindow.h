#pragma once

#include <QtWidgets/QWidget>
#include "ui_MainWindow.h"
#include "AddWindow.h"

class MainWindow : public QWidget
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = Q_NULLPTR);
    QTableWidget addressTable;

private:
    Ui::MainWindowClass ui;
    AddWindow aggiungi;
    QList<QString> listURL;
    QTableWidgetItem* curItem = NULL;
    void closeEvent(QCloseEvent* event);

signals:
    void sendObject(QString PIX_URL, QString curName, QString curSurname, QString curAddress, QString curPhone, QString curMail);

private slots:
    void updateTable(QString PhotoURL, QString Name, QString Surname, QString Address, QString Phone, QString Mail);
    void on_addButton_clicked();
    void on_deleteButton_clicked();
    void on_editButton_clicked();
    void on_saveButton_clicked();
};
