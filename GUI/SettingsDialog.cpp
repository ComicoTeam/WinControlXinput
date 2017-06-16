#include "SettingsDialog.h"

bool LeftAnolog;
bool AutoStart;
bool Alterate;
SettingsDialog::SettingsDialog(QWidget *parent)
	: QDialog(parent)
{
	ui.setupUi(this);

	if (LeftAnolog)
	{
		ui.anologSwitch->setChecked(true);
	}
	else
	{
		ui.anologSwitch->setChecked(false);
	}
	if (Alterate)
	{
		ui.mouseAlterate->setChecked(true);
	}
	else
	{
		ui.mouseAlterate->setChecked(false);
	}
	if (AutoStart)
	{
		ui.autoStart->setChecked(true);
	}
	else
	{
		ui.autoStart->setChecked(false);
	}
}

SettingsDialog::~SettingsDialog()
{
}
void SettingsDialog::on_SettingsDialog_finished()
{

}

void SettingsDialog::on_okayButton_clicked()
{
	if (ui.anologSwitch->isChecked())
	{
		LeftAnolog = true;
		ui.anologSwitch->setChecked(true);
	}
	else
	{
		LeftAnolog = false;
		ui.anologSwitch->setChecked(false);
	}
	if (ui.mouseAlterate->isChecked())
	{
		Alterate = true;
		ui.mouseAlterate->setChecked(true);
	}
	else
	{
		Alterate = false;
		ui.mouseAlterate->setChecked(false);
	}
	if (ui.autoStart->isChecked())
	{
		AutoSettings("XinputControl",
			QCoreApplication::applicationFilePath().replace('/', '\\'));
		AutoStart = true;
	}
	else
	{
		AutoRemove("XinputControl");
		AutoStart = false;
	}
	SaveSettings("LeftAnolog", LeftAnolog);
	SaveSettings("Alterate", Alterate);
}

void SettingsDialog::on_cancelButton_clicked()
{

}
