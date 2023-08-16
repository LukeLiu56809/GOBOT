/****************************************************************************
** Meta object code from reading C++ file 'query.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../Functions/Query/query.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'query.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
QT_WARNING_DISABLE_GCC("-Wuseless-cast")
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSQueryENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSQueryENDCLASS = QtMocHelpers::stringData(
    "Query",
    "addFiles",
    "",
    "QMap<QString,QString>&",
    "filesMap",
    "QListWidget*",
    "file",
    "addUpdates",
    "addCatalog",
    "removeFiles",
    "saveFiles",
    "resetQuery",
    "queryFiles",
    "onQueryAddOntologyClicked",
    "onQueryAddQueryClicked",
    "onQueryAddUpdateClicked",
    "onQueryRemoveOntologyClicked",
    "onQueryRemoveQueryClicked",
    "onQueryRemoveUpdateClicked",
    "onQueryCatalogSaveClicked",
    "onCatalogClicked",
    "checked",
    "onQuerySaveAsClicked",
    "onQueryResetClicked",
    "onQueryButtonClicked"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSQueryENDCLASS_t {
    uint offsetsAndSizes[50];
    char stringdata0[6];
    char stringdata1[9];
    char stringdata2[1];
    char stringdata3[23];
    char stringdata4[9];
    char stringdata5[13];
    char stringdata6[5];
    char stringdata7[11];
    char stringdata8[11];
    char stringdata9[12];
    char stringdata10[10];
    char stringdata11[11];
    char stringdata12[11];
    char stringdata13[26];
    char stringdata14[23];
    char stringdata15[24];
    char stringdata16[29];
    char stringdata17[26];
    char stringdata18[27];
    char stringdata19[26];
    char stringdata20[17];
    char stringdata21[8];
    char stringdata22[21];
    char stringdata23[20];
    char stringdata24[21];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSQueryENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSQueryENDCLASS_t qt_meta_stringdata_CLASSQueryENDCLASS = {
    {
        QT_MOC_LITERAL(0, 5),  // "Query"
        QT_MOC_LITERAL(6, 8),  // "addFiles"
        QT_MOC_LITERAL(15, 0),  // ""
        QT_MOC_LITERAL(16, 22),  // "QMap<QString,QString>&"
        QT_MOC_LITERAL(39, 8),  // "filesMap"
        QT_MOC_LITERAL(48, 12),  // "QListWidget*"
        QT_MOC_LITERAL(61, 4),  // "file"
        QT_MOC_LITERAL(66, 10),  // "addUpdates"
        QT_MOC_LITERAL(77, 10),  // "addCatalog"
        QT_MOC_LITERAL(88, 11),  // "removeFiles"
        QT_MOC_LITERAL(100, 9),  // "saveFiles"
        QT_MOC_LITERAL(110, 10),  // "resetQuery"
        QT_MOC_LITERAL(121, 10),  // "queryFiles"
        QT_MOC_LITERAL(132, 25),  // "onQueryAddOntologyClicked"
        QT_MOC_LITERAL(158, 22),  // "onQueryAddQueryClicked"
        QT_MOC_LITERAL(181, 23),  // "onQueryAddUpdateClicked"
        QT_MOC_LITERAL(205, 28),  // "onQueryRemoveOntologyClicked"
        QT_MOC_LITERAL(234, 25),  // "onQueryRemoveQueryClicked"
        QT_MOC_LITERAL(260, 26),  // "onQueryRemoveUpdateClicked"
        QT_MOC_LITERAL(287, 25),  // "onQueryCatalogSaveClicked"
        QT_MOC_LITERAL(313, 16),  // "onCatalogClicked"
        QT_MOC_LITERAL(330, 7),  // "checked"
        QT_MOC_LITERAL(338, 20),  // "onQuerySaveAsClicked"
        QT_MOC_LITERAL(359, 19),  // "onQueryResetClicked"
        QT_MOC_LITERAL(379, 20)   // "onQueryButtonClicked"
    },
    "Query",
    "addFiles",
    "",
    "QMap<QString,QString>&",
    "filesMap",
    "QListWidget*",
    "file",
    "addUpdates",
    "addCatalog",
    "removeFiles",
    "saveFiles",
    "resetQuery",
    "queryFiles",
    "onQueryAddOntologyClicked",
    "onQueryAddQueryClicked",
    "onQueryAddUpdateClicked",
    "onQueryRemoveOntologyClicked",
    "onQueryRemoveQueryClicked",
    "onQueryRemoveUpdateClicked",
    "onQueryCatalogSaveClicked",
    "onCatalogClicked",
    "checked",
    "onQuerySaveAsClicked",
    "onQueryResetClicked",
    "onQueryButtonClicked"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSQueryENDCLASS[] = {

 // content:
      11,       // revision
       0,       // classname
       0,    0, // classinfo
      18,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    2,  122,    2, 0x0a,    1 /* Public */,
       7,    0,  127,    2, 0x0a,    4 /* Public */,
       8,    0,  128,    2, 0x0a,    5 /* Public */,
       9,    2,  129,    2, 0x0a,    6 /* Public */,
      10,    0,  134,    2, 0x0a,    9 /* Public */,
      11,    0,  135,    2, 0x0a,   10 /* Public */,
      12,    0,  136,    2, 0x0a,   11 /* Public */,
      13,    0,  137,    2, 0x08,   12 /* Private */,
      14,    0,  138,    2, 0x08,   13 /* Private */,
      15,    0,  139,    2, 0x08,   14 /* Private */,
      16,    0,  140,    2, 0x08,   15 /* Private */,
      17,    0,  141,    2, 0x08,   16 /* Private */,
      18,    0,  142,    2, 0x08,   17 /* Private */,
      19,    0,  143,    2, 0x08,   18 /* Private */,
      20,    1,  144,    2, 0x08,   19 /* Private */,
      22,    0,  147,    2, 0x08,   21 /* Private */,
      23,    0,  148,    2, 0x08,   22 /* Private */,
      24,    0,  149,    2, 0x08,   23 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 5,    4,    6,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 5,    4,    6,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   21,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject Query::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_CLASSQueryENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSQueryENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSQueryENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<Query, std::true_type>,
        // method 'addFiles'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QMap<QString,QString> &, std::false_type>,
        QtPrivate::TypeAndForceComplete<QListWidget *, std::false_type>,
        // method 'addUpdates'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'addCatalog'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'removeFiles'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QMap<QString,QString> &, std::false_type>,
        QtPrivate::TypeAndForceComplete<QListWidget *, std::false_type>,
        // method 'saveFiles'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'resetQuery'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'queryFiles'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onQueryAddOntologyClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onQueryAddQueryClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onQueryAddUpdateClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onQueryRemoveOntologyClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onQueryRemoveQueryClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onQueryRemoveUpdateClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onQueryCatalogSaveClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onCatalogClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'onQuerySaveAsClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onQueryResetClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onQueryButtonClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void Query::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Query *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->addFiles((*reinterpret_cast< std::add_pointer_t<QMap<QString,QString>&>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QListWidget*>>(_a[2]))); break;
        case 1: _t->addUpdates(); break;
        case 2: _t->addCatalog(); break;
        case 3: _t->removeFiles((*reinterpret_cast< std::add_pointer_t<QMap<QString,QString>&>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QListWidget*>>(_a[2]))); break;
        case 4: _t->saveFiles(); break;
        case 5: _t->resetQuery(); break;
        case 6: _t->queryFiles(); break;
        case 7: _t->onQueryAddOntologyClicked(); break;
        case 8: _t->onQueryAddQueryClicked(); break;
        case 9: _t->onQueryAddUpdateClicked(); break;
        case 10: _t->onQueryRemoveOntologyClicked(); break;
        case 11: _t->onQueryRemoveQueryClicked(); break;
        case 12: _t->onQueryRemoveUpdateClicked(); break;
        case 13: _t->onQueryCatalogSaveClicked(); break;
        case 14: _t->onCatalogClicked((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 15: _t->onQuerySaveAsClicked(); break;
        case 16: _t->onQueryResetClicked(); break;
        case 17: _t->onQueryButtonClicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 1:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QListWidget* >(); break;
            }
            break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 1:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QListWidget* >(); break;
            }
            break;
        }
    }
}

const QMetaObject *Query::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Query::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSQueryENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int Query::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 18)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 18;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 18)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 18;
    }
    return _id;
}
QT_WARNING_POP
