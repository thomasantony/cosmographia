/****************************************************************************
** Meta object code from reading C++ file 'UniverseCatalogObject.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.13.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "src/main/qtwrapper/UniverseCatalogObject.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'UniverseCatalogObject.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.13.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_UniverseCatalogObject_t {
    QByteArrayData data[14];
    char stringdata0[156];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_UniverseCatalogObject_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_UniverseCatalogObject_t qt_meta_stringdata_UniverseCatalogObject = {
    {
QT_MOC_LITERAL(0, 0, 21), // "UniverseCatalogObject"
QT_MOC_LITERAL(1, 22, 16), // "getMatchingNames"
QT_MOC_LITERAL(2, 39, 0), // ""
QT_MOC_LITERAL(3, 40, 7), // "pattern"
QT_MOC_LITERAL(4, 48, 19), // "getCompletionString"
QT_MOC_LITERAL(5, 68, 11), // "partialName"
QT_MOC_LITERAL(6, 80, 8), // "maxNames"
QT_MOC_LITERAL(7, 89, 8), // "getEarth"
QT_MOC_LITERAL(8, 98, 11), // "BodyObject*"
QT_MOC_LITERAL(9, 110, 6), // "getSun"
QT_MOC_LITERAL(10, 117, 10), // "lookupBody"
QT_MOC_LITERAL(11, 128, 4), // "name"
QT_MOC_LITERAL(12, 133, 14), // "getDescription"
QT_MOC_LITERAL(13, 148, 7) // "bodyObj"

    },
    "UniverseCatalogObject\0getMatchingNames\0"
    "\0pattern\0getCompletionString\0partialName\0"
    "maxNames\0getEarth\0BodyObject*\0getSun\0"
    "lookupBody\0name\0getDescription\0bodyObj"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_UniverseCatalogObject[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // methods: name, argc, parameters, tag, flags
       1,    1,   44,    2, 0x02 /* Public */,
       4,    2,   47,    2, 0x02 /* Public */,
       7,    0,   52,    2, 0x02 /* Public */,
       9,    0,   53,    2, 0x02 /* Public */,
      10,    1,   54,    2, 0x02 /* Public */,
      12,    1,   57,    2, 0x02 /* Public */,

 // methods: parameters
    QMetaType::QStringList, QMetaType::QString,    3,
    QMetaType::QString, QMetaType::QString, QMetaType::Int,    5,    6,
    0x80000000 | 8,
    0x80000000 | 8,
    0x80000000 | 8, QMetaType::QString,   11,
    QMetaType::QString, QMetaType::QObjectStar,   13,

       0        // eod
};

void UniverseCatalogObject::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<UniverseCatalogObject *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: { QStringList _r = _t->getMatchingNames((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QStringList*>(_a[0]) = std::move(_r); }  break;
        case 1: { QString _r = _t->getCompletionString((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 2: { BodyObject* _r = _t->getEarth();
            if (_a[0]) *reinterpret_cast< BodyObject**>(_a[0]) = std::move(_r); }  break;
        case 3: { BodyObject* _r = _t->getSun();
            if (_a[0]) *reinterpret_cast< BodyObject**>(_a[0]) = std::move(_r); }  break;
        case 4: { BodyObject* _r = _t->lookupBody((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< BodyObject**>(_a[0]) = std::move(_r); }  break;
        case 5: { QString _r = _t->getDescription((*reinterpret_cast< QObject*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject UniverseCatalogObject::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_UniverseCatalogObject.data,
    qt_meta_data_UniverseCatalogObject,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *UniverseCatalogObject::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *UniverseCatalogObject::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_UniverseCatalogObject.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int UniverseCatalogObject::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
