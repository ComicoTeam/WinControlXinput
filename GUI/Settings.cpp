#include "Settings.h"

void SaveSettings(const char* Ssetting, bool state)
{
	QSettings setting("ComicoTeam", "XinputControl");
	setting.beginGroup("MainWindow");
	setting.setValue(Ssetting, state);
	setting.endGroup();
}

void SaveSettings(const char* Ssetting, int button)
{
	QSettings setting("ComicoTeam", "XinputControl");
	setting.beginGroup("MainWindow");
	setting.setValue(Ssetting, button);
	setting.endGroup();
}

void AutoSettings(const char* Ssetting, QString path)
{
	QSettings setting("HKEY_CURRENT_USER\\Software\\Microsoft\\Windows\\CurrentVersion\\Run",
		QSettings::NativeFormat);
	setting.beginGroup("MainWindow");
	setting.setValue(Ssetting, path);
	setting.endGroup();
}
void AutoRemove(const char* name)
{
	QSettings setting("HKEY_CURRENT_USER\\Software\\Microsoft\\Windows\\CurrentVersion\\Run",
		QSettings::NativeFormat);
	setting.beginGroup("MainWindow");
	setting.remove(name);
	setting.endGroup();
}

#if 0
void Settings::LoadSettings()
{
	QSettings setting("ComicoTeam", "XinputControl");
	setting.beginGroup("MainWindow");
	QRect rect = setting.value("LeftAnolog", false).toRect;
	setting.endGroup();
}
#endif // 0

