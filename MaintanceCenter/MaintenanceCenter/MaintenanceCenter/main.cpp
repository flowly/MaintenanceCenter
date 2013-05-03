#include "maintenancecenter.h"
#include <QtGui/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	MaintenanceCenter w;
	w.show();
	return a.exec();
}
