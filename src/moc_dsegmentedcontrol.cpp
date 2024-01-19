/****************************************************************************
** Meta object code from reading C++ file 'dsegmentedcontrol.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "widgets/dsegmentedcontrol.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'dsegmentedcontrol.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Dtk__Widget__DSegmentedHighlight_t {
    QByteArrayData data[1];
    char stringdata0[33];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Dtk__Widget__DSegmentedHighlight_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Dtk__Widget__DSegmentedHighlight_t qt_meta_stringdata_Dtk__Widget__DSegmentedHighlight = {
    {
QT_MOC_LITERAL(0, 0, 32) // "Dtk::Widget::DSegmentedHighlight"

    },
    "Dtk::Widget::DSegmentedHighlight"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Dtk__Widget__DSegmentedHighlight[] = {

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

void Dtk::Widget::DSegmentedHighlight::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject Dtk::Widget::DSegmentedHighlight::staticMetaObject = { {
    QMetaObject::SuperData::link<QToolButton::staticMetaObject>(),
    qt_meta_stringdata_Dtk__Widget__DSegmentedHighlight.data,
    qt_meta_data_Dtk__Widget__DSegmentedHighlight,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Dtk::Widget::DSegmentedHighlight::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Dtk::Widget::DSegmentedHighlight::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Dtk__Widget__DSegmentedHighlight.stringdata0))
        return static_cast<void*>(this);
    return QToolButton::qt_metacast(_clname);
}

int Dtk::Widget::DSegmentedHighlight::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QToolButton::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_Dtk__Widget__DSegmentedControl_t {
    QByteArrayData data[29];
    char stringdata0[403];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Dtk__Widget__DSegmentedControl_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Dtk__Widget__DSegmentedControl_t qt_meta_stringdata_Dtk__Widget__DSegmentedControl = {
    {
QT_MOC_LITERAL(0, 0, 30), // "Dtk::Widget::DSegmentedControl"
QT_MOC_LITERAL(1, 31, 14), // "currentChanged"
QT_MOC_LITERAL(2, 46, 0), // ""
QT_MOC_LITERAL(3, 47, 5), // "index"
QT_MOC_LITERAL(4, 53, 19), // "currentTitleChanged"
QT_MOC_LITERAL(5, 73, 5), // "title"
QT_MOC_LITERAL(6, 79, 24), // "animationDurationChanged"
QT_MOC_LITERAL(7, 104, 17), // "animationDuration"
QT_MOC_LITERAL(8, 122, 12), // "addSegmented"
QT_MOC_LITERAL(9, 135, 4), // "icon"
QT_MOC_LITERAL(10, 140, 9), // "titleList"
QT_MOC_LITERAL(11, 150, 12), // "QList<QIcon>"
QT_MOC_LITERAL(12, 163, 8), // "iconList"
QT_MOC_LITERAL(13, 172, 15), // "insertSegmented"
QT_MOC_LITERAL(14, 188, 15), // "removeSegmented"
QT_MOC_LITERAL(15, 204, 5), // "clear"
QT_MOC_LITERAL(16, 210, 15), // "setCurrentIndex"
QT_MOC_LITERAL(17, 226, 12), // "currentIndex"
QT_MOC_LITERAL(18, 239, 22), // "setCurrentIndexByTitle"
QT_MOC_LITERAL(19, 262, 7), // "setText"
QT_MOC_LITERAL(20, 270, 7), // "setIcon"
QT_MOC_LITERAL(21, 278, 20), // "setAnimationDuration"
QT_MOC_LITERAL(22, 299, 16), // "setAnimationType"
QT_MOC_LITERAL(23, 316, 18), // "QEasingCurve::Type"
QT_MOC_LITERAL(24, 335, 13), // "animationType"
QT_MOC_LITERAL(25, 349, 23), // "updateHighlightGeometry"
QT_MOC_LITERAL(26, 373, 9), // "animation"
QT_MOC_LITERAL(27, 383, 13), // "buttonClicked"
QT_MOC_LITERAL(28, 397, 5) // "count"

    },
    "Dtk::Widget::DSegmentedControl\0"
    "currentChanged\0\0index\0currentTitleChanged\0"
    "title\0animationDurationChanged\0"
    "animationDuration\0addSegmented\0icon\0"
    "titleList\0QList<QIcon>\0iconList\0"
    "insertSegmented\0removeSegmented\0clear\0"
    "setCurrentIndex\0currentIndex\0"
    "setCurrentIndexByTitle\0setText\0setIcon\0"
    "setAnimationDuration\0setAnimationType\0"
    "QEasingCurve::Type\0animationType\0"
    "updateHighlightGeometry\0animation\0"
    "buttonClicked\0count"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Dtk__Widget__DSegmentedControl[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      20,   14, // methods
       4,  182, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,  114,    2, 0x06 /* Public */,
       4,    1,  117,    2, 0x06 /* Public */,
       6,    1,  120,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       8,    1,  123,    2, 0x0a /* Public */,
       8,    2,  126,    2, 0x0a /* Public */,
       8,    1,  131,    2, 0x0a /* Public */,
       8,    2,  134,    2, 0x0a /* Public */,
      13,    2,  139,    2, 0x0a /* Public */,
      13,    3,  144,    2, 0x0a /* Public */,
      14,    1,  151,    2, 0x0a /* Public */,
      15,    0,  154,    2, 0x0a /* Public */,
      16,    1,  155,    2, 0x0a /* Public */,
      18,    1,  158,    2, 0x0a /* Public */,
      19,    2,  161,    2, 0x0a /* Public */,
      20,    2,  166,    2, 0x0a /* Public */,
      21,    1,  171,    2, 0x0a /* Public */,
      22,    1,  174,    2, 0x0a /* Public */,
      25,    1,  177,    2, 0x08 /* Private */,
      25,    0,  180,    2, 0x28 /* Private | MethodCloned */,
      27,    0,  181,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void, QMetaType::Int,    7,

 // slots: parameters
    QMetaType::Int, QMetaType::QString,    5,
    QMetaType::Int, QMetaType::QIcon, QMetaType::QString,    9,    5,
    QMetaType::Void, QMetaType::QStringList,   10,
    QMetaType::Void, 0x80000000 | 11, QMetaType::QStringList,   12,   10,
    QMetaType::Void, QMetaType::Int, QMetaType::QString,    3,    5,
    QMetaType::Void, QMetaType::Int, QMetaType::QIcon, QMetaType::QString,    3,    9,    5,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void,
    QMetaType::Bool, QMetaType::Int,   17,
    QMetaType::Bool, QMetaType::QString,    5,
    QMetaType::Void, QMetaType::Int, QMetaType::QString,    3,    5,
    QMetaType::Void, QMetaType::Int, QMetaType::QIcon,    3,    9,
    QMetaType::Void, QMetaType::Int,    7,
    QMetaType::Void, 0x80000000 | 23,   24,
    QMetaType::Void, QMetaType::Bool,   26,
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
      17, QMetaType::Int, 0x00495103,
      28, QMetaType::Int, 0x00095001,
       7, QMetaType::Int, 0x00095103,
      24, 0x80000000 | 23, 0x0009510b,

 // properties: notify_signal_id
       0,
       0,
       0,
       0,

       0        // eod
};

