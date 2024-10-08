/****************************************************************************
** Meta object code from reading C++ file 'Distance.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.7.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../Distance.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Distance.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.7.3. It"
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
struct qt_meta_stringdata_CLASSUnitsSCOPEDistanceENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSUnitsSCOPEDistanceENDCLASS = QtMocHelpers::stringData(
    "Units::Distance",
    "QML.Element",
    "distance",
    "fromM",
    "constexpr",
    "distanceInM",
    "fromKM",
    "distanceInKM",
    "fromNM",
    "distanceInNM",
    "fromMIL",
    "distanceInMIL",
    "fromFT",
    "distanceInFT",
    "nan",
    "isFinite",
    "",
    "isNegative",
    "subtract",
    "rhs",
    "toFeet",
    "toKM",
    "toM",
    "toMIL",
    "toNM",
    "toString",
    "Units::Distance::DistanceUnit",
    "units",
    "roundBigNumbers",
    "forceSign",
    "DistanceUnit",
    "Feet",
    "Meter",
    "Kilometer",
    "StatuteMile",
    "NauticalMile"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSUnitsSCOPEDistanceENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       1,   14, // classinfo
      17,   16, // methods
       0,    0, // properties
       1,  159, // enums/sets
       0,    0, // constructors
       4,       // flags
       0,       // signalCount

 // classinfo: key, value
       1,    2,

 // methods: name, argc, parameters, tag, flags, initial metatype offsets
       3,    1,  118,    4, 0x02,    2 /* Public */,
       6,    1,  121,    4, 0x02,    4 /* Public */,
       8,    1,  124,    4, 0x02,    6 /* Public */,
      10,    1,  127,    4, 0x02,    8 /* Public */,
      12,    1,  130,    4, 0x02,   10 /* Public */,
      14,    0,  133,    4, 0x02,   12 /* Public */,
      15,    0,  134,   16, 0x102,   13 /* Public | MethodIsConst  */,
      17,    0,  135,   16, 0x102,   14 /* Public | MethodIsConst  */,
      18,    1,  136,   16, 0x102,   15 /* Public | MethodIsConst  */,
      20,    0,  139,   16, 0x102,   17 /* Public | MethodIsConst  */,
      21,    0,  140,   16, 0x102,   18 /* Public | MethodIsConst  */,
      22,    0,  141,   16, 0x102,   19 /* Public | MethodIsConst  */,
      23,    0,  142,   16, 0x102,   20 /* Public | MethodIsConst  */,
      24,    0,  143,   16, 0x102,   21 /* Public | MethodIsConst  */,
      25,    3,  144,   16, 0x102,   22 /* Public | MethodIsConst  */,
      25,    2,  151,   16, 0x122,   26 /* Public | MethodCloned | MethodIsConst  */,
      25,    1,  156,   16, 0x122,   29 /* Public | MethodCloned | MethodIsConst  */,

 // methods: parameters
    0x80000000 | 0, QMetaType::Double,    5,
    0x80000000 | 0, QMetaType::Double,    7,
    0x80000000 | 0, QMetaType::Double,    9,
    0x80000000 | 0, QMetaType::Double,   11,
    0x80000000 | 0, QMetaType::Double,   13,
    0x80000000 | 0,
    QMetaType::Bool,
    QMetaType::Bool,
    0x80000000 | 0, 0x80000000 | 0,   19,
    QMetaType::Double,
    QMetaType::Double,
    QMetaType::Double,
    QMetaType::Double,
    QMetaType::Double,
    QMetaType::QString, 0x80000000 | 26, QMetaType::Bool, QMetaType::Bool,   27,   28,   29,
    QMetaType::QString, 0x80000000 | 26, QMetaType::Bool,   27,   28,
    QMetaType::QString, 0x80000000 | 26,   27,

 // enums: name, alias, flags, count, data
      30,   30, 0x0,    5,  164,

 // enum data: key, value
      31, uint(Units::Distance::Feet),
      32, uint(Units::Distance::Meter),
      33, uint(Units::Distance::Kilometer),
      34, uint(Units::Distance::StatuteMile),
      35, uint(Units::Distance::NauticalMile),

       0        // eod
};

