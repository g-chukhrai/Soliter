/****************************************************************************
** Meta object code from reading C++ file 'createnewfield.h'
**
** Created: Mon 7. Jun 22:47:45 2010
**      by: The Qt Meta Object Compiler version 62 (Qt 4.6.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../createnewfield.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'createnewfield.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.6.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_CreateNewField[] = {

 // content:
       4,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
      19,   16,   15,   15, 0x05,
      40,   15,   15,   15, 0x05,

 // slots: signature, parameters, type, tag, flags
      54,   48,   15,   15, 0x08,
      91,   15,   15,   15, 0x08,
     115,   15,   15,   15, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_CreateNewField[] = {
    "CreateNewField\0\0,,\0acepted(int,int,int)\0"
    "exits()\0index\0on_comboBox_currentIndexChanged(int)\0"
    "on_exitButton_clicked()\0on_okButton_clicked()\0"
};

const QMetaObject CreateNewField::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_CreateNewField,
      qt_meta_data_CreateNewField, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &CreateNewField::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *CreateNewField::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *CreateNewField::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_CreateNewField))
        return static_cast<void*>(const_cast< CreateNewField*>(this));
    return QDialog::qt_metacast(_clname);
}

int CreateNewField::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: acepted((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 1: exits(); break;
        case 2: on_comboBox_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: on_exitButton_clicked(); break;
        case 4: on_okButton_clicked(); break;
        default: ;
        }
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void CreateNewField::acepted(int _t1, int _t2, int _t3)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void CreateNewField::exits()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}
QT_END_MOC_NAMESPACE
