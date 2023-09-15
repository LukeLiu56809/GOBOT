/****************************************************************************
** Meta object code from reading C++ file 'rename.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/Functions/Rename/rename.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'rename.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSRenameENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSRenameENDCLASS = QtMocHelpers::stringData(
    "Rename",
    "addFiles",
    "",
    "QMap<QString,QString>&",
    "filesMap",
    "QListWidget*",
    "files",
    "addTerms",
    "addTermFiles",
    "QString&",
    "path",
    "QLineEdit*",
    "file",
    "addMapping",
    "removeFiles",
    "removeTerms",
    "saveFiles",
    "resetRename",
    "renameFiles",
    "onRenameAddOntologyClicked",
    "onRenameAddTermClicked",
    "onRenameAddMappingFileClicked",
    "onRenameRemoveOntologyClicked",
    "onRenameRemoveTermClicked",
    "onRenameRemoveMappingFileClicked",
    "onPrefixMappingsClicked",
    "checked",
    "onPrefixMappingsSaveClicked",
    "onAddPrefixClicked",
    "onRenameSaveAsClicked",
    "onRenameResetClicked",
    "onRenameButtonClicked"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSRenameENDCLASS_t {
    uint offsetsAndSizes[64];
    char stringdata0[7];
    char stringdata1[9];
    char stringdata2[1];
    char stringdata3[23];
    char stringdata4[9];
    char stringdata5[13];
    char stringdata6[6];
    char stringdata7[9];
    char stringdata8[13];
    char stringdata9[9];
    char stringdata10[5];
    char stringdata11[11];
    char stringdata12[5];
    char stringdata13[11];
    char stringdata14[12];
    char stringdata15[12];
    char stringdata16[10];
    char stringdata17[12];
    char stringdata18[12];
    char stringdata19[27];
    char stringdata20[23];
    char stringdata21[30];
    char stringdata22[30];
    char stringdata23[26];
    char stringdata24[33];
    char stringdata25[24];
    char stringdata26[8];
    char stringdata27[28];
    char stringdata28[19];
    char stringdata29[22];
    char stringdata30[21];
    char stringdata31[22];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSRenameENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSRenameENDCLASS_t qt_meta_stringdata_CLASSRenameENDCLASS = {
    {
        QT_MOC_LITERAL(0, 6),  // "Rename"
        QT_MOC_LITERAL(7, 8),  // "addFiles"
        QT_MOC_LITERAL(16, 0),  // ""
        QT_MOC_LITERAL(17, 22),  // "QMap<QString,QString>&"
        QT_MOC_LITERAL(40, 8),  // "filesMap"
        QT_MOC_LITERAL(49, 12),  // "QListWidget*"
        QT_MOC_LITERAL(62, 5),  // "files"
        QT_MOC_LITERAL(68, 8),  // "addTerms"
        QT_MOC_LITERAL(77, 12),  // "addTermFiles"
        QT_MOC_LITERAL(90, 8),  // "QString&"
        QT_MOC_LITERAL(99, 4),  // "path"
        QT_MOC_LITERAL(104, 10),  // "QLineEdit*"
        QT_MOC_LITERAL(115, 4),  // "file"
        QT_MOC_LITERAL(120, 10),  // "addMapping"
        QT_MOC_LITERAL(131, 11),  // "removeFiles"
        QT_MOC_LITERAL(143, 11),  // "removeTerms"
        QT_MOC_LITERAL(155, 9),  // "saveFiles"
        QT_MOC_LITERAL(165, 11),  // "resetRename"
        QT_MOC_LITERAL(177, 11),  // "renameFiles"
        QT_MOC_LITERAL(189, 26),  // "onRenameAddOntologyClicked"
        QT_MOC_LITERAL(216, 22),  // "onRenameAddTermClicked"
        QT_MOC_LITERAL(239, 29),  // "onRenameAddMappingFileClicked"
        QT_MOC_LITERAL(269, 29),  // "onRenameRemoveOntologyClicked"
        QT_MOC_LITERAL(299, 25),  // "onRenameRemoveTermClicked"
        QT_MOC_LITERAL(325, 32),  // "onRenameRemoveMappingFileClicked"
        QT_MOC_LITERAL(358, 23),  // "onPrefixMappingsClicked"
        QT_MOC_LITERAL(382, 7),  // "checked"
        QT_MOC_LITERAL(390, 27),  // "onPrefixMappingsSaveClicked"
        QT_MOC_LITERAL(418, 18),  // "onAddPrefixClicked"
        QT_MOC_LITERAL(437, 21),  // "onRenameSaveAsClicked"
        QT_MOC_LITERAL(459, 20),  // "onRenameResetClicked"
        QT_MOC_LITERAL(480, 21)   // "onRenameButtonClicked"
    },
    "Rename",
    "addFiles",
    "",
    "QMap<QString,QString>&",
    "filesMap",
    "QListWidget*",
    "files",
    "addTerms",
    "addTermFiles",
    "QString&",
    "path",
    "QLineEdit*",
    "file",
    "addMapping",
    "removeFiles",
    "removeTerms",
    "saveFiles",
    "resetRename",
    "renameFiles",
    "onRenameAddOntologyClicked",
    "onRenameAddTermClicked",
    "onRenameAddMappingFileClicked",
    "onRenameRemoveOntologyClicked",
    "onRenameRemoveTermClicked",
    "onRenameRemoveMappingFileClicked",
    "onPrefixMappingsClicked",
    "checked",
    "onPrefixMappingsSaveClicked",
    "onAddPrefixClicked",
    "onRenameSaveAsClicked",
    "onRenameResetClicked",
    "onRenameButtonClicked"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSRenameENDCLASS[] = {

 // content:
      11,       // revision
       0,       // classname
       0,    0, // classinfo
      21,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    2,  140,    2, 0x0a,    1 /* Public */,
       7,    0,  145,    2, 0x0a,    4 /* Public */,
       8,    2,  146,    2, 0x0a,    5 /* Public */,
      13,    0,  151,    2, 0x0a,    8 /* Public */,
      14,    2,  152,    2, 0x0a,    9 /* Public */,
      15,    0,  157,    2, 0x0a,   12 /* Public */,
      16,    0,  158,    2, 0x0a,   13 /* Public */,
      17,    0,  159,    2, 0x0a,   14 /* Public */,
      18,    0,  160,    2, 0x0a,   15 /* Public */,
      19,    0,  161,    2, 0x08,   16 /* Private */,
      20,    0,  162,    2, 0x08,   17 /* Private */,
      21,    0,  163,    2, 0x08,   18 /* Private */,
      22,    0,  164,    2, 0x08,   19 /* Private */,
      23,    0,  165,    2, 0x08,   20 /* Private */,
      24,    0,  166,    2, 0x08,   21 /* Private */,
      25,    1,  167,    2, 0x08,   22 /* Private */,
      27,    0,  170,    2, 0x08,   24 /* Private */,
      28,    1,  171,    2, 0x08,   25 /* Private */,
      29,    0,  174,    2, 0x08,   27 /* Private */,
      30,    0,  175,    2, 0x08,   28 /* Private */,
      31,    0,  176,    2, 0x08,   29 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 5,    4,    6,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 9, 0x80000000 | 11,   10,   12,
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
    QMetaType::Void, QMetaType::Bool,   26,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   26,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject Rename::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_CLASSRenameENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSRenameENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSRenameENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<Rename, std::true_type>,
        // method 'addFiles'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QMap<QString,QString> &, std::false_type>,
        QtPrivate::TypeAndForceComplete<QListWidget *, std::false_type>,
        // method 'addTerms'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'addTermFiles'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<QLineEdit *, std::false_type>,
        // method 'addMapping'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'removeFiles'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QMap<QString,QString> &, std::false_type>,
        QtPrivate::TypeAndForceComplete<QListWidget *, std::false_type>,
        // method 'removeTerms'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'saveFiles'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'resetRename'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'renameFiles'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onRenameAddOntologyClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onRenameAddTermClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onRenameAddMappingFileClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onRenameRemoveOntologyClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onRenameRemoveTermClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onRenameRemoveMappingFileClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onPrefixMappingsClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'onPrefixMappingsSaveClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onAddPrefixClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'onRenameSaveAsClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onRenameResetClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onRenameButtonClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void Rename::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Rename *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->addFiles((*reinterpret_cast< std::add_pointer_t<QMap<QString,QString>&>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QListWidget*>>(_a[2]))); break;
        case 1: _t->addTerms(); break;
        case 2: _t->addTermFiles((*reinterpret_cast< std::add_pointer_t<QString&>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QLineEdit*>>(_a[2]))); break;
        case 3: _t->addMapping(); break;
        case 4: _t->removeFiles((*reinterpret_cast< std::add_pointer_t<QMap<QString,QString>&>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QListWidget*>>(_a[2]))); break;
        case 5: _t->removeTerms(); break;
        case 6: _t->saveFiles(); break;
        case 7: _t->resetRename(); break;
        case 8: _t->renameFiles(); break;
        case 9: _t->onRenameAddOntologyClicked(); break;
        case 10: _t->onRenameAddTermClicked(); break;
        case 11: _t->onRenameAddMappingFileClicked(); break;
        case 12: _t->onRenameRemoveOntologyClicked(); break;
        case 13: _t->onRenameRemoveTermClicked(); break;
        case 14: _t->onRenameRemoveMappingFileClicked(); break;
        case 15: _t->onPrefixMappingsClicked((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 16: _t->onPrefixMappingsSaveClicked(); break;
        case 17: _t->onAddPrefixClicked((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 18: _t->onRenameSaveAsClicked(); break;
        case 19: _t->onRenameResetClicked(); break;
        case 20: _t->onRenameButtonClicked(); break;
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
        case 4:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 1:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QListWidget* >(); break;
            }
            break;
        }
    }
}

const QMetaObject *Rename::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Rename::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSRenameENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int Rename::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 21)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 21;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 21)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 21;
    }
    return _id;
}
QT_WARNING_POP
