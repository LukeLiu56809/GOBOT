/****************************************************************************
** Meta object code from reading C++ file 'convert.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/Functions/Convert/convert.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'convert.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSConvertENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSConvertENDCLASS = QtMocHelpers::stringData(
    "Convert",
    "addFiles",
    "",
    "removeFiles",
    "saveFiles",
    "resetConvert",
    "convertFiles",
    "onConvertAddFileClicked",
    "onConvertRemoveFileClicked",
    "onConvertSaveAsClicked",
    "onConvertResetClicked",
    "onConvertButtonClicked",
    "onConvertFormatChanged",
    "index"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSConvertENDCLASS_t {
    uint offsetsAndSizes[28];
    char stringdata0[8];
    char stringdata1[9];
    char stringdata2[1];
    char stringdata3[12];
    char stringdata4[10];
    char stringdata5[13];
    char stringdata6[13];
    char stringdata7[24];
    char stringdata8[27];
    char stringdata9[23];
    char stringdata10[22];
    char stringdata11[23];
    char stringdata12[23];
    char stringdata13[6];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSConvertENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSConvertENDCLASS_t qt_meta_stringdata_CLASSConvertENDCLASS = {
    {
        QT_MOC_LITERAL(0, 7),  // "Convert"
        QT_MOC_LITERAL(8, 8),  // "addFiles"
        QT_MOC_LITERAL(17, 0),  // ""
        QT_MOC_LITERAL(18, 11),  // "removeFiles"
        QT_MOC_LITERAL(30, 9),  // "saveFiles"
        QT_MOC_LITERAL(40, 12),  // "resetConvert"
        QT_MOC_LITERAL(53, 12),  // "convertFiles"
        QT_MOC_LITERAL(66, 23),  // "onConvertAddFileClicked"
        QT_MOC_LITERAL(90, 26),  // "onConvertRemoveFileClicked"
        QT_MOC_LITERAL(117, 22),  // "onConvertSaveAsClicked"
        QT_MOC_LITERAL(140, 21),  // "onConvertResetClicked"
        QT_MOC_LITERAL(162, 22),  // "onConvertButtonClicked"
        QT_MOC_LITERAL(185, 22),  // "onConvertFormatChanged"
        QT_MOC_LITERAL(208, 5)   // "index"
    },
    "Convert",
    "addFiles",
    "",
    "removeFiles",
    "saveFiles",
    "resetConvert",
    "convertFiles",
    "onConvertAddFileClicked",
    "onConvertRemoveFileClicked",
    "onConvertSaveAsClicked",
    "onConvertResetClicked",
    "onConvertButtonClicked",
    "onConvertFormatChanged",
    "index"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSConvertENDCLASS[] = {

 // content:
      11,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   80,    2, 0x0a,    1 /* Public */,
       3,    0,   81,    2, 0x0a,    2 /* Public */,
       4,    0,   82,    2, 0x0a,    3 /* Public */,
       5,    0,   83,    2, 0x0a,    4 /* Public */,
       6,    0,   84,    2, 0x0a,    5 /* Public */,
       7,    0,   85,    2, 0x08,    6 /* Private */,
       8,    0,   86,    2, 0x08,    7 /* Private */,
       9,    0,   87,    2, 0x08,    8 /* Private */,
      10,    0,   88,    2, 0x08,    9 /* Private */,
      11,    0,   89,    2, 0x08,   10 /* Private */,
      12,    1,   90,    2, 0x08,   11 /* Private */,

 // slots: parameters
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
    QMetaType::Void, QMetaType::Int,   13,

       0        // eod
};

Q_CONSTINIT const QMetaObject Convert::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_CLASSConvertENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSConvertENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSConvertENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<Convert, std::true_type>,
        // method 'addFiles'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'removeFiles'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'saveFiles'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'resetConvert'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'convertFiles'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onConvertAddFileClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onConvertRemoveFileClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onConvertSaveAsClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onConvertResetClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onConvertButtonClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onConvertFormatChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>
    >,
    nullptr
} };

void Convert::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Convert *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->addFiles(); break;
        case 1: _t->removeFiles(); break;
        case 2: _t->saveFiles(); break;
        case 3: _t->resetConvert(); break;
        case 4: _t->convertFiles(); break;
        case 5: _t->onConvertAddFileClicked(); break;
        case 6: _t->onConvertRemoveFileClicked(); break;
        case 7: _t->onConvertSaveAsClicked(); break;
        case 8: _t->onConvertResetClicked(); break;
        case 9: _t->onConvertButtonClicked(); break;
        case 10: _t->onConvertFormatChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject *Convert::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Convert::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSConvertENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int Convert::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 11;
    }
    return _id;
}
QT_WARNING_POP
