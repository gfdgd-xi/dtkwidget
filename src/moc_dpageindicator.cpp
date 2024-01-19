/****************************************************************************
** Meta object code from reading C++ file 'dpageindicator.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "widgets/dpageindicator.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'dpageindicator.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Dtk__Widget__DPageIndicator_t {
    QByteArrayData data[8];
    char stringdata0[128];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Dtk__Widget__DPageIndicator_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Dtk__Widget__DPageIndicator_t qt_meta_stringdata_Dtk__Widget__DPageIndicator = {
    {
QT_MOC_LITERAL(0, 0, 27), // "Dtk::Widget::DPageIndicator"
QT_MOC_LITERAL(1, 28, 10), // "pointColor"
QT_MOC_LITERAL(2, 39, 19), // "secondaryPointColor"
QT_MOC_LITERAL(3, 59, 11), // "pointRadius"
QT_MOC_LITERAL(4, 71, 20), // "secondaryPointRadius"
QT_MOC_LITERAL(5, 92, 9), // "pageCount"
QT_MOC_LITERAL(6, 102, 11), // "currentPage"
QT_MOC_LITERAL(7, 114, 13) // "pointDistance"

    },
    "Dtk::Widget::DPageIndicator\0pointColor\0"
    "secondaryPointColor\0pointRadius\0"
    "secondaryPointRadius\0pageCount\0"
    "currentPage\0pointDistance"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Dtk__Widget__DPageIndicator[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       7,   14, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // properties: name, type, flags
       1, QMetaType::QColor, 0x00095103,
       2, QMetaType::QColor, 0x00095103,
       3, QMetaType::Int, 0x00095103,
       4, QMetaType::Int, 0x00095103,
       5, QMetaType::Int, 0x00095103,
       6, QMetaType::Int, 0x00095103,
       7, QMetaType::Int, 0x00095103,

       0        // eod
};

void Dtk::Widget::DPageIndicator::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{

#ifndef QT_NO_PROPERTIES
    if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<DPageIndicator *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QColor*>(_v) = _t->pointColor(); break;
        case 1: *reinterpret_cast< QColor*>(_v) = _t->secondaryPointColor(); break;
        case 2: *reinterpret_cast< int*>(_v) = _t->pointRadius(); break;
        case 3: *reinterpret_cast< int*>(_v) = _t->secondaryPointRadius(); break;
        case 4: *reinterpret_cast< int*>(_v) = _t->pageCount(); break;
        case 5: *reinterpret_cast< int*>(_v) = _t->currentPageIndex(); break;
        case 6: *reinterpret_cast< int*>(_v) = _t->pointDistance(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<DPageIndicator *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setPointColor(*reinterpret_cast< QColor*>(_v)); break;
        case 1: _t->setSecondaryPointColor(*reinterpret_cast< QColor*>(_v)); break;
        case 2: _t->setPointRadius(*reinterpret_cast< int*>(_v)); break;
        case 3: _t->setSecondaryPointRadius(*reinterpret_cast< int*>(_v)); break;
        case 4: _t->setPageCount(*reinterpret_cast< int*>(_v)); break;
        case 5: _t->setCurrentPage(*reinterpret_cast< int*>(_v)); break;
        case 6: _t->setPointDistance(*reinterpret_cast< int*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject Dtk::Widget::DPageIndicator::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_Dtk__Widget__DPageIndicator.data,
    qt_meta_data_Dtk__Widget__DPageIndicator,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Dtk::Widget::DPageIndicator::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Dtk::Widget::DPageIndicator::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Dtk__Widget__DPageIndicator.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "Dtk::Core::DObject"))
        return static_cast< Dtk::Core::DObject*>(this);
    return QWidget::qt_metacast(_clname);
}

int Dtk::Widget::DPageIndicator::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    
#ifndef QT_NO_PROPERTIES
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 7;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
