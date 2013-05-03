#ifndef MAINTENANCECENTER_H
#define MAINTENANCECENTER_H

#include <QtGui/QMainWindow>
#include "ui_maintenancecenter.h"

class MaintenanceCenter : public QMainWindow
{
	Q_OBJECT

public:
	MaintenanceCenter(QWidget *parent = 0, Qt::WFlags flags = 0);
	~MaintenanceCenter();

private:
	Ui::MaintenanceCenterClass ui;
};

#endif // MAINTENANCECENTER_H
