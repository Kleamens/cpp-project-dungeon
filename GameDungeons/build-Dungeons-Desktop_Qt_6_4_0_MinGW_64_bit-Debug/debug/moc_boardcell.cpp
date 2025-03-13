/****************************************************************************
** Meta object code from reading C++ file 'boardcell.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.4.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../Dungeons/Board/boardcell.h"
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'boardcell.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_BoardCell_t {
    uint offsetsAndSizes[20];
    char stringdata0[10];
    char stringdata1[21];
    char stringdata2[1];
    char stringdata3[10];
    char stringdata4[11];
    char stringdata5[19];
    char stringdata6[14];
    char stringdata7[16];
    char stringdata8[14];
    char stringdata9[9];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_BoardCell_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_BoardCell_t qt_meta_stringdata_BoardCell = {
    {
        QT_MOC_LITERAL(0, 9),  // "BoardCell"
        QT_MOC_LITERAL(10, 20),  // "itemIsNotNullChanged"
        QT_MOC_LITERAL(31, 0),  // ""
        QT_MOC_LITERAL(32, 9),  // "character"
        QT_MOC_LITERAL(42, 10),  // "Character*"
        QT_MOC_LITERAL(53, 18),  // "characterIsNotNull"
        QT_MOC_LITERAL(72, 13),  // "characterName"
        QT_MOC_LITERAL(86, 15),  // "characterHealth"
        QT_MOC_LITERAL(102, 13),  // "itemIsNotNull"
        QT_MOC_LITERAL(116, 8)   // "itemName"
    },
    "BoardCell",
    "itemIsNotNullChanged",
    "",
    "character",
    "Character*",
    "characterIsNotNull",
    "characterName",
    "characterHealth",
    "itemIsNotNull",
    "itemName"
};
#undef QT_MOC_LITERAL
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_BoardCell[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       6,   21, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   20,    2, 0x06,    7 /* Public */,

 // signals: parameters
    QMetaType::Void,

 // properties: name, type, flags
       3, 0x80000000 | 4, 0x00015409, uint(-1), 0,
       5, QMetaType::Bool, 0x00015401, uint(-1), 0,
       6, QMetaType::QString, 0x00015401, uint(-1), 0,
       7, QMetaType::Int, 0x00015401, uint(-1), 0,
       8, QMetaType::Bool, 0x00015001, uint(0), 0,
       9, QMetaType::QString, 0x00015401, uint(-1), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject BoardCell::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_BoardCell.offsetsAndSizes,
    qt_meta_data_BoardCell,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_BoardCell_t,
        // property 'character'
        QtPrivate::TypeAndForceComplete<Character*, std::true_type>,
        // property 'characterIsNotNull'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'characterName'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'characterHealth'
        QtPrivate::TypeAndForceComplete<int, std::true_type>,
        // property 'itemIsNotNull'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'itemName'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<BoardCell, std::true_type>,
        // method 'itemIsNotNullChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void BoardCell::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<BoardCell *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->itemIsNotNullChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (BoardCell::*)();
            if (_t _q_method = &BoardCell::itemIsNotNullChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
    }else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<BoardCell *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< Character**>(_v) = _t->getCharacter(); break;
        case 1: *reinterpret_cast< bool*>(_v) = _t->characterIsNotNull(); break;
        case 2: *reinterpret_cast< QString*>(_v) = _t->characterName(); break;
        case 3: *reinterpret_cast< int*>(_v) = _t->getCharacterHealth(); break;
        case 4: *reinterpret_cast< bool*>(_v) = _t->itemIsNotNull(); break;
        case 5: *reinterpret_cast< QString*>(_v) = _t->itemName(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
    (void)_a;
}

const QMetaObject *BoardCell::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *BoardCell::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_BoardCell.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int BoardCell::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 1;
    }else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void BoardCell::itemIsNotNullChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
