#include "thread_1.h"
#include "widget.h"
#include "step_drive.h"

//延时函数
void Delay_MSec(unsigned int msec)
{
    QEventLoop loop;//定义一个新的事件循环
    QTimer::singleShot(msec, &loop, SLOT(quit()));  //创建单次定时器，槽函数为事件循环的退出函数
    loop.exec();  //事件循环开始执行，程序会卡在这里，直到定时时间到，本循环被退出
}

void Rx_data()
{
    QByteArray buffer = serialport->readAll();

    // 假设byteArray已经有一些数据
    int index = 10; // 要访问的索引位置
    if (0 < buffer.size()) {
        // 确保索引在有效范围内
        QByteRef byteRef = buffer[index];
        // 进行相应的操作
        for(uint8_t _a=0;_a<buffer.size();_a++)
        {
            qDebug()<<(uint8_t)buffer[_a];
        }
    } else {
        // 处理索引超出范围的情况
    }

}

//线程1的实现
void Thread_1::run()
{
////    emit sendToWidge(ba);   //触发信号

//    uint8_t  Tx_Data[5]={0x00,0x01,0x02,0x03,0x04};
//    qDebug()<<"creat a new thread";
//    QByteArray ba = "is a ba";
//    connect(serialport, &QSerialPort::readyRead, this, &Thread::Rx_readyRead);
//    bool thread_flag=1;
//    while(1)
//    {
//        if(thread_flag)
//        {
//            serialport->write((char *)Tx_Data, 5);

//            Delay_MSec(1000);
//            Rx_data();
//            Delay_MSec(1000);
//        }
//    }


    static uint16_t _a=0;
    uint8_t  Tx_data[6]={0xAA,0x55,0x01,0x02,0x03,0xFF};
    connect(serialport, &QSerialPort::readyRead, this, &Thread_1::Rx_readyRead);
    while (1) {
//        serialport->write((char *)Tx_data,6);
        _a++;
        Delay_MSec(1000);
//        qDebug()<<_a;
//        Rx_data();



    }

}


Thread_1::Thread_1()
{

}


void motor_connect()
{

}

void change_estvelocity_slider()
{

}

void Thread_1::Rx_readyRead()
{
    QByteArray receivedData = serialport->readAll();
    //    qDebug()<<(uint8_t)receivedData[3];
    //    qDebug()<<(uint8_t)receivedData[4];

    //    qDebug()<<receivedData.size();
    //    qDebug()<<(uint16_t)(receivedData[3]<<8|receivedData[4]);

    if((uint8_t)receivedData[2]==0x22)
    {
        emit get_estvelocity((uint16_t)((uint16_t)receivedData[3]<<8|(uint8_t)receivedData[4]));

    }


}



