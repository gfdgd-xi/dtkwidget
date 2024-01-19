/****************************************************************************
** Meta object code from reading C++ file 'dboxwidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "widgets/dboxwidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'dboxwidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Dtk__Widget__DBoxWidget_t {
    QByteArrayData data[8];
    char stringdata0[104];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Dtk__Widget__DBoxWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Dtk__Widget__DBoxWidget_t qt_meta_stringdata_Dtk__Widget__DBoxWidget = {
    {
QT_MOC_LITERAL(0, 0, 23), // "Dtk::Widget::DBoxWidget"
QT_MOC_LITERAL(1, 24, 11), // "sizeChanged"
QT_MOC_LITERAL(2, 36, 0), // ""
QT_MOC_LITERAL(3, 37, 4), // "size"
QT_MOC_LITERAL(4, 42, 16), // "directionChanged"
QT_MOC_LITERAL(5, 59, 21), // "QBoxLayout::Direction"
QT_MOC_LITERAL(6, 81, 9), // "direction"
QT_MOC_LITERAL(7, 91, 12) // "setDirection"

    },
    "Dtk::Widget::DBoxWidget\0sizeChanged\0"
    "\0size\0directionChanged\0QBoxLayout::Direction\0"
    "direction\0setDirection"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Dtk__Widget__DBoxWidget[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       1,   38, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   29,    2, 0x06 /* Public */,
       4,    1,   32,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    1,   35,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QSize,    3,
    QMetaType::Void, 0x80000000 | 5,    6,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 5,    6,

 // properties: name, type, flags
       6, 0x80000000 | 5, 0x0049510b,

 // properties: notify_signal_id
       1,

       0        // eod
};

void Dtk::Widget::DBoxWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<DBoxWidget *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->sizeChanged((*reinterpret_cast< QSize(*)>(_a[1]))); break;
        case 1: _t->directionChanged((*reinterpret_cast< QBoxLayout::Direction(*)>(_a[1]))); break;
        case 2: _t->setDirection((*reinterpret_cast< QBoxLayout::Direction(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (DBoxWidget::*)(QSize );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DBoxWidget::sizeChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (DBoxWidget::*)(QBoxLayout::Direction );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DBoxWidget::directionChanged)) {
                *result = 1;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<DBoxWidget *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QBoxLayout::Direction*>(_v) = _t->direction(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<DBoxWidget *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setDirection(*reinterpret_cast< QBoxLayout::Direction*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

static const QMetaObject::SuperData qt_meta_extradata_Dtk__Widget__DBoxWidget[] = {
    QMetaObject::SuperData::link<QBoxLayout::staticMetaObject>(),
    nullptr
};

QT_INIT_METAOBJECT const QMetaObject Dtk::Widget::DBoxWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<QFrame::staticMetaObject>(),
    qt_meta_stringdata_Dtk__Widget__DBoxWidget.data,
    qt_meta_data_Dtk__Widget__DBoxWidget,
    qt_static_metacall,
    qt_meta_extradata_Dtk__Widget__DBoxWidget,
    nullptr
} };


const QMetaObject *Dtk::Widget::DBoxWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Dtk::Widget::DBoxWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Dtk__Widget__DBoxWidget.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "Dtk::Core::DObject"))
        return static_cast< Dtk::Core::DObject*>(this);
    return QFrame::qt_metacast(_clname);
}

int Dtk::Widget::DBoxWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QFrame::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 1;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void Dtk::Widget::DBoxWidget::sizeChanged(QSize _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Dtk::Widget::DBoxWidget::directionChanged(QBoxLayout::Direction _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
struct qt_meta_stringdata_Dtk__Widget__DHBoxWidget_t {
    QByteArrayData data[1];
    char stringdata0[25];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Dtk__Widget__DHBoxWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Dtk__Widget__DHBoxWidget_t qt_meta_stringdata_Dtk__Widget__DHBoxWidget = {
    {
QT_MOC_LITERAL(0, 0, 24) // "Dtk::Widget::DHBoxWidget"

    },
    "Dtk::Widget::DHBoxWidget"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Dtk__Widget__DHBoxWidget[] = {

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

void Dtk::Widget::DHBoxWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject Dtk::Widget::DHBoxWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<DBoxWidget::staticMetaObject>(),
    qt_meta_stringdata_Dtk__Widget__DHBoxWidget.data,
    qt_meta_data_Dtk__Widget__DHBoxWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Dtk::Widget::DHBoxWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Dtk::Widget::DHBoxWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Dtk__Widget__DHBoxWidget.stringdata0))
        return static_cast<void*>(this);
    return DBoxWidget::qt_metacast(_clname);
}

int Dtk::Widget::DHBoxWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = DBoxWidget::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_Dtk__Widget__DVBoxWidget_t {
    QByteArrayData data[1];
    char stringdata0[25];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Dtk__Widget__DVBoxWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Dtk__Widget__DVBoxWidget_t qt_meta_stringdata_Dtk__Widget__DVBoxWidget = {
    {
QT_MOC_LITERAL(0, 0, 24) // "Dtk::Widget::DVBoxWidget"

    },
    "Dtk::Widget::DVBoxWidget"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Dtk__Widget__DVBoxWidget[] = {

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

void Dtk::Widget::DVBoxWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject Dtk::Widget::DVBoxWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<DBoxWidget::staticMetaObject>(),
    qt_meta_stringdata_Dtk__Widget__DVBoxWidget.data,
    qt_meta_data_Dtk__Widget__DVBoxWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Dtk::Widget::DVBoxWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Dtk::Widget::DVBoxWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Dtk__Widget__DVBoxWidget.stringdata0))
        return static_cast<void*>(this);
    return DBoxWidget::qt_metacast(_clname);
}

int Dtk::Widget::DVBoxWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = DBoxWidget::qt_metacall(_c, _id, _a);
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
