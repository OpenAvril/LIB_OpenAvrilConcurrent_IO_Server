#include "pch.h"

// pointers.
    // calsses.
class OpenAvrilConcurrency::Output_Control* OpenAvrilConcurrency::Output::_CLASS_ptr_Output_Control = NULL;
// registers.
uint8_t* OpenAvrilConcurrency::Output::_REG_ptr_out_praiseEventId = NULL;
uint8_t* OpenAvrilConcurrency::Output::_REG_ptr_out_playerId = NULL;
OpenAvrilConcurrency::Object* OpenAvrilConcurrency::Output::_REG_ptr_PraiseInSubset = NULL;

// constructor.
OpenAvrilConcurrency::Output::Output()
{
    uint8_t* newDEFAULT_uint8_t = new uint8_t(UINT8_MAX);
    while (newDEFAULT_uint8_t == NULL) {}
    stat_REG_create_ptr_out_playerId(newDEFAULT_uint8_t);
    stat_REG_create_ptr_out_praiseEventId(newDEFAULT_uint8_t);
    delete newDEFAULT_uint8_t;
    stat_REG_create_ptr_PraiseInSubsets();
}

// destructor.
OpenAvrilConcurrency::Output::~Output()
{
    delete _CLASS_ptr_Output_Control;
    delete _REG_ptr_PraiseInSubset;
}

// public.
    // dynamic.
void OpenAvrilConcurrency::Output::initialise_CLASS_Control()
{
    stat_CLASS_create_ptr_Output_Control();
}
void OpenAvrilConcurrency::Output::initialise_list_Of_PraiseInSubsets(OpenAvrilConcurrency::Framework_Server* obj)
{
    set_Subset_With_Praise0_OutputSubet(obj->get_CLASS_ptr_Server()->get_CLASS_ptr_Data()->get_CLASS_ptr_User_Output()->get_CLASS_ptr_Item_ptr_PraiseOutputSubsets(0));
}
// get.
OpenAvrilConcurrency::Output_Control* OpenAvrilConcurrency::Output::get_CLASS_ptr_Output_Control()
{
    return stat_get_CLASS_ptr_Output_Control();
}
uint8_t OpenAvrilConcurrency::Output::get_REG_in_praiseEventId()
{
    return stat_REG_get_ptr_out_playerId();
}
uint8_t OpenAvrilConcurrency::Output::get_REG_in_playerId()
{
    return stat_REG_get_ptr_out_praiseEventId();
}
OpenAvrilConcurrency::Object* OpenAvrilConcurrency::Output::get_REG_ptr_Item_PraiseInSubsets()
{
    return stat_REG_get_ptr_Item_PraiseOutputSubsets();
}
// set.
void OpenAvrilConcurrency::Output::set_Subset_With_Praise0_OutputSubet(OpenAvrilConcurrency::Object* praise0_Output)
{
    _REG_ptr_PraiseInSubset = praise0_Output;
}

// private.
    // dynamic.
        // get.
        // set.
    // static.
        // classes.
            // create.
void OpenAvrilConcurrency::Output::stat_CLASS_create_ptr_Output_Control()
{
    OpenAvrilConcurrency::Output_Control* _CLASS_ptr_Output_Control = new class OpenAvrilConcurrency::Output_Control();
    while (stat_get_CLASS_ptr_Output_Control() == NULL) {}
}
// get.
OpenAvrilConcurrency::Output_Control* OpenAvrilConcurrency::Output::stat_get_CLASS_ptr_Output_Control()
{
    return _CLASS_ptr_Output_Control;
}
// set.
// registers.
    // create.
void OpenAvrilConcurrency::Output::stat_REG_create_ptr_out_playerId(uint8_t* newDEFAULT_uint8_t)
{
    uint8_t* _REG_ptr_in_playerId = new uint8_t(UINT8_MAX);
    *_REG_ptr_in_playerId = 0;
}
void OpenAvrilConcurrency::Output::stat_REG_create_ptr_out_praiseEventId(uint8_t* newDEFAULT_uint8_t)
{
    uint8_t* _REG_ptr_in_praiseEventId = new uint8_t(UINT8_MAX);
    *_REG_ptr_in_praiseEventId = 0;
}
void OpenAvrilConcurrency::Output::stat_REG_create_ptr_PraiseInSubsets()
{
    std::list<OpenAvrilConcurrency::Object*>* _REG_ptr_PraiseInSubset = new std::list<OpenAvrilConcurrency::Object*>();
    while (stat_REG_get_ptr_Item_PraiseOutputSubsets() == NULL) {}
}
// get.
uint8_t OpenAvrilConcurrency::Output::stat_REG_get_ptr_out_playerId()
{
    return *_REG_ptr_out_playerId;
}
uint8_t OpenAvrilConcurrency::Output::stat_REG_get_ptr_out_praiseEventId()
{
    return *_REG_ptr_out_praiseEventId;
}

OpenAvrilConcurrency::Object* OpenAvrilConcurrency::Output::stat_REG_get_ptr_Item_PraiseOutputSubsets()
{
    return _REG_ptr_PraiseInSubset;
}

// set.
void OpenAvrilConcurrency::Output::stat_REG_set_ptr_out_playerId(uint8_t* new_uint8_t)
{
    *_REG_ptr_out_playerId = *new_uint8_t;
}
void OpenAvrilConcurrency::Output::stat_REG_set_ptr_out_praiseEventId(uint8_t* _ptr_in_praiseEventId)
{
    *_REG_ptr_out_praiseEventId = *_ptr_in_praiseEventId;
}
void OpenAvrilConcurrency::Output::stat_REG_set_ptr_Output_Control(OpenAvrilConcurrency::Output_Control* newClass)
{
    *_CLASS_ptr_Output_Control = *newClass;
}
void OpenAvrilConcurrency::Output::stat_REG_set_ptr_Item_PraiseInSubsets(OpenAvrilConcurrency::Object* objectClass)
{
    _REG_ptr_PraiseInSubset = objectClass;
}
