#pragma once

#include <QtCore>
#include <Controller.h>
#include <MouseClick.h>
#include "LoadSettings.h"

class InputThread : public QThread
{
public:
	InputThread();
	void run();
	void MouseControl();
	QString name;
};