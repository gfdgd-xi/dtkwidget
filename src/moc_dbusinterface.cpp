/****************************************************************************
** Meta object code from reading C++ file 'dbusinterface.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "widgets/private/mpris/dbusinterface.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'dbusinterface.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_DBusInterface_t {
    QByteArrayData data[34];
    char stringdata0[530];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_DBusInterface_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_DBusInterface_t qt_meta_stringdata_DBusInterface = {
    {
QT_MOC_LITERAL(0, 0, 13), // "DBusInterface"
QT_MOC_LITERAL(1, 14, 12), // "NameAcquired"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 3), // "in0"
QT_MOC_LITERAL(4, 32, 8), // "NameLost"
QT_MOC_LITERAL(5, 41, 16), // "NameOwnerChanged"
QT_MOC_LITERAL(6, 58, 3), // "in1"
QT_MOC_LITERAL(7, 62, 3), // "in2"
QT_MOC_LITERAL(8, 66, 19), // "__propertyChanged__"
QT_MOC_LITERAL(9, 86, 12), // "QDBusMessage"
QT_MOC_LITERAL(10, 99, 3), // "msg"
QT_MOC_LITERAL(11, 103, 8), // "AddMatch"
QT_MOC_LITERAL(12, 112, 19), // "QDBusPendingReply<>"
QT_MOC_LITERAL(13, 132, 22), // "GetAdtAuditSessionData"
QT_MOC_LITERAL(14, 155, 29), // "QDBusPendingReply<QByteArray>"
QT_MOC_LITERAL(15, 185, 35), // "GetConnectionSELinuxSecurityC..."
QT_MOC_LITERAL(16, 221, 26), // "GetConnectionUnixProcessID"
QT_MOC_LITERAL(17, 248, 23), // "QDBusPendingReply<uint>"
QT_MOC_LITERAL(18, 272, 21), // "GetConnectionUnixUser"
QT_MOC_LITERAL(19, 294, 5), // "GetId"
QT_MOC_LITERAL(20, 300, 26), // "QDBusPendingReply<QString>"
QT_MOC_LITERAL(21, 327, 12), // "GetNameOwner"
QT_MOC_LITERAL(22, 340, 5), // "Hello"
QT_MOC_LITERAL(23, 346, 20), // "ListActivatableNames"
QT_MOC_LITERAL(24, 367, 30), // "QDBusPendingReply<QStringList>"
QT_MOC_LITERAL(25, 398, 9), // "ListNames"
QT_MOC_LITERAL(26, 408, 16), // "ListQueuedOwners"
QT_MOC_LITERAL(27, 425, 12), // "NameHasOwner"
QT_MOC_LITERAL(28, 438, 23), // "QDBusPendingReply<bool>"
QT_MOC_LITERAL(29, 462, 11), // "ReleaseName"
QT_MOC_LITERAL(30, 474, 12), // "ReloadConfig"
QT_MOC_LITERAL(31, 487, 11), // "RemoveMatch"
QT_MOC_LITERAL(32, 499, 11), // "RequestName"
QT_MOC_LITERAL(33, 511, 18) // "StartServiceByName"

    },
    "DBusInterface\0NameAcquired\0\0in0\0"
    "NameLost\0NameOwnerChanged\0in1\0in2\0"
    "__propertyChanged__\0QDBusMessage\0msg\0"
    "AddMatch\0QDBusPendingReply<>\0"
    "GetAdtAuditSessionData\0"
    "QDBusPendingReply<QByteArray>\0"
    "GetConnectionSELinuxSecurityContext\0"
    "GetConnectionUnixProcessID\0"
    "QDBusPendingReply<uint>\0GetConnectionUnixUser\0"
    "GetId\0QDBusPendingReply<QString>\0"
    "GetNameOwner\0Hello\0ListActivatableNames\0"
    "QDBusPendingReply<QStringList>\0ListNames\0"
    "ListQueuedOwners\0NameHasOwner\0"
    "QDBusPendingReply<bool>\0ReleaseName\0"
    "ReloadConfig\0RemoveMatch\0RequestName\0"
    "StartServiceByName"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_DBusInterface[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      21,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,  119,    2, 0x06 /* Public */,
       4,    1,  122,    2, 0x06 /* Public */,
       5,    3,  125,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       8,    1,  132,    2, 0x08 /* Private */,
      11,    1,  135,    2, 0x0a /* Public */,
      13,    1,  138,    2, 0x0a /* Public */,
      15,    1,  141,    2, 0x0a /* Public */,
      16,    1,  144,    2, 0x0a /* Public */,
      18,    1,  147,    2, 0x0a /* Public */,
      19,    0,  150,    2, 0x0a /* Public */,
      21,    1,  151,    2, 0x0a /* Public */,
      22,    0,  154,    2, 0x0a /* Public */,
      23,    0,  155,    2, 0x0a /* Public */,
      25,    0,  156,    2, 0x0a /* Public */,
      26,    1,  157,    2, 0x0a /* Public */,
      27,    1,  160,    2, 0x0a /* Public */,
      29,    1,  163,    2, 0x0a /* Public */,
      30,    0,  166,    2, 0x0a /* Public */,
      31,    1,  167,    2, 0x0a /* Public */,
      32,    2,  170,    2, 0x0a /* Public */,
      33,    2,  175,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QString,    3,    6,    7,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 9,   10,
    0x80000000 | 12, QMetaType::QString,    3,
    0x80000000 | 14, QMetaType::QString,    3,
    0x80000000 | 14, QMetaType::QString,    3,
    0x80000000 | 17, QMetaType::QString,    3,
    0x80000000 | 17, QMetaType::QString,    3,
    0x80000000 | 20,
    0x80000000 | 20, QMetaType::QString,    3,
    0x80000000 | 20,
    0x80000000 | 24,
    0x80000000 | 24,
    0x80000000 | 24, QMetaType::QString,    3,
    0x80000000 | 28, QMetaType::QString,    3,
    0x80000000 | 17, QMetaType::QString,    3,
    0x80000000 | 12,
    0x80000000 | 12, QMetaType::QString,    3,
    0x80000000 | 17, QMetaType::QString, QMetaType::UInt,    3,    6,
    0x80000000 | 17, QMetaType::QString, QMetaType::UInt,    3,    6,

       0        // eod
};

