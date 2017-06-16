#pragma once

#include <QDialog>
#include "ui_SettingsDialog.h"
#include "Settings.h"

class SettingsDialog : public QDialog
{
	Q_OBJECT

public:
	SettingsDialog(QWidget *parent = Q_NULLPTR);
	~SettingsDialog();

private slots:
	void on_okayButton_clicked();
	void on_cancelButton_clicked();
	void SettingsDialog::on_SettingsDialog_finished();

private:
	Ui::SettingsDialog ui;
};
