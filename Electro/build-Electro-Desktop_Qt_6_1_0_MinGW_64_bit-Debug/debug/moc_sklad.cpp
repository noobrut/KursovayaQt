/****************************************************************************
** Meta object code from reading C++ file 'sklad.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.1.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../Electro/sklad.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'sklad.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.1.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Sklad_t {
    const uint offsetsAndSize[32];
    char stringdata0[305];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_Sklad_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_Sklad_t qt_meta_stringdata_Sklad = {
    {
QT_MOC_LITERAL(0, 5), // "Sklad"
QT_MOC_LITERAL(6, 20), // "on_showBuyer_clicked"
QT_MOC_LITERAL(27, 0), // ""
QT_MOC_LITERAL(28, 25), // "on_showDeliveries_clicked"
QT_MOC_LITERAL(54, 22), // "on_showIssuing_clicked"
QT_MOC_LITERAL(77, 22), // "on_showProduct_clicked"
QT_MOC_LITERAL(100, 23), // "on_showProvider_clicked"
QT_MOC_LITERAL(124, 21), // "on_showWorker_clicked"
QT_MOC_LITERAL(146, 20), // "on_addButton_clicked"
QT_MOC_LITERAL(167, 21), // "on_editButton_clicked"
QT_MOC_LITERAL(189, 23), // "on_deleteButton_clicked"
QT_MOC_LITERAL(213, 26), // "on_tableView_doubleClicked"
QT_MOC_LITERAL(240, 11), // "QModelIndex"
QT_MOC_LITERAL(252, 5), // "index"
QT_MOC_LITERAL(258, 24), // "on_reportButtone_clicked"
QT_MOC_LITERAL(283, 21) // "on_pushButton_clicked"

    },
    "Sklad\0on_showBuyer_clicked\0\0"
    "on_showDeliveries_clicked\0"
    "on_showIssuing_clicked\0on_showProduct_clicked\0"
    "on_showProvider_clicked\0on_showWorker_clicked\0"
    "on_addButton_clicked\0on_editButton_clicked\0"
    "on_deleteButton_clicked\0"
    "on_tableView_doubleClicked\0QModelIndex\0"
    "index\0on_reportButtone_clicked\0"
    "on_pushButton_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Sklad[] = {

 // content:
       9,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   86,    2, 0x08,    0 /* Private */,
       3,    0,   87,    2, 0x08,    1 /* Private */,
       4,    0,   88,    2, 0x08,    2 /* Private */,
       5,    0,   89,    2, 0x08,    3 /* Private */,
       6,    0,   90,    2, 0x08,    4 /* Private */,
       7,    0,   91,    2, 0x08,    5 /* Private */,
       8,    0,   92,    2, 0x08,    6 /* Private */,
       9,    0,   93,    2, 0x08,    7 /* Private */,
      10,    0,   94,    2, 0x08,    8 /* Private */,
      11,    1,   95,    2, 0x08,    9 /* Private */,
      14,    0,   98,    2, 0x08,   11 /* Private */,
      15,    0,   99,    2, 0x08,   12 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 12,   13,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void Sklad::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Sklad *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->on_showBuyer_clicked(); break;
        case 1: _t->on_showDeliveries_clicked(); break;
        case 2: _t->on_showIssuing_clicked(); break;
        case 3: _t->on_showProduct_clicked(); break;
        case 4: _t->on_showProvider_clicked(); break;
        case 5: _t->on_showWorker_clicked(); break;
        case 6: _t->on_addButton_clicked(); break;
        case 7: _t->on_editButton_clicked(); break;
        case 8: _t->on_deleteButton_clicked(); break;
        case 9: _t->on_tableView_doubleClicked((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 10: _t->on_reportButtone_clicked(); break;
        case 11: _t->on_pushButton_clicked(); break;
        default: ;
        }
    }
}

const QMetaObject Sklad::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_Sklad.offsetsAndSize,
    qt_meta_data_Sklad,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_Sklad_t

, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QModelIndex &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>


>,
    nullptr
} };


const QMetaObject *Sklad::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Sklad::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Sklad.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int Sklad::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 12;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