void DBusInterface::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<DBusInterface *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->NameAcquired((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->NameLost((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->NameOwnerChanged((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 3: _t->__propertyChanged__((*reinterpret_cast< const QDBusMessage(*)>(_a[1]))); break;
        case 4: { QDBusPendingReply<> _r = _t->AddMatch((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QDBusPendingReply<>*>(_a[0]) = std::move(_r); }  break;
        case 5: { QDBusPendingReply<QByteArray> _r = _t->GetAdtAuditSessionData((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QDBusPendingReply<QByteArray>*>(_a[0]) = std::move(_r); }  break;
        case 6: { QDBusPendingReply<QByteArray> _r = _t->GetConnectionSELinuxSecurityContext((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QDBusPendingReply<QByteArray>*>(_a[0]) = std::move(_r); }  break;
        case 7: { QDBusPendingReply<uint> _r = _t->GetConnectionUnixProcessID((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QDBusPendingReply<uint>*>(_a[0]) = std::move(_r); }  break;
        case 8: { QDBusPendingReply<uint> _r = _t->GetConnectionUnixUser((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QDBusPendingReply<uint>*>(_a[0]) = std::move(_r); }  break;
        case 9: { QDBusPendingReply<QString> _r = _t->GetId();
            if (_a[0]) *reinterpret_cast< QDBusPendingReply<QString>*>(_a[0]) = std::move(_r); }  break;
        case 10: { QDBusPendingReply<QString> _r = _t->GetNameOwner((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QDBusPendingReply<QString>*>(_a[0]) = std::move(_r); }  break;
        case 11: { QDBusPendingReply<QString> _r = _t->Hello();
            if (_a[0]) *reinterpret_cast< QDBusPendingReply<QString>*>(_a[0]) = std::move(_r); }  break;
        case 12: { QDBusPendingReply<QStringList> _r = _t->ListActivatableNames();
            if (_a[0]) *reinterpret_cast< QDBusPendingReply<QStringList>*>(_a[0]) = std::move(_r); }  break;
        case 13: { QDBusPendingReply<QStringList> _r = _t->ListNames();
            if (_a[0]) *reinterpret_cast< QDBusPendingReply<QStringList>*>(_a[0]) = std::move(_r); }  break;
        case 14: { QDBusPendingReply<QStringList> _r = _t->ListQueuedOwners((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QDBusPendingReply<QStringList>*>(_a[0]) = std::move(_r); }  break;
        case 15: { QDBusPendingReply<bool> _r = _t->NameHasOwner((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QDBusPendingReply<bool>*>(_a[0]) = std::move(_r); }  break;
        case 16: { QDBusPendingReply<uint> _r = _t->ReleaseName((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QDBusPendingReply<uint>*>(_a[0]) = std::move(_r); }  break;
        case 17: { QDBusPendingReply<> _r = _t->ReloadConfig();
            if (_a[0]) *reinterpret_cast< QDBusPendingReply<>*>(_a[0]) = std::move(_r); }  break;
        case 18: { QDBusPendingReply<> _r = _t->RemoveMatch((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QDBusPendingReply<>*>(_a[0]) = std::move(_r); }  break;
        case 19: { QDBusPendingReply<uint> _r = _t->RequestName((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< uint(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QDBusPendingReply<uint>*>(_a[0]) = std::move(_r); }  break;
        case 20: { QDBusPendingReply<uint> _r = _t->StartServiceByName((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< uint(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QDBusPendingReply<uint>*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QDBusMessage >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (DBusInterface::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DBusInterface::NameAcquired)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (DBusInterface::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DBusInterface::NameLost)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (DBusInterface::*)(const QString & , const QString & , const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DBusInterface::NameOwnerChanged)) {
                *result = 2;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject DBusInterface::staticMetaObject = { {
    QMetaObject::SuperData::link<QDBusAbstractInterface::staticMetaObject>(),
    qt_meta_stringdata_DBusInterface.data,
    qt_meta_data_DBusInterface,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *DBusInterface::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DBusInterface::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_DBusInterface.stringdata0))
        return static_cast<void*>(this);
    return QDBusAbstractInterface::qt_metacast(_clname);
}

int DBusInterface::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDBusAbstractInterface::qt_metacall(_c, _id, _a);
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
    return _id;
}

// SIGNAL 0
void DBusInterface::NameAcquired(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void DBusInterface::NameLost(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void DBusInterface::NameOwnerChanged(const QString & _t1, const QString & _t2, const QString & _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
