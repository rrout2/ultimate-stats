/****************************************************************************
** Meta object code from reading C++ file 'defense.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.10.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../ultimate/defense.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'defense.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.10.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Defense_t {
    QByteArrayData data[10];
    char stringdata0[199];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Defense_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Defense_t qt_meta_stringdata_Defense = {
    {
QT_MOC_LITERAL(0, 0, 7), // "Defense"
QT_MOC_LITERAL(1, 8, 21), // "on_pushButton_clicked"
QT_MOC_LITERAL(2, 30, 0), // ""
QT_MOC_LITERAL(3, 31, 23), // "on_pushButton_3_clicked"
QT_MOC_LITERAL(4, 55, 23), // "on_pushButton_9_clicked"
QT_MOC_LITERAL(5, 79, 23), // "on_pushButton_5_clicked"
QT_MOC_LITERAL(6, 103, 23), // "on_pushButton_7_clicked"
QT_MOC_LITERAL(7, 127, 23), // "on_pushButton_4_clicked"
QT_MOC_LITERAL(8, 151, 23), // "on_pushButton_6_clicked"
QT_MOC_LITERAL(9, 175, 23) // "on_pushButton_8_clicked"

    },
    "Defense\0on_pushButton_clicked\0\0"
    "on_pushButton_3_clicked\0on_pushButton_9_clicked\0"
    "on_pushButton_5_clicked\0on_pushButton_7_clicked\0"
    "on_pushButton_4_clicked\0on_pushButton_6_clicked\0"
    "on_pushButton_8_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Defense[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   54,    2, 0x08 /* Private */,
       3,    0,   55,    2, 0x08 /* Private */,
       4,    0,   56,    2, 0x08 /* Private */,
       5,    0,   57,    2, 0x08 /* Private */,
       6,    0,   58,    2, 0x08 /* Private */,
       7,    0,   59,    2, 0x08 /* Private */,
       8,    0,   60,    2, 0x08 /* Private */,
       9,    0,   61,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void Defense::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Defense *_t = static_cast<Defense *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_pushButton_clicked(); break;
        case 1: _t->on_pushButton_3_clicked(); break;
        case 2: _t->on_pushButton_9_clicked(); break;
        case 3: _t->on_pushButton_5_clicked(); break;
        case 4: _t->on_pushButton_7_clicked(); break;
        case 5: _t->on_pushButton_4_clicked(); break;
        case 6: _t->on_pushButton_6_clicked(); break;
        case 7: _t->on_pushButton_8_clicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject Defense::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_Defense.data,
      qt_meta_data_Defense,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *Defense::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Defense::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Defense.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int Defense::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 8;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
