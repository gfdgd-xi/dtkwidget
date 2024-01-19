/****************************************************************************
** Meta object code from reading C++ file 'darrowbutton.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "widgets/darrowbutton.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'darrowbutton.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Dtk__Widget__ArrowButtonIcon_t {
    QByteArrayData data[3];
    char stringdata0[67];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Dtk__Widget__ArrowButtonIcon_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Dtk__Widget__ArrowButtonIcon_t qt_meta_stringdata_Dtk__Widget__ArrowButtonIcon = {
    {
QT_MOC_LITERAL(0, 0, 28), // "Dtk::Widget::ArrowButtonIcon"
QT_MOC_LITERAL(1, 29, 20), // "arrowButtonDirection"
QT_MOC_LITERAL(2, 50, 16) // "arrowButtonState"

    },
    "Dtk::Widget::ArrowButtonIcon\0"
    "arrowButtonDirection\0arrowButtonState"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Dtk__Widget__ArrowButtonIcon[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       2,   14, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // properties: name, type, flags
       1, QMetaType::Int, 0x00095001,
       2, QMetaType::Int, 0x00095001,

       0        // eod
};

void Dtk::Widget::ArrowButtonIcon::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{

#ifndef QT_NO_PROPERTIES
    if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<ArrowButtonIcon *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< int*>(_v) = _t->arrowDirection(); break;
        case 1: *reinterpret_cast< int*>(_v) = _t->buttonState(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject Dtk::Widget::ArrowButtonIcon::staticMetaObject = { {
    QMetaObject::SuperData::link<QLabel::staticMetaObject>(),
    qt_meta_stringdata_Dtk__Widget__ArrowButtonIcon.data,
    qt_meta_data_Dtk__Widget__ArrowButtonIcon,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Dtk::Widget::ArrowButtonIcon::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Dtk::Widget::ArrowButtonIcon::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Dtk__Widget__ArrowButtonIcon.stringdata0))
        return static_cast<void*>(this);
    return QLabel::qt_metacast(_clname);
}

int Dtk::Widget::ArrowButtonIcon::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QLabel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    
#ifndef QT_NO_PROPERTIES
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
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
struct qt_meta_stringdata_Dtk__Widget__DArrowButton_t {
    QByteArrayData data[6];
    char stringdata0[73];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Dtk__Widget__DArrowButton_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Dtk__Widget__DArrowButton_t qt_meta_stringdata_Dtk__Widget__DArrowButton = {
    {
QT_MOC_LITERAL(0, 0, 25), // "Dtk::Widget::DArrowButton"
QT_MOC_LITERAL(1, 26, 10), // "mousePress"
QT_MOC_LITERAL(2, 37, 0), // ""
QT_MOC_LITERAL(3, 38, 12), // "mouseRelease"
QT_MOC_LITERAL(4, 51, 10), // "mouseEnter"
QT_MOC_LITERAL(5, 62, 10) // "mouseLeave"

    },
    "Dtk::Widget::DArrowButton\0mousePress\0"
    "\0mouseRelease\0mouseEnter\0mouseLeave"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Dtk__Widget__DArrowButton[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   34,    2, 0x06 /* Public */,
       3,    0,   35,    2, 0x06 /* Public */,
       4,    0,   36,    2, 0x06 /* Public */,
       5,    0,   37,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void Dtk::Widget::DArrowButton::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<DArrowButton *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->mousePress(); break;
        case 1: _t->mouseRelease(); break;
        case 2: _t->mouseEnter(); break;
        case 3: _t->mouseLeave(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (DArrowButton::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DArrowButton::mousePress)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (DArrowButton::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DArrowButton::mouseRelease)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (DArrowButton::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DArrowButton::mouseEnter)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (DArrowButton::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DArrowButton::mouseLeave)) {
                *result = 3;
                return;
            }
        }
    }
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject Dtk::Widget::DArrowButton::staticMetaObject = { {
    QMetaObject::SuperData::link<QLabel::staticMetaObject>(),
    qt_meta_stringdata_Dtk__Widget__DArrowButton.data,
    qt_meta_data_Dtk__Widget__DArrowButton,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Dtk::Widget::DArrowButton::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Dtk::Widget::DArrowButton::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Dtk__Widget__DArrowButton.stringdata0))
        return static_cast<void*>(this);
    return QLabel::qt_metacast(_clname);
}

int Dtk::Widget::DArrowButton::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QLabel::qt_metacall(_c, _id, _a);
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
    return _id;
}

// SIGNAL 0
void Dtk::Widget::DArrowButton::mousePress()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void Dtk::Widget::DArrowButton::mouseRelease()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void Dtk::Widget::DArrowButton::mouseEnter()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void Dtk::Widget::DArrowButton::mouseLeave()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
