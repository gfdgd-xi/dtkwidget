/****************************************************************************
** Meta object code from reading C++ file 'dswitchlineexpand.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "widgets/dswitchlineexpand.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'dswitchlineexpand.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Dtk__Widget__DSwitchHeaderLine_t {
    QByteArrayData data[4];
    char stringdata0[51];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Dtk__Widget__DSwitchHeaderLine_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Dtk__Widget__DSwitchHeaderLine_t qt_meta_stringdata_Dtk__Widget__DSwitchHeaderLine = {
    {
QT_MOC_LITERAL(0, 0, 30), // "Dtk::Widget::DSwitchHeaderLine"
QT_MOC_LITERAL(1, 31, 14), // "checkedChanged"
QT_MOC_LITERAL(2, 46, 0), // ""
QT_MOC_LITERAL(3, 47, 3) // "arg"

    },
    "Dtk::Widget::DSwitchHeaderLine\0"
    "checkedChanged\0\0arg"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Dtk__Widget__DSwitchHeaderLine[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   19,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool,    3,

       0        // eod
};

void Dtk::Widget::DSwitchHeaderLine::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<DSwitchHeaderLine *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->checkedChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (DSwitchHeaderLine::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DSwitchHeaderLine::checkedChanged)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Dtk::Widget::DSwitchHeaderLine::staticMetaObject = { {
    QMetaObject::SuperData::link<DHeaderLine::staticMetaObject>(),
    qt_meta_stringdata_Dtk__Widget__DSwitchHeaderLine.data,
    qt_meta_data_Dtk__Widget__DSwitchHeaderLine,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Dtk::Widget::DSwitchHeaderLine::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Dtk::Widget::DSwitchHeaderLine::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Dtk__Widget__DSwitchHeaderLine.stringdata0))
        return static_cast<void*>(this);
    return DHeaderLine::qt_metacast(_clname);
}

int Dtk::Widget::DSwitchHeaderLine::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = DHeaderLine::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
    return _id;
}

// SIGNAL 0
void Dtk::Widget::DSwitchHeaderLine::checkedChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
struct qt_meta_stringdata_Dtk__Widget__DSwitchLineExpand_t {
    QByteArrayData data[1];
    char stringdata0[31];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Dtk__Widget__DSwitchLineExpand_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Dtk__Widget__DSwitchLineExpand_t qt_meta_stringdata_Dtk__Widget__DSwitchLineExpand = {
    {
QT_MOC_LITERAL(0, 0, 30) // "Dtk::Widget::DSwitchLineExpand"

    },
    "Dtk::Widget::DSwitchLineExpand"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Dtk__Widget__DSwitchLineExpand[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void Dtk::Widget::DSwitchLineExpand::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject Dtk::Widget::DSwitchLineExpand::staticMetaObject = { {
    QMetaObject::SuperData::link<DBaseExpand::staticMetaObject>(),
    qt_meta_stringdata_Dtk__Widget__DSwitchLineExpand.data,
    qt_meta_data_Dtk__Widget__DSwitchLineExpand,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Dtk::Widget::DSwitchLineExpand::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Dtk::Widget::DSwitchLineExpand::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Dtk__Widget__DSwitchLineExpand.stringdata0))
        return static_cast<void*>(this);
    return DBaseExpand::qt_metacast(_clname);
}

int Dtk::Widget::DSwitchLineExpand::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = DBaseExpand::qt_metacall(_c, _id, _a);
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
