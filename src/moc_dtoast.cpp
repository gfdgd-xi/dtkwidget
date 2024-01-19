/****************************************************************************
** Meta object code from reading C++ file 'dtoast.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "widgets/dtoast.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'dtoast.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Dtk__Widget__DToast_t {
    QByteArrayData data[19];
    char stringdata0[172];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Dtk__Widget__DToast_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Dtk__Widget__DToast_t qt_meta_stringdata_Dtk__Widget__DToast = {
    {
QT_MOC_LITERAL(0, 0, 19), // "Dtk::Widget::DToast"
QT_MOC_LITERAL(1, 20, 14), // "visibleChanged"
QT_MOC_LITERAL(2, 35, 0), // ""
QT_MOC_LITERAL(3, 36, 9), // "isVisible"
QT_MOC_LITERAL(4, 46, 3), // "pop"
QT_MOC_LITERAL(5, 50, 4), // "pack"
QT_MOC_LITERAL(6, 55, 9), // "showEvent"
QT_MOC_LITERAL(7, 65, 11), // "QShowEvent*"
QT_MOC_LITERAL(8, 77, 5), // "event"
QT_MOC_LITERAL(9, 83, 9), // "hideEvent"
QT_MOC_LITERAL(10, 93, 11), // "QHideEvent*"
QT_MOC_LITERAL(11, 105, 7), // "setText"
QT_MOC_LITERAL(12, 113, 4), // "text"
QT_MOC_LITERAL(13, 118, 7), // "setIcon"
QT_MOC_LITERAL(14, 126, 4), // "icon"
QT_MOC_LITERAL(15, 131, 11), // "defaultSize"
QT_MOC_LITERAL(16, 143, 11), // "setDuration"
QT_MOC_LITERAL(17, 155, 8), // "duration"
QT_MOC_LITERAL(18, 164, 7) // "opacity"

    },
    "Dtk::Widget::DToast\0visibleChanged\0\0"
    "isVisible\0pop\0pack\0showEvent\0QShowEvent*\0"
    "event\0hideEvent\0QHideEvent*\0setText\0"
    "text\0setIcon\0icon\0defaultSize\0setDuration\0"
    "duration\0opacity"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Dtk__Widget__DToast[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       2,   92, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   64,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    0,   67,    2, 0x0a /* Public */,
       5,    0,   68,    2, 0x0a /* Public */,
       6,    1,   69,    2, 0x0a /* Public */,
       9,    1,   72,    2, 0x0a /* Public */,
      11,    1,   75,    2, 0x0a /* Public */,
      13,    1,   78,    2, 0x0a /* Public */,
      13,    2,   81,    2, 0x0a /* Public */,
      13,    1,   86,    2, 0x2a /* Public | MethodCloned */,
      16,    1,   89,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool,    3,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 7,    8,
    QMetaType::Void, 0x80000000 | 10,    8,
    QMetaType::Void, QMetaType::QString,   12,
    QMetaType::Void, QMetaType::QString,   14,
    QMetaType::Void, QMetaType::QIcon, QMetaType::QSize,   14,   15,
    QMetaType::Void, QMetaType::QIcon,   14,
    QMetaType::Void, QMetaType::Int,   17,

 // properties: name, type, flags
      18, QMetaType::QReal, 0x00095103,
      17, QMetaType::QReal, 0x00095103,

       0        // eod
};

void Dtk::Widget::DToast::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<DToast *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->visibleChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->pop(); break;
        case 2: _t->pack(); break;
        case 3: _t->showEvent((*reinterpret_cast< QShowEvent*(*)>(_a[1]))); break;
        case 4: _t->hideEvent((*reinterpret_cast< QHideEvent*(*)>(_a[1]))); break;
        case 5: _t->setText((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 6: _t->setIcon((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 7: _t->setIcon((*reinterpret_cast< QIcon(*)>(_a[1])),(*reinterpret_cast< QSize(*)>(_a[2]))); break;
        case 8: _t->setIcon((*reinterpret_cast< QIcon(*)>(_a[1]))); break;
        case 9: _t->setDuration((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (DToast::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DToast::visibleChanged)) {
                *result = 0;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<DToast *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< qreal*>(_v) = _t->opacity(); break;
        case 1: *reinterpret_cast< qreal*>(_v) = _t->duration(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<DToast *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setOpacity(*reinterpret_cast< qreal*>(_v)); break;
        case 1: _t->setDuration(*reinterpret_cast< qreal*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject Dtk::Widget::DToast::staticMetaObject = { {
    QMetaObject::SuperData::link<QFrame::staticMetaObject>(),
    qt_meta_stringdata_Dtk__Widget__DToast.data,
    qt_meta_data_Dtk__Widget__DToast,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Dtk::Widget::DToast::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Dtk::Widget::DToast::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Dtk__Widget__DToast.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "Dtk::Core::DObject"))
        return static_cast< Dtk::Core::DObject*>(this);
    return QFrame::qt_metacast(_clname);
}

int Dtk::Widget::DToast::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QFrame::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 10;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 2;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void Dtk::Widget::DToast::visibleChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
