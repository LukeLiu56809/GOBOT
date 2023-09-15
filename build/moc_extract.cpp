/****************************************************************************
** Meta object code from reading C++ file 'extract.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/Functions/Extract/extract.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'extract.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSExtractENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSExtractENDCLASS = QtMocHelpers::stringData(
    "Extract",
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
    "removeFiles",
    "removeTerms",
    "saveFiles",
    "resetExtract",
    "extractFiles",
    "onExtractAddOntologyClicked",
    "onExtractAddTermClicked",
    "onExtractAddTermFileClicked",
    "onExtractRemoveOntologyClicked",
    "onExtractRemoveTermClicked",
    "onExtractRemoveTermFileClicked",
    "onUpperTermClicked",
    "checked",
    "onLowerTermClicked",
    "onBranchTermClicked",
    "onUpperTermFileClicked",
    "onLowerTermFileClicked",
    "onBranchTermFileClicked",
    "onPrefixClicked",
    "onSourceMapClicked",
    "onUpperTermFileSaveClicked",
    "onLowerTermFileSaveClicked",
    "onBranchTermFileSaveClicked",
    "onSourceMapSaveClicked",
    "onExtractSaveAsClicked",
    "onExtractResetClicked",
    "onExtractButtonClicked"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSExtractENDCLASS_t {
    uint offsetsAndSizes[80];
    char stringdata0[8];
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
    char stringdata13[12];
    char stringdata14[12];
    char stringdata15[10];
    char stringdata16[13];
    char stringdata17[13];
    char stringdata18[28];
    char stringdata19[24];
    char stringdata20[28];
    char stringdata21[31];
    char stringdata22[27];
    char stringdata23[31];
    char stringdata24[19];
    char stringdata25[8];
    char stringdata26[19];
    char stringdata27[20];
    char stringdata28[23];
    char stringdata29[23];
    char stringdata30[24];
    char stringdata31[16];
    char stringdata32[19];
    char stringdata33[27];
    char stringdata34[27];
    char stringdata35[28];
    char stringdata36[23];
    char stringdata37[23];
    char stringdata38[22];
    char stringdata39[23];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSExtractENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSExtractENDCLASS_t qt_meta_stringdata_CLASSExtractENDCLASS = {
    {
        QT_MOC_LITERAL(0, 7),  // "Extract"
        QT_MOC_LITERAL(8, 8),  // "addFiles"
        QT_MOC_LITERAL(17, 0),  // ""
        QT_MOC_LITERAL(18, 22),  // "QMap<QString,QString>&"
        QT_MOC_LITERAL(41, 8),  // "filesMap"
        QT_MOC_LITERAL(50, 12),  // "QListWidget*"
        QT_MOC_LITERAL(63, 5),  // "files"
        QT_MOC_LITERAL(69, 8),  // "addTerms"
        QT_MOC_LITERAL(78, 12),  // "addTermFiles"
        QT_MOC_LITERAL(91, 8),  // "QString&"
        QT_MOC_LITERAL(100, 4),  // "path"
        QT_MOC_LITERAL(105, 10),  // "QLineEdit*"
        QT_MOC_LITERAL(116, 4),  // "file"
        QT_MOC_LITERAL(121, 11),  // "removeFiles"
        QT_MOC_LITERAL(133, 11),  // "removeTerms"
        QT_MOC_LITERAL(145, 9),  // "saveFiles"
        QT_MOC_LITERAL(155, 12),  // "resetExtract"
        QT_MOC_LITERAL(168, 12),  // "extractFiles"
        QT_MOC_LITERAL(181, 27),  // "onExtractAddOntologyClicked"
        QT_MOC_LITERAL(209, 23),  // "onExtractAddTermClicked"
        QT_MOC_LITERAL(233, 27),  // "onExtractAddTermFileClicked"
        QT_MOC_LITERAL(261, 30),  // "onExtractRemoveOntologyClicked"
        QT_MOC_LITERAL(292, 26),  // "onExtractRemoveTermClicked"
        QT_MOC_LITERAL(319, 30),  // "onExtractRemoveTermFileClicked"
        QT_MOC_LITERAL(350, 18),  // "onUpperTermClicked"
        QT_MOC_LITERAL(369, 7),  // "checked"
        QT_MOC_LITERAL(377, 18),  // "onLowerTermClicked"
        QT_MOC_LITERAL(396, 19),  // "onBranchTermClicked"
        QT_MOC_LITERAL(416, 22),  // "onUpperTermFileClicked"
        QT_MOC_LITERAL(439, 22),  // "onLowerTermFileClicked"
        QT_MOC_LITERAL(462, 23),  // "onBranchTermFileClicked"
        QT_MOC_LITERAL(486, 15),  // "onPrefixClicked"
        QT_MOC_LITERAL(502, 18),  // "onSourceMapClicked"
        QT_MOC_LITERAL(521, 26),  // "onUpperTermFileSaveClicked"
        QT_MOC_LITERAL(548, 26),  // "onLowerTermFileSaveClicked"
        QT_MOC_LITERAL(575, 27),  // "onBranchTermFileSaveClicked"
        QT_MOC_LITERAL(603, 22),  // "onSourceMapSaveClicked"
        QT_MOC_LITERAL(626, 22),  // "onExtractSaveAsClicked"
        QT_MOC_LITERAL(649, 21),  // "onExtractResetClicked"
        QT_MOC_LITERAL(671, 22)   // "onExtractButtonClicked"
    },
    "Extract",
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
    "removeFiles",
    "removeTerms",
    "saveFiles",
    "resetExtract",
    "extractFiles",
    "onExtractAddOntologyClicked",
    "onExtractAddTermClicked",
    "onExtractAddTermFileClicked",
    "onExtractRemoveOntologyClicked",
    "onExtractRemoveTermClicked",
    "onExtractRemoveTermFileClicked",
    "onUpperTermClicked",
    "checked",
    "onLowerTermClicked",
    "onBranchTermClicked",
    "onUpperTermFileClicked",
    "onLowerTermFileClicked",
    "onBranchTermFileClicked",
    "onPrefixClicked",
    "onSourceMapClicked",
    "onUpperTermFileSaveClicked",
    "onLowerTermFileSaveClicked",
    "onBranchTermFileSaveClicked",
    "onSourceMapSaveClicked",
    "onExtractSaveAsClicked",
    "onExtractResetClicked",
    "onExtractButtonClicked"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSExtractENDCLASS[] = {

 // content:
      11,       // revision
       0,       // classname
       0,    0, // classinfo
      29,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    2,  188,    2, 0x0a,    1 /* Public */,
       7,    0,  193,    2, 0x0a,    4 /* Public */,
       8,    2,  194,    2, 0x0a,    5 /* Public */,
      13,    2,  199,    2, 0x0a,    8 /* Public */,
      14,    0,  204,    2, 0x0a,   11 /* Public */,
      15,    0,  205,    2, 0x0a,   12 /* Public */,
      16,    0,  206,    2, 0x0a,   13 /* Public */,
      17,    0,  207,    2, 0x0a,   14 /* Public */,
      18,    0,  208,    2, 0x08,   15 /* Private */,
      19,    0,  209,    2, 0x08,   16 /* Private */,
      20,    0,  210,    2, 0x08,   17 /* Private */,
      21,    0,  211,    2, 0x08,   18 /* Private */,
      22,    0,  212,    2, 0x08,   19 /* Private */,
      23,    0,  213,    2, 0x08,   20 /* Private */,
      24,    1,  214,    2, 0x08,   21 /* Private */,
      26,    1,  217,    2, 0x08,   23 /* Private */,
      27,    1,  220,    2, 0x08,   25 /* Private */,
      28,    1,  223,    2, 0x08,   27 /* Private */,
      29,    1,  226,    2, 0x08,   29 /* Private */,
      30,    1,  229,    2, 0x08,   31 /* Private */,
      31,    1,  232,    2, 0x08,   33 /* Private */,
      32,    1,  235,    2, 0x08,   35 /* Private */,
      33,    0,  238,    2, 0x08,   37 /* Private */,
      34,    0,  239,    2, 0x08,   38 /* Private */,
      35,    0,  240,    2, 0x08,   39 /* Private */,
      36,    0,  241,    2, 0x08,   40 /* Private */,
      37,    0,  242,    2, 0x08,   41 /* Private */,
      38,    0,  243,    2, 0x08,   42 /* Private */,
      39,    0,  244,    2, 0x08,   43 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 5,    4,    6,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 9, 0x80000000 | 11,   10,   12,
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
    QMetaType::Void, QMetaType::Bool,   25,
    QMetaType::Void, QMetaType::Bool,   25,
    QMetaType::Void, QMetaType::Bool,   25,
    QMetaType::Void, QMetaType::Bool,   25,
    QMetaType::Void, QMetaType::Bool,   25,
    QMetaType::Void, QMetaType::Bool,   25,
    QMetaType::Void, QMetaType::Bool,   25,
    QMetaType::Void, QMetaType::Bool,   25,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject Extract::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_CLASSExtractENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSExtractENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSExtractENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<Extract, std::true_type>,
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
        // method 'removeFiles'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QMap<QString,QString> &, std::false_type>,
        QtPrivate::TypeAndForceComplete<QListWidget *, std::false_type>,
        // method 'removeTerms'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'saveFiles'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'resetExtract'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'extractFiles'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onExtractAddOntologyClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onExtractAddTermClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onExtractAddTermFileClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onExtractRemoveOntologyClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onExtractRemoveTermClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onExtractRemoveTermFileClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onUpperTermClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'onLowerTermClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'onBranchTermClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'onUpperTermFileClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'onLowerTermFileClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'onBranchTermFileClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'onPrefixClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'onSourceMapClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'onUpperTermFileSaveClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onLowerTermFileSaveClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onBranchTermFileSaveClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onSourceMapSaveClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onExtractSaveAsClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onExtractResetClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onExtractButtonClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void Extract::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Extract *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->addFiles((*reinterpret_cast< std::add_pointer_t<QMap<QString,QString>&>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QListWidget*>>(_a[2]))); break;
        case 1: _t->addTerms(); break;
        case 2: _t->addTermFiles((*reinterpret_cast< std::add_pointer_t<QString&>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QLineEdit*>>(_a[2]))); break;
        case 3: _t->removeFiles((*reinterpret_cast< std::add_pointer_t<QMap<QString,QString>&>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QListWidget*>>(_a[2]))); break;
        case 4: _t->removeTerms(); break;
        case 5: _t->saveFiles(); break;
        case 6: _t->resetExtract(); break;
        case 7: _t->extractFiles(); break;
        case 8: _t->onExtractAddOntologyClicked(); break;
        case 9: _t->onExtractAddTermClicked(); break;
        case 10: _t->onExtractAddTermFileClicked(); break;
        case 11: _t->onExtractRemoveOntologyClicked(); break;
        case 12: _t->onExtractRemoveTermClicked(); break;
        case 13: _t->onExtractRemoveTermFileClicked(); break;
        case 14: _t->onUpperTermClicked((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 15: _t->onLowerTermClicked((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 16: _t->onBranchTermClicked((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 17: _t->onUpperTermFileClicked((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 18: _t->onLowerTermFileClicked((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 19: _t->onBranchTermFileClicked((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 20: _t->onPrefixClicked((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 21: _t->onSourceMapClicked((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 22: _t->onUpperTermFileSaveClicked(); break;
        case 23: _t->onLowerTermFileSaveClicked(); break;
        case 24: _t->onBranchTermFileSaveClicked(); break;
        case 25: _t->onSourceMapSaveClicked(); break;
        case 26: _t->onExtractSaveAsClicked(); break;
        case 27: _t->onExtractResetClicked(); break;
        case 28: _t->onExtractButtonClicked(); break;
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

const QMetaObject *Extract::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Extract::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSExtractENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int Extract::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 29)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 29;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 29)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 29;
    }
    return _id;
}
QT_WARNING_POP
