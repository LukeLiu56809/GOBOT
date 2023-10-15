/****************************************************************************
** Meta object code from reading C++ file 'query.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/Functions/Query/query.h"
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
    "queryDirectory",
    "QLineEdit*",
    "line",
    "createTDBDirectory",
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
    "onQueryTDBDirectoryClicked",
    "onQueryCreateTDBClicked",
    "onQueryCatalogSaveClicked",
    "onCatalogClicked",
    "checked",
    "onQuerySaveAsClicked",
    "onQueryResetClicked",
    "onQueryButtonClicked"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSQueryENDCLASS_t {
    uint offsetsAndSizes[62];
    char stringdata0[6];
    char stringdata1[9];
    char stringdata2[1];
    char stringdata3[23];
    char stringdata4[9];
    char stringdata5[13];
    char stringdata6[5];
    char stringdata7[11];
    char stringdata8[11];
    char stringdata9[15];
    char stringdata10[11];
    char stringdata11[5];
    char stringdata12[19];
    char stringdata13[12];
    char stringdata14[10];
    char stringdata15[11];
    char stringdata16[11];
    char stringdata17[26];
    char stringdata18[23];
    char stringdata19[24];
    char stringdata20[29];
    char stringdata21[26];
    char stringdata22[27];
    char stringdata23[27];
    char stringdata24[24];
    char stringdata25[26];
    char stringdata26[17];
    char stringdata27[8];
    char stringdata28[21];
    char stringdata29[20];
    char stringdata30[21];
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
        QT_MOC_LITERAL(88, 14),  // "queryDirectory"
        QT_MOC_LITERAL(103, 10),  // "QLineEdit*"
        QT_MOC_LITERAL(114, 4),  // "line"
        QT_MOC_LITERAL(119, 18),  // "createTDBDirectory"
        QT_MOC_LITERAL(138, 11),  // "removeFiles"
        QT_MOC_LITERAL(150, 9),  // "saveFiles"
        QT_MOC_LITERAL(160, 10),  // "resetQuery"
        QT_MOC_LITERAL(171, 10),  // "queryFiles"
        QT_MOC_LITERAL(182, 25),  // "onQueryAddOntologyClicked"
        QT_MOC_LITERAL(208, 22),  // "onQueryAddQueryClicked"
        QT_MOC_LITERAL(231, 23),  // "onQueryAddUpdateClicked"
        QT_MOC_LITERAL(255, 28),  // "onQueryRemoveOntologyClicked"
        QT_MOC_LITERAL(284, 25),  // "onQueryRemoveQueryClicked"
        QT_MOC_LITERAL(310, 26),  // "onQueryRemoveUpdateClicked"
        QT_MOC_LITERAL(337, 26),  // "onQueryTDBDirectoryClicked"
        QT_MOC_LITERAL(364, 23),  // "onQueryCreateTDBClicked"
        QT_MOC_LITERAL(388, 25),  // "onQueryCatalogSaveClicked"
        QT_MOC_LITERAL(414, 16),  // "onCatalogClicked"
        QT_MOC_LITERAL(431, 7),  // "checked"
        QT_MOC_LITERAL(439, 20),  // "onQuerySaveAsClicked"
        QT_MOC_LITERAL(460, 19),  // "onQueryResetClicked"
        QT_MOC_LITERAL(480, 20)   // "onQueryButtonClicked"
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
    "queryDirectory",
    "QLineEdit*",
    "line",
    "createTDBDirectory",
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
    "onQueryTDBDirectoryClicked",
    "onQueryCreateTDBClicked",
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
      22,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    2,  146,    2, 0x0a,    1 /* Public */,
       7,    0,  151,    2, 0x0a,    4 /* Public */,
       8,    0,  152,    2, 0x0a,    5 /* Public */,
       9,    1,  153,    2, 0x0a,    6 /* Public */,
      12,    0,  156,    2, 0x0a,    8 /* Public */,
      13,    2,  157,    2, 0x0a,    9 /* Public */,
      14,    0,  162,    2, 0x0a,   12 /* Public */,
      15,    0,  163,    2, 0x0a,   13 /* Public */,
      16,    0,  164,    2, 0x0a,   14 /* Public */,
      17,    0,  165,    2, 0x08,   15 /* Private */,
      18,    0,  166,    2, 0x08,   16 /* Private */,
      19,    0,  167,    2, 0x08,   17 /* Private */,
      20,    0,  168,    2, 0x08,   18 /* Private */,
      21,    0,  169,    2, 0x08,   19 /* Private */,
      22,    0,  170,    2, 0x08,   20 /* Private */,
      23,    0,  171,    2, 0x08,   21 /* Private */,
      24,    0,  172,    2, 0x08,   22 /* Private */,
      25,    0,  173,    2, 0x08,   23 /* Private */,
      26,    1,  174,    2, 0x08,   24 /* Private */,
      28,    0,  177,    2, 0x08,   26 /* Private */,
      29,    0,  178,    2, 0x08,   27 /* Private */,
      30,    0,  179,    2, 0x08,   28 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 5,    4,    6,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 10,   11,
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
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   27,
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
        // method 'queryDirectory'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QLineEdit *, std::false_type>,
        // method 'createTDBDirectory'
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
        // method 'onQueryTDBDirectoryClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onQueryCreateTDBClicked'
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
        case 3: _t->queryDirectory((*reinterpret_cast< std::add_pointer_t<QLineEdit*>>(_a[1]))); break;
        case 4: _t->createTDBDirectory(); break;
        case 5: _t->removeFiles((*reinterpret_cast< std::add_pointer_t<QMap<QString,QString>&>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QListWidget*>>(_a[2]))); break;
        case 6: _t->saveFiles(); break;
        case 7: _t->resetQuery(); break;
        case 8: _t->queryFiles(); break;
        case 9: _t->onQueryAddOntologyClicked(); break;
        case 10: _t->onQueryAddQueryClicked(); break;
        case 11: _t->onQueryAddUpdateClicked(); break;
        case 12: _t->onQueryRemoveOntologyClicked(); break;
        case 13: _t->onQueryRemoveQueryClicked(); break;
        case 14: _t->onQueryRemoveUpdateClicked(); break;
        case 15: _t->onQueryTDBDirectoryClicked(); break;
        case 16: _t->onQueryCreateTDBClicked(); break;
        case 17: _t->onQueryCatalogSaveClicked(); break;
        case 18: _t->onCatalogClicked((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 19: _t->onQuerySaveAsClicked(); break;
        case 20: _t->onQueryResetClicked(); break;
        case 21: _t->onQueryButtonClicked(); break;
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
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QLineEdit* >(); break;
            }
            break;
        case 5:
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
        if (_id < 22)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 22;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 22)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 22;
    }
    return _id;
}
QT_WARNING_POP
