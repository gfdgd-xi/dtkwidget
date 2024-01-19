/****************************************************************************
** Meta object code from reading C++ file 'dslider.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "widgets/dslider.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'dslider.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Dtk__Widget__DSlider_t {
    QByteArrayData data[12];
    char stringdata0[182];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Dtk__Widget__DSlider_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Dtk__Widget__DSlider_t qt_meta_stringdata_Dtk__Widget__DSlider = {
    {
QT_MOC_LITERAL(0, 0, 20), // "Dtk::Widget::DSlider"
QT_MOC_LITERAL(1, 21, 17), // "setHoverShowValue"
QT_MOC_LITERAL(2, 39, 0), // ""
QT_MOC_LITERAL(3, 40, 14), // "hoverShowValue"
QT_MOC_LITERAL(4, 55, 18), // "setHoverValueColor"
QT_MOC_LITERAL(5, 74, 15), // "hoverValueColor"
QT_MOC_LITERAL(6, 90, 25), // "setHoverShowValueInterval"
QT_MOC_LITERAL(7, 116, 22), // "hoverShowValueInterval"
QT_MOC_LITERAL(8, 139, 11), // "hoverTimout"
QT_MOC_LITERAL(9, 151, 10), // "handleType"
QT_MOC_LITERAL(10, 162, 8), // "tipColor"
QT_MOC_LITERAL(11, 171, 10) // "scaleColor"

    },
    "Dtk::Widget::DSlider\0setHoverShowValue\0"
    "\0hoverShowValue\0setHoverValueColor\0"
    "hoverValueColor\0setHoverShowValueInterval\0"
    "hoverShowValueInterval\0hoverTimout\0"
    "handleType\0tipColor\0scaleColor"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Dtk__Widget__DSlider[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       6,   44, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   34,    2, 0x0a /* Public */,
       4,    1,   37,    2, 0x0a /* Public */,
       6,    1,   40,    2, 0x0a /* Public */,
       8,    0,   43,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::QColor,    5,
    QMetaType::Void, QMetaType::Int,    7,
    QMetaType::Void,

 // properties: name, type, flags
       9, QMetaType::Int, 0x00095001,
      10, QMetaType::QColor, 0x00095103,
      11, QMetaType::QColor, 0x00095103,
       3, QMetaType::Bool, 0x00095103,
       5, QMetaType::QColor, 0x00095103,
       7, QMetaType::Int, 0x00095103,

       0        // eod
};

void Dtk::Widget::DSlider::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<DSlider *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->setHoverShowValue((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->setHoverValueColor((*reinterpret_cast< QColor(*)>(_a[1]))); break;
        case 2: _t->setHoverShowValueInterval((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->hoverTimout(); break;
        default: ;
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<DSlider *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< int*>(_v) = _t->handleType(); break;
        case 1: *reinterpret_cast< QColor*>(_v) = _t->tipColor(); break;
        case 2: *reinterpret_cast< QColor*>(_v) = _t->scaleColor(); break;
        case 3: *reinterpret_cast< bool*>(_v) = _t->hoverShowValue(); break;
        case 4: *reinterpret_cast< QColor*>(_v) = _t->hoverValueColor(); break;
        case 5: *reinterpret_cast< int*>(_v) = _t->hoverShowValueInterval(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<DSlider *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 1: _t->setTipColor(*reinterpret_cast< QColor*>(_v)); break;
        case 2: _t->setScaleColor(*reinterpret_cast< QColor*>(_v)); break;
        case 3: _t->setHoverShowValue(*reinterpret_cast< bool*>(_v)); break;
        case 4: _t->setHoverValueColor(*reinterpret_cast< QColor*>(_v)); break;
        case 5: _t->setHoverShowValueInterval(*reinterpret_cast< int*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject Dtk::Widget::DSlider::staticMetaObject = { {
    QMetaObject::SuperData::link<QSlider::staticMetaObject>(),
    qt_meta_stringdata_Dtk__Widget__DSlider.data,
    qt_meta_data_Dtk__Widget__DSlider,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Dtk::Widget::DSlider::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Dtk::Widget::DSlider::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Dtk__Widget__DSlider.stringdata0))
        return static_cast<void*>(this);
    return QSlider::qt_metacast(_clname);
}

int Dtk::Widget::DSlider::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QSlider::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 6;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
