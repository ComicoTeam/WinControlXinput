#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_MainWindow.h"

class GUI : public QMainWindow 
{
	Q_OBJECT

public:
	GUI(QWidget *parent = Q_NULLPTR);

private slots:
	void on_buttonY_clicked();
	void on_buttonX_clicked();
	void on_buttonB_clicked();
	void on_buttonA_clicked();
	void on_actionSettings_triggered();
	void aboutToQuit();
private:
	Ui::GUIClass ui;
private:
	void openButtonSettings();
};

