/****************************************************************************
** Meta object code from reading C++ file 'BodyObject.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.13.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "src/main/qtwrapper/BodyObject.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'BodyObject.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.13.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_BodyObject_t {
    QByteArrayData data[18];
    char stringdata0[193];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_BodyObject_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_BodyObject_t qt_meta_stringdata_BodyObject = {
    {
QT_MOC_LITERAL(0, 0, 10), // "BodyObject"
QT_MOC_LITERAL(1, 11, 13), // "hasVisualizer"
QT_MOC_LITERAL(2, 25, 0), // ""
QT_MOC_LITERAL(3, 26, 4), // "name"
QT_MOC_LITERAL(4, 31, 16), // "removeVisualizer"
QT_MOC_LITERAL(5, 48, 13), // "setVisualizer"
QT_MOC_LITERAL(6, 62, 17), // "VisualizerObject*"
QT_MOC_LITERAL(7, 80, 10), // "visualizer"
QT_MOC_LITERAL(8, 91, 10), // "distanceTo"
QT_MOC_LITERAL(9, 102, 11), // "BodyObject*"
QT_MOC_LITERAL(10, 114, 5), // "other"
QT_MOC_LITERAL(11, 120, 1), // "t"
QT_MOC_LITERAL(12, 122, 13), // "relativeSpeed"
QT_MOC_LITERAL(13, 136, 11), // "isEllipsoid"
QT_MOC_LITERAL(14, 148, 8), // "bodyAxes"
QT_MOC_LITERAL(15, 157, 9), // "frameAxes"
QT_MOC_LITERAL(16, 167, 13), // "velocityArrow"
QT_MOC_LITERAL(17, 181, 11) // "longLatGrid"

    },
    "BodyObject\0hasVisualizer\0\0name\0"
    "removeVisualizer\0setVisualizer\0"
    "VisualizerObject*\0visualizer\0distanceTo\0"
    "BodyObject*\0other\0t\0relativeSpeed\0"
    "isEllipsoid\0bodyAxes\0frameAxes\0"
    "velocityArrow\0longLatGrid"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_BodyObject[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       6,   60, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // methods: name, argc, parameters, tag, flags
       1,    1,   39,    2, 0x02 /* Public */,
       4,    1,   42,    2, 0x02 /* Public */,
       5,    2,   45,    2, 0x02 /* Public */,
       8,    2,   50,    2, 0x02 /* Public */,
      12,    2,   55,    2, 0x02 /* Public */,

 // methods: parameters
    QMetaType::Bool, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 6,    3,    7,
    QMetaType::Double, 0x80000000 | 9, QMetaType::Double,   10,   11,
    QMetaType::Double, 0x80000000 | 9, QMetaType::Double,   10,   11,

 // properties: name, type, flags
       3, QMetaType::QString, 0x00095001,
      13, QMetaType::Bool, 0x00095001,
      14, QMetaType::Bool, 0x00095103,
      15, QMetaType::Bool, 0x00095103,
      16, QMetaType::Bool, 0x00095103,
      17, QMetaType::Bool, 0x00095103,

       0        // eod
};

void BodyObject::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<BodyObject *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: { bool _r = _t->hasVisualizer((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 1: _t->removeVisualizer((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->setVisualizer((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< VisualizerObject*(*)>(_a[2]))); break;
        case 3: { double _r = _t->distanceTo((*reinterpret_cast< BodyObject*(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< double*>(_a[0]) = std::move(_r); }  break;
        case 4: { double _r = _t->relativeSpeed((*reinterpret_cast< BodyObject*(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< double*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< VisualizerObject* >(); break;
            }
            break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< BodyObject* >(); break;
            }
            break;
        case 4:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< BodyObject* >(); break;
            }
            break;
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<BodyObject *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->name(); break;
        case 1: *reinterpret_cast< bool*>(_v) = _t->isEllipsoid(); break;
        case 2: *reinterpret_cast< bool*>(_v) = _t->bodyAxes(); break;
        case 3: *reinterpret_cast< bool*>(_v) = _t->frameAxes(); break;
        case 4: *reinterpret_cast< bool*>(_v) = _t->velocityArrow(); break;
        case 5: *reinterpret_cast< bool*>(_v) = _t->longLatGrid(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<BodyObject *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 2: _t->setBodyAxes(*reinterpret_cast< bool*>(_v)); break;
        case 3: _t->setFrameAxes(*reinterpret_cast< bool*>(_v)); break;
        case 4: _t->setVelocityArrow(*reinterpret_cast< bool*>(_v)); break;
        case 5: _t->setLongLatGrid(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject BodyObject::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_BodyObject.data,
    qt_meta_data_BodyObject,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *BodyObject::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *BodyObject::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_BodyObject.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int BodyObject::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 6;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
