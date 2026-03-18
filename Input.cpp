#include "pch.h"

// pointers.
    // calsses.
OpenAvrilConcurrency::Input_Control* OpenAvrilConcurrency::Input::_CLASS_ptr_Input_Control = NULL;
// registers.
uint8_t* OpenAvrilConcurrency::Input::_REG_ptr_in_praiseEventId = NULL;
uint8_t* OpenAvrilConcurrency::Input::_REG_ptr_in_playerId = NULL;
OpenAvrilConcurrency::Object* OpenAvrilConcurrency::Input::_REG_ptr_PraiseInSubset = NULL;

// public.
    // constructor.
OpenAvrilConcurrency::Input::Input()
{
    std::cout << "entered CONSTRUCTOR of Input()." << std::endl;
    uint8_t* newDEFAULT_uint8_t = new uint8_t(UINT8_MAX);
    while (newDEFAULT_uint8_t == NULL) {}
    stat_REG_create_ptr_in_playerId(newDEFAULT_uint8_t);
    stat_REG_create_ptr_in_praiseEventId(newDEFAULT_uint8_t);
    delete newDEFAULT_uint8_t;
    stat_REG_create_ptr_PraiseInSubsets();
    std::cout << "exiting CONSTRUCTOR of Input()" << std::endl;
}

// destructor.
OpenAvrilConcurrency::Input::~Input()
{
    delete _CLASS_ptr_Input_Control;
    delete _REG_ptr_in_praiseEventId;
    delete _REG_ptr_in_playerId;
    delete _REG_ptr_PraiseInSubset;
}

// dynamic.
    // create.
void OpenAvrilConcurrency::Input::app_FUNCT_create_ptr_Input_Control()
{
    stat_CLASS_create_ptr_Input_Control();
}
void OpenAvrilConcurrency::Input::app_FUNCT_initialise_Item_PraiseInSubset(OpenAvrilConcurrency::Framework_Server* obj)
{
    stat_REG_set_ptr_Item_PraiseInputSubset(obj->dyn_CLASS_get_ptr_Server()->dyn_CLASS_get_ptr_Data()->dyn_CLASS_get_ptr_User_Input()->dyn_CLASS_getr_Item_On_List_Of_ptr_PraiseInputSubsets(0));
}
// get.

OpenAvrilConcurrency::Input_Control* OpenAvrilConcurrency::Input::dyn_CLASS_get_ptr_Input_Control()
{
    return _CLASS_ptr_Input_Control;
}

uint8_t OpenAvrilConcurrency::Input::dyn_REG_get_ptr_in_playerId()
{
    return *stat_REG_get_ptr_in_praiseEventId();
}
uint8_t OpenAvrilConcurrency::Input::dyn_REG_get_ptr_in_praiseEventId()
{
    return *stat_REG_get_ptr_in_playerId();
}
OpenAvrilConcurrency::Object* OpenAvrilConcurrency::Input::dyn_REG_get_ptr_Item_On_List_Of_PraiseInputSubset(uint8_t praiseId)
{
    return stat_REG_get_ptr_List_Of_PraiseInputSubset();
}
void OpenAvrilConcurrency::Input::dyn_REG_Set_in_praiseEventId(uint8_t newPraiseId)
{
    stat_REG_set_ptr_in_playerId(newPraiseId);
}
// set.
// static.
    // create.
    // get.
    // set.

// private.
    // dynamic.
        // classes.
            // create.
            // get.
            // set.
        // registers.
            // create.
            // get.
            // set.
    // static.
        // classes.
            // create.
void OpenAvrilConcurrency::Input::stat_CLASS_create_ptr_Input_Control()
{
    _CLASS_ptr_Input_Control = new class OpenAvrilConcurrency::Input_Control();
    while (stat_CLASS_get_ptr_Input_Control() == NULL) {}
}
// get.
OpenAvrilConcurrency::Input_Control* OpenAvrilConcurrency::Input::stat_CLASS_get_ptr_Input_Control()
{
    return _CLASS_ptr_Input_Control;
}
// set.
// registers.
    // create.
void OpenAvrilConcurrency::Input::stat_REG_create_ptr_in_playerId(uint8_t* newDEFAULT_uint8_t)
{
    _REG_ptr_in_praiseEventId = new uint8_t(UINT8_MAX);
    while (stat_REG_get_ptr_in_playerId() == NULL) {}
    stat_REG_set_ptr_in_playerId(*newDEFAULT_uint8_t);
}
void OpenAvrilConcurrency::Input::stat_REG_create_ptr_in_praiseEventId(uint8_t* newDEFAULT_uint8_t)
{
    _REG_ptr_in_playerId = new uint8_t(UINT8_MAX);
    while (stat_REG_get_ptr_in_praiseEventId() == NULL) {}
    stat_REG_set_ptr_in_playerId(*newDEFAULT_uint8_t);
}
void OpenAvrilConcurrency::Input::stat_REG_create_ptr_PraiseInSubsets()
{
    OpenAvrilConcurrency::Object* _REG_ptr_PraiseInSubset;
}
// get.
uint8_t* OpenAvrilConcurrency::Input::stat_REG_get_ptr_in_praiseEventId()
{
    return _REG_ptr_in_playerId;
}
uint8_t* OpenAvrilConcurrency::Input::stat_REG_get_ptr_in_playerId()
{
    return _REG_ptr_in_praiseEventId;
}
OpenAvrilConcurrency::Object* OpenAvrilConcurrency::Input::stat_REG_get_ptr_List_Of_PraiseInputSubset()
{
    return _REG_ptr_PraiseInSubset;
}
// set.
void OpenAvrilConcurrency::Input::stat_REG_set_ptr_in_playerId(uint8_t new_uint8_t)
{
    *_REG_ptr_in_playerId = new_uint8_t;
}
void OpenAvrilConcurrency::Input::stat_REG_set_ptr_in_praiseEventId(uint8_t new_uint8_t)
{
    *_REG_ptr_in_praiseEventId = new_uint8_t;
}
void OpenAvrilConcurrency::Input::stat_REG_set_ptr_Item_PraiseInputSubset(OpenAvrilConcurrency::Object* objectClass)
{
    _REG_ptr_PraiseInSubset = objectClass;
}