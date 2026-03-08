#include "pch.h"

// pointers.
    // calsses.
    class OpenAvrilConcurrency::Output_Control* _stat_CLASS_ptr_Output_Control = NULL;
    // registers.
    uint8_t* OpenAvrilConcurrency::Output::_stat_REG_ptr_out_praiseEventId = NULL;
    uint8_t* OpenAvrilConcurrency::Output::_stat_REG_ptr_out_playerId = NULL;
    OpenAvrilConcurrency::Object* OpenAvrilConcurrency::Output::_stat_REG_ptr_Praise_Out_Subsets = NULL;

// constructor.
    OpenAvrilConcurrency::Output::Output()
    {
        uint8_t* newDEFAULT_uint8_t = new uint8_t(UINT8_MAX);
        while (newDEFAULT_uint8_t == NULL) {}
        stat_REG_create_ptr_out_praiseEventId(newDEFAULT_uint8_t);
        stat_REG_create_ptr_out_playerId(newDEFAULT_uint8_t);
        delete newDEFAULT_uint8_t;
        stat_REG_create_ptr_list_Of_Praise_Out_Subsets();
    }

// destructor.
    OpenAvrilConcurrency::Output::~Output()
    {
        delete _stat_CLASS_ptr_Output_Control;
        delete _stat_REG_ptr_out_praiseEventId;
        delete _stat_REG_ptr_out_playerId;
        delete _stat_REG_ptr_Praise_Out_Subsets;
    }

// public.
    // dynamic.
    void OpenAvrilConcurrency::Output::initialise_CLASS_Control()
    {
        stat_REG_create_ptr_Output_Control();
    }
    void OpenAvrilConcurrency::Output::initialise_list_Of_PraiseOutSubsets(Framework_Server* obj, uint8_t praiseID)
    {
        set_Subset_With_OutputSubet(reinterpret_cast<OpenAvrilConcurrency::Praise0_Output*>(obj->get_CLASS_ptr_Server()->get_CLASS_ptr_Data()->get_CLASS_ptr_User_Output()->get_CLASS_ptr_Item_ptr_PraiseOutputSubsets(praiseID)));
    }
        // get.
    uint8_t OpenAvrilConcurrency::Output::get_out_praiseEventId()
    {
        return *stat_REG_get_ptr_out_praiseEventId();
    }
    uint8_t OpenAvrilConcurrency::Output::get_out_playerId()
    {
        return *stat_REG_get_ptr_out_playerId();
    }
    OpenAvrilConcurrency::Output_Control* OpenAvrilConcurrency::Output::get_ptr_Output_Control()
    {
        return stat_REG_get_ptr_Output_Control();
    }
    OpenAvrilConcurrency::Object* OpenAvrilConcurrency::Output::get_ptr_PraiseOutSubsets()
    {
        return stat_REG_get_ptr_PraiseOutSubsets();
    }
        // set.
    void OpenAvrilConcurrency::Output::set_Subset_With_OutputSubet(Praise0_Output* praise0_Output)
    {
        _stat_REG_ptr_Praise_Out_Subsets = (class Object*)praise0_Output;
    }
    // static.
        // get.
        // set.

// private.
    // dynamic.
        // get.
        // set.
    // static.
    void OpenAvrilConcurrency::Output::stat_REG_create_ptr_out_praiseEventId(uint8_t* newDEFAULT_uint8_t)
    {
        uint8_t* _ptr_out_praiseEventId = new uint8_t(UINT8_MAX);
        while (stat_REG_get_ptr_out_playerId() == NULL) {}
        *_ptr_out_praiseEventId = *newDEFAULT_uint8_t;
    }
    void OpenAvrilConcurrency::Output::stat_REG_create_ptr_out_playerId(uint8_t* newDEFAULT_uint8_t)
    {
        uint8_t* _ptr_out_praiseEventId = new uint8_t(UINT8_MAX);
        while (stat_REG_get_ptr_out_praiseEventId() == NULL) {}
        *_ptr_out_praiseEventId = *newDEFAULT_uint8_t;
    }
    void OpenAvrilConcurrency::Output::stat_REG_create_ptr_Output_Control()
    {
        OpenAvrilConcurrency::Output_Control* _stat_CLASS_ptr_Output_Control = new class OpenAvrilConcurrency::Output_Control();
        while (stat_REG_get_ptr_Output_Control() == NULL) {}
    }
    void OpenAvrilConcurrency::Output::stat_REG_create_ptr_list_Of_Praise_Out_Subsets()
    {
        std::list<class Object*>* _ptr_list_Of_Praise_Out_Subsets = new std::list<class Object*>();
        while (stat_REG_get_ptr_PraiseOutSubsets() == NULL) {}
        _ptr_list_Of_Praise_Out_Subsets->resize(1);//NUMBER OF PRAISES.
    }
        // get.
    uint8_t* OpenAvrilConcurrency::Output::stat_REG_get_ptr_out_playerId()
    {
        return _stat_REG_ptr_out_playerId;
    }
    uint8_t* OpenAvrilConcurrency::Output::stat_REG_get_ptr_out_praiseEventId()
    {
        return _stat_REG_ptr_out_praiseEventId;
    }

    OpenAvrilConcurrency::Output_Control* OpenAvrilConcurrency::Output::stat_REG_get_ptr_Output_Control()
    {
        return _stat_CLASS_ptr_Output_Control;
    }

    OpenAvrilConcurrency::Object* OpenAvrilConcurrency::Output::stat_REG_get_ptr_PraiseOutSubsets()
    {
        return _stat_REG_ptr_Praise_Out_Subsets;
    }
        // set.
    void OpenAvrilConcurrency::Output::stat_REG_set_ptr_out_playerId(uint8_t* new_uint8_t)
    {
        *_stat_REG_ptr_out_playerId = *new_uint8_t;
    }
    void OpenAvrilConcurrency::Output::stat_REG_set_ptr_out_praiseEventId(uint8_t* new_uint8_t)
    {
        *_stat_REG_ptr_out_praiseEventId = *new_uint8_t;
    }
