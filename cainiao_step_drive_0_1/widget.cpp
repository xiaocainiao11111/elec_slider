#include "widget.h"
#include "ui_widget.h"

QSerialPort *serialport = nullptr;

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);

    ui->groupBox->setEnabled(0);
//    ui->test_begin->setEnabled(0);

    setLED(ui->label_led_1, 1, 30);
    setLED(ui->label_led_2, 0, 30);

    serialport = new QSerialPort;
    _s = new step_drive;

    //扫描本机的串口，并添加到下拉框里
    foreach(const QSerialPortInfo &info,QSerialPortInfo::availablePorts())
    {
        ui->serial_select->addItem(info.portName());
    }

    serialport->setBaudRate(QSerialPort::Baud115200);//还没做波特率切换
    serialport->setDataBits(QSerialPort::Data8);
    serialport->setParity(QSerialPort::NoParity);
    serialport->setStopBits(QSerialPort::OneStop);
    serialport->setFlowControl(QSerialPort::NoFlowControl);

}

Widget::~Widget()
{
    delete ui;
}


void Widget::setLED(QLabel *label, int color, int size)
{
    // 将label中的文字清空
    label->setText("");
    // 先设置矩形大小
    // 如果ui界面设置的label大小比最小宽度和高度小，矩形将被设置为最小宽度和最小高度；
    // 如果ui界面设置的label大小比最小宽度和高度大，矩形将被设置为最大宽度和最大高度；
    QString min_width = QString("min-width: %1px;").arg(size);              // 最小宽度：size
    QString min_height = QString("min-height: %1px;").arg(size);            // 最小高度：size
    QString max_width = QString("max-width: %1px;").arg(size);              // 最小宽度：size
    QString max_height = QString("max-height: %1px;").arg(size);            // 最小高度：size
    // 再设置边界形状及边框
    QString border_radius = QString("border-radius: %1px;").arg(size/2);    // 边框是圆角，半径为size/2
    QString border = QString("border:1px solid black;");                    // 边框为1px黑色
    // 最后设置背景颜色
    QString background = "background-color:";
    switch (color) {
    case 0:
        // 灰色
        background += "rgb(190,190,190)";
        break;
    case 1:
        // 红色
        background += "rgb(255,0,0)";
        break;
    case 2:
        // 绿色
        background += "rgb(0,255,0)";
        break;
    case 3:
        // 黄色
        background += "rgb(255,255,0)";
        break;
    default:
        break;
    }

    const QString SheetStyle = min_width + min_height + max_width + max_height + border_radius + border + background;
    label->setStyleSheet(SheetStyle);

    qDebug()<<SheetStyle;

}

void Widget::on_serial_open_clicked()
{
    serialport->setPortName(ui->serial_select->currentText());
    if(!serialport->open(QIODevice::ReadWrite))
    {
        qDebug()<<"打开失败";
        return;
    }
    qDebug()<<"打开成功";
    ui->groupBox->setEnabled(1);
    setLED(ui->label_led_1, 2, 30);
}

void Widget::on_motor_link_clicked()
{

}

void Widget::on_test_begin_clicked()
{

    _s->show();
    this->hide();
}

void Widget::on_serial_refresh_clicked()
{
    ui->serial_select->clear();
    //扫描本机的串口，并添加到下拉框里
    foreach(const QSerialPortInfo &info,QSerialPortInfo::availablePorts())
    {
        ui->serial_select->addItem(info.portName());
    }

}
