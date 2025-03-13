/****************************************************************************
** Meta object code from reading C++ file 'boardroom.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.4.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../Dungeons/Board/boardroom.h"
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'boardroom.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.4.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
namespace {
struct qt_meta_stringdata_BoardRoom_t {
    uint offsetsAndSizes[28];
    char stringdata0[10];
    char stringdata1[16];
    char stringdata2[1];
    char stringdata3[12];
    char stringdata4[17];
    char stringdata5[12];
    char stringdata6[2];
    char stringdata7[2];
    char stringdata8[20];
    char stringdata9[9];
    char stringdata10[11];
    char stringdata11[37];
    char stringdata12[13];
    char stringdata13[11];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_BoardRoom_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_BoardRoom_t qt_meta_stringdata_BoardRoom = {
    {
        QT_MOC_LITERAL(0, 9),  // "BoardRoom"
        QT_MOC_LITERAL(10, 15),  // "bossRoomChanged"
        QT_MOC_LITERAL(26, 0),  // ""
        QT_MOC_LITERAL(27, 11),  // "roomChanged"
        QT_MOC_LITERAL(39, 16),  // "boardCellChanged"
        QT_MOC_LITERAL(56, 11),  // "enemyHealth"
        QT_MOC_LITERAL(68, 1),  // "x"
        QT_MOC_LITERAL(70, 1),  // "y"
        QT_MOC_LITERAL(72, 19),  // "extractOneBoardCell"
        QT_MOC_LITERAL(92, 8),  // "bossRoom"
        QT_MOC_LITERAL(101, 10),  // "boardCells"
        QT_MOC_LITERAL(112, 36),  // "std::vector<std::vector<Board..."
        QT_MOC_LITERAL(149, 12),  // "oneBoardCell"
        QT_MOC_LITERAL(162, 10)   // "BoardCell*"
    },
    "BoardRoom",
    "bossRoomChanged",
    "",
    "roomChanged",
    "boardCellChanged",
    "enemyHealth",
    "x",
    "y",
    "extractOneBoardCell",
    "bossRoom",
    "boardCells",
    "std::vector<std::vector<BoardCell*>>",
    "oneBoardCell",
    "BoardCell*"
};
#undef QT_MOC_LITERAL
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_BoardRoom[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       3,   57, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   44,    2, 0x06,    4 /* Public */,
       3,    0,   45,    2, 0x06,    5 /* Public */,
       4,    0,   46,    2, 0x06,    6 /* Public */,

 // methods: name, argc, parameters, tag, flags, initial metatype offsets
       5,    2,   47,    2, 0x02,    7 /* Public */,
       8,    2,   52,    2, 0x02,   10 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // methods: parameters
    QMetaType::Int, QMetaType::Int, QMetaType::Int,    6,    7,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    6,    7,

 // properties: name, type, flags
       9, QMetaType::Bool, 0x00015001, uint(0), 0,
      10, 0x80000000 | 11, 0x00015009, uint(1), 0,
      12, 0x80000000 | 13, 0x00015009, uint(2), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject BoardRoom::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_BoardRoom.offsetsAndSizes,
    qt_meta_data_BoardRoom,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_BoardRoom_t,
        // property 'bossRoom'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'boardCells'
        QtPrivate::TypeAndForceComplete<std::vector<std::vector<BoardCell*>>, std::true_type>,
        // property 'oneBoardCell'
        QtPrivate::TypeAndForceComplete<BoardCell*, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<BoardRoom, std::true_type>,
        // method 'bossRoomChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'roomChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'boardCellChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'enemyHealth'
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'extractOneBoardCell'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>
    >,
    nullptr
} };

void BoardRoom::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<BoardRoom *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->bossRoomChanged(); break;
        case 1: _t->roomChanged(); break;
        case 2: _t->boardCellChanged(); break;
        case 3: { int _r = _t->enemyHealth((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 4: _t->extractOneBoardCell((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (BoardRoom::*)();
            if (_t _q_method = &BoardRoom::bossRoomChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (BoardRoom::*)();
            if (_t _q_method = &BoardRoom::roomChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (BoardRoom::*)();
            if (_t _q_method = &BoardRoom::boardCellChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< BoardCell* >(); break;
        }
    }
else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<BoardRoom *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = _t->isBossRoom(); break;
        case 1: *reinterpret_cast< std::vector<std::vector<BoardCell*>>*>(_v) = _t->getBoardCells(); break;
        case 2: *reinterpret_cast< BoardCell**>(_v) = _t->getOneBoardCell(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
}

const QMetaObject *BoardRoom::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *BoardRoom::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_BoardRoom.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int BoardRoom::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 5;
    }else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void BoardRoom::bossRoomChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void BoardRoom::roomChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void BoardRoom::boardCellChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