void Dtk::Widget::DSegmentedControl::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<DSegmentedControl *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->currentChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->currentTitleChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->animationDurationChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: { int _r = _t->addSegmented((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 4: { int _r = _t->addSegmented((*reinterpret_cast< const QIcon(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 5: _t->addSegmented((*reinterpret_cast< const QStringList(*)>(_a[1]))); break;
        case 6: _t->addSegmented((*reinterpret_cast< const QList<QIcon>(*)>(_a[1])),(*reinterpret_cast< const QStringList(*)>(_a[2]))); break;
        case 7: _t->insertSegmented((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 8: _t->insertSegmented((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QIcon(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 9: _t->removeSegmented((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 10: _t->clear(); break;
        case 11: { bool _r = _t->setCurrentIndex((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 12: { bool _r = _t->setCurrentIndexByTitle((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 13: _t->setText((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 14: _t->setIcon((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QIcon(*)>(_a[2]))); break;
        case 15: _t->setAnimationDuration((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 16: _t->setAnimationType((*reinterpret_cast< QEasingCurve::Type(*)>(_a[1]))); break;
        case 17: _t->updateHighlightGeometry((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 18: _t->updateHighlightGeometry(); break;
        case 19: _t->buttonClicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 6:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<QIcon> >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (DSegmentedControl::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DSegmentedControl::currentChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (DSegmentedControl::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DSegmentedControl::currentTitleChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (DSegmentedControl::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DSegmentedControl::animationDurationChanged)) {
                *result = 2;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<DSegmentedControl *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< int*>(_v) = _t->currentIndex(); break;
        case 1: *reinterpret_cast< int*>(_v) = _t->count(); break;
        case 2: *reinterpret_cast< int*>(_v) = _t->animationDuration(); break;
        case 3: *reinterpret_cast< QEasingCurve::Type*>(_v) = _t->animationType(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<DSegmentedControl *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setCurrentIndex(*reinterpret_cast< int*>(_v)); break;
        case 2: _t->setAnimationDuration(*reinterpret_cast< int*>(_v)); break;
        case 3: _t->setAnimationType(*reinterpret_cast< QEasingCurve::Type*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

static const QMetaObject::SuperData qt_meta_extradata_Dtk__Widget__DSegmentedControl[] = {
    QMetaObject::SuperData::link<QEasingCurve::staticMetaObject>(),
    nullptr
};

QT_INIT_METAOBJECT const QMetaObject Dtk::Widget::DSegmentedControl::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_Dtk__Widget__DSegmentedControl.data,
    qt_meta_data_Dtk__Widget__DSegmentedControl,
    qt_static_metacall,
    qt_meta_extradata_Dtk__Widget__DSegmentedControl,
    nullptr
} };


const QMetaObject *Dtk::Widget::DSegmentedControl::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Dtk::Widget::DSegmentedControl::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Dtk__Widget__DSegmentedControl.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "Core::DObject"))
        return static_cast< Core::DObject*>(this);
    return QWidget::qt_metacast(_clname);
}

int Dtk::Widget::DSegmentedControl::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 20)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 20;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 20)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 20;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 4;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void Dtk::Widget::DSegmentedControl::currentChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Dtk::Widget::DSegmentedControl::currentTitleChanged(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void Dtk::Widget::DSegmentedControl::animationDurationChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
