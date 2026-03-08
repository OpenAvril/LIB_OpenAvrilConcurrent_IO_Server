#include "pch.h"

// pointers.
    // calsses.
    class OpenAvrilConcurrency::Input_Control* OpenAvrilConcurrency::Input::_CLASS_ptr_Input_Control = NULL;
    // registers.
    uint8_t* OpenAvrilConcurrency::Input::_REG_ptr_in_praiseEventId = NULL;
    uint8_t* OpenAvrilConcurrency::Input::_REG_ptr_in_playerId = NULL;
    std::list<OpenAvrilConcurrency::Object*>* OpenAvrilConcurrency::Input::_REG_ptr_Lits_Of_PraiseInSubset = NULL;

// constructor.
    OpenAvrilConcurrency::Input::Input()
    {
        uint8_t* newDEFAULT_uint8_t = new uint8_t(UINT8_MAX);
        while (newDEFAULT_uint8_t == NULL) {}
        stat_REG_create_ptr_in_playerId(newDEFAULT_uint8_t);
        stat_REG_create_ptr_in_praiseEventId(newDEFAULT_uint8_t);
        delete newDEFAULT_uint8_t;
        stat_REG_create_ptr_PraiseInSubsets();
    }

// destructor.
    OpenAvrilConcurrency::Input::~Input()
    {
        delete _CLASS_ptr_Input_Control;
        delete _REG_ptr_in_praiseEventId;
        delete _REG_ptr_in_playerId;
        delete _REG_ptr_Lits_Of_PraiseInSubset;
    }

// public.
    // dynamic.
    void OpenAvrilConcurrency::Input::initialise_CLASS_Control()
    {
        stat_CLASS_create_ptr_Input_Control();
    }
    void OpenAvrilConcurrency::Input::initialise_list_Of_PraiseInSubsets(OpenAvrilConcurrency::Framework_Server* obj)
    {
        stat_REG_set_ptr_Item_PraiseAlgorithmSubset(0, obj->get_CLASS_ptr_Server()->get_CLASS_ptr_Data()->get_CLASS_ptr_User_Input()->get_CLASS_ptr_Item_ptr_PraiseInputSubsets(0));
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
    OpenAvrilConcurrency::Object* OpenAvrilConcurrency::Input::stat_get_REG_ptr_Item_On_List_Of_PraiseAlgorithmSubset(uint8_t praiseID)
    {
        auto temp = stat_get_REG_ptr_List_Of_PraiseAlgorithmSubset()->begin();
        std::advance(temp, praiseID);
        return *temp;
    }
        // set.
    void OpenAvrilConcurrency::Input::stat_REG_set_ptr_Item_PraiseAlgorithmSubset(uint8_t praiseID, OpenAvrilConcurrency::Object* objObject)
    {
        auto temp = stat_get_REG_ptr_List_Of_PraiseAlgorithmSubset()->begin();
        std::advance(temp, praiseID);
        *temp = (Object*)objObject;
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
    void OpenAvrilConcurrency::Input::stat_REG_create_ptr_PraiseInSubsets()
    {
        std::list<OpenAvrilConcurrency::Object*>* _REG_ptr_PraiseInSubset = new std::list<OpenAvrilConcurrency::Object*>();
        while (stat_get_REG_ptr_List_Of_PraiseInSubset() == NULL) {}
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
    Object* OpenAvrilConcurrency::Input::stat_get_REG_ptr_Item_On_List_Of_PraiseAlgorithmSubset(uint8_t praiseID)
    {
        return nullptr;
    }
    std::list<class Object*>* OpenAvrilConcurrency::Input::stat_get_REG_ptr_List_Of_PraiseAlgorithmSubset()
    {
        return nullptr;
    }
    OpenAvrilConcurrency::Object* OpenAvrilConcurrency::Input::stat_get_REG_ptr_Item_On_List_Of_PraiseInSubset(uint8_t praiseID)
    {
        auto temp = stat_get_REG_ptr_List_Of_PraiseInSubset()->begin();
        std::advance(temp, praiseID);
        return *temp;
    }
    std::list<OpenAvrilConcurrency::Object*>* OpenAvrilConcurrency::Input::stat_get_REG_ptr_List_Of_PraiseInSubset()
    {
        return _REG_ptr_Lits_Of_PraiseInSubset;
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
    void OpenAvrilConcurrency::Input::stat_REG_set_ptr_Input_Control(OpenAvrilConcurrency::Input_Control* newClass)
    {
        *_CLASS_ptr_Input_Control = *newClass;
    }

    void OpenAvrilConcurrency::Input::stat_REG_set_ptr_Item_PraiseInputSubset(uint8_t praiseID, OpenAvrilConcurrency::Object* objectClass)
    {
        auto temp = stat_get_REG_ptr_List_Of_PraiseInSubset()->begin();
        std::advance(temp, praiseID);
        *temp = objectClass;
    }


