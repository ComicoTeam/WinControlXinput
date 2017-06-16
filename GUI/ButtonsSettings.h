#pragma once

#include <QDialog>
#include "ui_ButtonsSettings.h"
#include "Settings.h"

class ButtonsSettings : public QDialog
{
	Q_OBJECT

public:
	ButtonsSettings(QWidget *parent = Q_NULLPTR);
	~ButtonsSettings();
private slots:
	void on_okayButton_clicked();
private:
	Ui::ButtonsSettings ui;
};
