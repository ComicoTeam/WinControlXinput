#if 0
#include <iostream>
#include "MouseClick.h"
#include "Controller.h"
#include "Log.h"

POINT MousePos;

namespace WinControlXInput
{
	int main()
	{
		Controller controller;

		bool wasConnected = true;
		while (true)
		{
			if (bool firstRun = true)
			{
				if (!controller.Refresh())
				{
					if (wasConnected)
					{
						wasConnected = false;

						Log("Please connect an Xbox 360 controller.");
					}
				}
				else
				{
					if (!wasConnected)
					{
						wasConnected = true;

						Log("Controller connected on port ", controller.GetPort());
					}
				}
				firstRun = false;
			}

			controller.MoveCursor(controller.rightStickX, controller.rightStickY,
				MousePos, controller.IsPressed(XINPUT_GAMEPAD_RIGHT_THUMB));

			if (controller.IsPressed(XINPUT_GAMEPAD_RIGHT_SHOULDER))
			{
				RightClick();
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
		}
	}
}
#endif // 0



