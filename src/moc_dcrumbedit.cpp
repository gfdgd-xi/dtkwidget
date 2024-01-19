/****************************************************************************
** Meta object code from reading C++ file 'dcrumbedit.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "widgets/dcrumbedit.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'dcrumbedit.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Dtk__Widget__DCrumbEdit_t {
    QByteArrayData data[18];
    char stringdata0[268];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Dtk__Widget__DCrumbEdit_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Dtk__Widget__DCrumbEdit_t qt_meta_stringdata_Dtk__Widget__DCrumbEdit = {
    {
QT_MOC_LITERAL(0, 0, 23), // "Dtk::Widget::DCrumbEdit"
QT_MOC_LITERAL(1, 24, 10), // "crumbAdded"
QT_MOC_LITERAL(2, 35, 0), // ""
QT_MOC_LITERAL(3, 36, 4), // "text"
QT_MOC_LITERAL(4, 41, 12), // "crumbRemoved"
QT_MOC_LITERAL(5, 54, 16), // "crumbListChanged"
QT_MOC_LITERAL(6, 71, 16), // "setCrumbReadOnly"
QT_MOC_LITERAL(7, 88, 13), // "crumbReadOnly"
QT_MOC_LITERAL(8, 102, 14), // "setCrumbRadius"
QT_MOC_LITERAL(9, 117, 11), // "crumbRadius"
QT_MOC_LITERAL(10, 129, 11), // "setSplitter"
QT_MOC_LITERAL(11, 141, 8), // "splitter"
QT_MOC_LITERAL(12, 150, 21), // "setDualClickMakeCrumb"
QT_MOC_LITERAL(13, 172, 4), // "flag"
QT_MOC_LITERAL(14, 177, 26), // "_q_onDocumentLayoutChanged"
QT_MOC_LITERAL(15, 204, 27), // "_q_onCurrentPositionChanged"
QT_MOC_LITERAL(16, 232, 16), // "_q_onTextChanged"
QT_MOC_LITERAL(17, 249, 18) // "dualClickMakeCrumb"

    },
    "Dtk::Widget::DCrumbEdit\0crumbAdded\0\0"
    "text\0crumbRemoved\0crumbListChanged\0"
    "setCrumbReadOnly\0crumbReadOnly\0"
    "setCrumbRadius\0crumbRadius\0setSplitter\0"
    "splitter\0setDualClickMakeCrumb\0flag\0"
    "_q_onDocumentLayoutChanged\0"
    "_q_onCurrentPositionChanged\0"
    "_q_onTextChanged\0dualClickMakeCrumb"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Dtk__Widget__DCrumbEdit[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       4,   86, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   64,    2, 0x06 /* Public */,
       4,    1,   67,    2, 0x06 /* Public */,
       5,    0,   70,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    1,   71,    2, 0x0a /* Public */,
       8,    1,   74,    2, 0x0a /* Public */,
      10,    1,   77,    2, 0x0a /* Public */,
      12,    1,   80,    2, 0x0a /* Public */,
      14,    0,   83,    2, 0x08 /* Private */,
      15,    0,   84,    2, 0x08 /* Private */,
      16,    0,   85,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    7,
    QMetaType::Void, QMetaType::Int,    9,
    QMetaType::Void, QMetaType::QString,   11,
    QMetaType::Void, QMetaType::Bool,   13,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
       7, QMetaType::Bool, 0x00095103,
       9, QMetaType::Int, 0x00095103,
      11, QMetaType::QString, 0x00095103,
      17, QMetaType::Bool, 0x00095103,

       0        // eod
};

void Dtk::Widget::DCrumbEdit::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<DCrumbEdit *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->crumbAdded((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->crumbRemoved((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->crumbListChanged(); break;
        case 3: _t->setCrumbReadOnly((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->setCrumbRadius((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->setSplitter((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 6: _t->setDualClickMakeCrumb((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: _t->d_func()->_q_onDocumentLayoutChanged(); break;
        case 8: _t->d_func()->_q_onCurrentPositionChanged(); break;
        case 9: _t->d_func()->_q_onTextChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (DCrumbEdit::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DCrumbEdit::crumbAdded)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (DCrumbEdit::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DCrumbEdit::crumbRemoved)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (DCrumbEdit::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DCrumbEdit::crumbListChanged)) {
                *result = 2;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<DCrumbEdit *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = _t->crumbReadOnly(); break;
        case 1: *reinterpret_cast< int*>(_v) = _t->crumbRadius(); break;
        case 2: *reinterpret_cast< QString*>(_v) = _t->splitter(); break;
        case 3: *reinterpret_cast< bool*>(_v) = _t->dualClickMakeCrumb(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<DCrumbEdit *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setCrumbReadOnly(*reinterpret_cast< bool*>(_v)); break;
        case 1: _t->setCrumbRadius(*reinterpret_cast< int*>(_v)); break;
        case 2: _t->setSplitter(*reinterpret_cast< QString*>(_v)); break;
        case 3: _t->setDualClickMakeCrumb(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject Dtk::Widget::DCrumbEdit::staticMetaObject = { {
    QMetaObject::SuperData::link<QTextEdit::staticMetaObject>(),
    qt_meta_stringdata_Dtk__Widget__DCrumbEdit.data,
    qt_meta_data_Dtk__Widget__DCrumbEdit,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Dtk::Widget::DCrumbEdit::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Dtk::Widget::DCrumbEdit::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Dtk__Widget__DCrumbEdit.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "Core::DObject"))
        return static_cast< Core::DObject*>(this);
    return QTextEdit::qt_metacast(_clname);
}

int Dtk::Widget::DCrumbEdit::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QTextEdit::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 10;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 4;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void Dtk::Widget::DCrumbEdit::crumbAdded(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Dtk::Widget::DCrumbEdit::crumbRemoved(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void Dtk::Widget::DCrumbEdit::crumbListChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
