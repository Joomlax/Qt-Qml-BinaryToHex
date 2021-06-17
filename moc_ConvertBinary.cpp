/****************************************************************************
** Meta object code from reading C++ file 'ConvertBinary.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../bintohex/ConvertBinary.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ConvertBinary.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ConvertBinary_t {
    QByteArrayData data[16];
    char stringdata0[126];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ConvertBinary_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ConvertBinary_t qt_meta_stringdata_ConvertBinary = {
    {
QT_MOC_LITERAL(0, 0, 13), // "ConvertBinary"
QT_MOC_LITERAL(1, 14, 6), // "sended"
QT_MOC_LITERAL(2, 21, 0), // ""
QT_MOC_LITERAL(3, 22, 7), // "giveVal"
QT_MOC_LITERAL(4, 30, 5), // "added"
QT_MOC_LITERAL(5, 36, 8), // "original"
QT_MOC_LITERAL(6, 45, 3), // "bin"
QT_MOC_LITERAL(7, 49, 5), // "index"
QT_MOC_LITERAL(8, 55, 11), // "addedBinary"
QT_MOC_LITERAL(9, 67, 9), // "setBinary"
QT_MOC_LITERAL(10, 77, 4), // "tmpe"
QT_MOC_LITERAL(11, 82, 12), // "setNewBinary"
QT_MOC_LITERAL(12, 95, 3), // "tmp"
QT_MOC_LITERAL(13, 99, 9), // "addBinary"
QT_MOC_LITERAL(14, 109, 10), // "convertBin"
QT_MOC_LITERAL(15, 120, 5) // "value"

    },
    "ConvertBinary\0sended\0\0giveVal\0added\0"
    "original\0bin\0index\0addedBinary\0setBinary\0"
    "tmpe\0setNewBinary\0tmp\0addBinary\0"
    "convertBin\0value"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ConvertBinary[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       1,   78, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   54,    2, 0x06 /* Public */,
       3,    0,   55,    2, 0x06 /* Public */,
       4,    3,   56,    2, 0x06 /* Public */,
       8,    0,   63,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       9,    1,   64,    2, 0x0a /* Public */,
      11,    1,   67,    2, 0x0a /* Public */,
      13,    3,   70,    2, 0x0a /* Public */,
      14,    0,   77,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QString,    5,    6,    7,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,   10,
    QMetaType::Void, QMetaType::QString,   12,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QString,    5,    6,    7,
    QMetaType::Void,

 // properties: name, type, flags
      15, QMetaType::QString, 0x00495001,

 // properties: notify_signal_id
       1,

       0        // eod
};

void ConvertBinary::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ConvertBinary *_t = static_cast<ConvertBinary *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->sended(); break;
        case 1: _t->giveVal(); break;
        case 2: _t->added((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3]))); break;
        case 3: _t->addedBinary(); break;
        case 4: _t->setBinary((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 5: _t->setNewBinary((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 6: _t->addBinary((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3]))); break;
        case 7: _t->convertBin(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (ConvertBinary::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ConvertBinary::sended)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (ConvertBinary::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ConvertBinary::giveVal)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (ConvertBinary::*_t)(QString , QString , QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ConvertBinary::added)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (ConvertBinary::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ConvertBinary::addedBinary)) {
                *result = 3;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        ConvertBinary *_t = static_cast<ConvertBinary *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->getBinary(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject ConvertBinary::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_ConvertBinary.data,
      qt_meta_data_ConvertBinary,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *ConvertBinary::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ConvertBinary::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ConvertBinary.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int ConvertBinary::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 8;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 1;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void ConvertBinary::sended()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void ConvertBinary::giveVal()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void ConvertBinary::added(QString _t1, QString _t2, QString _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void ConvertBinary::addedBinary()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
