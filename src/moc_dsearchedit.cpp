/****************************************************************************
** Meta object code from reading C++ file 'dsearchedit.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "widgets/dsearchedit.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'dsearchedit.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Dtk__Widget__DSearchEdit_t {
    QByteArrayData data[12];
    char stringdata0[130];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Dtk__Widget__DSearchEdit_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Dtk__Widget__DSearchEdit_t qt_meta_stringdata_Dtk__Widget__DSearchEdit = {
    {
QT_MOC_LITERAL(0, 0, 24), // "Dtk::Widget::DSearchEdit"
QT_MOC_LITERAL(1, 25, 11), // "textChanged"
QT_MOC_LITERAL(2, 37, 0), // ""
QT_MOC_LITERAL(3, 38, 13), // "returnPressed"
QT_MOC_LITERAL(4, 52, 15), // "editingFinished"
QT_MOC_LITERAL(5, 68, 8), // "focusOut"
QT_MOC_LITERAL(6, 77, 7), // "focusIn"
QT_MOC_LITERAL(7, 85, 7), // "setText"
QT_MOC_LITERAL(8, 93, 4), // "text"
QT_MOC_LITERAL(9, 98, 5), // "clear"
QT_MOC_LITERAL(10, 104, 14), // "setPlaceHolder"
QT_MOC_LITERAL(11, 119, 10) // "toEditMode"

    },
    "Dtk::Widget::DSearchEdit\0textChanged\0"
    "\0returnPressed\0editingFinished\0focusOut\0"
    "focusIn\0setText\0text\0clear\0setPlaceHolder\0"
    "toEditMode"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Dtk__Widget__DSearchEdit[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   59,    2, 0x06 /* Public */,
       3,    0,   60,    2, 0x06 /* Public */,
       4,    0,   61,    2, 0x06 /* Public */,
       5,    0,   62,    2, 0x06 /* Public */,
       6,    0,   63,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    1,   64,    2, 0x0a /* Public */,
       9,    0,   67,    2, 0x0a /* Public */,
      10,    1,   68,    2, 0x0a /* Public */,
      11,    0,   71,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    8,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    8,
    QMetaType::Void,

       0        // eod
};

void Dtk::Widget::DSearchEdit::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<DSearchEdit *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->textChanged(); break;
        case 1: _t->returnPressed(); break;
        case 2: _t->editingFinished(); break;
        case 3: _t->focusOut(); break;
        case 4: _t->focusIn(); break;
        case 5: _t->setText((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 6: _t->clear(); break;
        case 7: _t->setPlaceHolder((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 8: _t->toEditMode(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (DSearchEdit::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DSearchEdit::textChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (DSearchEdit::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DSearchEdit::returnPressed)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (DSearchEdit::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DSearchEdit::editingFinished)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (DSearchEdit::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DSearchEdit::focusOut)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (DSearchEdit::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DSearchEdit::focusIn)) {
                *result = 4;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Dtk::Widget::DSearchEdit::staticMetaObject = { {
    QMetaObject::SuperData::link<QFrame::staticMetaObject>(),
    qt_meta_stringdata_Dtk__Widget__DSearchEdit.data,
    qt_meta_data_Dtk__Widget__DSearchEdit,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Dtk::Widget::DSearchEdit::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Dtk::Widget::DSearchEdit::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Dtk__Widget__DSearchEdit.stringdata0))
        return static_cast<void*>(this);
    return QFrame::qt_metacast(_clname);
}

int Dtk::Widget::DSearchEdit::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QFrame::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 9;
    }
    return _id;
}

// SIGNAL 0
void Dtk::Widget::DSearchEdit::textChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void Dtk::Widget::DSearchEdit::returnPressed()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void Dtk::Widget::DSearchEdit::editingFinished()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void Dtk::Widget::DSearchEdit::focusOut()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void Dtk::Widget::DSearchEdit::focusIn()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
