/****************************************************************************
** Meta object code from reading C++ file 'dshortcutedit.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "widgets/dshortcutedit.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'dshortcutedit.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Dtk__Widget__DShortcutEdit_t {
    QByteArrayData data[22];
    char stringdata0[311];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Dtk__Widget__DShortcutEdit_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Dtk__Widget__DShortcutEdit_t qt_meta_stringdata_Dtk__Widget__DShortcutEdit = {
    {
QT_MOC_LITERAL(0, 0, 26), // "Dtk::Widget::DShortcutEdit"
QT_MOC_LITERAL(1, 27, 19), // "shortcutKeysChanged"
QT_MOC_LITERAL(2, 47, 0), // ""
QT_MOC_LITERAL(3, 48, 12), // "shortcutKeys"
QT_MOC_LITERAL(4, 61, 20), // "shortcutKeysFinished"
QT_MOC_LITERAL(5, 82, 18), // "invalidShortcutKey"
QT_MOC_LITERAL(6, 101, 16), // "clearShortcutKey"
QT_MOC_LITERAL(7, 118, 14), // "setShortcutKey"
QT_MOC_LITERAL(8, 133, 3), // "key"
QT_MOC_LITERAL(9, 137, 13), // "setKeyMapping"
QT_MOC_LITERAL(10, 151, 21), // "QMap<QString,QString>"
QT_MOC_LITERAL(11, 173, 7), // "mapping"
QT_MOC_LITERAL(12, 181, 24), // "setBlockShortcutKeysList"
QT_MOC_LITERAL(13, 206, 14), // "QList<QRegExp>"
QT_MOC_LITERAL(14, 221, 5), // "kList"
QT_MOC_LITERAL(15, 227, 15), // "setInValidState"
QT_MOC_LITERAL(16, 243, 14), // "setNormalState"
QT_MOC_LITERAL(17, 258, 10), // "toEchoMode"
QT_MOC_LITERAL(18, 269, 11), // "toInputMode"
QT_MOC_LITERAL(19, 281, 16), // "shortcutKeyPress"
QT_MOC_LITERAL(20, 298, 10), // "QKeyEvent*"
QT_MOC_LITERAL(21, 309, 1) // "e"

    },
    "Dtk::Widget::DShortcutEdit\0"
    "shortcutKeysChanged\0\0shortcutKeys\0"
    "shortcutKeysFinished\0invalidShortcutKey\0"
    "clearShortcutKey\0setShortcutKey\0key\0"
    "setKeyMapping\0QMap<QString,QString>\0"
    "mapping\0setBlockShortcutKeysList\0"
    "QList<QRegExp>\0kList\0setInValidState\0"
    "setNormalState\0toEchoMode\0toInputMode\0"
    "shortcutKeyPress\0QKeyEvent*\0e"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Dtk__Widget__DShortcutEdit[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   74,    2, 0x06 /* Public */,
       4,    1,   77,    2, 0x06 /* Public */,
       5,    1,   80,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    0,   83,    2, 0x0a /* Public */,
       7,    1,   84,    2, 0x0a /* Public */,
       9,    1,   87,    2, 0x0a /* Public */,
      12,    1,   90,    2, 0x0a /* Public */,
      15,    0,   93,    2, 0x0a /* Public */,
      16,    0,   94,    2, 0x0a /* Public */,
      17,    0,   95,    2, 0x08 /* Private */,
      18,    0,   96,    2, 0x08 /* Private */,
      19,    1,   97,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    3,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    8,
    QMetaType::Void, 0x80000000 | 10,   11,
    QMetaType::Void, 0x80000000 | 13,   14,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 20,   21,

       0        // eod
};

