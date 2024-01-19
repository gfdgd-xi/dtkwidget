/****************************************************************************
** Meta object code from reading C++ file 'dabstractdialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "widgets/dabstractdialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'dabstractdialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Dtk__Widget__DAbstractDialog_t {
    QByteArrayData data[21];
    char stringdata0[294];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Dtk__Widget__DAbstractDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Dtk__Widget__DAbstractDialog_t qt_meta_stringdata_Dtk__Widget__DAbstractDialog = {
    {
QT_MOC_LITERAL(0, 0, 28), // "Dtk::Widget::DAbstractDialog"
QT_MOC_LITERAL(1, 29, 11), // "sizeChanged"
QT_MOC_LITERAL(2, 41, 0), // ""
QT_MOC_LITERAL(3, 42, 4), // "size"
QT_MOC_LITERAL(4, 47, 12), // "moveToCenter"
QT_MOC_LITERAL(5, 60, 14), // "moveToTopRight"
QT_MOC_LITERAL(6, 75, 18), // "moveToCenterByRect"
QT_MOC_LITERAL(7, 94, 4), // "rect"
QT_MOC_LITERAL(8, 99, 20), // "moveToTopRightByRect"
QT_MOC_LITERAL(9, 120, 18), // "setBackgroundColor"
QT_MOC_LITERAL(10, 139, 15), // "backgroundColor"
QT_MOC_LITERAL(11, 155, 14), // "setBorderColor"
QT_MOC_LITERAL(12, 170, 11), // "borderColor"
QT_MOC_LITERAL(13, 182, 18), // "setDisplayPosition"
QT_MOC_LITERAL(14, 201, 15), // "DisplayPosition"
QT_MOC_LITERAL(15, 217, 15), // "displayPosition"
QT_MOC_LITERAL(16, 233, 6), // "Center"
QT_MOC_LITERAL(17, 240, 8), // "TopRight"
QT_MOC_LITERAL(18, 249, 14), // "DisplayPostion"
QT_MOC_LITERAL(19, 264, 13), // "DisplayCenter"
QT_MOC_LITERAL(20, 278, 15) // "DisplayTopRight"

    },
    "Dtk::Widget::DAbstractDialog\0sizeChanged\0"
    "\0size\0moveToCenter\0moveToTopRight\0"
    "moveToCenterByRect\0rect\0moveToTopRightByRect\0"
    "setBackgroundColor\0backgroundColor\0"
    "setBorderColor\0borderColor\0"
    "setDisplayPosition\0DisplayPosition\0"
    "displayPosition\0Center\0TopRight\0"
    "DisplayPostion\0DisplayCenter\0"
    "DisplayTopRight"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Dtk__Widget__DAbstractDialog[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       3,   74, // properties
       2,   83, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   54,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    0,   57,    2, 0x0a /* Public */,
       5,    0,   58,    2, 0x0a /* Public */,
       6,    1,   59,    2, 0x0a /* Public */,
       8,    1,   62,    2, 0x0a /* Public */,
       9,    1,   65,    2, 0x0a /* Public */,
      11,    1,   68,    2, 0x0a /* Public */,
      13,    1,   71,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QSize,    3,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QRect,    7,
    QMetaType::Void, QMetaType::QRect,    7,
    QMetaType::Void, QMetaType::QColor,   10,
    QMetaType::Void, QMetaType::QColor,   12,
    QMetaType::Void, 0x80000000 | 14,   15,

 // properties: name, type, flags
      10, QMetaType::QColor, 0x00095103,
      12, QMetaType::QColor, 0x00095103,
      15, 0x80000000 | 14, 0x0009510b,

 // enums: name, alias, flags, count, data
      14,   14, 0x0,    2,   93,
      18,   18, 0x0,    2,   97,

 // enum data: key, value
      16, uint(Dtk::Widget::DAbstractDialog::Center),
      17, uint(Dtk::Widget::DAbstractDialog::TopRight),
      19, uint(Dtk::Widget::DAbstractDialog::DisplayCenter),
      20, uint(Dtk::Widget::DAbstractDialog::DisplayTopRight),

       0        // eod
};

void Dtk::Widget::DAbstractDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<DAbstractDialog *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->sizeChanged((*reinterpret_cast< QSize(*)>(_a[1]))); break;
        case 1: _t->moveToCenter(); break;
        case 2: _t->moveToTopRight(); break;
        case 3: _t->moveToCenterByRect((*reinterpret_cast< const QRect(*)>(_a[1]))); break;
        case 4: _t->moveToTopRightByRect((*reinterpret_cast< const QRect(*)>(_a[1]))); break;
        case 5: _t->setBackgroundColor((*reinterpret_cast< QColor(*)>(_a[1]))); break;
        case 6: _t->setBorderColor((*reinterpret_cast< QColor(*)>(_a[1]))); break;
        case 7: _t->setDisplayPosition((*reinterpret_cast< DisplayPosition(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (DAbstractDialog::*)(QSize );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DAbstractDialog::sizeChanged)) {
                *result = 0;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<DAbstractDialog *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QColor*>(_v) = _t->backgroundColor(); break;
        case 1: *reinterpret_cast< QColor*>(_v) = _t->borderColor(); break;
        case 2: *reinterpret_cast< DisplayPosition*>(_v) = _t->displayPosition(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<DAbstractDialog *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setBackgroundColor(*reinterpret_cast< QColor*>(_v)); break;
        case 1: _t->setBorderColor(*reinterpret_cast< QColor*>(_v)); break;
        case 2: _t->setDisplayPosition(*reinterpret_cast< DisplayPosition*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject Dtk::Widget::DAbstractDialog::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_Dtk__Widget__DAbstractDialog.data,
    qt_meta_data_Dtk__Widget__DAbstractDialog,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Dtk::Widget::DAbstractDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Dtk::Widget::DAbstractDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Dtk__Widget__DAbstractDialog.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "Dtk::Core::DObject"))
        return static_cast< Dtk::Core::DObject*>(this);
    return QDialog::qt_metacast(_clname);
}

int Dtk::Widget::DAbstractDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 3;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void Dtk::Widget::DAbstractDialog::sizeChanged(QSize _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
