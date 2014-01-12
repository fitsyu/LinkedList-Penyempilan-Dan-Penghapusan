/****************************************************************************
** Meta object code from reading C++ file 'ItemLinker.h'
**
** Created: Fri Jan 10 07:35:26 2014
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "ItemLinker.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ItemLinker.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_itemLinker[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

static const char qt_meta_stringdata_itemLinker[] = {
    "itemLinker\0"
};

void itemLinker::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData itemLinker::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject itemLinker::staticMetaObject = {
    { &item::staticMetaObject, qt_meta_stringdata_itemLinker,
      qt_meta_data_itemLinker, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &itemLinker::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *itemLinker::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *itemLinker::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_itemLinker))
        return static_cast<void*>(const_cast< itemLinker*>(this));
    return item::qt_metacast(_clname);
}

int itemLinker::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = item::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
QT_END_MOC_NAMESPACE
