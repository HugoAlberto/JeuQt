/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../mainwindow.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_MainWindow[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      17,   11,   12,   11, 0x0a,
      47,   41,   12,   11, 0x0a,
      92,   85,   11,   11, 0x0a,
     113,   11,   11,   11, 0x0a,
     130,   11,   11,   11, 0x0a,
     154,  149,   11,   11, 0x0a,
     205,   11,   11,   11, 0x08,
     235,   11,   11,   11, 0x08,
     273,   11,   11,   11, 0x08,
     289,   11,   11,   11, 0x08,
     321,   11,   11,   11, 0x08,
     349,   11,   11,   11, 0x08,
     380,   11,   11,   11, 0x08,
     410,   11,   11,   11, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_MainWindow[] = {
    "MainWindow\0\0bool\0estCoince(emplacement*)\0"
    "e1,e2\0accessible(emplacement*,emplacement*)\0"
    "cuseur\0setCurseur(QCursor&)\0"
    "commencePartie()\0receptionDonnees()\0"
    "etat\0changementEtatSocket(QAbstractSocket::SocketState)\0"
    "raffraichirBarreProgression()\0"
    "on_pushButtonNouvellePartie_clicked()\0"
    "initialiseJeu()\0on_pushButton_Quitter_clicked()\0"
    "on_pushButtonSolo_clicked()\0"
    "on_pushButtonServeur_clicked()\0"
    "on_pushButtonClient_clicked()\0"
    "on_pushButtonSoloIa_clicked()\0"
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        MainWindow *_t = static_cast<MainWindow *>(_o);
        switch (_id) {
        case 0: { bool _r = _t->estCoince((*reinterpret_cast< emplacement*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 1: { bool _r = _t->accessible((*reinterpret_cast< emplacement*(*)>(_a[1])),(*reinterpret_cast< emplacement*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 2: _t->setCurseur((*reinterpret_cast< QCursor(*)>(_a[1]))); break;
        case 3: _t->commencePartie(); break;
        case 4: _t->receptionDonnees(); break;
        case 5: _t->changementEtatSocket((*reinterpret_cast< QAbstractSocket::SocketState(*)>(_a[1]))); break;
        case 6: _t->raffraichirBarreProgression(); break;
        case 7: _t->on_pushButtonNouvellePartie_clicked(); break;
        case 8: _t->initialiseJeu(); break;
        case 9: _t->on_pushButton_Quitter_clicked(); break;
        case 10: _t->on_pushButtonSolo_clicked(); break;
        case 11: _t->on_pushButtonServeur_clicked(); break;
        case 12: _t->on_pushButtonClient_clicked(); break;
        case 13: _t->on_pushButtonSoloIa_clicked(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData MainWindow::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject MainWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_MainWindow,
      qt_meta_data_MainWindow, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &MainWindow::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow))
        return static_cast<void*>(const_cast< MainWindow*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
