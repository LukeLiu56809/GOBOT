/****************************************************************************
** Meta object code from reading C++ file 'remove.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../Functions/Remove/remove.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'remove.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSRemoveENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSRemoveENDCLASS = QtMocHelpers::stringData(
    "Remove",
    "addImport",
    "",
    "addTerms",
    "QListWidget*",
    "listWidget",
    "QList<QString>&",
    "termsList",
    "addTermFiles",
    "QMap<QString,QString>&",
    "filesMap",
    "files",
    "removeFiles",
    "removeTerms",
    "saveFiles",
    "resetRemove",
    "onRemoveAddOntologyClicked",
    "onRemoveGeneralAddTermClicked",
    "onRemoveExcludeAddTermClicked",
    "onRemoveIncludeAddTermClicked",
    "onRemoveGeneralAddTermFileClicked",
    "onRemoveExcludeAddTermFileClicked",
    "onRemoveIncludeAddTermFileClicked",
    "onRemoveRemoveOntologyClicked",
    "onRemoveGeneralRemoveTermClicked",
    "onRemoveExcludeRemoveTermClicked",
    "onRemoveIncludeRemoveTermClicked",
    "onRemoveGeneralRemoveTermFileClicked",
    "onRemoveExcludeRemoveTermFileClicked",
    "onRemoveIncludeRemoveTermFileClicked",
    "onRemoveSaveAsClicked",
    "onRemoveResetClicked",
    "onRemoveButtonClicked"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSRemoveENDCLASS_t {
    uint offsetsAndSizes[66];
    char stringdata0[7];
    char stringdata1[10];
    char stringdata2[1];
    char stringdata3[9];
    char stringdata4[13];
    char stringdata5[11];
    char stringdata6[16];
    char stringdata7[10];
    char stringdata8[13];
    char stringdata9[23];
    char stringdata10[9];
    char stringdata11[6];
    char stringdata12[12];
    char stringdata13[12];
    char stringdata14[10];
    char stringdata15[12];
    char stringdata16[27];
    char stringdata17[30];
    char stringdata18[30];
    char stringdata19[30];
    char stringdata20[34];
    char stringdata21[34];
    char stringdata22[34];
    char stringdata23[30];
    char stringdata24[33];
    char stringdata25[33];
    char stringdata26[33];
    char stringdata27[37];
    char stringdata28[37];
    char stringdata29[37];
    char stringdata30[22];
    char stringdata31[21];
    char stringdata32[22];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSRemoveENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSRemoveENDCLASS_t qt_meta_stringdata_CLASSRemoveENDCLASS = {
    {
        QT_MOC_LITERAL(0, 6),  // "Remove"
        QT_MOC_LITERAL(7, 9),  // "addImport"
        QT_MOC_LITERAL(17, 0),  // ""
        QT_MOC_LITERAL(18, 8),  // "addTerms"
        QT_MOC_LITERAL(27, 12),  // "QListWidget*"
        QT_MOC_LITERAL(40, 10),  // "listWidget"
        QT_MOC_LITERAL(51, 15),  // "QList<QString>&"
        QT_MOC_LITERAL(67, 9),  // "termsList"
        QT_MOC_LITERAL(77, 12),  // "addTermFiles"
        QT_MOC_LITERAL(90, 22),  // "QMap<QString,QString>&"
        QT_MOC_LITERAL(113, 8),  // "filesMap"
        QT_MOC_LITERAL(122, 5),  // "files"
        QT_MOC_LITERAL(128, 11),  // "removeFiles"
        QT_MOC_LITERAL(140, 11),  // "removeTerms"
        QT_MOC_LITERAL(152, 9),  // "saveFiles"
        QT_MOC_LITERAL(162, 11),  // "resetRemove"
        QT_MOC_LITERAL(174, 26),  // "onRemoveAddOntologyClicked"
        QT_MOC_LITERAL(201, 29),  // "onRemoveGeneralAddTermClicked"
        QT_MOC_LITERAL(231, 29),  // "onRemoveExcludeAddTermClicked"
        QT_MOC_LITERAL(261, 29),  // "onRemoveIncludeAddTermClicked"
        QT_MOC_LITERAL(291, 33),  // "onRemoveGeneralAddTermFileCli..."
        QT_MOC_LITERAL(325, 33),  // "onRemoveExcludeAddTermFileCli..."
        QT_MOC_LITERAL(359, 33),  // "onRemoveIncludeAddTermFileCli..."
        QT_MOC_LITERAL(393, 29),  // "onRemoveRemoveOntologyClicked"
        QT_MOC_LITERAL(423, 32),  // "onRemoveGeneralRemoveTermClicked"
        QT_MOC_LITERAL(456, 32),  // "onRemoveExcludeRemoveTermClicked"
        QT_MOC_LITERAL(489, 32),  // "onRemoveIncludeRemoveTermClicked"
        QT_MOC_LITERAL(522, 36),  // "onRemoveGeneralRemoveTermFile..."
        QT_MOC_LITERAL(559, 36),  // "onRemoveExcludeRemoveTermFile..."
        QT_MOC_LITERAL(596, 36),  // "onRemoveIncludeRemoveTermFile..."
        QT_MOC_LITERAL(633, 21),  // "onRemoveSaveAsClicked"
        QT_MOC_LITERAL(655, 20),  // "onRemoveResetClicked"
        QT_MOC_LITERAL(676, 21)   // "onRemoveButtonClicked"
    },
    "Remove",
    "addImport",
    "",
    "addTerms",
    "QListWidget*",
    "listWidget",
    "QList<QString>&",
    "termsList",
    "addTermFiles",
    "QMap<QString,QString>&",
    "filesMap",
    "files",
    "removeFiles",
    "removeTerms",
    "saveFiles",
    "resetRemove",
    "onRemoveAddOntologyClicked",
    "onRemoveGeneralAddTermClicked",
    "onRemoveExcludeAddTermClicked",
    "onRemoveIncludeAddTermClicked",
    "onRemoveGeneralAddTermFileClicked",
    "onRemoveExcludeAddTermFileClicked",
    "onRemoveIncludeAddTermFileClicked",
    "onRemoveRemoveOntologyClicked",
    "onRemoveGeneralRemoveTermClicked",
    "onRemoveExcludeRemoveTermClicked",
    "onRemoveIncludeRemoveTermClicked",
    "onRemoveGeneralRemoveTermFileClicked",
    "onRemoveExcludeRemoveTermFileClicked",
    "onRemoveIncludeRemoveTermFileClicked",
    "onRemoveSaveAsClicked",
    "onRemoveResetClicked",
    "onRemoveButtonClicked"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSRemoveENDCLASS[] = {

 // content:
      11,       // revision
       0,       // classname
       0,    0, // classinfo
      25,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,  164,    2, 0x0a,    1 /* Public */,
       3,    2,  165,    2, 0x0a,    2 /* Public */,
       8,    2,  170,    2, 0x0a,    5 /* Public */,
      12,    2,  175,    2, 0x0a,    8 /* Public */,
      13,    2,  180,    2, 0x0a,   11 /* Public */,
      14,    0,  185,    2, 0x0a,   14 /* Public */,
      15,    0,  186,    2, 0x0a,   15 /* Public */,
      12,    0,  187,    2, 0x0a,   16 /* Public */,
      16,    0,  188,    2, 0x08,   17 /* Private */,
      17,    0,  189,    2, 0x08,   18 /* Private */,
      18,    0,  190,    2, 0x08,   19 /* Private */,
      19,    0,  191,    2, 0x08,   20 /* Private */,
      20,    0,  192,    2, 0x08,   21 /* Private */,
      21,    0,  193,    2, 0x08,   22 /* Private */,
      22,    0,  194,    2, 0x08,   23 /* Private */,
      23,    0,  195,    2, 0x08,   24 /* Private */,
      24,    0,  196,    2, 0x08,   25 /* Private */,
      25,    0,  197,    2, 0x08,   26 /* Private */,
      26,    0,  198,    2, 0x08,   27 /* Private */,
      27,    0,  199,    2, 0x08,   28 /* Private */,
      28,    0,  200,    2, 0x08,   29 /* Private */,
      29,    0,  201,    2, 0x08,   30 /* Private */,
      30,    0,  202,    2, 0x08,   31 /* Private */,
      31,    0,  203,    2, 0x08,   32 /* Private */,
      32,    0,  204,    2, 0x08,   33 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4, 0x80000000 | 6,    5,    7,
    QMetaType::Void, 0x80000000 | 9, 0x80000000 | 4,   10,   11,
    QMetaType::Void, 0x80000000 | 9, 0x80000000 | 4,   10,   11,
    QMetaType::Void, 0x80000000 | 4, 0x80000000 | 6,    5,    7,
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
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject Remove::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_CLASSRemoveENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSRemoveENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSRemoveENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<Remove, std::true_type>,
        // method 'addImport'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'addTerms'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QListWidget *, std::false_type>,
        QtPrivate::TypeAndForceComplete<QList<QString> &, std::false_type>,
        // method 'addTermFiles'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QMap<QString,QString> &, std::false_type>,
        QtPrivate::TypeAndForceComplete<QListWidget *, std::false_type>,
        // method 'removeFiles'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QMap<QString,QString> &, std::false_type>,
        QtPrivate::TypeAndForceComplete<QListWidget *, std::false_type>,
        // method 'removeTerms'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QListWidget *, std::false_type>,
        QtPrivate::TypeAndForceComplete<QList<QString> &, std::false_type>,
        // method 'saveFiles'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'resetRemove'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'removeFiles'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onRemoveAddOntologyClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onRemoveGeneralAddTermClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onRemoveExcludeAddTermClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onRemoveIncludeAddTermClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onRemoveGeneralAddTermFileClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onRemoveExcludeAddTermFileClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onRemoveIncludeAddTermFileClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onRemoveRemoveOntologyClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onRemoveGeneralRemoveTermClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onRemoveExcludeRemoveTermClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onRemoveIncludeRemoveTermClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onRemoveGeneralRemoveTermFileClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onRemoveExcludeRemoveTermFileClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onRemoveIncludeRemoveTermFileClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onRemoveSaveAsClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onRemoveResetClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onRemoveButtonClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void Remove::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Remove *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->addImport(); break;
        case 1: _t->addTerms((*reinterpret_cast< std::add_pointer_t<QListWidget*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QList<QString>&>>(_a[2]))); break;
        case 2: _t->addTermFiles((*reinterpret_cast< std::add_pointer_t<QMap<QString,QString>&>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QListWidget*>>(_a[2]))); break;
        case 3: _t->removeFiles((*reinterpret_cast< std::add_pointer_t<QMap<QString,QString>&>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QListWidget*>>(_a[2]))); break;
        case 4: _t->removeTerms((*reinterpret_cast< std::add_pointer_t<QListWidget*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QList<QString>&>>(_a[2]))); break;
        case 5: _t->saveFiles(); break;
        case 6: _t->resetRemove(); break;
        case 7: _t->removeFiles(); break;
        case 8: _t->onRemoveAddOntologyClicked(); break;
        case 9: _t->onRemoveGeneralAddTermClicked(); break;
        case 10: _t->onRemoveExcludeAddTermClicked(); break;
        case 11: _t->onRemoveIncludeAddTermClicked(); break;
        case 12: _t->onRemoveGeneralAddTermFileClicked(); break;
        case 13: _t->onRemoveExcludeAddTermFileClicked(); break;
        case 14: _t->onRemoveIncludeAddTermFileClicked(); break;
        case 15: _t->onRemoveRemoveOntologyClicked(); break;
        case 16: _t->onRemoveGeneralRemoveTermClicked(); break;
        case 17: _t->onRemoveExcludeRemoveTermClicked(); break;
        case 18: _t->onRemoveIncludeRemoveTermClicked(); break;
        case 19: _t->onRemoveGeneralRemoveTermFileClicked(); break;
        case 20: _t->onRemoveExcludeRemoveTermFileClicked(); break;
        case 21: _t->onRemoveIncludeRemoveTermFileClicked(); break;
        case 22: _t->onRemoveSaveAsClicked(); break;
        case 23: _t->onRemoveResetClicked(); break;
        case 24: _t->onRemoveButtonClicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QListWidget* >(); break;
            }
            break;
        case 2:
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
        case 4:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QListWidget* >(); break;
            }
            break;
        }
    }
}

const QMetaObject *Remove::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Remove::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSRemoveENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int Remove::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 25)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 25;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 25)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 25;
    }
    return _id;
}
QT_WARNING_POP
