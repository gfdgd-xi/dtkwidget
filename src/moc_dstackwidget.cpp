/****************************************************************************
** Meta object code from reading C++ file 'dstackwidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "widgets/dstackwidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'dstackwidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Dtk__Widget__DSlideStackWidgetTransition_t {
    QByteArrayData data[4];
    char stringdata0[64];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Dtk__Widget__DSlideStackWidgetTransition_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Dtk__Widget__DSlideStackWidgetTransition_t qt_meta_stringdata_Dtk__Widget__DSlideStackWidgetTransition = {
    {
QT_MOC_LITERAL(0, 0, 40), // "Dtk::Widget::DSlideStackWidge..."
QT_MOC_LITERAL(1, 41, 13), // "updateVariant"
QT_MOC_LITERAL(2, 55, 0), // ""
QT_MOC_LITERAL(3, 56, 7) // "variant"

    },
    "Dtk::Widget::DSlideStackWidgetTransition\0"
    "updateVariant\0\0variant"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Dtk__Widget__DSlideStackWidgetTransition[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   19,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::QVariant,    3,

       0        // eod
};

void Dtk::Widget::DSlideStackWidgetTransition::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<DSlideStackWidgetTransition *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->updateVariant((*reinterpret_cast< const QVariant(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Dtk::Widget::DSlideStackWidgetTransition::staticMetaObject = { {
    QMetaObject::SuperData::link<DAbstractStackWidgetTransition::staticMetaObject>(),
    qt_meta_stringdata_Dtk__Widget__DSlideStackWidgetTransition.data,
    qt_meta_data_Dtk__Widget__DSlideStackWidgetTransition,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Dtk::Widget::DSlideStackWidgetTransition::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Dtk::Widget::DSlideStackWidgetTransition::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Dtk__Widget__DSlideStackWidgetTransition.stringdata0))
        return static_cast<void*>(this);
    return DAbstractStackWidgetTransition::qt_metacast(_clname);
}

int Dtk::Widget::DSlideStackWidgetTransition::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = DAbstractStackWidgetTransition::qt_metacall(_c, _id, _a);
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
struct qt_meta_stringdata_Dtk__Widget__DStackWidget_t {
    QByteArrayData data[32];
    char stringdata0[436];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Dtk__Widget__DStackWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Dtk__Widget__DStackWidget_t qt_meta_stringdata_Dtk__Widget__DStackWidget = {
    {
QT_MOC_LITERAL(0, 0, 25), // "Dtk::Widget::DStackWidget"
QT_MOC_LITERAL(1, 26, 11), // "busyChanged"
QT_MOC_LITERAL(2, 38, 0), // ""
QT_MOC_LITERAL(3, 39, 4), // "busy"
QT_MOC_LITERAL(4, 44, 12), // "depthChanged"
QT_MOC_LITERAL(5, 57, 5), // "depth"
QT_MOC_LITERAL(6, 63, 19), // "currentIndexChanged"
QT_MOC_LITERAL(7, 83, 12), // "currentIndex"
QT_MOC_LITERAL(8, 96, 20), // "currentWidgetChanged"
QT_MOC_LITERAL(9, 117, 8), // "QWidget*"
QT_MOC_LITERAL(10, 126, 13), // "currentWidget"
QT_MOC_LITERAL(11, 140, 18), // "widgetDepthChanged"
QT_MOC_LITERAL(12, 159, 6), // "widget"
QT_MOC_LITERAL(13, 166, 20), // "switchWidgetFinished"
QT_MOC_LITERAL(14, 187, 10), // "pushWidget"
QT_MOC_LITERAL(15, 198, 16), // "enableTransition"
QT_MOC_LITERAL(16, 215, 12), // "insertWidget"
QT_MOC_LITERAL(17, 228, 5), // "index"
QT_MOC_LITERAL(18, 234, 9), // "popWidget"
QT_MOC_LITERAL(19, 244, 8), // "isDelete"
QT_MOC_LITERAL(20, 253, 5), // "count"
QT_MOC_LITERAL(21, 259, 5), // "clear"
QT_MOC_LITERAL(22, 265, 7), // "indexOf"
QT_MOC_LITERAL(23, 273, 16), // "getWidgetByIndex"
QT_MOC_LITERAL(24, 290, 13), // "setTransition"
QT_MOC_LITERAL(25, 304, 31), // "DAbstractStackWidgetTransition*"
QT_MOC_LITERAL(26, 336, 10), // "transition"
QT_MOC_LITERAL(27, 347, 20), // "setAnimationDuration"
QT_MOC_LITERAL(28, 368, 17), // "animationDuration"
QT_MOC_LITERAL(29, 386, 16), // "setAnimationType"
QT_MOC_LITERAL(30, 403, 18), // "QEasingCurve::Type"
QT_MOC_LITERAL(31, 422, 13) // "animationType"

    },
    "Dtk::Widget::DStackWidget\0busyChanged\0"
    "\0busy\0depthChanged\0depth\0currentIndexChanged\0"
    "currentIndex\0currentWidgetChanged\0"
    "QWidget*\0currentWidget\0widgetDepthChanged\0"
    "widget\0switchWidgetFinished\0pushWidget\0"
    "enableTransition\0insertWidget\0index\0"
    "popWidget\0isDelete\0count\0clear\0indexOf\0"
    "getWidgetByIndex\0setTransition\0"
    "DAbstractStackWidgetTransition*\0"
    "transition\0setAnimationDuration\0"
    "animationDuration\0setAnimationType\0"
    "QEasingCurve::Type\0animationType"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Dtk__Widget__DStackWidget[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      21,   14, // methods
       7,  198, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,  119,    2, 0x06 /* Public */,
       4,    1,  122,    2, 0x06 /* Public */,
       6,    1,  125,    2, 0x06 /* Public */,
       8,    1,  128,    2, 0x06 /* Public */,
      11,    2,  131,    2, 0x06 /* Public */,
      13,    0,  136,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      14,    2,  137,    2, 0x0a /* Public */,
      14,    1,  142,    2, 0x2a /* Public | MethodCloned */,
      16,    3,  145,    2, 0x0a /* Public */,
      16,    2,  152,    2, 0x2a /* Public | MethodCloned */,
      18,    4,  157,    2, 0x0a /* Public */,
      18,    3,  166,    2, 0x2a /* Public | MethodCloned */,
      18,    2,  173,    2, 0x2a /* Public | MethodCloned */,
      18,    1,  178,    2, 0x2a /* Public | MethodCloned */,
      18,    0,  181,    2, 0x2a /* Public | MethodCloned */,
      21,    0,  182,    2, 0x0a /* Public */,
      22,    1,  183,    2, 0x0a /* Public */,
      23,    1,  186,    2, 0x0a /* Public */,
      24,    1,  189,    2, 0x0a /* Public */,
      27,    1,  192,    2, 0x0a /* Public */,
      29,    1,  195,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, QMetaType::Int,    7,
    QMetaType::Void, 0x80000000 | 9,   10,
    QMetaType::Void, 0x80000000 | 9, QMetaType::Int,   12,    5,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Int, 0x80000000 | 9, QMetaType::Bool,   12,   15,
    QMetaType::Int, 0x80000000 | 9,   12,
    QMetaType::Void, QMetaType::Int, 0x80000000 | 9, QMetaType::Bool,   17,   12,   15,
    QMetaType::Void, QMetaType::Int, 0x80000000 | 9,   17,   12,
    QMetaType::Void, 0x80000000 | 9, QMetaType::Bool, QMetaType::Int, QMetaType::Bool,   12,   19,   20,   15,
    QMetaType::Void, 0x80000000 | 9, QMetaType::Bool, QMetaType::Int,   12,   19,   20,
    QMetaType::Void, 0x80000000 | 9, QMetaType::Bool,   12,   19,
    QMetaType::Void, 0x80000000 | 9,   12,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Int, 0x80000000 | 9,   12,
    0x80000000 | 9, QMetaType::Int,   17,
    QMetaType::Void, 0x80000000 | 25,   26,
    QMetaType::Void, QMetaType::Int,   28,
    QMetaType::Void, 0x80000000 | 30,   31,

 // properties: name, type, flags
       3, QMetaType::Bool, 0x00495801,
       5, QMetaType::Int, 0x00495801,
       7, QMetaType::Int, 0x00495001,
      10, 0x80000000 | 9, 0x00495009,
      26, 0x80000000 | 25, 0x0009510b,
      28, QMetaType::Int, 0x00095103,
      31, 0x80000000 | 30, 0x0009510b,

 // properties: notify_signal_id
       0,
       1,
       2,
       3,
       0,
       0,
       0,

       0        // eod
};

