/****************************************************************************
** Meta object code from reading C++ file 'step_drive.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.14.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../cainiao_step_drive_0_1/step_drive.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'step_drive.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.14.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_step_drive_t {
    QByteArrayData data[9];
    char stringdata0[157];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_step_drive_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_step_drive_t qt_meta_stringdata_step_drive = {
    {
QT_MOC_LITERAL(0, 0, 10), // "step_drive"
QT_MOC_LITERAL(1, 11, 18), // "speed_ValueChanged"
QT_MOC_LITERAL(2, 30, 0), // ""
QT_MOC_LITERAL(3, 31, 3), // "val"
QT_MOC_LITERAL(4, 35, 21), // "position_ValueChanged"
QT_MOC_LITERAL(5, 57, 24), // "on_motor_connect_clicked"
QT_MOC_LITERAL(6, 82, 21), // "on_motor_init_clicked"
QT_MOC_LITERAL(7, 104, 30), // "on_get_velocity_button_clicked"
QT_MOC_LITERAL(8, 135, 21) // "on_motor_cali_clicked"

    },
    "step_drive\0speed_ValueChanged\0\0val\0"
    "position_ValueChanged\0on_motor_connect_clicked\0"
    "on_motor_init_clicked\0"
    "on_get_velocity_button_clicked\0"
    "on_motor_cali_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_step_drive[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   44,    2, 0x08 /* Private */,
       4,    1,   47,    2, 0x08 /* Private */,
       5,    0,   50,    2, 0x08 /* Private */,
       6,    0,   51,    2, 0x08 /* Private */,
       7,    0,   52,    2, 0x08 /* Private */,
       8,    0,   53,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void step_drive::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<step_drive *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->speed_ValueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->position_ValueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->on_motor_connect_clicked(); break;
        case 3: _t->on_motor_init_clicked(); break;
        case 4: _t->on_get_velocity_button_clicked(); break;
        case 5: _t->on_motor_cali_clicked(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject step_drive::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_step_drive.data,
    qt_meta_data_step_drive,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *step_drive::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *step_drive::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_step_drive.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int step_drive::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
