#include "AddDialog.h"
#include <QFileDialog>
#include <QDebug>
#include "MainWindow.h"
#include "stdafx.h"
#include <QMessageBox>


AddDialog::AddDialog(QWidget *parent) : QDialog(parent) {
	setupUi(this);
}

void AddDialog::on_loadPhotoButton_clicked() {
	fileUrl = QFileDialog::getOpenFileName(this,
											tr("Change Photo"), "",
											tr("Images (*.png *.jpg)"));

	if (!fileUrl.isEmpty()) {
		QPixmap avatar(fileUrl);
		avatarPhoto->setPixmap(avatar.scaled(256,256, Qt::KeepAspectRatio, Qt::SmoothTransformation));	
	}

}

void AddDialog::on_okButton_clicked() {
	
	QTableWidgetItem* photo = new QTableWidgetItem();
	if (fileUrl.isEmpty()) {
		photo->setData(Qt::DecorationRole, QPixmap("C:/Users/Rossella/Visual_Studio_2019/VisualStudio_Source/repos/MainWindow/Images/man256.png").scaled(100, 100, Qt::KeepAspectRatio, Qt::SmoothTransformation));
	} else {
		photo->setData(Qt::DecorationRole, QPixmap(fileUrl).scaled(100, 100, Qt::KeepAspectRatio, Qt::SmoothTransformation));
	}

	QString name = nameEdit->text();
	QString surname = surnameEdit->text();
	QString address = addressEdit->text();
	QString phone = phoneEdit->text();
	QString mail = emailEdit->text();
	
	//while (name.isEmpty() || surname.isEmpty() || mail.isEmpty()) {
		if (name.isEmpty()) {
			QMessageBox::warning(this, tr("Attenzione"), tr("Missing Name"), QMessageBox::Ok);
		} else if (surname.isEmpty()) {
			QMessageBox::warning(this, tr("Attenzione"), tr("Missing Surname"), QMessageBox::Ok);
		} else if (mail.isEmpty()) {
			QMessageBox::warning(this, tr("Attenzione"), tr("Missing E-Mail"), QMessageBox::Ok);
		}
		exec();
	//}
	
		QTableWidgetItem* nameItem = new QTableWidgetItem(name);
		QTableWidgetItem* surnameItem = new QTableWidgetItem(surname);
		QTableWidgetItem* addressItem = new QTableWidgetItem(address);
		QTableWidgetItem* phoneItem = new QTableWidgetItem(phone);
		QTableWidgetItem* mailItem = new QTableWidgetItem(mail);
}


AddDialog::~AddDialog()
{

}
