/****************************************************************************
** Meta object code from reading C++ file 'denhancedwidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "widgets/denhancedwidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'denhancedwidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Dtk__Widget__DEnhancedWidget_t {
    QByteArrayData data[22];
    char stringdata0[212];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Dtk__Widget__DEnhancedWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Dtk__Widget__DEnhancedWidget_t qt_meta_stringdata_Dtk__Widget__DEnhancedWidget = {
    {
QT_MOC_LITERAL(0, 0, 28), // "Dtk::Widget::DEnhancedWidget"
QT_MOC_LITERAL(1, 29, 8), // "xChanged"
QT_MOC_LITERAL(2, 38, 0), // ""
QT_MOC_LITERAL(3, 39, 1), // "x"
QT_MOC_LITERAL(4, 41, 8), // "yChanged"
QT_MOC_LITERAL(5, 50, 1), // "y"
QT_MOC_LITERAL(6, 52, 15), // "positionChanged"
QT_MOC_LITERAL(7, 68, 5), // "point"
QT_MOC_LITERAL(8, 74, 12), // "widthChanged"
QT_MOC_LITERAL(9, 87, 5), // "width"
QT_MOC_LITERAL(10, 93, 13), // "heightChanged"
QT_MOC_LITERAL(11, 107, 6), // "height"
QT_MOC_LITERAL(12, 114, 11), // "sizeChanged"
QT_MOC_LITERAL(13, 126, 4), // "size"
QT_MOC_LITERAL(14, 131, 13), // "targetChanged"
QT_MOC_LITERAL(15, 145, 8), // "QWidget*"
QT_MOC_LITERAL(16, 154, 6), // "target"
QT_MOC_LITERAL(17, 161, 14), // "enabledChanged"
QT_MOC_LITERAL(18, 176, 7), // "enabled"
QT_MOC_LITERAL(19, 184, 6), // "showed"
QT_MOC_LITERAL(20, 191, 9), // "setTarget"
QT_MOC_LITERAL(21, 201, 10) // "setEnabled"

    },
    "Dtk::Widget::DEnhancedWidget\0xChanged\0"
    "\0x\0yChanged\0y\0positionChanged\0point\0"
    "widthChanged\0width\0heightChanged\0"
    "height\0sizeChanged\0size\0targetChanged\0"
    "QWidget*\0target\0enabledChanged\0enabled\0"
    "showed\0setTarget\0setEnabled"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Dtk__Widget__DEnhancedWidget[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       2,  100, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       9,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   69,    2, 0x06 /* Public */,
       4,    1,   72,    2, 0x06 /* Public */,
       6,    1,   75,    2, 0x06 /* Public */,
       8,    1,   78,    2, 0x06 /* Public */,
      10,    1,   81,    2, 0x06 /* Public */,
      12,    1,   84,    2, 0x06 /* Public */,
      14,    1,   87,    2, 0x06 /* Public */,
      17,    1,   90,    2, 0x06 /* Public */,
      19,    0,   93,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      20,    1,   94,    2, 0x0a /* Public */,
      21,    1,   97,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, QMetaType::QPoint,    7,
    QMetaType::Void, QMetaType::Int,    9,
    QMetaType::Void, QMetaType::Int,   11,
    QMetaType::Void, QMetaType::QSize,   13,
    QMetaType::Void, 0x80000000 | 15,   16,
    QMetaType::Void, QMetaType::Bool,   18,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 15,   16,
    QMetaType::Void, QMetaType::Bool,   18,

 // properties: name, type, flags
      16, 0x80000000 | 15, 0x0049510b,
      18, QMetaType::Bool, 0x00495103,

 // properties: notify_signal_id
       6,
       7,

       0        // eod
};

void Dtk::Widget::DEnhancedWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<DEnhancedWidget *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->xChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->yChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->positionChanged((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        case 3: _t->widthChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->heightChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->sizeChanged((*reinterpret_cast< const QSize(*)>(_a[1]))); break;
        case 6: _t->targetChanged((*reinterpret_cast< QWidget*(*)>(_a[1]))); break;
        case 7: _t->enabledChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 8: _t->showed(); break;
        case 9: _t->setTarget((*reinterpret_cast< QWidget*(*)>(_a[1]))); break;
        case 10: _t->setEnabled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 6:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QWidget* >(); break;
            }
            break;
        case 9:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QWidget* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (DEnhancedWidget::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DEnhancedWidget::xChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (DEnhancedWidget::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DEnhancedWidget::yChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (DEnhancedWidget::*)(const QPoint & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DEnhancedWidget::positionChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (DEnhancedWidget::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DEnhancedWidget::widthChanged)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (DEnhancedWidget::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DEnhancedWidget::heightChanged)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (DEnhancedWidget::*)(const QSize & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DEnhancedWidget::sizeChanged)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (DEnhancedWidget::*)(QWidget * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DEnhancedWidget::targetChanged)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (DEnhancedWidget::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DEnhancedWidget::enabledChanged)) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (DEnhancedWidget::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DEnhancedWidget::showed)) {
                *result = 8;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QWidget* >(); break;
        }
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<DEnhancedWidget *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QWidget**>(_v) = _t->target(); break;
        case 1: *reinterpret_cast< bool*>(_v) = _t->enabled(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<DEnhancedWidget *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setTarget(*reinterpret_cast< QWidget**>(_v)); break;
        case 1: _t->setEnabled(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject Dtk::Widget::DEnhancedWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_Dtk__Widget__DEnhancedWidget.data,
    qt_meta_data_Dtk__Widget__DEnhancedWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Dtk::Widget::DEnhancedWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Dtk::Widget::DEnhancedWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Dtk__Widget__DEnhancedWidget.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int Dtk::Widget::DEnhancedWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
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
void Dtk::Widget::DEnhancedWidget::xChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Dtk::Widget::DEnhancedWidget::yChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void Dtk::Widget::DEnhancedWidget::positionChanged(const QPoint & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void Dtk::Widget::DEnhancedWidget::widthChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void Dtk::Widget::DEnhancedWidget::heightChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void Dtk::Widget::DEnhancedWidget::sizeChanged(const QSize & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void Dtk::Widget::DEnhancedWidget::targetChanged(QWidget * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void Dtk::Widget::DEnhancedWidget::enabledChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void Dtk::Widget::DEnhancedWidget::showed()
{
    QMetaObject::activate(this, &staticMetaObject, 8, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
