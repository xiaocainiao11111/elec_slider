#ifndef STEP_DRIVE_H
#define STEP_DRIVE_H

#include <QWidget>
#include "thread/thread_1.h"

extern Thread_1 *_t;


namespace Ui {
class step_drive;
}

class step_drive : public QWidget
{
    Q_OBJECT

public:
    explicit step_drive(QWidget *parent = nullptr);
    ~step_drive();

    Thread_1 *_t = nullptr;

private slots:
    void speed_ValueChanged(int val);
    void position_ValueChanged(int val);
    void on_motor_connect_clicked();

    void on_motor_init_clicked();

    void on_get_velocity_button_clicked();

    void on_motor_cali_clicked();

private:
    Ui::step_drive *ui;
};

#endif // STEP_DRIVE_H
