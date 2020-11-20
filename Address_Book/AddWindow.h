#pragma once

#include <QWidget>
#include "ui_AddWindow.h"

class AddWindow : public QWidget, public Ui::AddWindow
{
	Q_OBJECT

public:
	QString fileUrl = "";
	QString name = "";
	QString surname = "";
	QString address = "";
	QString phone = "";
	QString mail = "";

	AddWindow(QWidget *parent = Q_NULLPTR);
	~AddWindow();

private:
	void closeEvent(QCloseEvent* event);

signals:
	void addItem(QString photoUrl, QString newName, QString newSurname, QString newAddress, QString newPhone, QString newMail);

private slots:
	void on_loadPhotoButton_clicked();
	void on_okButton_clicked();
	void on_cancelButton_clicked();
	void receiveFromGUI(QString oldPix, QString oldName, QString oldSurname, QString oldAddress, QString oldPhone, QString oldMail);
};
