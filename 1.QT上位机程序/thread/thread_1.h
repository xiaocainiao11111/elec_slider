#ifndef THREAD_1_H
#define THREAD_1_H

#include <QThread>
#include "QEventLoop"
#include "QSerialPort"
#include "ui_widget.h"
#include <QDebug>
#include <QTimer>



class Thread_1 : public QThread
{
    Q_OBJECT
public:
    Thread_1();
    void run();

signals:
    void sendToWidge(QByteArray b);
    void get_estvelocity(uint16_t);



private slots:
    void Rx_readyRead();



};
#endif // THREAD_1_H
