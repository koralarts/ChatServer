/****************************************************************************
** Meta object code from reading C++ file 'socket.h'
**
** Created: Wed Mar 9 15:16:58 2011
**      by: The Qt Meta Object Compiler version 62 (Qt 4.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "socket.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'socket.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.6.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_SocketClass[] = {

 // content:
       4,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
      13,   12,   12,   12, 0x05,
      42,   12,   12,   12, 0x05,

       0        // eod
};

static const char qt_meta_stringdata_SocketClass[] = {
    "SocketClass\0\0SignalClientConnected(char*)\0"
    "SignalClientDisconnected(char*)\0"
};

const QMetaObject SocketClass::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_SocketClass,
      qt_meta_data_SocketClass, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &SocketClass::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *SocketClass::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *SocketClass::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_SocketClass))
        return static_cast<void*>(const_cast< SocketClass*>(this));
    return QObject::qt_metacast(_clname);
}

int SocketClass::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: SignalClientConnected((*reinterpret_cast< char*(*)>(_a[1]))); break;
        case 1: SignalClientDisconnected((*reinterpret_cast< char*(*)>(_a[1]))); break;
        default: ;
        }
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void SocketClass::SignalClientConnected(char * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void SocketClass::SignalClientDisconnected(char * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE