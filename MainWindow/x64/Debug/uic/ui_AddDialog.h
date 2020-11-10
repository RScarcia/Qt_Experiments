/********************************************************************************
** Form generated from reading UI file 'AddDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDDIALOG_H
#define UI_ADDDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AddDialog
{
public:
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout;
    QLabel *surnameText;
    QLabel *emailText;
    QLabel *phoneText;
    QLineEdit *surnameEdit;
    QLineEdit *nameEdit;
    QLabel *addressText;
    QLineEdit *phoneEdit;
    QLabel *nameText;
    QLineEdit *addressEdit;
    QLineEdit *emailEdit;
    QVBoxLayout *verticalLayout_2;
    QLabel *avatarPhoto;
    QLabel *avatarLabel;
    QPushButton *loadPhotoButton;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *okButton;

    void setupUi(QDialog *AddDialog)
    {
        if (AddDialog->objectName().isEmpty())
            AddDialog->setObjectName(QString::fromUtf8("AddDialog"));
        AddDialog->resize(730, 476);
        AddDialog->setModal(true);
        layoutWidget = new QWidget(AddDialog);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(20, 16, 701, 441));
        verticalLayout_3 = new QVBoxLayout(layoutWidget);
        verticalLayout_3->setSpacing(0);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
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
        surnameText = new QLabel(layoutWidget);
        surnameText->setObjectName(QString::fromUtf8("surnameText"));
        QFont font;
        font.setFamily(QString::fromUtf8("Lato"));
        font.setPointSize(9);
        surnameText->setFont(font);

        gridLayout->addWidget(surnameText, 1, 0, 1, 1);

        emailText = new QLabel(layoutWidget);
        emailText->setObjectName(QString::fromUtf8("emailText"));
        emailText->setFont(font);

        gridLayout->addWidget(emailText, 4, 0, 1, 1);

        phoneText = new QLabel(layoutWidget);
        phoneText->setObjectName(QString::fromUtf8("phoneText"));
        phoneText->setFont(font);

        gridLayout->addWidget(phoneText, 3, 0, 1, 1);

        surnameEdit = new QLineEdit(layoutWidget);
        surnameEdit->setObjectName(QString::fromUtf8("surnameEdit"));
        surnameEdit->setFont(font);

        gridLayout->addWidget(surnameEdit, 1, 1, 1, 1);

        nameEdit = new QLineEdit(layoutWidget);
        nameEdit->setObjectName(QString::fromUtf8("nameEdit"));
        nameEdit->setFont(font);

        gridLayout->addWidget(nameEdit, 0, 1, 1, 1);

        addressText = new QLabel(layoutWidget);
        addressText->setObjectName(QString::fromUtf8("addressText"));
        addressText->setFont(font);

        gridLayout->addWidget(addressText, 2, 0, 1, 1);

        phoneEdit = new QLineEdit(layoutWidget);
        phoneEdit->setObjectName(QString::fromUtf8("phoneEdit"));
        phoneEdit->setFont(font);

        gridLayout->addWidget(phoneEdit, 3, 1, 1, 1);

        nameText = new QLabel(layoutWidget);
        nameText->setObjectName(QString::fromUtf8("nameText"));
        nameText->setFont(font);

        gridLayout->addWidget(nameText, 0, 0, 1, 1);

        addressEdit = new QLineEdit(layoutWidget);
        addressEdit->setObjectName(QString::fromUtf8("addressEdit"));
        addressEdit->setFont(font);

        gridLayout->addWidget(addressEdit, 2, 1, 1, 1);

        emailEdit = new QLineEdit(layoutWidget);
        emailEdit->setObjectName(QString::fromUtf8("emailEdit"));
        emailEdit->setFont(font);

        gridLayout->addWidget(emailEdit, 4, 1, 1, 1);


        verticalLayout->addLayout(gridLayout);


        horizontalLayout_2->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(10);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setSizeConstraint(QLayout::SetDefaultConstraint);
        verticalLayout_2->setContentsMargins(20, -1, 20, 0);
        avatarPhoto = new QLabel(layoutWidget);
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

        avatarLabel = new QLabel(layoutWidget);
        avatarLabel->setObjectName(QString::fromUtf8("avatarLabel"));
        avatarLabel->setFont(font);
        avatarLabel->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(avatarLabel);

        loadPhotoButton = new QPushButton(layoutWidget);
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
        horizontalLayout->setContentsMargins(-1, -1, 20, -1);
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        okButton = new QPushButton(layoutWidget);
        okButton->setObjectName(QString::fromUtf8("okButton"));
        okButton->setFont(font);

        horizontalLayout->addWidget(okButton);


        verticalLayout_3->addLayout(horizontalLayout);

        QWidget::setTabOrder(nameEdit, surnameEdit);
        QWidget::setTabOrder(surnameEdit, addressEdit);
        QWidget::setTabOrder(addressEdit, phoneEdit);
        QWidget::setTabOrder(phoneEdit, emailEdit);
        QWidget::setTabOrder(emailEdit, loadPhotoButton);
        QWidget::setTabOrder(loadPhotoButton, okButton);

        retranslateUi(AddDialog);
        QObject::connect(okButton, SIGNAL(clicked()), AddDialog, SLOT(accept()));
        QObject::connect(loadPhotoButton, SIGNAL(clicked()), AddDialog, SLOT(open()));

        QMetaObject::connectSlotsByName(AddDialog);
    } // setupUi

    void retranslateUi(QDialog *AddDialog)
    {
        AddDialog->setWindowTitle(QCoreApplication::translate("AddDialog", "Add Address", nullptr));
        surnameText->setText(QCoreApplication::translate("AddDialog", "Surname:", nullptr));
        emailText->setText(QCoreApplication::translate("AddDialog", "E-mail:", nullptr));
        phoneText->setText(QCoreApplication::translate("AddDialog", "Phone:", nullptr));
        addressText->setText(QCoreApplication::translate("AddDialog", "Address:", nullptr));
        phoneEdit->setText(QString());
        nameText->setText(QCoreApplication::translate("AddDialog", "Name:", nullptr));
        avatarLabel->setText(QCoreApplication::translate("AddDialog", "Avatar", nullptr));
        loadPhotoButton->setText(QCoreApplication::translate("AddDialog", "Load...", nullptr));
        okButton->setText(QCoreApplication::translate("AddDialog", "OK", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AddDialog: public Ui_AddDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDDIALOG_H
