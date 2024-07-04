/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QComboBox *serial_select;
    QLabel *label;
    QLabel *label_2;
    QPushButton *serial_open;
    QGroupBox *groupBox;
    QPushButton *motor_link;
    QPushButton *test_begin;
    QLabel *label_led_2;
    QLabel *label_led_1;
    QComboBox *serial_baud;
    QPushButton *serial_refresh;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QString::fromUtf8("Widget"));
        Widget->resize(645, 529);
        serial_select = new QComboBox(Widget);
        serial_select->setObjectName(QString::fromUtf8("serial_select"));
        serial_select->setGeometry(QRect(250, 100, 131, 31));
        label = new QLabel(Widget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(180, 100, 61, 31));
        label_2 = new QLabel(Widget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(180, 170, 41, 9));
        serial_open = new QPushButton(Widget);
        serial_open->setObjectName(QString::fromUtf8("serial_open"));
        serial_open->setGeometry(QRect(200, 230, 171, 41));
        groupBox = new QGroupBox(Widget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(80, 350, 441, 131));
        motor_link = new QPushButton(groupBox);
        motor_link->setObjectName(QString::fromUtf8("motor_link"));
        motor_link->setGeometry(QRect(30, 30, 81, 41));
        motor_link->setCursor(QCursor(Qt::PointingHandCursor));
        test_begin = new QPushButton(groupBox);
        test_begin->setObjectName(QString::fromUtf8("test_begin"));
        test_begin->setGeometry(QRect(280, 30, 81, 81));
        label_led_2 = new QLabel(groupBox);
        label_led_2->setObjectName(QString::fromUtf8("label_led_2"));
        label_led_2->setGeometry(QRect(60, 80, 54, 12));
        label_led_1 = new QLabel(Widget);
        label_led_1->setObjectName(QString::fromUtf8("label_led_1"));
        label_led_1->setGeometry(QRect(410, 240, 54, 12));
        serial_baud = new QComboBox(Widget);
        serial_baud->addItem(QString());
        serial_baud->addItem(QString());
        serial_baud->addItem(QString());
        serial_baud->addItem(QString());
        serial_baud->addItem(QString());
        serial_baud->addItem(QString());
        serial_baud->addItem(QString());
        serial_baud->setObjectName(QString::fromUtf8("serial_baud"));
        serial_baud->setGeometry(QRect(250, 160, 131, 31));
        serial_refresh = new QPushButton(Widget);
        serial_refresh->setObjectName(QString::fromUtf8("serial_refresh"));
        serial_refresh->setGeometry(QRect(420, 100, 61, 31));
        serial_refresh->setCursor(QCursor(Qt::PointingHandCursor));

        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Widget", nullptr));
        label->setText(QCoreApplication::translate("Widget", "\344\270\262\345\217\243\351\200\211\346\213\251", nullptr));
        label_2->setText(QCoreApplication::translate("Widget", "\346\263\242\347\211\271\347\216\207", nullptr));
        serial_open->setText(QCoreApplication::translate("Widget", "\346\211\223\345\274\200\344\270\262\345\217\243", nullptr));
        groupBox->setTitle(QCoreApplication::translate("Widget", "GroupBox", nullptr));
        motor_link->setText(QCoreApplication::translate("Widget", "\350\277\236\346\216\245\347\224\265\346\234\272", nullptr));
        test_begin->setText(QCoreApplication::translate("Widget", "\350\277\233\345\205\245\346\265\213\350\257\225", nullptr));
        label_led_2->setText(QCoreApplication::translate("Widget", "TextLabel", nullptr));
        label_led_1->setText(QCoreApplication::translate("Widget", "TextLabel", nullptr));
        serial_baud->setItemText(0, QCoreApplication::translate("Widget", "115200", nullptr));
        serial_baud->setItemText(1, QCoreApplication::translate("Widget", "1200", nullptr));
        serial_baud->setItemText(2, QCoreApplication::translate("Widget", "2400", nullptr));
        serial_baud->setItemText(3, QCoreApplication::translate("Widget", "9600", nullptr));
        serial_baud->setItemText(4, QCoreApplication::translate("Widget", "19200", nullptr));
        serial_baud->setItemText(5, QCoreApplication::translate("Widget", "38400", nullptr));
        serial_baud->setItemText(6, QCoreApplication::translate("Widget", "57600", nullptr));

        serial_refresh->setText(QCoreApplication::translate("Widget", "\345\210\267\346\226\260", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
