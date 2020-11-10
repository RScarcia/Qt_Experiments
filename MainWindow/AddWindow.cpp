#include "AddWindow.h"
#include <QFileDialog>
#include <QDebug>
#include "MainWindow.h"
#include "stdafx.h"
#include <QMessageBox>


AddWindow::AddWindow(QWidget *parent): QWidget(parent){
	setupUi(this);
}

void AddWindow::on_loadPhotoButton_clicked() {
	fileUrl = QFileDialog::getOpenFileName(this,
										   tr("Change Photo"), "",
										   tr("Images (*.png *.jpg)"));

	if (!fileUrl.isEmpty()) {
		QPixmap photo(fileUrl);
		avatarPhoto->setPixmap(photo.scaled(256, 256, Qt::KeepAspectRatio, Qt::SmoothTransformation));
	}
}

void AddWindow::on_okButton_clicked() {

	QString name = nameEdit->text();
	QString surname = surnameEdit->text();
	QString address = addressEdit->text();
	QString phone = phoneEdit->text();
	QString mail = emailEdit->text();

	if (name.isEmpty()) {
		QMessageBox::warning(this, tr("Attenzione"), tr("Missing Name"), QMessageBox::Ok);
		return;
	} else if (surname.isEmpty()) {
		QMessageBox::warning(this, tr("Attenzione"), tr("Missing Surname"), QMessageBox::Ok);
		return;
	} else if (mail.isEmpty()) {
		QMessageBox::warning(this, tr("Attenzione"), tr("Missing E-Mail"), QMessageBox::Ok);
		return;
	}

	emit addItem(fileUrl, name, surname, address, phone, mail);
	
	fileUrl = "";
	avatarPhoto->clear();
	nameEdit->setText("");
	surnameEdit->setText("");
	addressEdit->setText("");
	phoneEdit->setText("");
	emailEdit->setText("");
	close();
}

AddWindow::~AddWindow()
{
}