void Dtk::Widget::DStackWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<DStackWidget *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->busyChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->depthChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->currentWidgetChanged((*reinterpret_cast< QWidget*(*)>(_a[1]))); break;
        case 4: _t->widgetDepthChanged((*reinterpret_cast< QWidget*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 5: _t->switchWidgetFinished(); break;
        case 6: { int _r = _t->pushWidget((*reinterpret_cast< QWidget*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 7: { int _r = _t->pushWidget((*reinterpret_cast< QWidget*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 8: _t->insertWidget((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QWidget*(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 9: _t->insertWidget((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QWidget*(*)>(_a[2]))); break;
        case 10: _t->popWidget((*reinterpret_cast< QWidget*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< bool(*)>(_a[4]))); break;
        case 11: _t->popWidget((*reinterpret_cast< QWidget*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 12: _t->popWidget((*reinterpret_cast< QWidget*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 13: _t->popWidget((*reinterpret_cast< QWidget*(*)>(_a[1]))); break;
        case 14: _t->popWidget(); break;
        case 15: _t->clear(); break;
        case 16: { int _r = _t->indexOf((*reinterpret_cast< QWidget*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 17: { QWidget* _r = _t->getWidgetByIndex((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QWidget**>(_a[0]) = std::move(_r); }  break;
        case 18: _t->setTransition((*reinterpret_cast< DAbstractStackWidgetTransition*(*)>(_a[1]))); break;
        case 19: _t->setAnimationDuration((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 20: _t->setAnimationType((*reinterpret_cast< QEasingCurve::Type(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QWidget* >(); break;
            }
            break;
        case 4:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QWidget* >(); break;
            }
            break;
        case 6:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QWidget* >(); break;
            }
            break;
        case 7:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QWidget* >(); break;
            }
            break;
        case 8:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QWidget* >(); break;
            }
            break;
        case 9:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QWidget* >(); break;
            }
            break;
        case 10:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QWidget* >(); break;
            }
            break;
        case 11:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QWidget* >(); break;
            }
            break;
        case 12:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QWidget* >(); break;
            }
            break;
        case 13:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QWidget* >(); break;
            }
            break;
        case 16:
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
            using _t = void (DStackWidget::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DStackWidget::busyChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (DStackWidget::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DStackWidget::depthChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (DStackWidget::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DStackWidget::currentIndexChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (DStackWidget::*)(QWidget * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DStackWidget::currentWidgetChanged)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (DStackWidget::*)(QWidget * , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DStackWidget::widgetDepthChanged)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (DStackWidget::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DStackWidget::switchWidgetFinished)) {
                *result = 5;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 3:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QWidget* >(); break;
        }
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<DStackWidget *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = _t->busy(); break;
        case 1: *reinterpret_cast< int*>(_v) = _t->depth(); break;
        case 2: *reinterpret_cast< int*>(_v) = _t->currentIndex(); break;
        case 3: *reinterpret_cast< QWidget**>(_v) = _t->currentWidget(); break;
        case 4: *reinterpret_cast< DAbstractStackWidgetTransition**>(_v) = _t->transition(); break;
        case 5: *reinterpret_cast< int*>(_v) = _t->animationDuration(); break;
        case 6: *reinterpret_cast< QEasingCurve::Type*>(_v) = _t->animationType(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<DStackWidget *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 4: _t->setTransition(*reinterpret_cast< DAbstractStackWidgetTransition**>(_v)); break;
        case 5: _t->setAnimationDuration(*reinterpret_cast< int*>(_v)); break;
        case 6: _t->setAnimationType(*reinterpret_cast< QEasingCurve::Type*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

static const QMetaObject::SuperData qt_meta_extradata_Dtk__Widget__DStackWidget[] = {
    QMetaObject::SuperData::link<QEasingCurve::staticMetaObject>(),
    nullptr
};

QT_INIT_METAOBJECT const QMetaObject Dtk::Widget::DStackWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_Dtk__Widget__DStackWidget.data,
    qt_meta_data_Dtk__Widget__DStackWidget,
    qt_static_metacall,
    qt_meta_extradata_Dtk__Widget__DStackWidget,
    nullptr
} };


const QMetaObject *Dtk::Widget::DStackWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Dtk::Widget::DStackWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Dtk__Widget__DStackWidget.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "Dtk::Core::DObject"))
        return static_cast< Dtk::Core::DObject*>(this);
    return QWidget::qt_metacast(_clname);
}

int Dtk::Widget::DStackWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 21)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 21;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 21)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 21;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
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

// SIGNAL 0
void Dtk::Widget::DStackWidget::busyChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Dtk::Widget::DStackWidget::depthChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void Dtk::Widget::DStackWidget::currentIndexChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void Dtk::Widget::DStackWidget::currentWidgetChanged(QWidget * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void Dtk::Widget::DStackWidget::widgetDepthChanged(QWidget * _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void Dtk::Widget::DStackWidget::switchWidgetFinished()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
