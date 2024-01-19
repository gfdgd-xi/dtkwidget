/****************************************************************************
** Meta object code from reading C++ file 'dipv4lineedit.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "widgets/dipv4lineedit.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'dipv4lineedit.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Dtk__Widget__DIpv4LineEdit_t {
    QByteArrayData data[19];
    char stringdata0[261];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Dtk__Widget__DIpv4LineEdit_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Dtk__Widget__DIpv4LineEdit_t qt_meta_stringdata_Dtk__Widget__DIpv4LineEdit = {
    {
QT_MOC_LITERAL(0, 0, 26), // "Dtk::Widget::DIpv4LineEdit"
QT_MOC_LITERAL(1, 27, 17), // "setCursorPosition"
QT_MOC_LITERAL(2, 45, 0), // ""
QT_MOC_LITERAL(3, 46, 14), // "cursorPosition"
QT_MOC_LITERAL(4, 61, 11), // "setReadOnly"
QT_MOC_LITERAL(5, 73, 8), // "readOnly"
QT_MOC_LITERAL(6, 82, 12), // "setSelection"
QT_MOC_LITERAL(7, 95, 5), // "start"
QT_MOC_LITERAL(8, 101, 6), // "length"
QT_MOC_LITERAL(9, 108, 9), // "selectAll"
QT_MOC_LITERAL(10, 118, 21), // "_q_updateLineEditText"
QT_MOC_LITERAL(11, 140, 20), // "_q_setIpLineEditText"
QT_MOC_LITERAL(12, 161, 11), // "displayText"
QT_MOC_LITERAL(13, 173, 9), // "alignment"
QT_MOC_LITERAL(14, 183, 13), // "Qt::Alignment"
QT_MOC_LITERAL(15, 197, 12), // "selectedText"
QT_MOC_LITERAL(16, 210, 15), // "acceptableInput"
QT_MOC_LITERAL(17, 226, 15), // "placeholderText"
QT_MOC_LITERAL(18, 242, 18) // "clearButtonEnabled"

    },
    "Dtk::Widget::DIpv4LineEdit\0setCursorPosition\0"
    "\0cursorPosition\0setReadOnly\0readOnly\0"
    "setSelection\0start\0length\0selectAll\0"
    "_q_updateLineEditText\0_q_setIpLineEditText\0"
    "displayText\0alignment\0Qt::Alignment\0"
    "selectedText\0acceptableInput\0"
    "placeholderText\0clearButtonEnabled"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Dtk__Widget__DIpv4LineEdit[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       8,   60, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   44,    2, 0x0a /* Public */,
       4,    1,   47,    2, 0x0a /* Public */,
       6,    2,   50,    2, 0x0a /* Public */,
       9,    0,   55,    2, 0x0a /* Public */,
      10,    0,   56,    2, 0x08 /* Private */,
      11,    1,   57,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Bool,    5,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    7,    8,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    2,

 // properties: name, type, flags
      12, QMetaType::QString, 0x00095001,
       3, QMetaType::Int, 0x00095103,
      13, 0x80000000 | 14, 0x00095009,
      15, QMetaType::QString, 0x00095001,
      16, QMetaType::Bool, 0x00095001,
       5, QMetaType::Bool, 0x00095103,
      17, QMetaType::QString, 0x00095001,
      18, QMetaType::Bool, 0x00095001,

       0        // eod
};

void Dtk::Widget::DIpv4LineEdit::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<DIpv4LineEdit *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->setCursorPosition((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->setReadOnly((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->setSelection((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 3: _t->selectAll(); break;
        case 4: _t->d_func()->_q_updateLineEditText(); break;
        case 5: _t->d_func()->_q_setIpLineEditText((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<DIpv4LineEdit *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->displayText(); break;
        case 1: *reinterpret_cast< int*>(_v) = _t->cursorPosition(); break;
        case 2: *reinterpret_cast< Qt::Alignment*>(_v) = _t->alignment(); break;
        case 3: *reinterpret_cast< QString*>(_v) = _t->selectedText(); break;
        case 4: *reinterpret_cast< bool*>(_v) = _t->hasAcceptableInput(); break;
        case 5: *reinterpret_cast< bool*>(_v) = _t->isReadOnly(); break;
        case 6: *reinterpret_cast< QString*>(_v) = _t->placeholderText(); break;
        case 7: *reinterpret_cast< bool*>(_v) = _t->isClearButtonEnabled(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<DIpv4LineEdit *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 1: _t->setCursorPosition(*reinterpret_cast< int*>(_v)); break;
        case 5: _t->setReadOnly(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject Dtk::Widget::DIpv4LineEdit::staticMetaObject = { {
    QMetaObject::SuperData::link<DLineEdit::staticMetaObject>(),
    qt_meta_stringdata_Dtk__Widget__DIpv4LineEdit.data,
    qt_meta_data_Dtk__Widget__DIpv4LineEdit,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Dtk::Widget::DIpv4LineEdit::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Dtk::Widget::DIpv4LineEdit::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Dtk__Widget__DIpv4LineEdit.stringdata0))
        return static_cast<void*>(this);
    return DLineEdit::qt_metacast(_clname);
}

int Dtk::Widget::DIpv4LineEdit::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = DLineEdit::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 8;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 8;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 8;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 8;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 8;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
