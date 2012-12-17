/****************************************************************************
** Meta object code from reading C++ file 'starmenu.h'
**
** Created: Sun Dec 16 15:26:44 2012
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "starmenu.h"
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'starmenu.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_StarMenu[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      24,   14, // methods
      18,  134, // properties
       1,  206, // enums/sets
       0,    0, // constructors
       0,       // flags
      20,       // signalCount

 // signals: signature, parameters, type, tag, flags
      10,    9,    9,    9, 0x05,
      28,    9,    9,    9, 0x05,
      46,    9,    9,    9, 0x05,
      60,    9,    9,    9, 0x05,
      82,    9,    9,    9, 0x05,
      97,    9,    9,    9, 0x05,
     113,    9,    9,    9, 0x05,
     131,    9,    9,    9, 0x05,
     149,    9,    9,    9, 0x05,
     167,    9,    9,    9, 0x05,
     184,    9,    9,    9, 0x05,
     201,    9,    9,    9, 0x05,
     218,    9,    9,    9, 0x05,
     242,    9,    9,    9, 0x05,
     257,    9,    9,    9, 0x05,
     282,    9,    9,    9, 0x05,
     306,    9,    9,    9, 0x05,
     335,    9,    9,    9, 0x05,
     362,    9,    9,    9, 0x05,
     385,    9,    9,    9, 0x05,

 // slots: signature, parameters, type, tag, flags
     408,    9,    9,    9, 0x0a,
     428,    9,    9,    9, 0x0a,
     448,    9,    9,    9, 0x0a,

 // methods: signature, parameters, type, tag, flags
     468,    9,    9,    9, 0x02,

 // properties: name, type, flags
     492,  487, 0x01495103,
     515,  497, 0x0049510b,
     535,  528, 0x43495103,
     549,  541, 0x1a495103,
     566,  556, 0x0049510b,
     578,  572, ((uint)QMetaType::QReal << 24) | 0x00495103,
     587,  572, ((uint)QMetaType::QReal << 24) | 0x00495103,
     600,  596, 0x02495103,
     608,  572, ((uint)QMetaType::QReal << 24) | 0x00495103,
     616,  572, ((uint)QMetaType::QReal << 24) | 0x00495103,
     624,  572, ((uint)QMetaType::QReal << 24) | 0x00495103,
     633,  487, 0x01495103,
     651,  596, 0x02495103,
     666,  487, 0x01495103,
     686,  572, ((uint)QMetaType::QReal << 24) | 0x00495103,
     701,  572, ((uint)QMetaType::QReal << 24) | 0x00495103,
     717,  572, ((uint)QMetaType::QReal << 24) | 0x00495103,
     731,  487, 0x01495103,

 // properties: notify_signal_id
       2,
       3,
       4,
       5,
      13,
       7,
       8,
       9,
      10,
      11,
       6,
      17,
      15,
      16,
      12,
      14,
      18,
      19,

 // enums: name, flags, count, data
     556, 0x0,    4,  210,

 // enum data: key, value
     745, uint(StarMenu::ShapeCircle),
     757, uint(StarMenu::ShapeGrid),
     767, uint(StarMenu::ShapeSpiral),
     779, uint(StarMenu::ShapeLine),

       0        // eod
};

static const char qt_meta_stringdata_StarMenu[] = {
    "StarMenu\0\0starMenuOpening()\0"
    "starMenuClosing()\0openChanged()\0"
    "visualParentChanged()\0colorChanged()\0"
    "centerChanged()\0rotationChanged()\0"
    "spacingHChanged()\0spacingVChanged()\0"
    "columnsChanged()\0radiusHChanged()\0"
    "radiusVChanged()\0startingRadiusChanged()\0"
    "shapeChanged()\0radiusIncrementChanged()\0"
    "delayChangePosChanged()\0"
    "useParentMenuCenterChanged()\0"
    "starCenterVisibleChanged()\0"
    "startingAngleChanged()\0parentVisibleChanged()\0"
    "onStarMenuOpening()\0onStarMenuClosing()\0"
    "updateStarItemPos()\0centerChildItems()\0"
    "bool\0open\0QDeclarativeItem*\0visualParent\0"
    "QColor\0color\0QPointF\0center\0ShapeKind\0"
    "shape\0qreal\0spacingH\0spacingV\0int\0"
    "columns\0radiusH\0radiusV\0rotation\0"
    "starCenterVisible\0delayChangePos\0"
    "useParentMenuCenter\0startingRadius\0"
    "radiusIncrement\0startingAngle\0"
    "parentVisible\0ShapeCircle\0ShapeGrid\0"
    "ShapeSpiral\0ShapeLine\0"
};

void StarMenu::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        StarMenu *_t = static_cast<StarMenu *>(_o);
        switch (_id) {
        case 0: _t->starMenuOpening(); break;
        case 1: _t->starMenuClosing(); break;
        case 2: _t->openChanged(); break;
        case 3: _t->visualParentChanged(); break;
        case 4: _t->colorChanged(); break;
        case 5: _t->centerChanged(); break;
        case 6: _t->rotationChanged(); break;
        case 7: _t->spacingHChanged(); break;
        case 8: _t->spacingVChanged(); break;
        case 9: _t->columnsChanged(); break;
        case 10: _t->radiusHChanged(); break;
        case 11: _t->radiusVChanged(); break;
        case 12: _t->startingRadiusChanged(); break;
        case 13: _t->shapeChanged(); break;
        case 14: _t->radiusIncrementChanged(); break;
        case 15: _t->delayChangePosChanged(); break;
        case 16: _t->useParentMenuCenterChanged(); break;
        case 17: _t->starCenterVisibleChanged(); break;
        case 18: _t->startingAngleChanged(); break;
        case 19: _t->parentVisibleChanged(); break;
        case 20: _t->onStarMenuOpening(); break;
        case 21: _t->onStarMenuClosing(); break;
        case 22: _t->updateStarItemPos(); break;
        case 23: _t->centerChildItems(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData StarMenu::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject StarMenu::staticMetaObject = {
    { &QDeclarativeItem::staticMetaObject, qt_meta_stringdata_StarMenu,
      qt_meta_data_StarMenu, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &StarMenu::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *StarMenu::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *StarMenu::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_StarMenu))
        return static_cast<void*>(const_cast< StarMenu*>(this));
    if (!strcmp(_clname, "com.trolltech.qml.QDeclarativeParserStatus"))
        return static_cast< QDeclarativeParserStatus*>(const_cast< StarMenu*>(this));
    return QDeclarativeItem::qt_metacast(_clname);
}

int StarMenu::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDeclarativeItem::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 24)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 24;
    }
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = open(); break;
        case 1: *reinterpret_cast< QDeclarativeItem**>(_v) = visualParent(); break;
        case 2: *reinterpret_cast< QColor*>(_v) = color(); break;
        case 3: *reinterpret_cast< QPointF*>(_v) = center(); break;
        case 4: *reinterpret_cast< ShapeKind*>(_v) = shape(); break;
        case 5: *reinterpret_cast< qreal*>(_v) = spacingH(); break;
        case 6: *reinterpret_cast< qreal*>(_v) = spacingV(); break;
        case 7: *reinterpret_cast< int*>(_v) = columns(); break;
        case 8: *reinterpret_cast< qreal*>(_v) = radiusH(); break;
        case 9: *reinterpret_cast< qreal*>(_v) = radiusV(); break;
        case 10: *reinterpret_cast< qreal*>(_v) = rotation(); break;
        case 11: *reinterpret_cast< bool*>(_v) = starCenterVisible(); break;
        case 12: *reinterpret_cast< int*>(_v) = delayChangePos(); break;
        case 13: *reinterpret_cast< bool*>(_v) = useParentMenuCenter(); break;
        case 14: *reinterpret_cast< qreal*>(_v) = startingRadius(); break;
        case 15: *reinterpret_cast< qreal*>(_v) = radiusIncrement(); break;
        case 16: *reinterpret_cast< qreal*>(_v) = startingAngle(); break;
        case 17: *reinterpret_cast< bool*>(_v) = parentVisible(); break;
        }
        _id -= 18;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setOpen(*reinterpret_cast< bool*>(_v)); break;
        case 1: setVisualParent(*reinterpret_cast< QDeclarativeItem**>(_v)); break;
        case 2: setColor(*reinterpret_cast< QColor*>(_v)); break;
        case 3: setCenter(*reinterpret_cast< QPointF*>(_v)); break;
        case 4: setShape(*reinterpret_cast< ShapeKind*>(_v)); break;
        case 5: setSpacingH(*reinterpret_cast< qreal*>(_v)); break;
        case 6: setSpacingV(*reinterpret_cast< qreal*>(_v)); break;
        case 7: setColumns(*reinterpret_cast< int*>(_v)); break;
        case 8: setRadiusH(*reinterpret_cast< qreal*>(_v)); break;
        case 9: setRadiusV(*reinterpret_cast< qreal*>(_v)); break;
        case 10: setRotation(*reinterpret_cast< qreal*>(_v)); break;
        case 11: setStarCenterVisible(*reinterpret_cast< bool*>(_v)); break;
        case 12: setDelayChangePos(*reinterpret_cast< int*>(_v)); break;
        case 13: setUseParentMenuCenter(*reinterpret_cast< bool*>(_v)); break;
        case 14: setStartingRadius(*reinterpret_cast< qreal*>(_v)); break;
        case 15: setRadiusIncrement(*reinterpret_cast< qreal*>(_v)); break;
        case 16: setStartingAngle(*reinterpret_cast< qreal*>(_v)); break;
        case 17: setParentVisible(*reinterpret_cast< bool*>(_v)); break;
        }
        _id -= 18;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 18;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 18;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 18;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 18;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 18;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 18;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void StarMenu::starMenuOpening()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void StarMenu::starMenuClosing()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}

// SIGNAL 2
void StarMenu::openChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, 0);
}

// SIGNAL 3
void StarMenu::visualParentChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, 0);
}

// SIGNAL 4
void StarMenu::colorChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, 0);
}

// SIGNAL 5
void StarMenu::centerChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 5, 0);
}

// SIGNAL 6
void StarMenu::rotationChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 6, 0);
}

// SIGNAL 7
void StarMenu::spacingHChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 7, 0);
}

// SIGNAL 8
void StarMenu::spacingVChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 8, 0);
}

// SIGNAL 9
void StarMenu::columnsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 9, 0);
}

// SIGNAL 10
void StarMenu::radiusHChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 10, 0);
}

// SIGNAL 11
void StarMenu::radiusVChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 11, 0);
}

// SIGNAL 12
void StarMenu::startingRadiusChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 12, 0);
}

// SIGNAL 13
void StarMenu::shapeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 13, 0);
}

// SIGNAL 14
void StarMenu::radiusIncrementChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 14, 0);
}

// SIGNAL 15
void StarMenu::delayChangePosChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 15, 0);
}

// SIGNAL 16
void StarMenu::useParentMenuCenterChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 16, 0);
}

// SIGNAL 17
void StarMenu::starCenterVisibleChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 17, 0);
}

// SIGNAL 18
void StarMenu::startingAngleChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 18, 0);
}

// SIGNAL 19
void StarMenu::parentVisibleChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 19, 0);
}
QT_END_MOC_NAMESPACE
