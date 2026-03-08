#pragma once

namespace OpenAvrilConcurrency
{
    class Output
    {
    public:
        // constructor.
        Output();

        // destructor.
        virtual ~Output();

        // public.
            // dynamic.
        void initialise_CLASS_Control();
        void initialise_list_Of_PraiseInSubsets(class Framework_Server* obj);
        // get.
        class Output_Control* get_CLASS_ptr_Output_Control();
        uint8_t get_REG_in_praiseEventId();
        uint8_t get_REG_in_playerId();

        class Object* get_REG_ptr_Item_PraiseInSubsets();
        // set.
        void set_Subset_With_Praise0_OutputSubet(class Object* praise0_Output);
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
        static class Output_Control* _CLASS_ptr_Output_Control;
        // create.
        static void stat_CLASS_create_ptr_Output_Control();
        // get.
        static Output_Control* stat_get_CLASS_ptr_Output_Control();
        // set.
    // registers.
        static uint8_t* _REG_ptr_out_praiseEventId;
        static uint8_t* _REG_ptr_out_playerId;
        static class Object* _REG_ptr_PraiseInSubset;
        // create.
        static void stat_REG_create_ptr_out_playerId(uint8_t* newDEFAULT_uint8_t);
        static void stat_REG_create_ptr_out_praiseEventId(uint8_t* newDEFAULT_uint8_t);
        static void stat_REG_create_ptr_PraiseInSubsets();
        // get.
        static uint8_t stat_REG_get_ptr_out_playerId();
        static uint8_t stat_REG_get_ptr_out_praiseEventId();
        static class Object* stat_REG_get_ptr_Item_PraiseOutputSubsets();
        // set.
        static void stat_REG_set_ptr_out_playerId(uint8_t* new_uint8_t);
        static void stat_REG_set_ptr_out_praiseEventId(uint8_t* new_uint8_t);
        static void stat_REG_set_ptr_Output_Control(class Output_Control* newClass);
        static void stat_REG_set_ptr_Item_PraiseInSubsets(class Object* obj);
    };
}