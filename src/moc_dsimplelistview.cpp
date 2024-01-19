/****************************************************************************
** Meta object code from reading C++ file 'dsimplelistview.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "widgets/dsimplelistview.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'dsimplelistview.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Dtk__Widget__DSimpleListView_t {
    QByteArrayData data[23];
    char stringdata0[310];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Dtk__Widget__DSimpleListView_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Dtk__Widget__DSimpleListView_t qt_meta_stringdata_Dtk__Widget__DSimpleListView = {
    {
QT_MOC_LITERAL(0, 0, 28), // "Dtk::Widget::DSimpleListView"
QT_MOC_LITERAL(1, 29, 15), // "rightClickItems"
QT_MOC_LITERAL(2, 45, 0), // ""
QT_MOC_LITERAL(3, 46, 3), // "pos"
QT_MOC_LITERAL(4, 50, 23), // "QList<DSimpleListItem*>"
QT_MOC_LITERAL(5, 74, 5), // "items"
QT_MOC_LITERAL(6, 80, 19), // "changeColumnVisible"
QT_MOC_LITERAL(7, 100, 5), // "index"
QT_MOC_LITERAL(8, 106, 7), // "visible"
QT_MOC_LITERAL(9, 114, 11), // "QList<bool>"
QT_MOC_LITERAL(10, 126, 14), // "columnVisibles"
QT_MOC_LITERAL(11, 141, 19), // "changeSortingStatus"
QT_MOC_LITERAL(12, 161, 12), // "sortingOrder"
QT_MOC_LITERAL(13, 174, 15), // "changeHoverItem"
QT_MOC_LITERAL(14, 190, 16), // "DSimpleListItem*"
QT_MOC_LITERAL(15, 207, 4), // "item"
QT_MOC_LITERAL(16, 212, 11), // "columnIndex"
QT_MOC_LITERAL(17, 224, 17), // "mouseHoverChanged"
QT_MOC_LITERAL(18, 242, 7), // "oldItem"
QT_MOC_LITERAL(19, 250, 7), // "newItem"
QT_MOC_LITERAL(20, 258, 17), // "mousePressChanged"
QT_MOC_LITERAL(21, 276, 19), // "mouseReleaseChanged"
QT_MOC_LITERAL(22, 296, 13) // "hideScrollbar"

    },
    "Dtk::Widget::DSimpleListView\0"
    "rightClickItems\0\0pos\0QList<DSimpleListItem*>\0"
    "items\0changeColumnVisible\0index\0visible\0"
    "QList<bool>\0columnVisibles\0"
    "changeSortingStatus\0sortingOrder\0"
    "changeHoverItem\0DSimpleListItem*\0item\0"
    "columnIndex\0mouseHoverChanged\0oldItem\0"
    "newItem\0mousePressChanged\0mouseReleaseChanged\0"
    "hideScrollbar"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Dtk__Widget__DSimpleListView[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       7,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   54,    2, 0x06 /* Public */,
       6,    3,   59,    2, 0x06 /* Public */,
      11,    2,   66,    2, 0x06 /* Public */,
      13,    3,   71,    2, 0x06 /* Public */,
      17,    4,   78,    2, 0x06 /* Public */,
      20,    3,   87,    2, 0x06 /* Public */,
      21,    3,   94,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      22,    0,  101,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QPoint, 0x80000000 | 4,    3,    5,
    QMetaType::Void, QMetaType::Int, QMetaType::Bool, 0x80000000 | 9,    7,    8,   10,
    QMetaType::Void, QMetaType::Int, QMetaType::Bool,    7,   12,
    QMetaType::Void, QMetaType::QPoint, 0x80000000 | 14, QMetaType::Int,    3,   15,   16,
    QMetaType::Void, 0x80000000 | 14, 0x80000000 | 14, QMetaType::Int, QMetaType::QPoint,   18,   19,   16,    3,
    QMetaType::Void, 0x80000000 | 14, QMetaType::Int, QMetaType::QPoint,   15,   16,    3,
    QMetaType::Void, 0x80000000 | 14, QMetaType::Int, QMetaType::QPoint,   15,   16,    3,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void Dtk::Widget::DSimpleListView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<DSimpleListView *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->rightClickItems((*reinterpret_cast< QPoint(*)>(_a[1])),(*reinterpret_cast< QList<DSimpleListItem*>(*)>(_a[2]))); break;
        case 1: _t->changeColumnVisible((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< QList<bool>(*)>(_a[3]))); break;
        case 2: _t->changeSortingStatus((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 3: _t->changeHoverItem((*reinterpret_cast< QPoint(*)>(_a[1])),(*reinterpret_cast< DSimpleListItem*(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 4: _t->mouseHoverChanged((*reinterpret_cast< DSimpleListItem*(*)>(_a[1])),(*reinterpret_cast< DSimpleListItem*(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< QPoint(*)>(_a[4]))); break;
        case 5: _t->mousePressChanged((*reinterpret_cast< DSimpleListItem*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< QPoint(*)>(_a[3]))); break;
        case 6: _t->mouseReleaseChanged((*reinterpret_cast< DSimpleListItem*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< QPoint(*)>(_a[3]))); break;
        case 7: _t->hideScrollbar(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<DSimpleListItem*> >(); break;
            }
            break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 2:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<bool> >(); break;
            }
            break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< DSimpleListItem* >(); break;
            }
            break;
        case 4:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< DSimpleListItem* >(); break;
            }
            break;
        case 5:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< DSimpleListItem* >(); break;
            }
            break;
        case 6:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< DSimpleListItem* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (DSimpleListView::*)(QPoint , QList<DSimpleListItem*> );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DSimpleListView::rightClickItems)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (DSimpleListView::*)(int , bool , QList<bool> );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DSimpleListView::changeColumnVisible)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (DSimpleListView::*)(int , bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DSimpleListView::changeSortingStatus)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (DSimpleListView::*)(QPoint , DSimpleListItem * , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DSimpleListView::changeHoverItem)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (DSimpleListView::*)(DSimpleListItem * , DSimpleListItem * , int , QPoint );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DSimpleListView::mouseHoverChanged)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (DSimpleListView::*)(DSimpleListItem * , int , QPoint );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DSimpleListView::mousePressChanged)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (DSimpleListView::*)(DSimpleListItem * , int , QPoint );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DSimpleListView::mouseReleaseChanged)) {
                *result = 6;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Dtk::Widget::DSimpleListView::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_Dtk__Widget__DSimpleListView.data,
    qt_meta_data_Dtk__Widget__DSimpleListView,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Dtk::Widget::DSimpleListView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Dtk::Widget::DSimpleListView::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Dtk__Widget__DSimpleListView.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "Dtk::Core::DObject"))
        return static_cast< Dtk::Core::DObject*>(this);
    return QWidget::qt_metacast(_clname);
}

int Dtk::Widget::DSimpleListView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void Dtk::Widget::DSimpleListView::rightClickItems(QPoint _t1, QList<DSimpleListItem*> _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Dtk::Widget::DSimpleListView::changeColumnVisible(int _t1, bool _t2, QList<bool> _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void Dtk::Widget::DSimpleListView::changeSortingStatus(int _t1, bool _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void Dtk::Widget::DSimpleListView::changeHoverItem(QPoint _t1, DSimpleListItem * _t2, int _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void Dtk::Widget::DSimpleListView::mouseHoverChanged(DSimpleListItem * _t1, DSimpleListItem * _t2, int _t3, QPoint _t4)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t4))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void Dtk::Widget::DSimpleListView::mousePressChanged(DSimpleListItem * _t1, int _t2, QPoint _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void Dtk::Widget::DSimpleListView::mouseReleaseChanged(DSimpleListItem * _t1, int _t2, QPoint _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