Q_CONSTINIT const QMetaObject Units::Distance::staticMetaObject = { {
    nullptr,
    qt_meta_stringdata_CLASSUnitsSCOPEDistanceENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSUnitsSCOPEDistanceENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_metaTypeArray<
        // enum 'DistanceUnit'
        Distance::DistanceUnit,
        // Q_OBJECT / Q_GADGET
        Distance,
        // method 'fromM'
        Units::Distance,
        double,
        // method 'fromKM'
        Units::Distance,
        double,
        // method 'fromNM'
        Units::Distance,
        double,
        // method 'fromMIL'
        Units::Distance,
        double,
        // method 'fromFT'
        Units::Distance,
        double,
        // method 'nan'
        Units::Distance,
        // method 'isFinite'
        bool,
        // method 'isNegative'
        bool,
        // method 'subtract'
        Units::Distance,
        Units::Distance,
        // method 'toFeet'
        double,
        // method 'toKM'
        double,
        // method 'toM'
        double,
        // method 'toMIL'
        double,
        // method 'toNM'
        double,
        // method 'toString'
        QString,
        Units::Distance::DistanceUnit,
        bool,
        bool,
        // method 'toString'
        QString,
        Units::Distance::DistanceUnit,
        bool,
        // method 'toString'
        QString,
        Units::Distance::DistanceUnit
    >,
    nullptr
} };

void Units::Distance::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = reinterpret_cast<Distance *>(_o);
        (void)_t;
        switch (_id) {
        case 0: { Units::Distance _r = _t->fromM((*reinterpret_cast< std::add_pointer_t<double>>(_a[1])));
            if (_a[0]) *reinterpret_cast< Units::Distance*>(_a[0]) = std::move(_r); }  break;
        case 1: { Units::Distance _r = _t->fromKM((*reinterpret_cast< std::add_pointer_t<double>>(_a[1])));
            if (_a[0]) *reinterpret_cast< Units::Distance*>(_a[0]) = std::move(_r); }  break;
        case 2: { Units::Distance _r = _t->fromNM((*reinterpret_cast< std::add_pointer_t<double>>(_a[1])));
            if (_a[0]) *reinterpret_cast< Units::Distance*>(_a[0]) = std::move(_r); }  break;
        case 3: { Units::Distance _r = _t->fromMIL((*reinterpret_cast< std::add_pointer_t<double>>(_a[1])));
            if (_a[0]) *reinterpret_cast< Units::Distance*>(_a[0]) = std::move(_r); }  break;
        case 4: { Units::Distance _r = _t->fromFT((*reinterpret_cast< std::add_pointer_t<double>>(_a[1])));
            if (_a[0]) *reinterpret_cast< Units::Distance*>(_a[0]) = std::move(_r); }  break;
        case 5: { Units::Distance _r = _t->nan();
            if (_a[0]) *reinterpret_cast< Units::Distance*>(_a[0]) = std::move(_r); }  break;
        case 6: { bool _r = _t->isFinite();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 7: { bool _r = _t->isNegative();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 8: { Units::Distance _r = _t->subtract((*reinterpret_cast< std::add_pointer_t<Units::Distance>>(_a[1])));
            if (_a[0]) *reinterpret_cast< Units::Distance*>(_a[0]) = std::move(_r); }  break;
        case 9: { double _r = _t->toFeet();
            if (_a[0]) *reinterpret_cast< double*>(_a[0]) = std::move(_r); }  break;
        case 10: { double _r = _t->toKM();
            if (_a[0]) *reinterpret_cast< double*>(_a[0]) = std::move(_r); }  break;
        case 11: { double _r = _t->toM();
            if (_a[0]) *reinterpret_cast< double*>(_a[0]) = std::move(_r); }  break;
        case 12: { double _r = _t->toMIL();
            if (_a[0]) *reinterpret_cast< double*>(_a[0]) = std::move(_r); }  break;
        case 13: { double _r = _t->toNM();
            if (_a[0]) *reinterpret_cast< double*>(_a[0]) = std::move(_r); }  break;
        case 14: { QString _r = _t->toString((*reinterpret_cast< std::add_pointer_t<Units::Distance::DistanceUnit>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[3])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 15: { QString _r = _t->toString((*reinterpret_cast< std::add_pointer_t<Units::Distance::DistanceUnit>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[2])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 16: { QString _r = _t->toString((*reinterpret_cast< std::add_pointer_t<Units::Distance::DistanceUnit>>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 8:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< Units::Distance >(); break;
            }
            break;
        }
    }
}
QT_WARNING_POP
