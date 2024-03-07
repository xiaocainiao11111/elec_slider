#ifndef STEP_DRIVE_H
#define STEP_DRIVE_H

#include <QWidget>
#include "thread/thread_1.h"

namespace Ui {
class step_drive;
}

class step_drive : public QWidget
{
    Q_OBJECT

public:
    explicit step_drive(QWidget *parent = nullptr);
    ~step_drive();

private slots:
    void speed_ValueChanged(int val);
    void position_ValueChanged(int val);
    void on_motor_connect_clicked();

    void on_motor_init_clicked();

    void on_get_velocity_button_clicked();

private:
    Ui::step_drive *ui;
};

#endif // STEP_DRIVE_H
