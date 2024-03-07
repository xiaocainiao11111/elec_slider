#include "step_drive.h"
#include "ui_step_drive.h"
#include "widget.h"

step_drive::step_drive(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::step_drive)
{
    ui->setupUi(this);
    ui->motor_init->setEnabled(0);
    ui->estvelocity_slider->setEnabled(0);

    ui->speed_slider->setMaximum(3000);//对应0到30(r/s)
    ui->speed_slider->setMinimum(-3000);
    ui->speed_slider->setValue(0);
    ui->speed_lineedit->setText(QString::number(0));

    ui->position_slider->setMaximum(5000);
    ui->position_slider->setMinimum(-5000);
    ui->position_slider->setValue(0);
    ui->position_lineedit->setText(QString::number(0));

    connect(ui->speed_slider,SIGNAL(valueChanged(int)),this,SLOT(speed_ValueChanged(int)));
    connect(ui->position_slider,SIGNAL(valueChanged(int)),this,SLOT(position_ValueChanged(int)));

}

step_drive::~step_drive()
{
    delete ui;
}

void step_drive::on_motor_connect_clicked()
{
//        Thread_1* t=new Thread_1;
//        t->start();
}

void step_drive::on_motor_init_clicked()
{

}


void step_drive::speed_ValueChanged(int val)
{
    uint8_t tx_speed_data[5]={0xAA,0x55,0x02,0x00,0x00};
    ui->speed_lineedit->setText(QString::number((float)val/100));//int转String
    tx_speed_data[3]=(uint8_t)((val+3000)>>8);
    tx_speed_data[4]=(uint8_t)val+3000;
    serialport->write((char *)tx_speed_data,5);

}

void step_drive::position_ValueChanged(int val)
{
    uint8_t tx_speed_data[5]={0xAA,0x55,0x01,0x00,0x00};
    ui->position_lineedit->setText(QString::number(val));//int转String
    tx_speed_data[3]=(uint8_t)(val+5000>>8);
    tx_speed_data[4]=(uint8_t)val+5000;
    serialport->write((char *)tx_speed_data,5);

}


void step_drive::on_get_velocity_button_clicked()
{
    static bool _flag=0;
    _flag=!_flag;
    if(_flag)
    {
        ui->estvelocity_slider->setEnabled(1);
//        ui->estvelocity_slider->setValue();

    }
}
