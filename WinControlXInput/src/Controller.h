#pragma once

#include <Windows.h>
#include <Xinput.h>

class Controller
{
private:
	int cId;
	XINPUT_STATE state;

	float deadzoneX;
	float deadzoneY;

public:
	Controller() : deadzoneX(0.05f), deadzoneY(0.02f) {}
	Controller(float dzX, float dzY) : deadzoneX(dzX), deadzoneY(dzY) {}

	float leftStickX;
	float leftStickY;
	float rightStickX;
	float rightStickY;
	float leftTrigger;
	float rightTrigger;

	int  GetPort();
	XINPUT_GAMEPAD *GetState();
	bool CheckConnection();
	bool Refresh();
	bool IsPressed(WORD);
	bool IsReleased(WORD);
	void MoveCursor(float JoyX, float JoyY, POINT p, WORD button, bool Alterate);
};
