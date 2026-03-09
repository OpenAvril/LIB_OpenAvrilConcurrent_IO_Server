#pragma once

namespace OpenAvrilConcurrency
{
    class Input
    {
    public:
// constructor.
        Input();

// destructor.
        virtual ~Input();

// public.
    // dynamic.
        void initialise_CLASS_Control();
        void initialise_list_Of_PraiseInSubsets(class Framework_Server* obj);
        // get.
        class Input_Control* get_CLASS_ptr_Input_Control();
        uint8_t get_REG_in_praiseEventId();
        uint8_t get_REG_in_playerId();
        class Object* get_REG_ptr_Item_On_List_Of_PraiseInputSubset(uint8_t praiseID);
        // set.
        void set_REG_ptr_Item_PraiseInputSubset(uint8_t praiseID, OpenAvrilConcurrency::Object* objObject);
    // static.
        // get.
        static class Object* stat_get_REG_ptr_Item_On_List_Of_PraiseInputSubset(uint8_t praiseID);
        // set.

    private:
// private.
    // dynamic.
        // get.
        // set.
    // static.
        // classes.
        static class Input_Control* _CLASS_ptr_Input_Control;
            // create.
        static void stat_CLASS_create_ptr_Input_Control();
            // get.
        static Input_Control* stat_get_CLASS_ptr_Input_Control();
            // set.
        // registers.
        static uint8_t* _REG_ptr_in_praiseEventId;
        static uint8_t* _REG_ptr_in_playerId;
        static std::list<class Object*>* _REG_ptr_Lits_Of_PraiseInSubset;
            // create.
        static void stat_REG_create_ptr_in_playerId(uint8_t* newDEFAULT_uint8_t);
        static void stat_REG_create_ptr_in_praiseEventId(uint8_t* newDEFAULT_uint8_t);
        static void stat_REG_create_ptr_PraiseInSubsets();
            // get.
        static uint8_t stat_REG_get_ptr_in_playerId();
        static uint8_t stat_REG_get_ptr_in_praiseEventId();
        static std::list<class Object*>* stat_get_REG_ptr_List_Of_PraiseInputSubset();
            // set.
        static void stat_REG_set_ptr_in_playerId(uint8_t* new_uint8_t);
        static void stat_REG_set_ptr_in_praiseEventId(uint8_t* new_uint8_t);
        static void stat_REG_set_ptr_Input_Control(class Input_Control* newClass);
        static void stat_REG_set_ptr_Item_PraiseInputSubset(uint8_t praiseID, class Object* objObject);
    };
}