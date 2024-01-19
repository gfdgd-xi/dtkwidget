/****************************************************************************
** Meta object code from reading C++ file 'dlineedit.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "widgets/dlineedit.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'dlineedit.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Dtk__Widget__DLineEdit_t {
    QByteArrayData data[16];
    char stringdata0[176];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Dtk__Widget__DLineEdit_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Dtk__Widget__DLineEdit_t qt_meta_stringdata_Dtk__Widget__DLineEdit = {
    {
QT_MOC_LITERAL(0, 0, 22), // "Dtk::Widget::DLineEdit"
QT_MOC_LITERAL(1, 23, 11), // "iconClicked"
QT_MOC_LITERAL(2, 35, 0), // ""
QT_MOC_LITERAL(3, 36, 12), // "alertChanged"
QT_MOC_LITERAL(4, 49, 5), // "alert"
QT_MOC_LITERAL(5, 55, 12), // "focusChanged"
QT_MOC_LITERAL(6, 68, 7), // "onFocus"
QT_MOC_LITERAL(7, 76, 11), // "sizeChanged"
QT_MOC_LITERAL(8, 88, 4), // "size"
QT_MOC_LITERAL(9, 93, 13), // "setNormalIcon"
QT_MOC_LITERAL(10, 107, 10), // "normalIcon"
QT_MOC_LITERAL(11, 118, 12), // "setHoverIcon"
QT_MOC_LITERAL(12, 131, 9), // "hoverIcon"
QT_MOC_LITERAL(13, 141, 12), // "setPressIcon"
QT_MOC_LITERAL(14, 154, 9), // "pressIcon"
QT_MOC_LITERAL(15, 164, 11) // "iconVisible"

    },
    "Dtk::Widget::DLineEdit\0iconClicked\0\0"
    "alertChanged\0alert\0focusChanged\0onFocus\0"
    "sizeChanged\0size\0setNormalIcon\0"
    "normalIcon\0setHoverIcon\0hoverIcon\0"
    "setPressIcon\0pressIcon\0iconVisible"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Dtk__Widget__DLineEdit[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       5,   68, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   49,    2, 0x06 /* Public */,
       3,    1,   50,    2, 0x06 /* Public */,
       5,    1,   53,    2, 0x06 /* Public */,
       7,    1,   56,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       9,    1,   59,    2, 0x0a /* Public */,
      11,    1,   62,    2, 0x0a /* Public */,
      13,    1,   65,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    4,
    QMetaType::Void, QMetaType::Bool,    6,
    QMetaType::Void, QMetaType::QSize,    8,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,   10,
    QMetaType::Void, QMetaType::QString,   12,
    QMetaType::Void, QMetaType::QString,   14,

 // properties: name, type, flags
       4, QMetaType::Bool, 0x00495103,
      10, QMetaType::QString, 0x00095103,
      12, QMetaType::QString, 0x00095103,
      14, QMetaType::QString, 0x00095103,
      15, QMetaType::Bool, 0x00095103,

 // properties: notify_signal_id
       1,
       0,
       0,
       0,
       0,

       0        // eod
};

void Dtk::Widget::DLineEdit::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<DLineEdit *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->iconClicked(); break;
        case 1: _t->alertChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->focusChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->sizeChanged((*reinterpret_cast< const QSize(*)>(_a[1]))); break;
        case 4: _t->setNormalIcon((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: _t->setHoverIcon((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 6: _t->setPressIcon((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (DLineEdit::*)() const;
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DLineEdit::iconClicked)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (DLineEdit::*)(bool ) const;
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DLineEdit::alertChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (DLineEdit::*)(bool ) const;
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DLineEdit::focusChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (DLineEdit::*)(const QSize & ) const;
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DLineEdit::sizeChanged)) {
                *result = 3;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<DLineEdit *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = _t->isAlert(); break;
        case 1: *reinterpret_cast< QString*>(_v) = _t->normalIcon(); break;
        case 2: *reinterpret_cast< QString*>(_v) = _t->hoverIcon(); break;
        case 3: *reinterpret_cast< QString*>(_v) = _t->pressIcon(); break;
        case 4: *reinterpret_cast< bool*>(_v) = _t->iconVisible(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<DLineEdit *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setAlert(*reinterpret_cast< bool*>(_v)); break;
        case 1: _t->setNormalIcon(*reinterpret_cast< QString*>(_v)); break;
        case 2: _t->setHoverIcon(*reinterpret_cast< QString*>(_v)); break;
        case 3: _t->setPressIcon(*reinterpret_cast< QString*>(_v)); break;
        case 4: _t->setIconVisible(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject Dtk::Widget::DLineEdit::staticMetaObject = { {
    QMetaObject::SuperData::link<QLineEdit::staticMetaObject>(),
    qt_meta_stringdata_Dtk__Widget__DLineEdit.data,
    qt_meta_data_Dtk__Widget__DLineEdit,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Dtk::Widget::DLineEdit::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Dtk::Widget::DLineEdit::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Dtk__Widget__DLineEdit.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "Dtk::Core::DObject"))
        return static_cast< Dtk::Core::DObject*>(this);
    return QLineEdit::qt_metacast(_clname);
}

int Dtk::Widget::DLineEdit::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QLineEdit::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
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
void Dtk::Widget::DLineEdit::iconClicked()const
{
    QMetaObject::activate(const_cast< Dtk::Widget::DLineEdit *>(this), &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void Dtk::Widget::DLineEdit::alertChanged(bool _t1)const
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(const_cast< Dtk::Widget::DLineEdit *>(this), &staticMetaObject, 1, _a);
}

// SIGNAL 2
void Dtk::Widget::DLineEdit::focusChanged(bool _t1)const
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(const_cast< Dtk::Widget::DLineEdit *>(this), &staticMetaObject, 2, _a);
}

// SIGNAL 3
void Dtk::Widget::DLineEdit::sizeChanged(const QSize & _t1)const
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(const_cast< Dtk::Widget::DLineEdit *>(this), &staticMetaObject, 3, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
