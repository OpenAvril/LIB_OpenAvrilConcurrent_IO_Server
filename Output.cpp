#include "pch.h"

// pointers.
    // calsses.
class OpenAvrilConcurrency::Output_Control* OpenAvrilConcurrency::Output::_CLASS_ptr_Output_Control = NULL;
// registers.
uint8_t* OpenAvrilConcurrency::Output::_REG_ptr_out_praiseEventId = NULL;
uint8_t* OpenAvrilConcurrency::Output::_REG_ptr_out_playerId = NULL;
std::list<OpenAvrilConcurrency::Object*>* OpenAvrilConcurrency::Output::_REG_ptr_Lits_Of_PraiseOutSubset = NULL;

// public.
    // constructor.

    // destructor.

    // dynamic.
        // create.
        // get.
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
            // get.
            // set.
        // registers.
            // create.
            // get.
            // set.


// constructor.
OpenAvrilConcurrency::Output::Output()
{
    uint8_t* newDEFAULT_uint8_t = new uint8_t(UINT8_MAX);
    while (newDEFAULT_uint8_t == NULL) {}
    stat_REG_create_ptr_out_playerId(newDEFAULT_uint8_t);
    stat_REG_create_ptr_out_praiseEventId(newDEFAULT_uint8_t);
    delete newDEFAULT_uint8_t;
    stat_REG_create_ptr_PraiseOutSubsets();
}

// destructor.
OpenAvrilConcurrency::Output::~Output()
{
    delete _CLASS_ptr_Output_Control;
    delete _REG_ptr_out_praiseEventId;
    delete _REG_ptr_out_playerId;
    delete _REG_ptr_Lits_Of_PraiseOutSubset;
}

// public.
    // dynamic.
void OpenAvrilConcurrency::Output::app_initialise_CLASS_Control()
{
    stat_CLASS_create_ptr_Output_Control();
}
void OpenAvrilConcurrency::Output::initialise_list_Of_PraiseOutSubsets(OpenAvrilConcurrency::Framework_Server* obj)
{
    stat_REG_set_Item_On_List_Of_PraiseOutputSubset(0, obj->dyn_CLASS_get_ptr_Server()->dyn_CLASS_get_ptr_Data()->get_CLASS_ptr_User_Output()->get_CLASS_ptr_Item_ptr_PraiseOutputSubsets(0));
}
// get.
OpenAvrilConcurrency::Output_Control* OpenAvrilConcurrency::Output::get_CLASS_ptr_Output_Control()
{
    return stat_get_CLASS_ptr_Output_Control();
}
uint8_t OpenAvrilConcurrency::Output::get_REG_out_praiseEventId()
{
    return *_REG_ptr_out_playerId;
}
uint8_t OpenAvrilConcurrency::Output::get_REG_out_playerId()
{
    return *_REG_ptr_out_praiseEventId;
}
OpenAvrilConcurrency::Object* OpenAvrilConcurrency::Output::get_REG_ptr_Item_On_List_Of_PraiseOutputSubset(uint8_t praiseID)
{
    return stat_get_REG_ptr_Item_On_List_Of_PraiseOutputSubset(praiseID);
}
// set.
void OpenAvrilConcurrency::Output::set_REG_ptr_Item_PraiseOutputSubset(uint8_t praiseID, OpenAvrilConcurrency::Object* objObject)
{
    stat_REG_set_Item_On_List_Of_PraiseOutputSubset(praiseID, objObject);
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
    uint8_t* _REG_ptr_out_playerId = new uint8_t(UINT8_MAX);
    *_REG_ptr_out_playerId = 0;
}
void OpenAvrilConcurrency::Output::stat_REG_create_ptr_out_praiseEventId(uint8_t* newDEFAULT_uint8_t)
{
    uint8_t* _REG_ptr_out_praiseEventId = new uint8_t(UINT8_MAX);
    *_REG_ptr_out_praiseEventId = 0;
}
void OpenAvrilConcurrency::Output::stat_REG_create_ptr_PraiseOutSubsets()
{
    std::list<OpenAvrilConcurrency::Object*>* _REG_ptr_PraiseInSubset = new std::list<OpenAvrilConcurrency::Object*>();
    while (stat_get_REG_ptr_List_Of_PraiseOutputSubset() == NULL) {}
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
OpenAvrilConcurrency::Object* OpenAvrilConcurrency::Output::stat_get_REG_ptr_Item_On_List_Of_PraiseOutputSubset(uint8_t praiseID)
{
    auto temp = stat_get_REG_ptr_List_Of_PraiseOutputSubset()->begin();
    std::advance(temp, praiseID);
    return *temp;
}
std::list<OpenAvrilConcurrency::Object*>* OpenAvrilConcurrency::Output::stat_get_REG_ptr_List_Of_PraiseOutputSubset()
{
    return _REG_ptr_Lits_Of_PraiseOutSubset;
}
// set.
void OpenAvrilConcurrency::Output::stat_REG_set_ptr_out_playerId(uint8_t* new_uint8_t)
{
    *_REG_ptr_out_playerId = *new_uint8_t;
}
void OpenAvrilConcurrency::Output::stat_REG_set_ptr_out_praiseEventId(uint8_t* _ptr_out_praiseEventId)
{
    *_REG_ptr_out_praiseEventId = *_ptr_out_praiseEventId;
}
void OpenAvrilConcurrency::Output::stat_REG_set_ptr_Output_Control(OpenAvrilConcurrency::Output_Control* newClass)
{
    *_CLASS_ptr_Output_Control = *newClass;
}
void OpenAvrilConcurrency::Output::stat_REG_set_Item_On_List_Of_PraiseOutputSubset(uint8_t praiseID, OpenAvrilConcurrency::Object* objectClass)
{
    auto temp = stat_get_REG_ptr_List_Of_PraiseOutputSubset()->begin();
    std::advance(temp, praiseID);
    *temp = objectClass;
}


