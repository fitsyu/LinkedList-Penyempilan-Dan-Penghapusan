/****************************************************************************
** Meta object code from reading C++ file 'clickablelabel.h'
**
** Created: Fri Jan 10 07:35:27 2014
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "clickablelabel.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'clickablelabel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_ClickableLabel[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
      16,   15,   15,   15, 0x05,
      32,   15,   15,   15, 0x05,

 // slots: signature, parameters, type, tag, flags
      42,   15,   15,   15, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_ClickableLabel[] = {
    "ClickableLabel\0\0doubleClicked()\0"
    "send(int)\0mouseDoubleClickEvent(QMouseEvent*)\0"
};

void ClickableLabel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ClickableLabel *_t = static_cast<ClickableLabel *>(_o);
        switch (_id) {
        case 0: _t->doubleClicked(); break;
        case 1: _t->send((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->mouseDoubleClickEvent((*reinterpret_cast< QMouseEvent*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData ClickableLabel::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject ClickableLabel::staticMetaObject = {
    { &QLabel::staticMetaObject, qt_meta_stringdata_ClickableLabel,
      qt_meta_data_ClickableLabel, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ClickableLabel::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ClickableLabel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ClickableLabel::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ClickableLabel))
        return static_cast<void*>(const_cast< ClickableLabel*>(this));
    return QLabel::qt_metacast(_clname);
}

int ClickableLabel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QLabel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}


// SIGNAL 1
void ClickableLabel::send(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
