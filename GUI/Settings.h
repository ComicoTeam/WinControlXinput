#pragma once

#include <QtCore>
#include <iostream>
#include <Controller.h>

void SaveSettings(const char* Ssetting, bool state);
void SaveSettings(const char* Ssetting, int button);
void AutoSettings(const char* Ssetting, QString path);

void AutoRemove(const char* name);
//void LoadSettings();

