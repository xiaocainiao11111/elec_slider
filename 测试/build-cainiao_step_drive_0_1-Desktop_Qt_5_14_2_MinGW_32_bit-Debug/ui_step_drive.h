/********************************************************************************
** Form generated from reading UI file 'step_drive.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STEP_DRIVE_H
#define UI_STEP_DRIVE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_step_drive
{
public:
    QSlider *position_slider;
    QSlider *estvelocity_slider;
    QLineEdit *position_lineedit;
    QPushButton *get_velocity_button;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QLineEdit *speed_lineedit;
    QLabel *label;
    QSpacerItem *horizontalSpacer_2;
    QSlider *speed_slider;
    QLineEdit *estspeed_lineedit;
    QSplitter *splitter;
    QPushButton *motor_cali;
    QPlainTextEdit *plain_cali_text;
    QSplitter *splitter_2;
    QPushButton *motor_connect;
    QTextEdit *textEdit;

    void setupUi(QWidget *step_drive)
    {
        if (step_drive->objectName().isEmpty())
            step_drive->setObjectName(QString::fromUtf8("step_drive"));
        step_drive->resize(826, 543);
        position_slider = new QSlider(step_drive);
        position_slider->setObjectName(QString::fromUtf8("position_slider"));
        position_slider->setGeometry(QRect(260, 490, 160, 16));
        position_slider->setCursor(QCursor(Qt::PointingHandCursor));
        position_slider->setOrientation(Qt::Horizontal);
        estvelocity_slider = new QSlider(step_drive);
        estvelocity_slider->setObjectName(QString::fromUtf8("estvelocity_slider"));
        estvelocity_slider->setGeometry(QRect(250, 200, 351, 31));
        estvelocity_slider->setCursor(QCursor(Qt::PointingHandCursor));
        estvelocity_slider->setOrientation(Qt::Horizontal);
        position_lineedit = new QLineEdit(step_drive);
        position_lineedit->setObjectName(QString::fromUtf8("position_lineedit"));
        position_lineedit->setGeometry(QRect(280, 450, 113, 20));
        get_velocity_button = new QPushButton(step_drive);
        get_velocity_button->setObjectName(QString::fromUtf8("get_velocity_button"));
        get_velocity_button->setGeometry(QRect(620, 190, 61, 41));
        get_velocity_button->setCursor(QCursor(Qt::PointingHandCursor));
        layoutWidget = new QWidget(step_drive);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(250, 70, 351, 101));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        speed_lineedit = new QLineEdit(layoutWidget);
        speed_lineedit->setObjectName(QString::fromUtf8("speed_lineedit"));

        horizontalLayout->addWidget(speed_lineedit);

        label = new QLabel(layoutWidget);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout);

        speed_slider = new QSlider(layoutWidget);
        speed_slider->setObjectName(QString::fromUtf8("speed_slider"));
        speed_slider->setCursor(QCursor(Qt::PointingHandCursor));
        speed_slider->setOrientation(Qt::Horizontal);

        verticalLayout->addWidget(speed_slider);

        estspeed_lineedit = new QLineEdit(step_drive);
        estspeed_lineedit->setObjectName(QString::fromUtf8("estspeed_lineedit"));
        estspeed_lineedit->setGeometry(QRect(690, 190, 71, 41));
        splitter = new QSplitter(step_drive);
        splitter->setObjectName(QString::fromUtf8("splitter"));
        splitter->setGeometry(QRect(20, 30, 101, 451));
        splitter->setOrientation(Qt::Vertical);
        motor_cali = new QPushButton(splitter);
        motor_cali->setObjectName(QString::fromUtf8("motor_cali"));
        motor_cali->setCursor(QCursor(Qt::PointingHandCursor));
        splitter->addWidget(motor_cali);
        plain_cali_text = new QPlainTextEdit(splitter);
        plain_cali_text->setObjectName(QString::fromUtf8("plain_cali_text"));
        splitter->addWidget(plain_cali_text);
        splitter_2 = new QSplitter(step_drive);
        splitter_2->setObjectName(QString::fromUtf8("splitter_2"));
        splitter_2->setGeometry(QRect(130, 30, 101, 451));
        splitter_2->setOrientation(Qt::Vertical);
        motor_connect = new QPushButton(splitter_2);
        motor_connect->setObjectName(QString::fromUtf8("motor_connect"));
        motor_connect->setCursor(QCursor(Qt::PointingHandCursor));
        splitter_2->addWidget(motor_connect);
        textEdit = new QTextEdit(splitter_2);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        splitter_2->addWidget(textEdit);

        retranslateUi(step_drive);

        QMetaObject::connectSlotsByName(step_drive);
    } // setupUi

    void retranslateUi(QWidget *step_drive)
    {
        step_drive->setWindowTitle(QCoreApplication::translate("step_drive", "Form", nullptr));
        get_velocity_button->setText(QCoreApplication::translate("step_drive", "\345\256\236\346\227\266\351\200\237\345\272\246", nullptr));
        label->setText(QCoreApplication::translate("step_drive", "r/s", nullptr));
        motor_cali->setText(QCoreApplication::translate("step_drive", "\351\207\215\346\226\260\346\240\241\345\207\206", nullptr));
        motor_connect->setText(QCoreApplication::translate("step_drive", "\350\277\236\346\216\245\347\224\265\346\234\272", nullptr));
    } // retranslateUi

};

namespace Ui {
    class step_drive: public Ui_step_drive {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STEP_DRIVE_H