void Dtk::Widget::DShortcutEdit::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<DShortcutEdit *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->shortcutKeysChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->shortcutKeysFinished((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->invalidShortcutKey((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->clearShortcutKey(); break;
        case 4: _t->setShortcutKey((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: _t->setKeyMapping((*reinterpret_cast< const QMap<QString,QString>(*)>(_a[1]))); break;
        case 6: _t->setBlockShortcutKeysList((*reinterpret_cast< const QList<QRegExp>(*)>(_a[1]))); break;
        case 7: _t->setInValidState(); break;
        case 8: _t->setNormalState(); break;
        case 9: _t->toEchoMode(); break;
        case 10: _t->toInputMode(); break;
        case 11: _t->shortcutKeyPress((*reinterpret_cast< QKeyEvent*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 6:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<QRegExp> >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (DShortcutEdit::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DShortcutEdit::shortcutKeysChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (DShortcutEdit::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DShortcutEdit::shortcutKeysFinished)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (DShortcutEdit::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DShortcutEdit::invalidShortcutKey)) {
                *result = 2;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Dtk::Widget::DShortcutEdit::staticMetaObject = { {
    QMetaObject::SuperData::link<QFrame::staticMetaObject>(),
    qt_meta_stringdata_Dtk__Widget__DShortcutEdit.data,
    qt_meta_data_Dtk__Widget__DShortcutEdit,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Dtk::Widget::DShortcutEdit::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Dtk::Widget::DShortcutEdit::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Dtk__Widget__DShortcutEdit.stringdata0))
        return static_cast<void*>(this);
    return QFrame::qt_metacast(_clname);
}

int Dtk::Widget::DShortcutEdit::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QFrame::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    }
    return _id;
}

// SIGNAL 0
void Dtk::Widget::DShortcutEdit::shortcutKeysChanged(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Dtk::Widget::DShortcutEdit::shortcutKeysFinished(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void Dtk::Widget::DShortcutEdit::invalidShortcutKey(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
struct qt_meta_stringdata_Dtk__Widget__DShortcutEditLabel_t {
    QByteArrayData data[6];
    char stringdata0[85];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Dtk__Widget__DShortcutEditLabel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Dtk__Widget__DShortcutEditLabel_t qt_meta_stringdata_Dtk__Widget__DShortcutEditLabel = {
    {
QT_MOC_LITERAL(0, 0, 31), // "Dtk::Widget::DShortcutEditLabel"
QT_MOC_LITERAL(1, 32, 18), // "colorSettingChange"
QT_MOC_LITERAL(2, 51, 0), // ""
QT_MOC_LITERAL(3, 52, 10), // "echoNormal"
QT_MOC_LITERAL(4, 63, 9), // "echoHover"
QT_MOC_LITERAL(5, 73, 11) // "echoInvalid"

    },
    "Dtk::Widget::DShortcutEditLabel\0"
    "colorSettingChange\0\0echoNormal\0echoHover\0"
    "echoInvalid"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Dtk__Widget__DShortcutEditLabel[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       3,   20, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   19,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,

 // properties: name, type, flags
       3, QMetaType::QColor, 0x00495003,
       4, QMetaType::QColor, 0x00495003,
       5, QMetaType::QColor, 0x00495003,

 // properties: notify_signal_id
       0,
       0,
       0,

       0        // eod
};

void Dtk::Widget::DShortcutEditLabel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<DShortcutEditLabel *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->colorSettingChange(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (DShortcutEditLabel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DShortcutEditLabel::colorSettingChange)) {
                *result = 0;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<DShortcutEditLabel *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QColor*>(_v) = _t->m_colorNormal; break;
        case 1: *reinterpret_cast< QColor*>(_v) = _t->m_colorHover; break;
        case 2: *reinterpret_cast< QColor*>(_v) = _t->m_colorInvalid; break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<DShortcutEditLabel *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0:
            if (_t->m_colorNormal != *reinterpret_cast< QColor*>(_v)) {
                _t->m_colorNormal = *reinterpret_cast< QColor*>(_v);
                Q_EMIT _t->colorSettingChange();
            }
            break;
        case 1:
            if (_t->m_colorHover != *reinterpret_cast< QColor*>(_v)) {
                _t->m_colorHover = *reinterpret_cast< QColor*>(_v);
                Q_EMIT _t->colorSettingChange();
            }
            break;
        case 2:
            if (_t->m_colorInvalid != *reinterpret_cast< QColor*>(_v)) {
                _t->m_colorInvalid = *reinterpret_cast< QColor*>(_v);
                Q_EMIT _t->colorSettingChange();
            }
            break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject Dtk::Widget::DShortcutEditLabel::staticMetaObject = { {
    QMetaObject::SuperData::link<QLabel::staticMetaObject>(),
    qt_meta_stringdata_Dtk__Widget__DShortcutEditLabel.data,
    qt_meta_data_Dtk__Widget__DShortcutEditLabel,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Dtk::Widget::DShortcutEditLabel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Dtk::Widget::DShortcutEditLabel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Dtk__Widget__DShortcutEditLabel.stringdata0))
        return static_cast<void*>(this);
    return QLabel::qt_metacast(_clname);
}

int Dtk::Widget::DShortcutEditLabel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QLabel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 3;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void Dtk::Widget::DShortcutEditLabel::colorSettingChange()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
