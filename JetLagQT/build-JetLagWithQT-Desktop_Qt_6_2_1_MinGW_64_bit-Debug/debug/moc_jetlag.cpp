/****************************************************************************
** Meta object code from reading C++ file 'jetlag.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.2.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../JetLagWithQT/jetlag.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'jetlag.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.2.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_JetLag_t {
    const uint offsetsAndSize[18];
    char stringdata0[180];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_JetLag_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_JetLag_t qt_meta_stringdata_JetLag = {
    {
QT_MOC_LITERAL(0, 6), // "JetLag"
QT_MOC_LITERAL(7, 21), // "on_cmdGetPlan_clicked"
QT_MOC_LITERAL(29, 0), // ""
QT_MOC_LITERAL(30, 37), // "on_JetLag_tabifiedDockWidgetA..."
QT_MOC_LITERAL(68, 12), // "QDockWidget*"
QT_MOC_LITERAL(81, 10), // "dockWidget"
QT_MOC_LITERAL(92, 38), // "on_cboOriginCountry_currentTe..."
QT_MOC_LITERAL(131, 4), // "arg1"
QT_MOC_LITERAL(136, 43) // "on_cboDestinationCountry_curr..."

    },
    "JetLag\0on_cmdGetPlan_clicked\0\0"
    "on_JetLag_tabifiedDockWidgetActivated\0"
    "QDockWidget*\0dockWidget\0"
    "on_cboOriginCountry_currentTextChanged\0"
    "arg1\0on_cboDestinationCountry_currentTextChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_JetLag[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   38,    2, 0x08,    1 /* Private */,
       3,    1,   39,    2, 0x08,    2 /* Private */,
       6,    1,   42,    2, 0x08,    4 /* Private */,
       8,    1,   45,    2, 0x08,    6 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void, QMetaType::QString,    7,
    QMetaType::Void, QMetaType::QString,    7,

       0        // eod
};

void JetLag::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<JetLag *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->on_cmdGetPlan_clicked(); break;
        case 1: _t->on_JetLag_tabifiedDockWidgetActivated((*reinterpret_cast< QDockWidget*(*)>(_a[1]))); break;
        case 2: _t->on_cboOriginCountry_currentTextChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->on_cboDestinationCountry_currentTextChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject JetLag::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_JetLag.offsetsAndSize,
    qt_meta_data_JetLag,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_JetLag_t
, QtPrivate::TypeAndForceComplete<JetLag, std::true_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QDockWidget *, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QString &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QString &, std::false_type>


>,
    nullptr
} };


const QMetaObject *JetLag::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *JetLag::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_JetLag.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int JetLag::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 4;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
