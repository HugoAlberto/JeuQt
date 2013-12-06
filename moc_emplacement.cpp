/****************************************************************************
** Meta object code from reading C++ file 'emplacement.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "emplacement.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'emplacement.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_emplacement[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      18,   12,   13,   12, 0x0a,
      30,   28,   13,   12, 0x0a,
      51,   12,   12,   12, 0x0a,
      70,   12,   12,   12, 0x0a,
      78,   12,   12,   12, 0x0a,
      91,   12,   12,   12, 0x0a,
     111,  108,   12,   12, 0x08,
     141,  108,   12,   12, 0x08,
     173,  108,   12,   12, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_emplacement[] = {
    "emplacement\0\0bool\0estVide()\0e\0"
    "jouxte(emplacement*)\0setJoueur(joueur*)\0"
    "vider()\0jeuAdverse()\0jeuAdverseMove()\0"
    "ev\0mousePressEvent(QMouseEvent*)\0"
    "mouseReleaseEvent(QMouseEvent*)\0"
    "mouseMoveEvent(QMouseEvent*)\0"
};

void emplacement::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        emplacement *_t = static_cast<emplacement *>(_o);
        switch (_id) {
        case 0: { bool _r = _t->estVide();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 1: { bool _r = _t->jouxte((*reinterpret_cast< emplacement*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 2: _t->setJoueur((*reinterpret_cast< joueur*(*)>(_a[1]))); break;
        case 3: _t->vider(); break;
        case 4: _t->jeuAdverse(); break;
        case 5: _t->jeuAdverseMove(); break;
        case 6: _t->mousePressEvent((*reinterpret_cast< QMouseEvent*(*)>(_a[1]))); break;
        case 7: _t->mouseReleaseEvent((*reinterpret_cast< QMouseEvent*(*)>(_a[1]))); break;
        case 8: _t->mouseMoveEvent((*reinterpret_cast< QMouseEvent*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData emplacement::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject emplacement::staticMetaObject = {
    { &QLabel::staticMetaObject, qt_meta_stringdata_emplacement,
      qt_meta_data_emplacement, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &emplacement::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *emplacement::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *emplacement::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_emplacement))
        return static_cast<void*>(const_cast< emplacement*>(this));
    return QLabel::qt_metacast(_clname);
}

int emplacement::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QLabel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
