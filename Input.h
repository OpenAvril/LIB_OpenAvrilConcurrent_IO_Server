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
        
        class Object* get_REG_ptr_Item_PraiseInSubsets();
        // set.
        void set_REG_Item_PraiseInSubsets(class Praise0_Input* praise0_Input);
    // static.
        // get.
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
        static class Object* stat_get_REG_ptr_Item_On_List_Of_ptr_Concurrent(uint8_t praiseID);
        static class Object* stat_get_REG_ptr_Item_On_List_Of_PraiseAlgorithmSubset(uint8_t praiseID);
        static std::list<class Object*>* stat_get_REG_ptr_List_Of_PraiseAlgorithmSubset();
        
            // set.
        static void stat_REG_set_ptr_in_playerId(uint8_t* new_uint8_t);
        static void stat_REG_set_ptr_in_praiseEventId(uint8_t* new_uint8_t);
        static void stat_REG_set_ptr_Input_Control(class Input_Control* newClass);
        static void stat_REG_set_ptr_Item_ptr_Concurrent(uint8_t praiseID, class Object* objObject);
        static void stat_REG_set_ptr_Item_PraiseAlgorithmSubset(uint8_t praiseID, class Object* objObject);
    };
}