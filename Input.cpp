#include "pch.h"

// pointers.
    // calsses.
    static OpenAvrilConcurrency::Input_Control* _CLASS_ptr_Input_Control = NULL;
    // registers.
    static uint8_t* _REG_ptr_in_praiseEventId = NULL;
    static uint8_t* _REG_ptr_in_playerId = NULL;
    static std::list<class OpenAvrilConcurrency::Object*>* _REG_ptr_list_Of_ptr_PraiseInSubsets = { NULL };

// constructor.
    OpenAvrilConcurrency::Input::Input()
    {
        uint8_t* newDEFAULT_uint8_t = new uint8_t(UINT8_MAX);
        while (newDEFAULT_uint8_t == NULL) {}
        stat_REG_create_ptr_in_playerId(newDEFAULT_uint8_t);
        stat_REG_create_ptr_in_praiseEventId(newDEFAULT_uint8_t);
        delete newDEFAULT_uint8_t;
        stat_REG_create_ptr_list_Of_Praise_In_Subsets();
    }

// destructor.
    OpenAvrilConcurrency::Input::~Input()
    {
        delete _CLASS_ptr_Input_Control;
        delete _REG_ptr_list_Of_ptr_PraiseInSubsets;
    }

// public.
    // dynamic.
    void OpenAvrilConcurrency::Input::initialise_CLASS_Control()
    {
        stat_CLASS_create_ptr_Input_Control();
    }
    void OpenAvrilConcurrency::Input::initialise_list_Of_PraiseInSubsets(OpenAvrilConcurrency::Framework_Server* obj)
    {
        set_Subset_With_InputSubet(obj->get_CLASS_ptr_Server()->get_CLASS_ptr_Data()->get_CLASS_ptr_User_Input()->get_REG_ptr_Item_On_List_Of_ptr_list_Of_ptr_PraiseInputSubsets(0));
    }
        // get.
    OpenAvrilConcurrency::Input_Control* OpenAvrilConcurrency::Input::get_CLASS_ptr_Input_Control()
    {
        return stat_get_CLASS_ptr_Input_Control();
    }
    uint8_t OpenAvrilConcurrency::Input::get_REG_in_praiseEventId()
    {
        return *_REG_ptr_in_playerId;
    }
    uint8_t OpenAvrilConcurrency::Input::get_REG_in_playerId()
    {
        return *_REG_ptr_in_praiseEventId;
    }
    OpenAvrilConcurrency::Object* OpenAvrilConcurrency::Input::get_REG_ptr_Item_On_list_Of_PraiseInSubsets(uint8_t praiseID)
    {
        stat_get_REG_ptr_Item_On_list_Of_PraiseInSubsets(praiseID);
    }
        // set.
    void OpenAvrilConcurrency::Input::set_Subset_With_InputSubet(OpenAvrilConcurrency::Praise0_Input* praise0_Input)
    {
        auto temp = _REG_ptr_list_Of_ptr_PraiseInSubsets->begin();
        std::advance(temp, 0);
        *temp = reinterpret_cast<class Object*>(praise0_Input);
    }

// private.
    // dynamic.
        // get.
        // set.
    // static.
        // classes.
            // create.
    void OpenAvrilConcurrency::Input::stat_CLASS_create_ptr_Input_Control()
    {
        OpenAvrilConcurrency::Input_Control* _CLASS_ptr_Input_Control = new class OpenAvrilConcurrency::Input_Control();
        while (stat_get_CLASS_ptr_Input_Control() == NULL) {}
    }
            // get.
    OpenAvrilConcurrency::Input_Control* OpenAvrilConcurrency::Input::stat_get_CLASS_ptr_Input_Control()
    {
        return _CLASS_ptr_Input_Control;
    }
            // set.
        // registers.
            // create.
    void OpenAvrilConcurrency::Input::stat_REG_create_ptr_in_playerId(uint8_t* newDEFAULT_uint8_t)
    {
        uint8_t* _REG_ptr_in_playerId = new uint8_t(UINT8_MAX);
        *_REG_ptr_in_playerId = 0;
    }
    void OpenAvrilConcurrency::Input::stat_REG_create_ptr_in_praiseEventId(uint8_t* newDEFAULT_uint8_t)
    {
        uint8_t* _REG_ptr_in_praiseEventId = new uint8_t(UINT8_MAX);
        *_REG_ptr_in_praiseEventId = 0;
    }
    void OpenAvrilConcurrency::Input::stat_REG_create_ptr_list_Of_Praise_In_Subsets()
    {
        std::list<class Object*>* _REG_ptr_list_Of_ptr_PraiseInSubsets = new std::list<class Object*>();
        while (stat_get_REG_ptr_list_Of_ptr_PraiseInSubsets() == NULL) {}
    }
            // get.
    uint8_t OpenAvrilConcurrency::Input::stat_REG_get_ptr_in_playerId()
    {
        return *_REG_ptr_in_playerId;
    }
    uint8_t OpenAvrilConcurrency::Input::stat_REG_get_ptr_in_praiseEventId()
    {
        return *_REG_ptr_in_praiseEventId;
    }
    OpenAvrilConcurrency::Object* OpenAvrilConcurrency::Input::stat_REG_get_Item_On_list_Of_PraiseInSubsets(uint8_t praiseID)
    {
        auto temp = stat_REG_get_ptr_list_Of_ptr_PraiseInputSubsets()->begin();
        std::advance(temp, praiseID);
        return *temp;
    }

    std::list<OpenAvrilConcurrency::Object*>* OpenAvrilConcurrency::Input::stat_REG_get_ptr_list_Of_ptr_PraiseInputSubsets()
    {
        return _REG_ptr_list_Of_ptr_PraiseInSubsets;
    }
            // set.
    void OpenAvrilConcurrency::Input::stat_REG_set_ptr_in_playerId(uint8_t* new_uint8_t)
    {
        *_REG_ptr_in_playerId = *new_uint8_t;
    }
    void OpenAvrilConcurrency::Input::stat_REG_set_ptr_in_praiseEventId(uint8_t* _ptr_in_praiseEventId)
    {
        *_REG_ptr_in_praiseEventId = *_ptr_in_praiseEventId;
    }
    void OpenAvrilConcurrency::Input::stat_REG_set_ptr_Input_Control(Input_Control* newClass)
    {
        *_CLASS_ptr_Input_Control = *newClass;
    }
    void OpenAvrilConcurrency::Input::stat_REG_set_Item_On_list_Of_Praise_In_Subsets(uint8_t praiseID, Object* newObject)
    {
        auto temp = stat_REG_get_ptr_list_Of_ptr_PraiseInputSubsets()->begin();
        std::advance(temp, praiseID);
        *temp = newObject;
    }


