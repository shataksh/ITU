/****************************************************************************
** Meta object code from reading C++ file 'staritem.h'
**
** Created: Sun Dec 16 15:26:45 2012
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "staritem.h"
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'staritem.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_StarItem[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       2,   49, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: signature, parameters, type, tag, flags
      10,    9,    9,    9, 0x05,
      22,    9,    9,    9, 0x05,
      34,    9,    9,    9, 0x05,
      44,    9,    9,    9, 0x05,
      61,    9,    9,    9, 0x05,
      85,    9,    9,    9, 0x05,

 // slots: signature, parameters, type, tag, flags
     109,    9,    9,    9, 0x0a,

 // properties: name, type, flags
     134,  128, ((uint)QMetaType::QReal << 24) | 0x00495103,
     153,  149, 0x02495103,

 // properties: notify_signal_id
       5,
       4,

       0        // eod
};

static const char qt_meta_stringdata_StarItem[] = {
    "StarItem\0\0hoverItem()\0leaveItem()\0"
    "clicked()\0enabledChanged()\0"
    "delayChangePosChanged()\0zoomHoverValueChanged()\0"
    "onTimerTriggered()\0qreal\0zoomHoverValue\0"
    "int\0delayChangePos\0"
};

void StarItem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        StarItem *_t = static_cast<StarItem *>(_o);
        switch (_id) {
        case 0: _t->hoverItem(); break;
        case 1: _t->leaveItem(); break;
        case 2: _t->clicked(); break;
        case 3: _t->enabledChanged(); break;
        case 4: _t->delayChangePosChanged(); break;
        case 5: _t->zoomHoverValueChanged(); break;
        case 6: _t->onTimerTriggered(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData StarItem::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject StarItem::staticMetaObject = {
    { &QDeclarativeItem::staticMetaObject, qt_meta_stringdata_StarItem,
      qt_meta_data_StarItem, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &StarItem::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *StarItem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *StarItem::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_StarItem))
        return static_cast<void*>(const_cast< StarItem*>(this));
    if (!strcmp(_clname, "com.trolltech.qml.QDeclarativeParserStatus"))
        return static_cast< QDeclarativeParserStatus*>(const_cast< StarItem*>(this));
    return QDeclarativeItem::qt_metacast(_clname);
}

int StarItem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDeclarativeItem::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    }
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< qreal*>(_v) = zoomHoverValue(); break;
        case 1: *reinterpret_cast< int*>(_v) = delayChangePos(); break;
        }
        _id -= 2;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setZoomHoverValue(*reinterpret_cast< qreal*>(_v)); break;
        case 1: setDelayChangePos(*reinterpret_cast< int*>(_v)); break;
        }
        _id -= 2;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 2;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void StarItem::hoverItem()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void StarItem::leaveItem()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}

// SIGNAL 2
void StarItem::clicked()
{
    QMetaObject::activate(this, &staticMetaObject, 2, 0);
}

// SIGNAL 3
void StarItem::enabledChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, 0);
}

// SIGNAL 4
void StarItem::delayChangePosChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, 0);
}

// SIGNAL 5
void StarItem::zoomHoverValueChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 5, 0);
}
QT_END_MOC_NAMESPACE
