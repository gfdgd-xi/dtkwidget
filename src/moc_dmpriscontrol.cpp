/****************************************************************************
** Meta object code from reading C++ file 'dmpriscontrol.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "widgets/dmpriscontrol.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'dmpriscontrol.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Dtk__Widget__DMPRISControl_t {
    QByteArrayData data[19];
    char stringdata0[300];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Dtk__Widget__DMPRISControl_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Dtk__Widget__DMPRISControl_t qt_meta_stringdata_Dtk__Widget__DMPRISControl = {
    {
QT_MOC_LITERAL(0, 0, 26), // "Dtk::Widget::DMPRISControl"
QT_MOC_LITERAL(1, 27, 13), // "mprisAcquired"
QT_MOC_LITERAL(2, 41, 0), // ""
QT_MOC_LITERAL(3, 42, 12), // "mprisChanged"
QT_MOC_LITERAL(4, 55, 11), // "mprisLosted"
QT_MOC_LITERAL(5, 67, 17), // "setPictureVisible"
QT_MOC_LITERAL(6, 85, 7), // "visible"
QT_MOC_LITERAL(7, 93, 14), // "setPictureSize"
QT_MOC_LITERAL(8, 108, 4), // "size"
QT_MOC_LITERAL(9, 113, 20), // "_q_onMetaDataChanged"
QT_MOC_LITERAL(10, 134, 26), // "_q_onPlaybackStatusChanged"
QT_MOC_LITERAL(11, 161, 16), // "_q_onPrevClicked"
QT_MOC_LITERAL(12, 178, 16), // "_q_onPlayClicked"
QT_MOC_LITERAL(13, 195, 17), // "_q_onPauseClicked"
QT_MOC_LITERAL(14, 213, 16), // "_q_onNextClicked"
QT_MOC_LITERAL(15, 230, 16), // "_q_loadMPRISPath"
QT_MOC_LITERAL(16, 247, 18), // "_q_removeMPRISPath"
QT_MOC_LITERAL(17, 266, 22), // "_q_onCanControlChanged"
QT_MOC_LITERAL(18, 289, 10) // "canControl"

    },
    "Dtk::Widget::DMPRISControl\0mprisAcquired\0"
    "\0mprisChanged\0mprisLosted\0setPictureVisible\0"
    "visible\0setPictureSize\0size\0"
    "_q_onMetaDataChanged\0_q_onPlaybackStatusChanged\0"
    "_q_onPrevClicked\0_q_onPlayClicked\0"
    "_q_onPauseClicked\0_q_onNextClicked\0"
    "_q_loadMPRISPath\0_q_removeMPRISPath\0"
    "_q_onCanControlChanged\0canControl"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Dtk__Widget__DMPRISControl[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   84,    2, 0x06 /* Public */,
       3,    0,   85,    2, 0x06 /* Public */,
       4,    0,   86,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    1,   87,    2, 0x0a /* Public */,
       7,    1,   90,    2, 0x0a /* Public */,
       9,    0,   93,    2, 0x09 /* Protected */,
      10,    0,   94,    2, 0x09 /* Protected */,
      11,    0,   95,    2, 0x09 /* Protected */,
      12,    0,   96,    2, 0x09 /* Protected */,
      13,    0,   97,    2, 0x09 /* Protected */,
      14,    0,   98,    2, 0x09 /* Protected */,
      15,    1,   99,    2, 0x09 /* Protected */,
      16,    1,  102,    2, 0x09 /* Protected */,
      17,    1,  105,    2, 0x09 /* Protected */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    6,
    QMetaType::Void, QMetaType::QSize,    8,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::Bool,   18,

       0        // eod
};

void Dtk::Widget::DMPRISControl::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<DMPRISControl *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->mprisAcquired(); break;
        case 1: _t->mprisChanged(); break;
        case 2: _t->mprisLosted(); break;
        case 3: _t->setPictureVisible((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->setPictureSize((*reinterpret_cast< const QSize(*)>(_a[1]))); break;
        case 5: _t->d_func()->_q_onMetaDataChanged(); break;
        case 6: _t->d_func()->_q_onPlaybackStatusChanged(); break;
        case 7: _t->d_func()->_q_onPrevClicked(); break;
        case 8: _t->d_func()->_q_onPlayClicked(); break;
        case 9: _t->d_func()->_q_onPauseClicked(); break;
        case 10: _t->d_func()->_q_onNextClicked(); break;
        case 11: _t->d_func()->_q_loadMPRISPath((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 12: _t->d_func()->_q_removeMPRISPath((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 13: _t->d_func()->_q_onCanControlChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (DMPRISControl::*)() const;
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DMPRISControl::mprisAcquired)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (DMPRISControl::*)() const;
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DMPRISControl::mprisChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (DMPRISControl::*)() const;
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DMPRISControl::mprisLosted)) {
                *result = 2;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Dtk::Widget::DMPRISControl::staticMetaObject = { {
    QMetaObject::SuperData::link<QFrame::staticMetaObject>(),
    qt_meta_stringdata_Dtk__Widget__DMPRISControl.data,
    qt_meta_data_Dtk__Widget__DMPRISControl,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Dtk::Widget::DMPRISControl::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Dtk::Widget::DMPRISControl::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Dtk__Widget__DMPRISControl.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "Dtk::Core::DObject"))
        return static_cast< Dtk::Core::DObject*>(this);
    return QFrame::qt_metacast(_clname);
}

int Dtk::Widget::DMPRISControl::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QFrame::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 14)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 14;
    }
    return _id;
}

// SIGNAL 0
void Dtk::Widget::DMPRISControl::mprisAcquired()const
{
    QMetaObject::activate(const_cast< Dtk::Widget::DMPRISControl *>(this), &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void Dtk::Widget::DMPRISControl::mprisChanged()const
{
    QMetaObject::activate(const_cast< Dtk::Widget::DMPRISControl *>(this), &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void Dtk::Widget::DMPRISControl::mprisLosted()const
{
    QMetaObject::activate(const_cast< Dtk::Widget::DMPRISControl *>(this), &staticMetaObject, 2, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
