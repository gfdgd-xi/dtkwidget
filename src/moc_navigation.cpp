/****************************************************************************
** Meta object code from reading C++ file 'navigation.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "widgets/private/settings/navigation.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QPointer>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'navigation.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Dtk__Widget__Navigation_t {
    QByteArrayData data[9];
    char stringdata0[129];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Dtk__Widget__Navigation_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Dtk__Widget__Navigation_t qt_meta_stringdata_Dtk__Widget__Navigation = {
    {
QT_MOC_LITERAL(0, 0, 23), // "Dtk::Widget::Navigation"
QT_MOC_LITERAL(1, 24, 13), // "selectedGroup"
QT_MOC_LITERAL(2, 38, 0), // ""
QT_MOC_LITERAL(3, 39, 3), // "key"
QT_MOC_LITERAL(4, 43, 13), // "onSelectGroup"
QT_MOC_LITERAL(5, 57, 14), // "updateSettings"
QT_MOC_LITERAL(6, 72, 16), // "translateContext"
QT_MOC_LITERAL(7, 89, 30), // "QPointer<Dtk::Core::DSettings>"
QT_MOC_LITERAL(8, 120, 8) // "settings"

    },
    "Dtk::Widget::Navigation\0selectedGroup\0"
    "\0key\0onSelectGroup\0updateSettings\0"
    "translateContext\0QPointer<Dtk::Core::DSettings>\0"
    "settings"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Dtk__Widget__Navigation[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   29,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    1,   32,    2, 0x0a /* Public */,
       5,    2,   35,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QByteArray, 0x80000000 | 7,    6,    8,

       0        // eod
};

void Dtk::Widget::Navigation::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Navigation *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->selectedGroup((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->onSelectGroup((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->updateSettings((*reinterpret_cast< const QByteArray(*)>(_a[1])),(*reinterpret_cast< QPointer<Dtk::Core::DSettings>(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Navigation::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Navigation::selectedGroup)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Dtk::Widget::Navigation::staticMetaObject = { {
    QMetaObject::SuperData::link<QFrame::staticMetaObject>(),
    qt_meta_stringdata_Dtk__Widget__Navigation.data,
    qt_meta_data_Dtk__Widget__Navigation,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Dtk::Widget::Navigation::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Dtk::Widget::Navigation::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Dtk__Widget__Navigation.stringdata0))
        return static_cast<void*>(this);
    return QFrame::qt_metacast(_clname);
}

int Dtk::Widget::Navigation::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
    return _id;
}

// SIGNAL 0
void Dtk::Widget::Navigation::selectedGroup(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
