/****************************************************************************
** Meta object code from reading C++ file 'dthumbnailprovider.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "util/dthumbnailprovider.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'dthumbnailprovider.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Dtk__Widget__DThumbnailProvider_t {
    QByteArrayData data[7];
    char stringdata0[125];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Dtk__Widget__DThumbnailProvider_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Dtk__Widget__DThumbnailProvider_t qt_meta_stringdata_Dtk__Widget__DThumbnailProvider = {
    {
QT_MOC_LITERAL(0, 0, 31), // "Dtk::Widget::DThumbnailProvider"
QT_MOC_LITERAL(1, 32, 16), // "thumbnailChanged"
QT_MOC_LITERAL(2, 49, 0), // ""
QT_MOC_LITERAL(3, 50, 14), // "sourceFilePath"
QT_MOC_LITERAL(4, 65, 13), // "thumbnailPath"
QT_MOC_LITERAL(5, 79, 23), // "createThumbnailFinished"
QT_MOC_LITERAL(6, 103, 21) // "createThumbnailFailed"

    },
    "Dtk::Widget::DThumbnailProvider\0"
    "thumbnailChanged\0\0sourceFilePath\0"
    "thumbnailPath\0createThumbnailFinished\0"
    "createThumbnailFailed"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Dtk__Widget__DThumbnailProvider[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   29,    2, 0x06 /* Public */,
       5,    2,   34,    2, 0x06 /* Public */,
       6,    1,   39,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    3,    4,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    3,    4,
    QMetaType::Void, QMetaType::QString,    3,

       0        // eod
};

void Dtk::Widget::DThumbnailProvider::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<DThumbnailProvider *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->thumbnailChanged((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 1: _t->createThumbnailFinished((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 2: _t->createThumbnailFailed((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (DThumbnailProvider::*)(const QString & , const QString & ) const;
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DThumbnailProvider::thumbnailChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (DThumbnailProvider::*)(const QString & , const QString & ) const;
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DThumbnailProvider::createThumbnailFinished)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (DThumbnailProvider::*)(const QString & ) const;
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DThumbnailProvider::createThumbnailFailed)) {
                *result = 2;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Dtk::Widget::DThumbnailProvider::staticMetaObject = { {
    QMetaObject::SuperData::link<QThread::staticMetaObject>(),
    qt_meta_stringdata_Dtk__Widget__DThumbnailProvider.data,
    qt_meta_data_Dtk__Widget__DThumbnailProvider,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Dtk::Widget::DThumbnailProvider::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Dtk::Widget::DThumbnailProvider::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Dtk__Widget__DThumbnailProvider.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "Dtk::Core::DObject"))
        return static_cast< Dtk::Core::DObject*>(this);
    return QThread::qt_metacast(_clname);
}

int Dtk::Widget::DThumbnailProvider::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QThread::qt_metacall(_c, _id, _a);
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
void Dtk::Widget::DThumbnailProvider::thumbnailChanged(const QString & _t1, const QString & _t2)const
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(const_cast< Dtk::Widget::DThumbnailProvider *>(this), &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Dtk::Widget::DThumbnailProvider::createThumbnailFinished(const QString & _t1, const QString & _t2)const
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(const_cast< Dtk::Widget::DThumbnailProvider *>(this), &staticMetaObject, 1, _a);
}

// SIGNAL 2
void Dtk::Widget::DThumbnailProvider::createThumbnailFailed(const QString & _t1)const
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(const_cast< Dtk::Widget::DThumbnailProvider *>(this), &staticMetaObject, 2, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
