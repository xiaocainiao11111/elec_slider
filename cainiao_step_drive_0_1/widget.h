#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QLabel>
#include <QSerialPort>
#include <QSerialPortInfo>//串口信息类
#include <QDebug>
#include "thread/thread_1.h"
#include "step_drive.h"


extern QSerialPort *serialport;
extern step_drive *step_drive_1;

namespace Ui {
class Widget;
}

class Widget : public QWidget
{
    Q_OBJECT

public:
    explicit Widget(QWidget *parent = nullptr);
    ~Widget();

    void setLED(QLabel *label, int color, int size);

private slots:
    void on_serial_open_clicked();

    void on_motor_link_clicked();

    void on_test_begin_clicked();

    void on_serial_refresh_clicked();

private:
    Ui::Widget *ui;
};

#endif // WIDGET_H
