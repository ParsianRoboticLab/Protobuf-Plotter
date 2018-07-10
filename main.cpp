#include "mainwindow.h"
#include <QApplication>

#include "mythread.h"
Plotter* plotter;
bool runApp = true;

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    plotter = new Plotter;
    plotter->show();
    MyThread thread(plotter);
    thread.start();
    int retVal = a.exec();
    runApp = false;
    thread.wait();
    return retVal;
}
