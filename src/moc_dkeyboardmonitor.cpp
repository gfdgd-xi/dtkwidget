/****************************************************************************
** Meta object code from reading C++ file 'dkeyboardmonitor.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "widgets/private/keyboardmonitor/dkeyboardmonitor.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'dkeyboardmonitor.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Dtk__Widget__DKeyboardMonitor_t {
    QByteArrayData data[5];
    char stringdata0[77];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Dtk__Widget__DKeyboardMonitor_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Dtk__Widget__DKeyboardMonitor_t qt_meta_stringdata_Dtk__Widget__DKeyboardMonitor = {
    {
QT_MOC_LITERAL(0, 0, 29), // "Dtk::Widget::DKeyboardMonitor"
QT_MOC_LITERAL(1, 30, 21), // "capslockStatusChanged"
QT_MOC_LITERAL(2, 52, 0), // ""
QT_MOC_LITERAL(3, 53, 2), // "on"
QT_MOC_LITERAL(4, 56, 20) // "numlockStatusChanged"

    },
    "Dtk::Widget::DKeyboardMonitor\0"
    "capslockStatusChanged\0\0on\0"
    "numlockStatusChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Dtk__Widget__DKeyboardMonitor[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   24,    2, 0x06 /* Public */,
       4,    1,   27,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Bool,    3,

       0        // eod
};

void Dtk::Widget::DKeyboardMonitor::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<DKeyboardMonitor *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->capslockStatusChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->numlockStatusChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (DKeyboardMonitor::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DKeyboardMonitor::capslockStatusChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (DKeyboardMonitor::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DKeyboardMonitor::numlockStatusChanged)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Dtk::Widget::DKeyboardMonitor::staticMetaObject = { {
    QMetaObject::SuperData::link<QThread::staticMetaObject>(),
    qt_meta_stringdata_Dtk__Widget__DKeyboardMonitor.data,
    qt_meta_data_Dtk__Widget__DKeyboardMonitor,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Dtk::Widget::DKeyboardMonitor::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Dtk::Widget::DKeyboardMonitor::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Dtk__Widget__DKeyboardMonitor.stringdata0))
        return static_cast<void*>(this);
    return QThread::qt_metacast(_clname);
}

int Dtk::Widget::DKeyboardMonitor::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QThread::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void Dtk::Widget::DKeyboardMonitor::capslockStatusChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Dtk::Widget::DKeyboardMonitor::numlockStatusChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
