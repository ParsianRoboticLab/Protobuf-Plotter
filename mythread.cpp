#include "mythread.h"

MyThread::MyThread(Plotter *plotter, QWidget *parent)
{
    connect(this, SIGNAL(status(Frame*)), plotter, SLOT(handleStatus(Frame*)));
}

MyThread::~MyThread() {

}

void MyThread::run()
{
    QUdpSocket* socket = new QUdpSocket();
    socket->bind(QHostAddress("192.168.43.105"), 10020, QUdpSocket::ShareAddress);
//    socket->joinMulticastGroup(QHostAddress("224.5.23.2"));
    while(runApp) {
        while (socket->hasPendingDatagrams()) {
            Frame* head = new Frame;
            QByteArray Buffer;
            Buffer.resize(socket->pendingDatagramSize());
            QHostAddress sender;
            quint16 senderPort;
            socket->readDatagram(Buffer.data(),Buffer.size(),&sender,&senderPort);
            if (head->ParsePartialFromArray(Buffer.data(), Buffer.size())) {
                emit status(head);
            } else {
                qDebug() << "FAILED TO PARSE";
            }
        }
        msleep(100);
    }
}

