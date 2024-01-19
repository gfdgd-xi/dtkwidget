/****************************************************************************
** Meta object code from reading C++ file 'dfilechooseredit.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "widgets/dfilechooseredit.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'dfilechooseredit.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Dtk__Widget__DFileChooserEdit_t {
    QByteArrayData data[13];
    char stringdata0[217];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Dtk__Widget__DFileChooserEdit_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Dtk__Widget__DFileChooserEdit_t qt_meta_stringdata_Dtk__Widget__DFileChooserEdit = {
    {
QT_MOC_LITERAL(0, 0, 29), // "Dtk::Widget::DFileChooserEdit"
QT_MOC_LITERAL(1, 30, 11), // "fileChoosed"
QT_MOC_LITERAL(2, 42, 0), // ""
QT_MOC_LITERAL(3, 43, 8), // "fileName"
QT_MOC_LITERAL(4, 52, 12), // "dialogOpened"
QT_MOC_LITERAL(5, 65, 12), // "dialogClosed"
QT_MOC_LITERAL(6, 78, 4), // "code"
QT_MOC_LITERAL(7, 83, 24), // "setDialogDisplayPosition"
QT_MOC_LITERAL(8, 108, 21), // "DialogDisplayPosition"
QT_MOC_LITERAL(9, 130, 21), // "dialogDisplayPosition"
QT_MOC_LITERAL(10, 152, 24), // "_q_showFileChooserDialog"
QT_MOC_LITERAL(11, 177, 18), // "FollowParentWindow"
QT_MOC_LITERAL(12, 196, 20) // "CurrentMonitorCenter"

    },
    "Dtk::Widget::DFileChooserEdit\0fileChoosed\0"
    "\0fileName\0dialogOpened\0dialogClosed\0"
    "code\0setDialogDisplayPosition\0"
    "DialogDisplayPosition\0dialogDisplayPosition\0"
    "_q_showFileChooserDialog\0FollowParentWindow\0"
    "CurrentMonitorCenter"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Dtk__Widget__DFileChooserEdit[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       1,   50, // properties
       1,   53, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   39,    2, 0x06 /* Public */,
       4,    0,   42,    2, 0x06 /* Public */,
       5,    1,   43,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    1,   46,    2, 0x0a /* Public */,
      10,    0,   49,    2, 0x09 /* Protected */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    6,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 8,    9,
    QMetaType::Void,

 // properties: name, type, flags
       9, 0x80000000 | 8, 0x0009510b,

 // enums: name, alias, flags, count, data
       8,    8, 0x0,    2,   58,

 // enum data: key, value
      11, uint(Dtk::Widget::DFileChooserEdit::FollowParentWindow),
      12, uint(Dtk::Widget::DFileChooserEdit::CurrentMonitorCenter),

       0        // eod
};

void Dtk::Widget::DFileChooserEdit::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<DFileChooserEdit *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->fileChoosed((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->dialogOpened(); break;
        case 2: _t->dialogClosed((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->setDialogDisplayPosition((*reinterpret_cast< DialogDisplayPosition(*)>(_a[1]))); break;
        case 4: _t->d_func()->_q_showFileChooserDialog(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (DFileChooserEdit::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DFileChooserEdit::fileChoosed)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (DFileChooserEdit::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DFileChooserEdit::dialogOpened)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (DFileChooserEdit::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DFileChooserEdit::dialogClosed)) {
                *result = 2;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<DFileChooserEdit *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< DialogDisplayPosition*>(_v) = _t->dialogDisplayPosition(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<DFileChooserEdit *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setDialogDisplayPosition(*reinterpret_cast< DialogDisplayPosition*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject Dtk::Widget::DFileChooserEdit::staticMetaObject = { {
    QMetaObject::SuperData::link<DLineEdit::staticMetaObject>(),
    qt_meta_stringdata_Dtk__Widget__DFileChooserEdit.data,
    qt_meta_data_Dtk__Widget__DFileChooserEdit,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Dtk::Widget::DFileChooserEdit::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Dtk::Widget::DFileChooserEdit::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Dtk__Widget__DFileChooserEdit.stringdata0))
        return static_cast<void*>(this);
    return DLineEdit::qt_metacast(_clname);
}

int Dtk::Widget::DFileChooserEdit::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = DLineEdit::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
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
void Dtk::Widget::DFileChooserEdit::fileChoosed(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Dtk::Widget::DFileChooserEdit::dialogOpened()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void Dtk::Widget::DFileChooserEdit::dialogClosed(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
