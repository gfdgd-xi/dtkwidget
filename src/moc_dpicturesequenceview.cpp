/****************************************************************************
** Meta object code from reading C++ file 'dpicturesequenceview.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "widgets/dpicturesequenceview.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'dpicturesequenceview.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Dtk__Widget__DPictureSequenceView_t {
    QByteArrayData data[7];
    char stringdata0[91];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Dtk__Widget__DPictureSequenceView_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Dtk__Widget__DPictureSequenceView_t qt_meta_stringdata_Dtk__Widget__DPictureSequenceView = {
    {
QT_MOC_LITERAL(0, 0, 33), // "Dtk::Widget::DPictureSequence..."
QT_MOC_LITERAL(1, 34, 12), // "speedChanged"
QT_MOC_LITERAL(2, 47, 0), // ""
QT_MOC_LITERAL(3, 48, 5), // "speed"
QT_MOC_LITERAL(4, 54, 7), // "playEnd"
QT_MOC_LITERAL(5, 62, 17), // "_q_refreshPicture"
QT_MOC_LITERAL(6, 80, 10) // "singleShot"

    },
    "Dtk::Widget::DPictureSequenceView\0"
    "speedChanged\0\0speed\0playEnd\0"
    "_q_refreshPicture\0singleShot"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Dtk__Widget__DPictureSequenceView[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       2,   34, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   29,    2, 0x06 /* Public */,
       4,    0,   32,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    0,   33,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,

 // properties: name, type, flags
       3, QMetaType::Int, 0x00495103,
       6, QMetaType::Bool, 0x00095103,

 // properties: notify_signal_id
       0,
       0,

       0        // eod
};

void Dtk::Widget::DPictureSequenceView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<DPictureSequenceView *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->speedChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->playEnd(); break;
        case 2: _t->d_func()->_q_refreshPicture(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (DPictureSequenceView::*)(int ) const;
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DPictureSequenceView::speedChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (DPictureSequenceView::*)() const;
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DPictureSequenceView::playEnd)) {
                *result = 1;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<DPictureSequenceView *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< int*>(_v) = _t->speed(); break;
        case 1: *reinterpret_cast< bool*>(_v) = _t->singleShot(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<DPictureSequenceView *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setSpeed(*reinterpret_cast< int*>(_v)); break;
        case 1: _t->setSingleShot(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject Dtk::Widget::DPictureSequenceView::staticMetaObject = { {
    QMetaObject::SuperData::link<QGraphicsView::staticMetaObject>(),
    qt_meta_stringdata_Dtk__Widget__DPictureSequenceView.data,
    qt_meta_data_Dtk__Widget__DPictureSequenceView,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Dtk::Widget::DPictureSequenceView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Dtk::Widget::DPictureSequenceView::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Dtk__Widget__DPictureSequenceView.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "Dtk::Core::DObject"))
        return static_cast< Dtk::Core::DObject*>(this);
    return QGraphicsView::qt_metacast(_clname);
}

int Dtk::Widget::DPictureSequenceView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QGraphicsView::qt_metacall(_c, _id, _a);
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
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
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

// SIGNAL 0
void Dtk::Widget::DPictureSequenceView::speedChanged(int _t1)const
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(const_cast< Dtk::Widget::DPictureSequenceView *>(this), &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Dtk::Widget::DPictureSequenceView::playEnd()const
{
    QMetaObject::activate(const_cast< Dtk::Widget::DPictureSequenceView *>(this), &staticMetaObject, 1, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
