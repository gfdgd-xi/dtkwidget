/****************************************************************************
** Meta object code from reading C++ file 'dsettingsdialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "widgets/dsettingsdialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'dsettingsdialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Dtk__Widget__DSettingsDialog_t {
    QByteArrayData data[6];
    char stringdata0[93];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Dtk__Widget__DSettingsDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Dtk__Widget__DSettingsDialog_t qt_meta_stringdata_Dtk__Widget__DSettingsDialog = {
    {
QT_MOC_LITERAL(0, 0, 28), // "Dtk::Widget::DSettingsDialog"
QT_MOC_LITERAL(1, 29, 14), // "updateSettings"
QT_MOC_LITERAL(2, 44, 0), // ""
QT_MOC_LITERAL(3, 45, 21), // "Dtk::Core::DSettings*"
QT_MOC_LITERAL(4, 67, 8), // "settings"
QT_MOC_LITERAL(5, 76, 16) // "translateContext"

    },
    "Dtk::Widget::DSettingsDialog\0"
    "updateSettings\0\0Dtk::Core::DSettings*\0"
    "settings\0translateContext"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Dtk__Widget__DSettingsDialog[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   24,    2, 0x0a /* Public */,
       1,    2,   27,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, QMetaType::QByteArray, 0x80000000 | 3,    5,    4,

       0        // eod
};

void Dtk::Widget::DSettingsDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<DSettingsDialog *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->updateSettings((*reinterpret_cast< Dtk::Core::DSettings*(*)>(_a[1]))); break;
        case 1: _t->updateSettings((*reinterpret_cast< const QByteArray(*)>(_a[1])),(*reinterpret_cast< Dtk::Core::DSettings*(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Dtk::Core::DSettings* >(); break;
            }
            break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Dtk::Core::DSettings* >(); break;
            }
            break;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Dtk::Widget::DSettingsDialog::staticMetaObject = { {
    QMetaObject::SuperData::link<DAbstractDialog::staticMetaObject>(),
    qt_meta_stringdata_Dtk__Widget__DSettingsDialog.data,
    qt_meta_data_Dtk__Widget__DSettingsDialog,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Dtk::Widget::DSettingsDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Dtk::Widget::DSettingsDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Dtk__Widget__DSettingsDialog.stringdata0))
        return static_cast<void*>(this);
    return DAbstractDialog::qt_metacast(_clname);
}

int Dtk::Widget::DSettingsDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = DAbstractDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
