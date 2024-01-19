/****************************************************************************
** Meta object code from reading C++ file 'dflowlayout.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "widgets/dflowlayout.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'dflowlayout.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Dtk__Widget__DFlowLayout_t {
    QByteArrayData data[18];
    char stringdata0[241];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Dtk__Widget__DFlowLayout_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Dtk__Widget__DFlowLayout_t qt_meta_stringdata_Dtk__Widget__DFlowLayout = {
    {
QT_MOC_LITERAL(0, 0, 24), // "Dtk::Widget::DFlowLayout"
QT_MOC_LITERAL(1, 25, 24), // "horizontalSpacingChanged"
QT_MOC_LITERAL(2, 50, 0), // ""
QT_MOC_LITERAL(3, 51, 17), // "horizontalSpacing"
QT_MOC_LITERAL(4, 69, 22), // "verticalSpacingChanged"
QT_MOC_LITERAL(5, 92, 15), // "verticalSpacing"
QT_MOC_LITERAL(6, 108, 12), // "countChanged"
QT_MOC_LITERAL(7, 121, 5), // "count"
QT_MOC_LITERAL(8, 127, 11), // "flowChanged"
QT_MOC_LITERAL(9, 139, 4), // "Flow"
QT_MOC_LITERAL(10, 144, 4), // "flow"
QT_MOC_LITERAL(11, 149, 15), // "sizeHintChanged"
QT_MOC_LITERAL(12, 165, 8), // "sizeHint"
QT_MOC_LITERAL(13, 174, 20), // "setHorizontalSpacing"
QT_MOC_LITERAL(14, 195, 18), // "setVerticalSpacing"
QT_MOC_LITERAL(15, 214, 10), // "setSpacing"
QT_MOC_LITERAL(16, 225, 7), // "spacing"
QT_MOC_LITERAL(17, 233, 7) // "setFlow"

    },
    "Dtk::Widget::DFlowLayout\0"
    "horizontalSpacingChanged\0\0horizontalSpacing\0"
    "verticalSpacingChanged\0verticalSpacing\0"
    "countChanged\0count\0flowChanged\0Flow\0"
    "flow\0sizeHintChanged\0sizeHint\0"
    "setHorizontalSpacing\0setVerticalSpacing\0"
    "setSpacing\0spacing\0setFlow"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Dtk__Widget__DFlowLayout[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       5,   86, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   59,    2, 0x06 /* Public */,
       4,    1,   62,    2, 0x06 /* Public */,
       6,    1,   65,    2, 0x06 /* Public */,
       8,    1,   68,    2, 0x06 /* Public */,
      11,    1,   71,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      13,    1,   74,    2, 0x0a /* Public */,
      14,    1,   77,    2, 0x0a /* Public */,
      15,    1,   80,    2, 0x0a /* Public */,
      17,    1,   83,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, QMetaType::Int,    7,
    QMetaType::Void, 0x80000000 | 9,   10,
    QMetaType::Void, QMetaType::QSize,   12,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, QMetaType::Int,   16,
    QMetaType::Void, 0x80000000 | 9,   10,

 // properties: name, type, flags
       3, QMetaType::Int, 0x00495103,
       5, QMetaType::Int, 0x00495103,
       7, QMetaType::Int, 0x00495001,
      10, 0x80000000 | 9, 0x0049510b,
      12, QMetaType::QSize, 0x00495001,

 // properties: notify_signal_id
       0,
       1,
       2,
       3,
       4,

 // enums: name, alias, flags, count, data

 // enum data: key, value

       0        // eod
};

void Dtk::Widget::DFlowLayout::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<DFlowLayout *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->horizontalSpacingChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->verticalSpacingChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->countChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->flowChanged((*reinterpret_cast< Flow(*)>(_a[1]))); break;
        case 4: _t->sizeHintChanged((*reinterpret_cast< QSize(*)>(_a[1]))); break;
        case 5: _t->setHorizontalSpacing((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->setVerticalSpacing((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->setSpacing((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->setFlow((*reinterpret_cast< Flow(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (DFlowLayout::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DFlowLayout::horizontalSpacingChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (DFlowLayout::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DFlowLayout::verticalSpacingChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (DFlowLayout::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DFlowLayout::countChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (DFlowLayout::*)(Flow );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DFlowLayout::flowChanged)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (DFlowLayout::*)(QSize ) const;
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DFlowLayout::sizeHintChanged)) {
                *result = 4;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<DFlowLayout *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< int*>(_v) = _t->horizontalSpacing(); break;
        case 1: *reinterpret_cast< int*>(_v) = _t->verticalSpacing(); break;
        case 2: *reinterpret_cast< int*>(_v) = _t->count(); break;
        case 3: *reinterpret_cast< Flow*>(_v) = _t->flow(); break;
        case 4: *reinterpret_cast< QSize*>(_v) = _t->sizeHint(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<DFlowLayout *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setHorizontalSpacing(*reinterpret_cast< int*>(_v)); break;
        case 1: _t->setVerticalSpacing(*reinterpret_cast< int*>(_v)); break;
        case 3: _t->setFlow(*reinterpret_cast< Flow*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject Dtk::Widget::DFlowLayout::staticMetaObject = { {
    QMetaObject::SuperData::link<QLayout::staticMetaObject>(),
    qt_meta_stringdata_Dtk__Widget__DFlowLayout.data,
    qt_meta_data_Dtk__Widget__DFlowLayout,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Dtk::Widget::DFlowLayout::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Dtk::Widget::DFlowLayout::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Dtk__Widget__DFlowLayout.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "Dtk::Core::DObject"))
        return static_cast< Dtk::Core::DObject*>(this);
    return QLayout::qt_metacast(_clname);
}

int Dtk::Widget::DFlowLayout::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QLayout::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 9;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 5;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void Dtk::Widget::DFlowLayout::horizontalSpacingChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Dtk::Widget::DFlowLayout::verticalSpacingChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void Dtk::Widget::DFlowLayout::countChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void Dtk::Widget::DFlowLayout::flowChanged(Flow _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void Dtk::Widget::DFlowLayout::sizeHintChanged(QSize _t1)const
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(const_cast< Dtk::Widget::DFlowLayout *>(this), &staticMetaObject, 4, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
