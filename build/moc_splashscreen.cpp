/****************************************************************************
** Meta object code from reading C++ file 'splashscreen.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/SplashScreen/splashscreen.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'splashscreen.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSSplashScreenENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSSplashScreenENDCLASS = QtMocHelpers::stringData(
    "SplashScreen"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSSplashScreenENDCLASS_t {
    uint offsetsAndSizes[2];
    char stringdata0[13];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSSplashScreenENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSSplashScreenENDCLASS_t qt_meta_stringdata_CLASSSplashScreenENDCLASS = {
    {
        QT_MOC_LITERAL(0, 12)   // "SplashScreen"
    },
    "SplashScreen"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSSplashScreenENDCLASS[] = {

 // content:
      11,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

Q_CONSTINIT const QMetaObject SplashScreen::staticMetaObject = { {
    QMetaObject::SuperData::link<QSplashScreen::staticMetaObject>(),
    qt_meta_stringdata_CLASSSplashScreenENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSSplashScreenENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSSplashScreenENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<SplashScreen, std::true_type>
    >,
    nullptr
} };

void SplashScreen::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

const QMetaObject *SplashScreen::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SplashScreen::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSSplashScreenENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QSplashScreen::qt_metacast(_clname);
}

int SplashScreen::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QSplashScreen::qt_metacall(_c, _id, _a);
    return _id;
}
QT_WARNING_POP
