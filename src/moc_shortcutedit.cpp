/****************************************************************************
** Meta object code from reading C++ file 'shortcutedit.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "widgets/private/settings/shortcutedit.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'shortcutedit.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ShortcutEdit_t {
    QByteArrayData data[9];
    char stringdata0[110];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ShortcutEdit_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ShortcutEdit_t qt_meta_stringdata_ShortcutEdit = {
    {
QT_MOC_LITERAL(0, 0, 12), // "ShortcutEdit"
QT_MOC_LITERAL(1, 13, 15), // "shortcutChanged"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 21), // "Qt::KeyboardModifiers"
QT_MOC_LITERAL(4, 52, 8), // "modifier"
QT_MOC_LITERAL(5, 61, 7), // "Qt::Key"
QT_MOC_LITERAL(6, 69, 3), // "key"
QT_MOC_LITERAL(7, 73, 21), // "shortcutStringChanged"
QT_MOC_LITERAL(8, 95, 14) // "sequenceString"

    },
    "ShortcutEdit\0shortcutChanged\0\0"
    "Qt::KeyboardModifiers\0modifier\0Qt::Key\0"
    "key\0shortcutStringChanged\0sequenceString"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ShortcutEdit[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   24,    2, 0x06 /* Public */,
       7,    1,   29,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 5,    4,    6,
    QMetaType::Void, QMetaType::QString,    8,

       0        // eod
};

void ShortcutEdit::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ShortcutEdit *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->shortcutChanged((*reinterpret_cast< Qt::KeyboardModifiers(*)>(_a[1])),(*reinterpret_cast< Qt::Key(*)>(_a[2]))); break;
        case 1: _t->shortcutStringChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ShortcutEdit::*)(Qt::KeyboardModifiers , Qt::Key );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ShortcutEdit::shortcutChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (ShortcutEdit::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ShortcutEdit::shortcutStringChanged)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject ShortcutEdit::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_ShortcutEdit.data,
    qt_meta_data_ShortcutEdit,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ShortcutEdit::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ShortcutEdit::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ShortcutEdit.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int ShortcutEdit::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void ShortcutEdit::shortcutChanged(Qt::KeyboardModifiers _t1, Qt::Key _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void ShortcutEdit::shortcutStringChanged(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
