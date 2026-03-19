#include "pch.h"

// pointers.
    // calsses.
OpenAvrilConcurrency::Output_Control* OpenAvrilConcurrency::Output::_CLASS_ptr_Output_Control = NULL;
// registers.
uint8_t* OpenAvrilConcurrency::Output::_REG_ptr_in_praiseEventId = NULL;
uint8_t* OpenAvrilConcurrency::Output::_REG_ptr_in_playerId = NULL;
OpenAvrilConcurrency::Object* OpenAvrilConcurrency::Output::_REG_ptr_PraiseInSubset = NULL;

// public.
    // constructor.
OpenAvrilConcurrency::Output::Output()
{
    std::cout << "entered CONSTRUCTOR of Output()." << std::endl;
    uint8_t* newDEFAULT_uint8_t = new uint8_t(UINT8_MAX);
    while (newDEFAULT_uint8_t == NULL) {}
    stat_REG_create_ptr_in_playerId(newDEFAULT_uint8_t);
    stat_REG_create_ptr_in_praiseEventId(newDEFAULT_uint8_t);
    delete newDEFAULT_uint8_t;
    stat_REG_create_ptr_PraiseInSubsets();
    std::cout << "exiting CONSTRUCTOR of Output()" << std::endl;
}

// destructor.
OpenAvrilConcurrency::Output::~Output()
{
    delete _CLASS_ptr_Output_Control;
    delete _REG_ptr_in_praiseEventId;
    delete _REG_ptr_in_playerId;
    delete _REG_ptr_PraiseInSubset;
}

// dynamic.
    // create.
void OpenAvrilConcurrency::Output::app_FUNCT_create_ptr_Output_Control()
{
    stat_CLASS_create_ptr_Output_Control();
}
void OpenAvrilConcurrency::Output::app_FUNCT_initialise_Item_PraiseInSubset(OpenAvrilConcurrency::Framework_Server* obj)
{
    stat_REG_set_ptr_Item_PraiseOutputSubset(obj->dyn_CLASS_get_ptr_Server()->dyn_CLASS_get_ptr_Data()->dyn_CLASS_get_ptr_User_Output()->dyn_CLASS_getr_Item_On_List_Of_ptr_PraiseOutputSubsets(0));
}
// get.

OpenAvrilConcurrency::Output_Control* OpenAvrilConcurrency::Output::dyn_CLASS_get_ptr_Output_Control()
{
    return _CLASS_ptr_Output_Control;
}

uint8_t OpenAvrilConcurrency::Output::dyn_REG_get_ptr_in_playerId()
{
    return *stat_REG_get_ptr_in_praiseEventId();
}
uint8_t OpenAvrilConcurrency::Output::dyn_REG_get_ptr_in_praiseEventId()
{
    return *stat_REG_get_ptr_in_playerId();
}
OpenAvrilConcurrency::Object* OpenAvrilConcurrency::Output::dyn_REG_get_ptr_Item_On_List_Of_PraiseOutputSubset(uint8_t praiseId)
{
    return stat_REG_get_ptr_List_Of_PraiseOutputSubset();
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
void OpenAvrilConcurrency::Output::stat_CLASS_create_ptr_Output_Control()
{
    _CLASS_ptr_Output_Control = new class OpenAvrilConcurrency::Output_Control();
    while (stat_CLASS_get_ptr_Output_Control() == NULL) {}
}
// get.
OpenAvrilConcurrency::Output_Control* OpenAvrilConcurrency::Output::stat_CLASS_get_ptr_Output_Control()
{
    return _CLASS_ptr_Output_Control;
}
// set.
// registers.
    // create.
void OpenAvrilConcurrency::Output::stat_REG_create_ptr_in_playerId(uint8_t* newDEFAULT_uint8_t)
{
    _REG_ptr_in_praiseEventId = new uint8_t(*newDEFAULT_uint8_t);
}
void OpenAvrilConcurrency::Output::stat_REG_create_ptr_in_praiseEventId(uint8_t* newDEFAULT_uint8_t)
{
    _REG_ptr_in_playerId = new uint8_t(*newDEFAULT_uint8_t);
}
void OpenAvrilConcurrency::Output::stat_REG_create_ptr_PraiseInSubsets()
{
    OpenAvrilConcurrency::Object* _REG_ptr_PraiseInSubset;
}
// get.
uint8_t* OpenAvrilConcurrency::Output::stat_REG_get_ptr_in_praiseEventId()
{
    return _REG_ptr_in_playerId;
}
uint8_t* OpenAvrilConcurrency::Output::stat_REG_get_ptr_in_playerId()
{
    return _REG_ptr_in_praiseEventId;
}
OpenAvrilConcurrency::Object* OpenAvrilConcurrency::Output::stat_REG_get_ptr_List_Of_PraiseOutputSubset()
{
    return _REG_ptr_PraiseInSubset;
}
// set.
void OpenAvrilConcurrency::Output::stat_REG_set_ptr_in_playerId(uint8_t new_uint8_t)
{
    *_REG_ptr_in_playerId = new_uint8_t;
}
void OpenAvrilConcurrency::Output::stat_REG_set_ptr_in_praiseEventId(uint8_t new_uint8_t)
{
    *_REG_ptr_in_praiseEventId = new_uint8_t;
}
void OpenAvrilConcurrency::Output::stat_REG_set_ptr_Item_PraiseOutputSubset(OpenAvrilConcurrency::Object* objectClass)
{
    _REG_ptr_PraiseInSubset = objectClass;
}