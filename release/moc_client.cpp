/****************************************************************************
** Meta object code from reading C++ file 'client.h'
**
** Created: Tue 8. Jun 12:58:55 2010
**      by: The Qt Meta Object Compiler version 62 (Qt 4.6.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../client.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'client.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.6.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Client[] = {

 // content:
       4,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
      15,    8,    7,    7, 0x05,
      92,   89,    7,    7, 0x05,

 // slots: signature, parameters, type, tag, flags
     117,    7,    7,    7, 0x08,
     141,    7,    7,    7, 0x08,
     154,    7,    7,    7, 0x08,
     178,  166,    7,    7, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_Client[] = {
    "Client\0\0mat,,,\0"
    "createNewField(QList<QList<int> >,int,QStringList,QList<QPair<int,int>"
    " >)\0"
    ",,\0doClick(QString,int,int)\0"
    "on_pushButton_clicked()\0updateInfo()\0"
    "connected()\0socketError\0"
    "displayError(QAbstractSocket::SocketError)\0"
};

const QMetaObject Client::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_Client,
      qt_meta_data_Client, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Client::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Client::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Client::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Client))
        return static_cast<void*>(const_cast< Client*>(this));
    return QDialog::qt_metacast(_clname);
}

int Client::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: createNewField((*reinterpret_cast< QList<QList<int> >(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< QStringList(*)>(_a[3])),(*reinterpret_cast< QList<QPair<int,int> >(*)>(_a[4]))); break;
        case 1: doClick((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 2: on_pushButton_clicked(); break;
        case 3: updateInfo(); break;
        case 4: connected(); break;
        case 5: displayError((*reinterpret_cast< QAbstractSocket::SocketError(*)>(_a[1]))); break;
        default: ;
        }
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void Client::createNewField(QList<QList<int> > _t1, int _t2, QStringList _t3, QList<QPair<int,int> > _t4)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Client::doClick(QString _t1, int _t2, int _t3)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
