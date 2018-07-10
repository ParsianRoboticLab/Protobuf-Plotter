#ifndef MYTHREAD_H
#define MYTHREAD_H
#include <QUdpSocket>
#include <QHostAddress>
#include <QThread>
#include "plotter.h"

class MyThread : public QThread
{
    Q_OBJECT

private:
    Plotter* m_plotter;
    void run();
public:
    MyThread(Plotter* plotter, QWidget* parent = 0);
    ~MyThread();

signals:
    void status(WorldModel* dw);
};

extern bool runApp;

#endif // MYTHREAD_H
