/****************************************************************************
** Meta object code from reading C++ file 'dclipeffectwidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <QPainterPath>
#include <memory>
#include "widgets/dclipeffectwidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'dclipeffectwidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Dtk__Widget__DClipEffectWidget_t {
    QByteArrayData data[11];
    char stringdata0[130];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Dtk__Widget__DClipEffectWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Dtk__Widget__DClipEffectWidget_t qt_meta_stringdata_Dtk__Widget__DClipEffectWidget = {
    {
QT_MOC_LITERAL(0, 0, 30), // "Dtk::Widget::DClipEffectWidget"
QT_MOC_LITERAL(1, 31, 14), // "marginsChanged"
QT_MOC_LITERAL(2, 46, 0), // ""
QT_MOC_LITERAL(3, 47, 8), // "QMargins"
QT_MOC_LITERAL(4, 56, 7), // "margins"
QT_MOC_LITERAL(5, 64, 15), // "clipPathChanged"
QT_MOC_LITERAL(6, 80, 12), // "QPainterPath"
QT_MOC_LITERAL(7, 93, 8), // "clipPath"
QT_MOC_LITERAL(8, 102, 10), // "setMargins"
QT_MOC_LITERAL(9, 113, 11), // "setClipPath"
QT_MOC_LITERAL(10, 125, 4) // "path"

    },
    "Dtk::Widget::DClipEffectWidget\0"
    "marginsChanged\0\0QMargins\0margins\0"
    "clipPathChanged\0QPainterPath\0clipPath\0"
    "setMargins\0setClipPath\0path"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Dtk__Widget__DClipEffectWidget[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       2,   46, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   34,    2, 0x06 /* Public */,
       5,    1,   37,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       8,    1,   40,    2, 0x0a /* Public */,
       9,    1,   43,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 6,    7,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 6,   10,

 // properties: name, type, flags
       4, 0x80000000 | 3, 0x0049510b,
       7, 0x80000000 | 6, 0x0049510b,

 // properties: notify_signal_id
       0,
       1,

       0        // eod
};

void Dtk::Widget::DClipEffectWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<DClipEffectWidget *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->marginsChanged((*reinterpret_cast< QMargins(*)>(_a[1]))); break;
        case 1: _t->clipPathChanged((*reinterpret_cast< QPainterPath(*)>(_a[1]))); break;
        case 2: _t->setMargins((*reinterpret_cast< QMargins(*)>(_a[1]))); break;
        case 3: _t->setClipPath((*reinterpret_cast< const QPainterPath(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (DClipEffectWidget::*)(QMargins );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DClipEffectWidget::marginsChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (DClipEffectWidget::*)(QPainterPath );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DClipEffectWidget::clipPathChanged)) {
                *result = 1;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<DClipEffectWidget *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QMargins*>(_v) = _t->margins(); break;
        case 1: *reinterpret_cast< QPainterPath*>(_v) = _t->clipPath(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<DClipEffectWidget *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setMargins(*reinterpret_cast< QMargins*>(_v)); break;
        case 1: _t->setClipPath(*reinterpret_cast< QPainterPath*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject Dtk::Widget::DClipEffectWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_Dtk__Widget__DClipEffectWidget.data,
    qt_meta_data_Dtk__Widget__DClipEffectWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Dtk::Widget::DClipEffectWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Dtk::Widget::DClipEffectWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Dtk__Widget__DClipEffectWidget.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "Dtk::Core::DObject"))
        return static_cast< Dtk::Core::DObject*>(this);
    return QWidget::qt_metacast(_clname);
}

int Dtk::Widget::DClipEffectWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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
void Dtk::Widget::DClipEffectWidget::marginsChanged(QMargins _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Dtk::Widget::DClipEffectWidget::clipPathChanged(QPainterPath _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
