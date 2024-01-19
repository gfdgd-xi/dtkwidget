/****************************************************************************
** Meta object code from reading C++ file 'darrowrectangle.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "widgets/darrowrectangle.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'darrowrectangle.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Dtk__Widget__DArrowRectangle_t {
    QByteArrayData data[17];
    char stringdata0[213];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Dtk__Widget__DArrowRectangle_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Dtk__Widget__DArrowRectangle_t qt_meta_stringdata_Dtk__Widget__DArrowRectangle = {
    {
QT_MOC_LITERAL(0, 0, 28), // "Dtk::Widget::DArrowRectangle"
QT_MOC_LITERAL(1, 29, 16), // "windowDeactivate"
QT_MOC_LITERAL(2, 46, 0), // ""
QT_MOC_LITERAL(3, 47, 15), // "backgroundColor"
QT_MOC_LITERAL(4, 63, 11), // "borderColor"
QT_MOC_LITERAL(5, 75, 11), // "borderWidth"
QT_MOC_LITERAL(6, 87, 6), // "radius"
QT_MOC_LITERAL(7, 94, 10), // "arrowWidth"
QT_MOC_LITERAL(8, 105, 11), // "arrowHeight"
QT_MOC_LITERAL(9, 117, 6), // "arrowX"
QT_MOC_LITERAL(10, 124, 6), // "arrowY"
QT_MOC_LITERAL(11, 131, 6), // "margin"
QT_MOC_LITERAL(12, 138, 14), // "arrowDirection"
QT_MOC_LITERAL(13, 153, 14), // "ArrowDirection"
QT_MOC_LITERAL(14, 168, 13), // "shadowXOffset"
QT_MOC_LITERAL(15, 182, 13), // "shadowYOffset"
QT_MOC_LITERAL(16, 196, 16) // "shadowBlurRadius"

    },
    "Dtk::Widget::DArrowRectangle\0"
    "windowDeactivate\0\0backgroundColor\0"
    "borderColor\0borderWidth\0radius\0"
    "arrowWidth\0arrowHeight\0arrowX\0arrowY\0"
    "margin\0arrowDirection\0ArrowDirection\0"
    "shadowXOffset\0shadowYOffset\0"
    "shadowBlurRadius"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Dtk__Widget__DArrowRectangle[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
      15,   20, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   19,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,

 // properties: name, type, flags
       3, QMetaType::QColor, 0x00095103,
       4, QMetaType::QColor, 0x00095103,
       5, QMetaType::Int, 0x00095103,
       6, QMetaType::Int, 0x00095103,
       7, QMetaType::Int, 0x00095103,
       8, QMetaType::Int, 0x00095103,
       9, QMetaType::Int, 0x00095103,
      10, QMetaType::Int, 0x00095103,
      11, QMetaType::Int, 0x00095103,
       4, QMetaType::QColor, 0x00095103,
       3, QMetaType::QColor, 0x00095103,
      12, 0x80000000 | 13, 0x0009510b,
      14, QMetaType::QReal, 0x00095103,
      15, QMetaType::QReal, 0x00095103,
      16, QMetaType::QReal, 0x00095103,

       0        // eod
};

void Dtk::Widget::DArrowRectangle::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<DArrowRectangle *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->windowDeactivate(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (DArrowRectangle::*)() const;
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DArrowRectangle::windowDeactivate)) {
                *result = 0;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<DArrowRectangle *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QColor*>(_v) = _t->backgroundColor(); break;
        case 1: *reinterpret_cast< QColor*>(_v) = _t->borderColor(); break;
        case 2: *reinterpret_cast< int*>(_v) = _t->borderWidth(); break;
        case 3: *reinterpret_cast< int*>(_v) = _t->radius(); break;
        case 4: *reinterpret_cast< int*>(_v) = _t->arrowWidth(); break;
        case 5: *reinterpret_cast< int*>(_v) = _t->arrowHeight(); break;
        case 6: *reinterpret_cast< int*>(_v) = _t->arrowX(); break;
        case 7: *reinterpret_cast< int*>(_v) = _t->arrowY(); break;
        case 8: *reinterpret_cast< int*>(_v) = _t->margin(); break;
        case 9: *reinterpret_cast< QColor*>(_v) = _t->borderColor(); break;
        case 10: *reinterpret_cast< QColor*>(_v) = _t->backgroundColor(); break;
        case 11: *reinterpret_cast< ArrowDirection*>(_v) = _t->arrowDirection(); break;
        case 12: *reinterpret_cast< qreal*>(_v) = _t->shadowXOffset(); break;
        case 13: *reinterpret_cast< qreal*>(_v) = _t->shadowYOffset(); break;
        case 14: *reinterpret_cast< qreal*>(_v) = _t->shadowBlurRadius(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<DArrowRectangle *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setBackgroundColor(*reinterpret_cast< QColor*>(_v)); break;
        case 1: _t->setBorderColor(*reinterpret_cast< QColor*>(_v)); break;
        case 2: _t->setBorderWidth(*reinterpret_cast< int*>(_v)); break;
        case 3: _t->setRadius(*reinterpret_cast< int*>(_v)); break;
        case 4: _t->setArrowWidth(*reinterpret_cast< int*>(_v)); break;
        case 5: _t->setArrowHeight(*reinterpret_cast< int*>(_v)); break;
        case 6: _t->setArrowX(*reinterpret_cast< int*>(_v)); break;
        case 7: _t->setArrowY(*reinterpret_cast< int*>(_v)); break;
        case 8: _t->setMargin(*reinterpret_cast< int*>(_v)); break;
        case 9: _t->setBorderColor(*reinterpret_cast< QColor*>(_v)); break;
        case 10: _t->setBackgroundColor(*reinterpret_cast< QColor*>(_v)); break;
        case 11: _t->setArrowDirection(*reinterpret_cast< ArrowDirection*>(_v)); break;
        case 12: _t->setShadowXOffset(*reinterpret_cast< qreal*>(_v)); break;
        case 13: _t->setShadowYOffset(*reinterpret_cast< qreal*>(_v)); break;
        case 14: _t->setShadowBlurRadius(*reinterpret_cast< qreal*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject Dtk::Widget::DArrowRectangle::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_Dtk__Widget__DArrowRectangle.data,
    qt_meta_data_Dtk__Widget__DArrowRectangle,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Dtk::Widget::DArrowRectangle::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Dtk::Widget::DArrowRectangle::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Dtk__Widget__DArrowRectangle.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "Dtk::Core::DObject"))
        return static_cast< Dtk::Core::DObject*>(this);
    return QWidget::qt_metacast(_clname);
}

int Dtk::Widget::DArrowRectangle::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 15;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 15;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 15;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 15;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 15;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void Dtk::Widget::DArrowRectangle::windowDeactivate()const
{
    QMetaObject::activate(const_cast< Dtk::Widget::DArrowRectangle *>(this), &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
