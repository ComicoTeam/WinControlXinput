#include "MainWindow.h"
#include "SettingsDialog.h"
#include "ButtonsSettings.h"

GUI::GUI(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	SaveSettings("Runing", true);
}
void GUI::aboutToQuit()
{
	SaveSettings("Runing", false);
}

void GUI::on_actionSettings_triggered()
{
	SettingsDialog settingsDialog;
	settingsDialog.setModal(true);
	settingsDialog.exec();
}

void GUI::openButtonSettings()
{
	ButtonsSettings buttonsSettings;
	buttonsSettings.setModal(true);
	buttonsSettings.exec();
}

void GUI::on_buttonY_clicked() 
{
	openButtonSettings();
}
void GUI::on_buttonX_clicked()
{
	openButtonSettings();
}
void GUI::on_buttonB_clicked()
{
	openButtonSettings();
}
void GUI::on_buttonA_clicked()
{
	openButtonSettings();
}





