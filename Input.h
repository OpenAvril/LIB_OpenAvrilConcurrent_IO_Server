#pragma once

namespace OpenAvrilConcurrency
{
    class Input
    {
    public:
        // public.
            // constructor.
        Input();

        // destructor.
        virtual ~Input();

        // dynamic.
            // create.
        void app_FUNCT_create_ptr_Input_Control();
        void app_FUNCT_initialise_Item_PraiseInSubset(class Framework_Server* obj);
        // get.
        class Input_Control* dyn_CLASS_get_ptr_Input_Control();
        uint8_t dyn_REG_get_ptr_in_playerId();
        uint8_t dyn_REG_get_ptr_in_praiseEventId();
        class Object* dyn_REG_get_ptr_Item_On_List_Of_PraiseInputSubset(uint8_t praiseId);
        // set.
        void dyn_REG_Set_in_praiseEventId(uint8_t newPraiseId);
    // static.
        // create.
        // get.
        // set.
    private:
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
        static class Input_Control* _CLASS_ptr_Input_Control;
        // create.
        static void stat_CLASS_create_ptr_Input_Control();
        // get.
        static Input_Control* stat_CLASS_get_ptr_Input_Control();
        // set.
    // registers.
        static uint8_t* _REG_ptr_in_praiseEventId;
        static uint8_t* _REG_ptr_in_playerId;
        static class Object* _REG_ptr_PraiseInSubset;
        // create.
        static void stat_REG_create_ptr_in_playerId(uint8_t* newDEFAULT_uint8_t);
        static void stat_REG_create_ptr_in_praiseEventId(uint8_t* newDEFAULT_uint8_t);
        static void stat_REG_create_ptr_PraiseInSubsets();
        // get.
        static uint8_t* stat_REG_get_ptr_in_praiseEventId();
        static uint8_t* stat_REG_get_ptr_in_playerId();
        static class Object* stat_REG_get_ptr_List_Of_PraiseInputSubset();
        // set.
        static void stat_REG_set_ptr_in_playerId(uint8_t new_uint8_t);
        static void stat_REG_set_ptr_in_praiseEventId(uint8_t new_uint8_t);
        static void stat_REG_set_ptr_Item_PraiseInputSubset(class Object* objObject);
    };
}