/****************************************************************************
** Meta object code from reading C++ file 'filter.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../Functions/Filter/filter.h"
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
#error "The header file 'filter.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSFilterENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSFilterENDCLASS = QtMocHelpers::stringData(
    "Filter",
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
    "resetFilter",
    "filterFiles",
    "onFilterAddOntologyClicked",
    "onFilterGeneralAddTermClicked",
    "onFilterExcludeAddTermClicked",
    "onFilterIncludeAddTermClicked",
    "onFilterGeneralAddTermFileClicked",
    "onFilterExcludeAddTermFileClicked",
    "onFilterIncludeAddTermFileClicked",
    "onFilterRemoveOntologyClicked",
    "onFilterGeneralRemoveTermClicked",
    "onFilterExcludeRemoveTermClicked",
    "onFilterIncludeRemoveTermClicked",
    "onFilterGeneralRemoveTermFileClicked",
    "onFilterExcludeRemoveTermFileClicked",
    "onFilterIncludeRemoveTermFileClicked",
    "onFilterSaveAsClicked",
    "onFilterResetClicked",
    "onFilterButtonClicked"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSFilterENDCLASS_t {
    uint offsetsAndSizes[68];
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
    char stringdata16[12];
    char stringdata17[27];
    char stringdata18[30];
    char stringdata19[30];
    char stringdata20[30];
    char stringdata21[34];
    char stringdata22[34];
    char stringdata23[34];
    char stringdata24[30];
    char stringdata25[33];
    char stringdata26[33];
    char stringdata27[33];
    char stringdata28[37];
    char stringdata29[37];
    char stringdata30[37];
    char stringdata31[22];
    char stringdata32[21];
    char stringdata33[22];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSFilterENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSFilterENDCLASS_t qt_meta_stringdata_CLASSFilterENDCLASS = {
    {
        QT_MOC_LITERAL(0, 6),  // "Filter"
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
        QT_MOC_LITERAL(162, 11),  // "resetFilter"
        QT_MOC_LITERAL(174, 11),  // "filterFiles"
        QT_MOC_LITERAL(186, 26),  // "onFilterAddOntologyClicked"
        QT_MOC_LITERAL(213, 29),  // "onFilterGeneralAddTermClicked"
        QT_MOC_LITERAL(243, 29),  // "onFilterExcludeAddTermClicked"
        QT_MOC_LITERAL(273, 29),  // "onFilterIncludeAddTermClicked"
        QT_MOC_LITERAL(303, 33),  // "onFilterGeneralAddTermFileCli..."
        QT_MOC_LITERAL(337, 33),  // "onFilterExcludeAddTermFileCli..."
        QT_MOC_LITERAL(371, 33),  // "onFilterIncludeAddTermFileCli..."
        QT_MOC_LITERAL(405, 29),  // "onFilterRemoveOntologyClicked"
        QT_MOC_LITERAL(435, 32),  // "onFilterGeneralRemoveTermClicked"
        QT_MOC_LITERAL(468, 32),  // "onFilterExcludeRemoveTermClicked"
        QT_MOC_LITERAL(501, 32),  // "onFilterIncludeRemoveTermClicked"
        QT_MOC_LITERAL(534, 36),  // "onFilterGeneralRemoveTermFile..."
        QT_MOC_LITERAL(571, 36),  // "onFilterExcludeRemoveTermFile..."
        QT_MOC_LITERAL(608, 36),  // "onFilterIncludeRemoveTermFile..."
        QT_MOC_LITERAL(645, 21),  // "onFilterSaveAsClicked"
        QT_MOC_LITERAL(667, 20),  // "onFilterResetClicked"
        QT_MOC_LITERAL(688, 21)   // "onFilterButtonClicked"
    },
    "Filter",
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
    "resetFilter",
    "filterFiles",
    "onFilterAddOntologyClicked",
    "onFilterGeneralAddTermClicked",
    "onFilterExcludeAddTermClicked",
    "onFilterIncludeAddTermClicked",
    "onFilterGeneralAddTermFileClicked",
    "onFilterExcludeAddTermFileClicked",
    "onFilterIncludeAddTermFileClicked",
    "onFilterRemoveOntologyClicked",
    "onFilterGeneralRemoveTermClicked",
    "onFilterExcludeRemoveTermClicked",
    "onFilterIncludeRemoveTermClicked",
    "onFilterGeneralRemoveTermFileClicked",
    "onFilterExcludeRemoveTermFileClicked",
    "onFilterIncludeRemoveTermFileClicked",
    "onFilterSaveAsClicked",
    "onFilterResetClicked",
    "onFilterButtonClicked"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSFilterENDCLASS[] = {

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
      16,    0,  187,    2, 0x0a,   16 /* Public */,
      17,    0,  188,    2, 0x08,   17 /* Private */,
      18,    0,  189,    2, 0x08,   18 /* Private */,
      19,    0,  190,    2, 0x08,   19 /* Private */,
      20,    0,  191,    2, 0x08,   20 /* Private */,
      21,    0,  192,    2, 0x08,   21 /* Private */,
      22,    0,  193,    2, 0x08,   22 /* Private */,
      23,    0,  194,    2, 0x08,   23 /* Private */,
      24,    0,  195,    2, 0x08,   24 /* Private */,
      25,    0,  196,    2, 0x08,   25 /* Private */,
      26,    0,  197,    2, 0x08,   26 /* Private */,
      27,    0,  198,    2, 0x08,   27 /* Private */,
      28,    0,  199,    2, 0x08,   28 /* Private */,
      29,    0,  200,    2, 0x08,   29 /* Private */,
      30,    0,  201,    2, 0x08,   30 /* Private */,
      31,    0,  202,    2, 0x08,   31 /* Private */,
      32,    0,  203,    2, 0x08,   32 /* Private */,
      33,    0,  204,    2, 0x08,   33 /* Private */,

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

