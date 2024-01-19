/****************************************************************************
** Meta object code from reading C++ file 'dbuttonlist.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "widgets/dbuttonlist.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'dbuttonlist.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Dtk__Widget__DIconButton_t {
    QByteArrayData data[5];
    char stringdata0[57];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Dtk__Widget__DIconButton_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Dtk__Widget__DIconButton_t qt_meta_stringdata_Dtk__Widget__DIconButton = {
    {
QT_MOC_LITERAL(0, 0, 24), // "Dtk::Widget::DIconButton"
QT_MOC_LITERAL(1, 25, 12), // "mouseEntered"
QT_MOC_LITERAL(2, 38, 0), // ""
QT_MOC_LITERAL(3, 39, 5), // "label"
QT_MOC_LITERAL(4, 45, 11) // "mouseLeaved"

    },
    "Dtk::Widget::DIconButton\0mouseEntered\0"
    "\0label\0mouseLeaved"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Dtk__Widget__DIconButton[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   24,    2, 0x06 /* Public */,
       4,    1,   27,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    3,

       0        // eod
};

void Dtk::Widget::DIconButton::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<DIconButton *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->mouseEntered((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->mouseLeaved((*reinterpret_cast< QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (DIconButton::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DIconButton::mouseEntered)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (DIconButton::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DIconButton::mouseLeaved)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Dtk::Widget::DIconButton::staticMetaObject = { {
    QMetaObject::SuperData::link<QPushButton::staticMetaObject>(),
    qt_meta_stringdata_Dtk__Widget__DIconButton.data,
    qt_meta_data_Dtk__Widget__DIconButton,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Dtk::Widget::DIconButton::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Dtk::Widget::DIconButton::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Dtk__Widget__DIconButton.stringdata0))
        return static_cast<void*>(this);
    return QPushButton::qt_metacast(_clname);
}

int Dtk::Widget::DIconButton::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QPushButton::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void Dtk::Widget::DIconButton::mouseEntered(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Dtk::Widget::DIconButton::mouseLeaved(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
struct qt_meta_stringdata_Dtk__Widget__DButtonList_t {
    QByteArrayData data[21];
    char stringdata0[249];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Dtk__Widget__DButtonList_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Dtk__Widget__DButtonList_t qt_meta_stringdata_Dtk__Widget__DButtonList = {
    {
QT_MOC_LITERAL(0, 0, 24), // "Dtk::Widget::DButtonList"
QT_MOC_LITERAL(1, 25, 13), // "buttonChecked"
QT_MOC_LITERAL(2, 39, 0), // ""
QT_MOC_LITERAL(3, 40, 5), // "label"
QT_MOC_LITERAL(4, 46, 25), // "buttonCheckedIndexChanged"
QT_MOC_LITERAL(5, 72, 5), // "index"
QT_MOC_LITERAL(6, 78, 18), // "buttonMouseEntered"
QT_MOC_LITERAL(7, 97, 17), // "buttonMouseLeaved"
QT_MOC_LITERAL(8, 115, 9), // "addButton"
QT_MOC_LITERAL(9, 125, 10), // "addButtons"
QT_MOC_LITERAL(10, 136, 10), // "listLabels"
QT_MOC_LITERAL(11, 147, 13), // "setItemHeight"
QT_MOC_LITERAL(12, 161, 6), // "height"
QT_MOC_LITERAL(13, 168, 12), // "setItemWidth"
QT_MOC_LITERAL(14, 181, 5), // "width"
QT_MOC_LITERAL(15, 187, 11), // "setItemSize"
QT_MOC_LITERAL(16, 199, 4), // "size"
QT_MOC_LITERAL(17, 204, 18), // "checkButtonByIndex"
QT_MOC_LITERAL(18, 223, 5), // "clear"
QT_MOC_LITERAL(19, 229, 16), // "setButtonChecked"
QT_MOC_LITERAL(20, 246, 2) // "id"

    },
    "Dtk::Widget::DButtonList\0buttonChecked\0"
    "\0label\0buttonCheckedIndexChanged\0index\0"
    "buttonMouseEntered\0buttonMouseLeaved\0"
    "addButton\0addButtons\0listLabels\0"
    "setItemHeight\0height\0setItemWidth\0"
    "width\0setItemSize\0size\0checkButtonByIndex\0"
    "clear\0setButtonChecked\0id"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Dtk__Widget__DButtonList[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   84,    2, 0x06 /* Public */,
       4,    1,   87,    2, 0x06 /* Public */,
       6,    1,   90,    2, 0x06 /* Public */,
       7,    1,   93,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       8,    1,   96,    2, 0x0a /* Public */,
       8,    2,   99,    2, 0x0a /* Public */,
       9,    1,  104,    2, 0x0a /* Public */,
      11,    1,  107,    2, 0x0a /* Public */,
      13,    1,  110,    2, 0x0a /* Public */,
      15,    2,  113,    2, 0x0a /* Public */,
      15,    1,  118,    2, 0x0a /* Public */,
      17,    1,  121,    2, 0x0a /* Public */,
      18,    0,  124,    2, 0x0a /* Public */,
      19,    1,  125,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    3,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString, QMetaType::Int,    3,    5,
    QMetaType::Void, QMetaType::QStringList,   10,
    QMetaType::Void, QMetaType::Int,   12,
    QMetaType::Void, QMetaType::Int,   14,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   14,   12,
    QMetaType::Void, QMetaType::QSize,   16,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   20,

       0        // eod
};

void Dtk::Widget::DButtonList::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<DButtonList *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->buttonChecked((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->buttonCheckedIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->buttonMouseEntered((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 3: _t->buttonMouseLeaved((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 4: _t->addButton((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: _t->addButton((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 6: _t->addButtons((*reinterpret_cast< const QStringList(*)>(_a[1]))); break;
        case 7: _t->setItemHeight((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->setItemWidth((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 9: _t->setItemSize((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 10: _t->setItemSize((*reinterpret_cast< QSize(*)>(_a[1]))); break;
        case 11: _t->checkButtonByIndex((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 12: _t->clear(); break;
        case 13: _t->setButtonChecked((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (DButtonList::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DButtonList::buttonChecked)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (DButtonList::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DButtonList::buttonCheckedIndexChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (DButtonList::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DButtonList::buttonMouseEntered)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (DButtonList::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DButtonList::buttonMouseLeaved)) {
                *result = 3;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Dtk::Widget::DButtonList::staticMetaObject = { {
    QMetaObject::SuperData::link<QListWidget::staticMetaObject>(),
    qt_meta_stringdata_Dtk__Widget__DButtonList.data,
    qt_meta_data_Dtk__Widget__DButtonList,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Dtk::Widget::DButtonList::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Dtk::Widget::DButtonList::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Dtk__Widget__DButtonList.stringdata0))
        return static_cast<void*>(this);
    return QListWidget::qt_metacast(_clname);
}

int Dtk::Widget::DButtonList::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QListWidget::qt_metacall(_c, _id, _a);
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
void Dtk::Widget::DButtonList::buttonChecked(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Dtk::Widget::DButtonList::buttonCheckedIndexChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void Dtk::Widget::DButtonList::buttonMouseEntered(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void Dtk::Widget::DButtonList::buttonMouseLeaved(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
