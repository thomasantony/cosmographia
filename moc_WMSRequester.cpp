/****************************************************************************
** Meta object code from reading C++ file 'WMSRequester.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.13.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "src/main/WMSRequester.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'WMSRequester.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.13.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_WMSRequester_t {
    QByteArrayData data[14];
    char stringdata0[143];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_WMSRequester_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_WMSRequester_t qt_meta_stringdata_WMSRequester = {
    {
QT_MOC_LITERAL(0, 0, 12), // "WMSRequester"
QT_MOC_LITERAL(1, 13, 14), // "imageCompleted"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 8), // "tileName"
QT_MOC_LITERAL(4, 38, 5), // "image"
QT_MOC_LITERAL(5, 44, 12), // "retrieveTile"
QT_MOC_LITERAL(6, 57, 7), // "surface"
QT_MOC_LITERAL(7, 65, 8), // "tileRect"
QT_MOC_LITERAL(8, 74, 8), // "tileSize"
QT_MOC_LITERAL(9, 83, 18), // "vesta::TextureMap*"
QT_MOC_LITERAL(10, 102, 7), // "texture"
QT_MOC_LITERAL(11, 110, 11), // "processTile"
QT_MOC_LITERAL(12, 122, 14), // "QNetworkReply*"
QT_MOC_LITERAL(13, 137, 5) // "reply"

    },
    "WMSRequester\0imageCompleted\0\0tileName\0"
    "image\0retrieveTile\0surface\0tileRect\0"
    "tileSize\0vesta::TextureMap*\0texture\0"
    "processTile\0QNetworkReply*\0reply"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_WMSRequester[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   29,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    5,   34,    2, 0x0a /* Public */,
      11,    1,   45,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::QImage,    3,    4,

 // slots: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QRectF, QMetaType::UInt, 0x80000000 | 9,    3,    6,    7,    8,   10,
    QMetaType::Void, 0x80000000 | 12,   13,

       0        // eod
};

void WMSRequester::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<WMSRequester *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->imageCompleted((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QImage(*)>(_a[2]))); break;
        case 1: _t->retrieveTile((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QRectF(*)>(_a[3])),(*reinterpret_cast< uint(*)>(_a[4])),(*reinterpret_cast< vesta::TextureMap*(*)>(_a[5]))); break;
        case 2: _t->processTile((*reinterpret_cast< QNetworkReply*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkReply* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (WMSRequester::*)(const QString & , const QImage & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&WMSRequester::imageCompleted)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject WMSRequester::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_WMSRequester.data,
    qt_meta_data_WMSRequester,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *WMSRequester::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *WMSRequester::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_WMSRequester.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int WMSRequester::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void WMSRequester::imageCompleted(const QString & _t1, const QImage & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
