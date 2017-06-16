#include "ButtonsSettings.h"

ButtonsSettings::ButtonsSettings(QWidget *parent)
	: QDialog(parent)
{
	ui.setupUi(this);
	
}

ButtonsSettings::~ButtonsSettings()
{
}

void ButtonsSettings::on_okayButton_clicked()
{
	if (ui.Y_Combo->currentText() == "LeftClick")
	{
		SaveSettings("LeftClick", XINPUT_GAMEPAD_Y);
	}

	if (ui.Y_Combo->currentText() == "RightClick")
	{
		SaveSettings("RightClick", XINPUT_GAMEPAD_Y);
	}

	if (ui.Y_Combo->currentText() == "Start(W.I.P)")
	{
		SaveSettings("Start(W.I.P)", XINPUT_GAMEPAD_Y);
	}

	if (ui.Y_Combo->currentText() == "ScrollUp")
	{
		SaveSettings("ScrollUp", XINPUT_GAMEPAD_Y);
	}

	if (ui.Y_Combo->currentText() == "ScrollDown")
	{
		SaveSettings("ScrollDown", XINPUT_GAMEPAD_Y);
	}

	if (ui.Y_Combo->currentText() == "OpenVirtualKeyboard")
	{
		SaveSettings("OpenVirtualKeyboard", XINPUT_GAMEPAD_Y);
	}

	if (ui.B_Combo->currentText() == "LeftClick")
	{
		SaveSettings("LeftClick", XINPUT_GAMEPAD_B);
	}

	if (ui.Y_Combo->currentText() == "RightClick")
	{
		SaveSettings("RightClick", XINPUT_GAMEPAD_B);
	}

	if (ui.B_Combo->currentText() == "Start(W.I.P)")
	{
		SaveSettings("Start(W.I.P)", XINPUT_GAMEPAD_B);
	}

	if (ui.B_Combo->currentText() == "ScrollUp")
	{
		SaveSettings("ScrollUp", XINPUT_GAMEPAD_B);
	}

	if (ui.B_Combo->currentText() == "ScrollDown")
	{
		SaveSettings("ScrollDown", XINPUT_GAMEPAD_B);
	}

	if (ui.B_Combo->currentText() == "OpenVirtualKeyboard")
	{
		SaveSettings("OpenVirtualKeyboard", XINPUT_GAMEPAD_B);
	}

	if (ui.B_Combo->currentText() == "LeftClick")
	{
		SaveSettings("LeftClick", XINPUT_GAMEPAD_A);
	}

	if (ui.Y_Combo->currentText() == "RightClick")
	{
		SaveSettings("RightClick", XINPUT_GAMEPAD_A);
	}

	if (ui.A_Combo->currentText() == "Start(W.I.P)")
	{
		SaveSettings("Start(W.I.P)", XINPUT_GAMEPAD_A);
	}

	if (ui.A_Combo->currentText() == "ScrollUp")
	{
		SaveSettings("ScrollUp", XINPUT_GAMEPAD_A);
	}

	if (ui.A_Combo->currentText() == "ScrollDown")
	{
		SaveSettings("ScrollDown", XINPUT_GAMEPAD_A);
	}

	if (ui.A_Combo->currentText() == "OpenVirtualKeyboard")
	{
		SaveSettings("OpenVirtualKeyboard", XINPUT_GAMEPAD_A);
	}

	if (ui.B_Combo->currentText() == "LeftClick")
	{
		SaveSettings("LeftClick", XINPUT_GAMEPAD_X);
	}

	if (ui.Y_Combo->currentText() == "RightClick")
	{
		SaveSettings("RightClick", XINPUT_GAMEPAD_X);
	}

	if (ui.X_Combo->currentText() == "Start(W.I.P)")
	{
		SaveSettings("Start(W.I.P)", XINPUT_GAMEPAD_X);
	}

	if (ui.X_Combo->currentText() == "ScrollUp")
	{
		SaveSettings("ScrollUp", XINPUT_GAMEPAD_X);
	}

	if (ui.X_Combo->currentText() == "ScrollDown")
	{
		SaveSettings("ScrollDown", XINPUT_GAMEPAD_X);
	}

	if (ui.X_Combo->currentText() == "OpenVirtualKeyboard")
	{
		SaveSettings("OpenVirtualKeyboard", XINPUT_GAMEPAD_X);
	}
	close();
}
