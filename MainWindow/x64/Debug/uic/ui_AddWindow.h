/********************************************************************************
** Form generated from reading UI file 'AddWindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDWINDOW_H
#define UI_ADDWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AddWindow
{
public:
    QGridLayout *gridLayout_2;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout;
    QLabel *nameText;
    QLineEdit *surnameEdit;
    QLineEdit *nameEdit;
    QLineEdit *phoneEdit;
    QSpacerItem *verticalSpacer_2;
    QLineEdit *emailEdit;
    QLabel *addressText;
    QLabel *phoneText;
    QLabel *surnameText;
    QLabel *emailText;
    QLineEdit *addressEdit;
    QSpacerItem *verticalSpacer_3;
    QVBoxLayout *verticalLayout_2;
    QSpacerItem *verticalSpacer_4;
    QLabel *avatarPhoto;
    QLabel *avatarLabel;
    QPushButton *loadPhotoButton;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *okButton;

    void setupUi(QWidget *AddWindow)
    {
        if (AddWindow->objectName().isEmpty())
            AddWindow->setObjectName(QString::fromUtf8("AddWindow"));
        AddWindow->resize(793, 409);
        gridLayout_2 = new QGridLayout(AddWindow);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(0);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(-1, -1, 0, -1);
        gridLayout = new QGridLayout();
        gridLayout->setSpacing(10);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        nameText = new QLabel(AddWindow);
        nameText->setObjectName(QString::fromUtf8("nameText"));
        QFont font;
        font.setFamily(QString::fromUtf8("Lato"));
        font.setPointSize(9);
        nameText->setFont(font);

        gridLayout->addWidget(nameText, 1, 0, 1, 1);

        surnameEdit = new QLineEdit(AddWindow);
        surnameEdit->setObjectName(QString::fromUtf8("surnameEdit"));
        surnameEdit->setFont(font);

        gridLayout->addWidget(surnameEdit, 2, 1, 1, 1);

        nameEdit = new QLineEdit(AddWindow);
        nameEdit->setObjectName(QString::fromUtf8("nameEdit"));
        nameEdit->setFont(font);

        gridLayout->addWidget(nameEdit, 1, 1, 1, 1);

        phoneEdit = new QLineEdit(AddWindow);
        phoneEdit->setObjectName(QString::fromUtf8("phoneEdit"));
        phoneEdit->setFont(font);

        gridLayout->addWidget(phoneEdit, 4, 1, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_2, 0, 1, 1, 1);

        emailEdit = new QLineEdit(AddWindow);
        emailEdit->setObjectName(QString::fromUtf8("emailEdit"));
        emailEdit->setFont(font);

        gridLayout->addWidget(emailEdit, 5, 1, 1, 1);

        addressText = new QLabel(AddWindow);
        addressText->setObjectName(QString::fromUtf8("addressText"));
        addressText->setFont(font);

        gridLayout->addWidget(addressText, 3, 0, 1, 1);

        phoneText = new QLabel(AddWindow);
        phoneText->setObjectName(QString::fromUtf8("phoneText"));
        phoneText->setFont(font);

        gridLayout->addWidget(phoneText, 4, 0, 1, 1);

        surnameText = new QLabel(AddWindow);
        surnameText->setObjectName(QString::fromUtf8("surnameText"));
        surnameText->setFont(font);

        gridLayout->addWidget(surnameText, 2, 0, 1, 1);

        emailText = new QLabel(AddWindow);
        emailText->setObjectName(QString::fromUtf8("emailText"));
        emailText->setFont(font);

        gridLayout->addWidget(emailText, 5, 0, 1, 1);

        addressEdit = new QLineEdit(AddWindow);
        addressEdit->setObjectName(QString::fromUtf8("addressEdit"));
        addressEdit->setFont(font);

        gridLayout->addWidget(addressEdit, 3, 1, 1, 1);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_3, 6, 1, 1, 1);


        verticalLayout->addLayout(gridLayout);


        horizontalLayout_2->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(10);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setSizeConstraint(QLayout::SetDefaultConstraint);
        verticalLayout_2->setContentsMargins(20, -1, 20, 0);
        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_4);

        avatarPhoto = new QLabel(AddWindow);
        avatarPhoto->setObjectName(QString::fromUtf8("avatarPhoto"));
        avatarPhoto->setEnabled(true);
        avatarPhoto->setMinimumSize(QSize(256, 256));
        avatarPhoto->setAutoFillBackground(false);
        avatarPhoto->setFrameShape(QFrame::Box);
        avatarPhoto->setTextFormat(Qt::RichText);
        avatarPhoto->setScaledContents(true);
        avatarPhoto->setAlignment(Qt::AlignCenter);
        avatarPhoto->setMargin(0);
        avatarPhoto->setOpenExternalLinks(false);

        verticalLayout_2->addWidget(avatarPhoto);

        avatarLabel = new QLabel(AddWindow);
        avatarLabel->setObjectName(QString::fromUtf8("avatarLabel"));
        avatarLabel->setFont(font);
        avatarLabel->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(avatarLabel);

        loadPhotoButton = new QPushButton(AddWindow);
        loadPhotoButton->setObjectName(QString::fromUtf8("loadPhotoButton"));
        loadPhotoButton->setMinimumSize(QSize(0, 0));
        loadPhotoButton->setFont(font);

        verticalLayout_2->addWidget(loadPhotoButton);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);


        horizontalLayout_2->addLayout(verticalLayout_2);


        verticalLayout_3->addLayout(horizontalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(-1, 10, 20, 10);
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        okButton = new QPushButton(AddWindow);
        okButton->setObjectName(QString::fromUtf8("okButton"));
        okButton->setFont(font);

        horizontalLayout->addWidget(okButton);


        verticalLayout_3->addLayout(horizontalLayout);


        gridLayout_2->addLayout(verticalLayout_3, 0, 0, 1, 1);

        QWidget::setTabOrder(nameEdit, surnameEdit);
        QWidget::setTabOrder(surnameEdit, addressEdit);
        QWidget::setTabOrder(addressEdit, phoneEdit);
        QWidget::setTabOrder(phoneEdit, emailEdit);
        QWidget::setTabOrder(emailEdit, loadPhotoButton);
        QWidget::setTabOrder(loadPhotoButton, okButton);

        retranslateUi(AddWindow);

        QMetaObject::connectSlotsByName(AddWindow);
    } // setupUi

    void retranslateUi(QWidget *AddWindow)
    {
        AddWindow->setWindowTitle(QCoreApplication::translate("AddWindow", "AddWindow", nullptr));
        nameText->setText(QCoreApplication::translate("AddWindow", "Name:", nullptr));
        phoneEdit->setText(QString());
        addressText->setText(QCoreApplication::translate("AddWindow", "Address:", nullptr));
        phoneText->setText(QCoreApplication::translate("AddWindow", "Phone:", nullptr));
        surnameText->setText(QCoreApplication::translate("AddWindow", "Surname:", nullptr));
        emailText->setText(QCoreApplication::translate("AddWindow", "E-mail:", nullptr));
        avatarLabel->setText(QCoreApplication::translate("AddWindow", "Avatar", nullptr));
        loadPhotoButton->setText(QCoreApplication::translate("AddWindow", "Load...", nullptr));
        okButton->setText(QCoreApplication::translate("AddWindow", "OK", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AddWindow: public Ui_AddWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDWINDOW_H
