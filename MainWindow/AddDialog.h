#pragma once

#include <QDialog>
#include "ui_AddDialog.h"

class AddDialog : public QDialog, public Ui::AddDialog
{
	Q_OBJECT

public:
	QString fileUrl = "";
	QString name = "";
	QString surname = "";
	QString address = "";
	QString phone = "";
	QString mail = "";

	AddDialog(QWidget *parent = Q_NULLPTR);
	~AddDialog();

private slots:
	void on_loadPhotoButton_clicked();
	void on_okButton_clicked();
};
