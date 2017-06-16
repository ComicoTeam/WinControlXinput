#include "MainWindow.h"
#include <QtWidgets/QApplication>
#include "InputThread.h"

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	GUI w;
	w.show();
	InputThread inputThread;
	inputThread.name = "Input Thread";
	inputThread.start();

	return a.exec();
}
