/****************************************************************************
** Meta object code from reading C++ file 'diff.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../Functions/Diff/diff.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'diff.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSDiffENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSDiffENDCLASS = QtMocHelpers::stringData(
    "Diff",
    "addFiles",
    "",
    "QMap<QString,QString>&",
    "filesMap",
    "QLineEdit*",
    "fileNameLineEdit",
    "addCatalog",
    "catalogFile",
    "QString&",
    "termPath",
    "saveFiles",
    "resetDiff",
    "diffFiles",
    "onDiffSaveAsClicked",
    "onDiffResetClicked",
    "onDiffButtonClicked",
    "onLeftOntologySaveClicked",
    "onLeftOntologyClicked",
    "checked",
    "onLeftIRIClicked",
    "onLeftCatalogClicked",
    "onLeftCatalogSaveClicked",
    "onRightOntologySaveClicked",
    "onRightOntologyClicked",
    "onRightIRIClicked",
    "onRightCatalogClicked",
    "onRightCatalogSaveClicked"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSDiffENDCLASS_t {
    uint offsetsAndSizes[56];
    char stringdata0[5];
    char stringdata1[9];
    char stringdata2[1];
    char stringdata3[23];
    char stringdata4[9];
    char stringdata5[11];
    char stringdata6[17];
    char stringdata7[11];
    char stringdata8[12];
    char stringdata9[9];
    char stringdata10[9];
    char stringdata11[10];
    char stringdata12[10];
    char stringdata13[10];
    char stringdata14[20];
    char stringdata15[19];
    char stringdata16[20];
    char stringdata17[26];
    char stringdata18[22];
    char stringdata19[8];
    char stringdata20[17];
    char stringdata21[21];
    char stringdata22[25];
    char stringdata23[27];
    char stringdata24[23];
    char stringdata25[18];
    char stringdata26[22];
    char stringdata27[26];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSDiffENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSDiffENDCLASS_t qt_meta_stringdata_CLASSDiffENDCLASS = {
    {
        QT_MOC_LITERAL(0, 4),  // "Diff"
        QT_MOC_LITERAL(5, 8),  // "addFiles"
        QT_MOC_LITERAL(14, 0),  // ""
        QT_MOC_LITERAL(15, 22),  // "QMap<QString,QString>&"
        QT_MOC_LITERAL(38, 8),  // "filesMap"
        QT_MOC_LITERAL(47, 10),  // "QLineEdit*"
        QT_MOC_LITERAL(58, 16),  // "fileNameLineEdit"
        QT_MOC_LITERAL(75, 10),  // "addCatalog"
        QT_MOC_LITERAL(86, 11),  // "catalogFile"
        QT_MOC_LITERAL(98, 8),  // "QString&"
        QT_MOC_LITERAL(107, 8),  // "termPath"
        QT_MOC_LITERAL(116, 9),  // "saveFiles"
        QT_MOC_LITERAL(126, 9),  // "resetDiff"
        QT_MOC_LITERAL(136, 9),  // "diffFiles"
        QT_MOC_LITERAL(146, 19),  // "onDiffSaveAsClicked"
        QT_MOC_LITERAL(166, 18),  // "onDiffResetClicked"
        QT_MOC_LITERAL(185, 19),  // "onDiffButtonClicked"
        QT_MOC_LITERAL(205, 25),  // "onLeftOntologySaveClicked"
        QT_MOC_LITERAL(231, 21),  // "onLeftOntologyClicked"
        QT_MOC_LITERAL(253, 7),  // "checked"
        QT_MOC_LITERAL(261, 16),  // "onLeftIRIClicked"
        QT_MOC_LITERAL(278, 20),  // "onLeftCatalogClicked"
        QT_MOC_LITERAL(299, 24),  // "onLeftCatalogSaveClicked"
        QT_MOC_LITERAL(324, 26),  // "onRightOntologySaveClicked"
        QT_MOC_LITERAL(351, 22),  // "onRightOntologyClicked"
        QT_MOC_LITERAL(374, 17),  // "onRightIRIClicked"
        QT_MOC_LITERAL(392, 21),  // "onRightCatalogClicked"
        QT_MOC_LITERAL(414, 25)   // "onRightCatalogSaveClicked"
    },
    "Diff",
    "addFiles",
    "",
    "QMap<QString,QString>&",
    "filesMap",
    "QLineEdit*",
    "fileNameLineEdit",
    "addCatalog",
    "catalogFile",
    "QString&",
    "termPath",
    "saveFiles",
    "resetDiff",
    "diffFiles",
    "onDiffSaveAsClicked",
    "onDiffResetClicked",
    "onDiffButtonClicked",
    "onLeftOntologySaveClicked",
    "onLeftOntologyClicked",
    "checked",
    "onLeftIRIClicked",
    "onLeftCatalogClicked",
    "onLeftCatalogSaveClicked",
    "onRightOntologySaveClicked",
    "onRightOntologyClicked",
    "onRightIRIClicked",
    "onRightCatalogClicked",
    "onRightCatalogSaveClicked"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSDiffENDCLASS[] = {

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
       7,    2,  127,    2, 0x0a,    4 /* Public */,
      11,    0,  132,    2, 0x0a,    7 /* Public */,
      12,    0,  133,    2, 0x0a,    8 /* Public */,
      13,    0,  134,    2, 0x0a,    9 /* Public */,
      14,    0,  135,    2, 0x08,   10 /* Private */,
      15,    0,  136,    2, 0x08,   11 /* Private */,
      16,    0,  137,    2, 0x08,   12 /* Private */,
      17,    0,  138,    2, 0x08,   13 /* Private */,
      18,    1,  139,    2, 0x08,   14 /* Private */,
      20,    1,  142,    2, 0x08,   16 /* Private */,
      21,    1,  145,    2, 0x08,   18 /* Private */,
      22,    0,  148,    2, 0x08,   20 /* Private */,
      23,    0,  149,    2, 0x08,   21 /* Private */,
      24,    1,  150,    2, 0x08,   22 /* Private */,
      25,    1,  153,    2, 0x08,   24 /* Private */,
      26,    1,  156,    2, 0x08,   26 /* Private */,
      27,    0,  159,    2, 0x08,   28 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 5,    4,    6,
    QMetaType::Void, 0x80000000 | 5, 0x80000000 | 9,    8,   10,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   19,
    QMetaType::Void, QMetaType::Bool,   19,
    QMetaType::Void, QMetaType::Bool,   19,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   19,
    QMetaType::Void, QMetaType::Bool,   19,
    QMetaType::Void, QMetaType::Bool,   19,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject Diff::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_CLASSDiffENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSDiffENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSDiffENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<Diff, std::true_type>,
        // method 'addFiles'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QMap<QString,QString> &, std::false_type>,
        QtPrivate::TypeAndForceComplete<QLineEdit *, std::false_type>,
        // method 'addCatalog'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QLineEdit *, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString &, std::false_type>,
        // method 'saveFiles'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'resetDiff'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'diffFiles'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onDiffSaveAsClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onDiffResetClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onDiffButtonClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onLeftOntologySaveClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onLeftOntologyClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'onLeftIRIClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'onLeftCatalogClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'onLeftCatalogSaveClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onRightOntologySaveClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onRightOntologyClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'onRightIRIClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'onRightCatalogClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'onRightCatalogSaveClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void Diff::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Diff *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->addFiles((*reinterpret_cast< std::add_pointer_t<QMap<QString,QString>&>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QLineEdit*>>(_a[2]))); break;
        case 1: _t->addCatalog((*reinterpret_cast< std::add_pointer_t<QLineEdit*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString&>>(_a[2]))); break;
        case 2: _t->saveFiles(); break;
        case 3: _t->resetDiff(); break;
        case 4: _t->diffFiles(); break;
        case 5: _t->onDiffSaveAsClicked(); break;
        case 6: _t->onDiffResetClicked(); break;
        case 7: _t->onDiffButtonClicked(); break;
        case 8: _t->onLeftOntologySaveClicked(); break;
        case 9: _t->onLeftOntologyClicked((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 10: _t->onLeftIRIClicked((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 11: _t->onLeftCatalogClicked((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 12: _t->onLeftCatalogSaveClicked(); break;
        case 13: _t->onRightOntologySaveClicked(); break;
        case 14: _t->onRightOntologyClicked((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 15: _t->onRightIRIClicked((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 16: _t->onRightCatalogClicked((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 17: _t->onRightCatalogSaveClicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 1:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QLineEdit* >(); break;
            }
            break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QLineEdit* >(); break;
            }
            break;
        }
    }
}

const QMetaObject *Diff::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Diff::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSDiffENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int Diff::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
