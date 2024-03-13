#include "step_drive.h"
#include "ui_step_drive.h"
#include "widget.h"
#include "thread/thread_1.h"


step_drive::step_drive(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::step_drive)
{
    ui->setupUi(this);
    ui->motor_cali->setEnabled(0);
    ui->estvelocity_slider->setEnabled(0);

    ui->speed_slider->setMaximum(3000);//对应0到30(r/s)
    ui->speed_slider->setMinimum(-3000);
    ui->speed_slider->setValue(0);
    ui->speed_lineedit->setText(QString::number(0));

    ui->position_slider->setMaximum(5000);
    ui->position_slider->setMinimum(-5000);
    ui->position_slider->setValue(0);
    ui->position_lineedit->setText(QString::number(0));

    ui->estvelocity_slider->setMaximum(30000);//对应0到30(r/s)
    ui->estvelocity_slider->setMinimum(-30000);

    _t=new Thread_1;
    _t->start();

    connect(ui->speed_slider,SIGNAL(valueChanged(int)),this,SLOT(speed_ValueChanged(int)));
    connect(ui->position_slider,SIGNAL(valueChanged(int)),this,SLOT(position_ValueChanged(int)));
    connect(this->_t,&Thread_1::get_estvelocity,this,[=](uint16_t _v){
        ui->estvelocity_slider->setValue(_v-30000);
        ui->estspeed_lineedit->setText(QString::number(((float)_v-30000)/1000));
//        qDebug()<<"AAA";
    });


}

step_drive::~step_drive()
{
    delete ui;
}

void step_drive::on_motor_connect_clicked()
{

}

void step_drive::on_motor_init_clicked()
{

}


void step_drive::speed_ValueChanged(int val)
{
    uint8_t tx_speed_data[5]={0xAA,0x55,0x04,0x00,0x00};
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
    static bool get_velocity_flag=0;
    uint8_t tx_get_velocity_data[4]= {0xAA,0x55,0x22,0x00};
    get_velocity_flag=!get_velocity_flag;
    ui->estvelocity_slider->setEnabled(1);
    if(get_velocity_flag)
    {
        tx_get_velocity_data[3]=0x01;
    }

    serialport->write((char *)tx_get_velocity_data,4);
    serialport->waitForBytesWritten(10);
}

void step_drive::on_motor_cali_clicked()
{
    uint8_t tx_speed_data[5]={0xAA,0x55,0x02,0x00,0x00};
    serialport->write((char *)tx_speed_data,5);
}

