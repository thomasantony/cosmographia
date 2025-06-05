/****************************************************************************
** Meta object code from reading C++ file 'NetworkTextureLoader.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.13.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "src/main/NetworkTextureLoader.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'NetworkTextureLoader.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.13.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_NetworkTextureLoader_t {
    QByteArrayData data[16];
    char stringdata0[204];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_NetworkTextureLoader_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_NetworkTextureLoader_t qt_meta_stringdata_NetworkTextureLoader = {
    {
QT_MOC_LITERAL(0, 0, 20), // "NetworkTextureLoader"
QT_MOC_LITERAL(1, 21, 16), // "wmsTileRequested"
QT_MOC_LITERAL(2, 38, 0), // ""
QT_MOC_LITERAL(3, 39, 8), // "tileName"
QT_MOC_LITERAL(4, 48, 7), // "surface"
QT_MOC_LITERAL(5, 56, 7), // "tileBox"
QT_MOC_LITERAL(6, 64, 8), // "tileSize"
QT_MOC_LITERAL(7, 73, 18), // "vesta::TextureMap*"
QT_MOC_LITERAL(8, 92, 7), // "texture"
QT_MOC_LITERAL(9, 100, 21), // "localTextureRequested"
QT_MOC_LITERAL(10, 122, 12), // "queueTexture"
QT_MOC_LITERAL(11, 135, 5), // "image"
QT_MOC_LITERAL(12, 141, 17), // "vesta::DataChunk*"
QT_MOC_LITERAL(13, 159, 7), // "ddsData"
QT_MOC_LITERAL(14, 167, 11), // "textureName"
QT_MOC_LITERAL(15, 179, 24) // "reportTextureLoadFailure"

    },
    "NetworkTextureLoader\0wmsTileRequested\0"
    "\0tileName\0surface\0tileBox\0tileSize\0"
    "vesta::TextureMap*\0texture\0"
    "localTextureRequested\0queueTexture\0"
    "image\0vesta::DataChunk*\0ddsData\0"
    "textureName\0reportTextureLoadFailure"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_NetworkTextureLoader[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    5,   44,    2, 0x06 /* Public */,
       9,    1,   55,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      10,    2,   58,    2, 0x0a /* Public */,
      10,    2,   63,    2, 0x0a /* Public */,
      10,    2,   68,    2, 0x0a /* Public */,
      15,    1,   73,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QRectF, QMetaType::UInt, 0x80000000 | 7,    3,    4,    5,    6,    8,
    QMetaType::Void, 0x80000000 | 7,    8,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 7, QMetaType::QImage,    8,   11,
    QMetaType::Void, 0x80000000 | 7, 0x80000000 | 12,    8,   13,
    QMetaType::Void, QMetaType::QString, QMetaType::QImage,   14,   11,
    QMetaType::Void, 0x80000000 | 7,    8,

       0        // eod
};

void NetworkTextureLoader::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<NetworkTextureLoader *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->wmsTileRequested((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QRectF(*)>(_a[3])),(*reinterpret_cast< uint(*)>(_a[4])),(*reinterpret_cast< vesta::TextureMap*(*)>(_a[5]))); break;
        case 1: _t->localTextureRequested((*reinterpret_cast< vesta::TextureMap*(*)>(_a[1]))); break;
        case 2: _t->queueTexture((*reinterpret_cast< vesta::TextureMap*(*)>(_a[1])),(*reinterpret_cast< const QImage(*)>(_a[2]))); break;
        case 3: _t->queueTexture((*reinterpret_cast< vesta::TextureMap*(*)>(_a[1])),(*reinterpret_cast< vesta::DataChunk*(*)>(_a[2]))); break;
        case 4: _t->queueTexture((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QImage(*)>(_a[2]))); break;
        case 5: _t->reportTextureLoadFailure((*reinterpret_cast< vesta::TextureMap*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (NetworkTextureLoader::*)(const QString & , const QString & , const QRectF & , unsigned int , vesta::TextureMap * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&NetworkTextureLoader::wmsTileRequested)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (NetworkTextureLoader::*)(vesta::TextureMap * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&NetworkTextureLoader::localTextureRequested)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject NetworkTextureLoader::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_NetworkTextureLoader.data,
    qt_meta_data_NetworkTextureLoader,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *NetworkTextureLoader::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *NetworkTextureLoader::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_NetworkTextureLoader.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "PathRelativeTextureLoader"))
        return static_cast< PathRelativeTextureLoader*>(this);
    return QObject::qt_metacast(_clname);
}

int NetworkTextureLoader::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void NetworkTextureLoader::wmsTileRequested(const QString & _t1, const QString & _t2, const QRectF & _t3, unsigned int _t4, vesta::TextureMap * _t5)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t4))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t5))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void NetworkTextureLoader::localTextureRequested(vesta::TextureMap * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