Q_CONSTINIT const QMetaObject Filter::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_CLASSFilterENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSFilterENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSFilterENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<Filter, std::true_type>,
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
        // method 'resetFilter'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'filterFiles'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onFilterAddOntologyClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onFilterGeneralAddTermClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onFilterExcludeAddTermClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onFilterIncludeAddTermClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onFilterGeneralAddTermFileClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onFilterExcludeAddTermFileClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onFilterIncludeAddTermFileClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onFilterRemoveOntologyClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onFilterGeneralRemoveTermClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onFilterExcludeRemoveTermClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onFilterIncludeRemoveTermClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onFilterGeneralRemoveTermFileClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onFilterExcludeRemoveTermFileClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onFilterIncludeRemoveTermFileClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onFilterSaveAsClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onFilterResetClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onFilterButtonClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void Filter::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Filter *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->addImport(); break;
        case 1: _t->addTerms((*reinterpret_cast< std::add_pointer_t<QListWidget*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QList<QString>&>>(_a[2]))); break;
        case 2: _t->addTermFiles((*reinterpret_cast< std::add_pointer_t<QMap<QString,QString>&>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QListWidget*>>(_a[2]))); break;
        case 3: _t->removeFiles((*reinterpret_cast< std::add_pointer_t<QMap<QString,QString>&>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QListWidget*>>(_a[2]))); break;
        case 4: _t->removeTerms((*reinterpret_cast< std::add_pointer_t<QListWidget*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QList<QString>&>>(_a[2]))); break;
        case 5: _t->saveFiles(); break;
        case 6: _t->resetFilter(); break;
        case 7: _t->filterFiles(); break;
        case 8: _t->onFilterAddOntologyClicked(); break;
        case 9: _t->onFilterGeneralAddTermClicked(); break;
        case 10: _t->onFilterExcludeAddTermClicked(); break;
        case 11: _t->onFilterIncludeAddTermClicked(); break;
        case 12: _t->onFilterGeneralAddTermFileClicked(); break;
        case 13: _t->onFilterExcludeAddTermFileClicked(); break;
        case 14: _t->onFilterIncludeAddTermFileClicked(); break;
        case 15: _t->onFilterRemoveOntologyClicked(); break;
        case 16: _t->onFilterGeneralRemoveTermClicked(); break;
        case 17: _t->onFilterExcludeRemoveTermClicked(); break;
        case 18: _t->onFilterIncludeRemoveTermClicked(); break;
        case 19: _t->onFilterGeneralRemoveTermFileClicked(); break;
        case 20: _t->onFilterExcludeRemoveTermFileClicked(); break;
        case 21: _t->onFilterIncludeRemoveTermFileClicked(); break;
        case 22: _t->onFilterSaveAsClicked(); break;
        case 23: _t->onFilterResetClicked(); break;
        case 24: _t->onFilterButtonClicked(); break;
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

const QMetaObject *Filter::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Filter::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSFilterENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int Filter::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
