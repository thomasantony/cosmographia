/****************************************************************************
** Meta object code from reading C++ file 'LocalImageLoader.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.13.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "src/main/LocalImageLoader.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'LocalImageLoader.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.13.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_LocalImageLoader_t {
    QByteArrayData data[13];
    char stringdata0[157];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_LocalImageLoader_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_LocalImageLoader_t qt_meta_stringdata_LocalImageLoader = {
    {
QT_MOC_LITERAL(0, 0, 16), // "LocalImageLoader"
QT_MOC_LITERAL(1, 17, 13), // "textureLoaded"
QT_MOC_LITERAL(2, 31, 0), // ""
QT_MOC_LITERAL(3, 32, 18), // "vesta::TextureMap*"
QT_MOC_LITERAL(4, 51, 7), // "texture"
QT_MOC_LITERAL(5, 59, 5), // "image"
QT_MOC_LITERAL(6, 65, 16), // "ddsTextureLoaded"
QT_MOC_LITERAL(7, 82, 17), // "vesta::DataChunk*"
QT_MOC_LITERAL(8, 100, 7), // "ddsData"
QT_MOC_LITERAL(9, 108, 17), // "textureLoadFailed"
QT_MOC_LITERAL(10, 126, 11), // "loadTexture"
QT_MOC_LITERAL(11, 138, 13), // "setSearchPath"
QT_MOC_LITERAL(12, 152, 4) // "path"

    },
    "LocalImageLoader\0textureLoaded\0\0"
    "vesta::TextureMap*\0texture\0image\0"
    "ddsTextureLoaded\0vesta::DataChunk*\0"
    "ddsData\0textureLoadFailed\0loadTexture\0"
    "setSearchPath\0path"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_LocalImageLoader[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   39,    2, 0x06 /* Public */,
       6,    2,   44,    2, 0x06 /* Public */,
       9,    1,   49,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      10,    1,   52,    2, 0x0a /* Public */,
      11,    1,   55,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3, QMetaType::QImage,    4,    5,
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 7,    4,    8,
    QMetaType::Void, 0x80000000 | 3,    4,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, QMetaType::QString,   12,

       0        // eod
};

void LocalImageLoader::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<LocalImageLoader *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->textureLoaded((*reinterpret_cast< vesta::TextureMap*(*)>(_a[1])),(*reinterpret_cast< const QImage(*)>(_a[2]))); break;
        case 1: _t->ddsTextureLoaded((*reinterpret_cast< vesta::TextureMap*(*)>(_a[1])),(*reinterpret_cast< vesta::DataChunk*(*)>(_a[2]))); break;
        case 2: _t->textureLoadFailed((*reinterpret_cast< vesta::TextureMap*(*)>(_a[1]))); break;
        case 3: _t->loadTexture((*reinterpret_cast< vesta::TextureMap*(*)>(_a[1]))); break;
        case 4: _t->setSearchPath((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (LocalImageLoader::*)(vesta::TextureMap * , const QImage & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&LocalImageLoader::textureLoaded)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (LocalImageLoader::*)(vesta::TextureMap * , vesta::DataChunk * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&LocalImageLoader::ddsTextureLoaded)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (LocalImageLoader::*)(vesta::TextureMap * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&LocalImageLoader::textureLoadFailed)) {
                *result = 2;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject LocalImageLoader::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_LocalImageLoader.data,
    qt_meta_data_LocalImageLoader,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *LocalImageLoader::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *LocalImageLoader::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_LocalImageLoader.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int LocalImageLoader::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void LocalImageLoader::textureLoaded(vesta::TextureMap * _t1, const QImage & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void LocalImageLoader::ddsTextureLoaded(vesta::TextureMap * _t1, vesta::DataChunk * _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void LocalImageLoader::textureLoadFailed(vesta::TextureMap * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
