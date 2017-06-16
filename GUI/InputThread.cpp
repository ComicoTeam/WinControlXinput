#include "InputThread.h"
#include <qdebug.h>

POINT MousePos;

InputThread::InputThread()
{
}

void InputThread::run()
{
	MouseControl();
}

void InputThread::MouseControl()
{


	Controller controller;

	bool wasConnected = true;
	bool Run = true;
	WORD leftClick;
	WORD rightClick;

	while (Run)
	{
		float testLeftX = controller.leftStickX;
		qDebug() << "LeftAnolog" << testLeftX;

		QSettings setting("ComicoTeam", "XinputControl");
		setting.beginGroup("MainWindow");
		QVariant LeftSetting = setting.value("LeftAnolog", false);
		QVariant Runing = setting.value("Runing", true);
		QVariant ClickLeft = setting.value("LeftClick", XINPUT_GAMEPAD_LEFT_SHOULDER);
		QVariant ClickRight = setting.value("RightClick", XINPUT_GAMEPAD_RIGHT_SHOULDER);
		bool Alterate = ("Alterate");
		setting.endGroup();

		if (ClickLeft == XINPUT_GAMEPAD_Y)
		{
			leftClick = XINPUT_GAMEPAD_Y;
		}
		if (ClickLeft == XINPUT_GAMEPAD_A)
		{
			leftClick = XINPUT_GAMEPAD_A;
		}
		if (ClickLeft == XINPUT_GAMEPAD_X)
		{
			leftClick = XINPUT_GAMEPAD_X;
		}
		if (ClickLeft == XINPUT_GAMEPAD_B)
		{
			leftClick = XINPUT_GAMEPAD_B;
		}
		if (ClickRight == XINPUT_GAMEPAD_Y)
		{
			rightClick = XINPUT_GAMEPAD_Y;
		}
		if (ClickRight == XINPUT_GAMEPAD_A)
		{
			rightClick = XINPUT_GAMEPAD_A;
		}
		if (ClickRight == XINPUT_GAMEPAD_X)
		{
			rightClick = XINPUT_GAMEPAD_X;
		}
		if (ClickRight == XINPUT_GAMEPAD_B)
		{
			rightClick = XINPUT_GAMEPAD_B;
		}

		if (bool firstRun = true)
		{
			if (!controller.Refresh())
			{
				if (wasConnected)
				{
					wasConnected = false;

					//Log("Please connect an Xbox 360 controller.");
				}
			}
			else
			{
				if (!wasConnected)
				{
					wasConnected = true;

					//Log("Controller connected on port ", controller.GetPort());
				}
			}
			firstRun = false;
		}
		//FIX MOUSE BUG!!!!!!!!!!!!!!!!
		if (LeftSetting == false)
		{
			controller.MoveCursor(controller.rightStickX, controller.rightStickY,
				MousePos, controller.IsPressed(XINPUT_GAMEPAD_RIGHT_THUMB), Alterate);
		}
		else
		{
			controller.MoveCursor(controller.leftStickX, controller.leftStickY,
				MousePos, controller.IsPressed(XINPUT_GAMEPAD_LEFT_THUMB), Alterate);
		}

		if (controller.IsPressed(leftClick))
		{
			LeftClick();
		}

		if (controller.IsPressed(XINPUT_GAMEPAD_LEFT_SHOULDER))
		{
			LeftClick();
		}
		if (controller.leftTrigger != 0)
		{
			DWORD SCROLLUP = controller.leftTrigger;
			mouse_event(MOUSEEVENTF_WHEEL, 0, 0, 100, 0);
		}

		if (controller.rightTrigger != 0)
		{
			DWORD SCROLLDOWN = controller.rightTrigger;
			mouse_event(MOUSEEVENTF_WHEEL, 0, 0, -100, 0);
		}
		if (Runing == false)
		{
			Run = false;
		}	
	}
}
