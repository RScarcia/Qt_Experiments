/********************************************************************************
** Form generated from reading UI file 'MainWindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindowClass
{
public:
    QGridLayout *gridLayout_3;
    QGridLayout *gridLayout_2;
    QGridLayout *gridLayout;
    QTableWidget *addressList;
    QVBoxLayout *verticalLayout;
    QPushButton *addButton;
    QPushButton *deleteButton;
    QPushButton *editButton;
    QSpacerItem *verticalSpacer_2;
    QPushButton *saveButton;

    void setupUi(QWidget *MainWindowClass)
    {
        if (MainWindowClass->objectName().isEmpty())
            MainWindowClass->setObjectName(QString::fromUtf8("MainWindowClass"));
        MainWindowClass->resize(954, 561);
        QFont font;
        font.setFamily(QString::fromUtf8("Lato"));
        font.setPointSize(9);
        MainWindowClass->setFont(font);
        gridLayout_3 = new QGridLayout(MainWindowClass);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setSpacing(6);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setVerticalSpacing(20);
        gridLayout->setContentsMargins(0, -1, 0, -1);
        addressList = new QTableWidget(MainWindowClass);
        if (addressList->columnCount() < 6)
            addressList->setColumnCount(6);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        __qtablewidgetitem->setFont(font);
        addressList->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        __qtablewidgetitem1->setFont(font);
        addressList->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        __qtablewidgetitem2->setFont(font);
        addressList->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        __qtablewidgetitem3->setFont(font);
        addressList->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        __qtablewidgetitem4->setFont(font);
        addressList->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        __qtablewidgetitem5->setFont(font);
        addressList->setHorizontalHeaderItem(5, __qtablewidgetitem5);
        addressList->setObjectName(QString::fromUtf8("addressList"));
        addressList->setFont(font);
        addressList->setStyleSheet(QString::fromUtf8("QTableWidget{\n"
"	background-color: #ffffff;\n"
"	alternate-background-color: #d0edff;\n"
"	selection-background-color: #89c8ff;\n"
"}"));
        addressList->setEditTriggers(QAbstractItemView::EditKeyPressed);
        addressList->setAlternatingRowColors(true);
        addressList->setSortingEnabled(true);
        addressList->setRowCount(0);
        addressList->horizontalHeader()->setStretchLastSection(false);
        addressList->verticalHeader()->setMinimumSectionSize(50);
        addressList->verticalHeader()->setDefaultSectionSize(50);

        gridLayout->addWidget(addressList, 0, 0, 1, 1);


        gridLayout_2->addLayout(gridLayout, 0, 0, 1, 1);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(15);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(-1, 10, -1, -1);
        addButton = new QPushButton(MainWindowClass);
        addButton->setObjectName(QString::fromUtf8("addButton"));
        addButton->setFont(font);

        verticalLayout->addWidget(addButton);

        deleteButton = new QPushButton(MainWindowClass);
        deleteButton->setObjectName(QString::fromUtf8("deleteButton"));
        deleteButton->setFont(font);

        verticalLayout->addWidget(deleteButton);

        editButton = new QPushButton(MainWindowClass);
        editButton->setObjectName(QString::fromUtf8("editButton"));
        editButton->setFont(font);

        verticalLayout->addWidget(editButton);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);

        saveButton = new QPushButton(MainWindowClass);
        saveButton->setObjectName(QString::fromUtf8("saveButton"));
        saveButton->setFont(font);

        verticalLayout->addWidget(saveButton);


        gridLayout_2->addLayout(verticalLayout, 0, 1, 1, 1);


        gridLayout_3->addLayout(gridLayout_2, 0, 0, 1, 1);


        retranslateUi(MainWindowClass);

        QMetaObject::connectSlotsByName(MainWindowClass);
    } // setupUi

    void retranslateUi(QWidget *MainWindowClass)
    {
        MainWindowClass->setWindowTitle(QCoreApplication::translate("MainWindowClass", "Address Book", nullptr));
        QTableWidgetItem *___qtablewidgetitem = addressList->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("MainWindowClass", "Photo", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = addressList->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("MainWindowClass", "Name", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = addressList->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("MainWindowClass", "Surname", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = addressList->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("MainWindowClass", "Address", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = addressList->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("MainWindowClass", "Phone", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = addressList->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QCoreApplication::translate("MainWindowClass", "E-mail", nullptr));
        addButton->setText(QCoreApplication::translate("MainWindowClass", "Add", nullptr));
        deleteButton->setText(QCoreApplication::translate("MainWindowClass", "Delete", nullptr));
        editButton->setText(QCoreApplication::translate("MainWindowClass", "Edit", nullptr));
        saveButton->setText(QCoreApplication::translate("MainWindowClass", "Save", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindowClass: public Ui_MainWindowClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
