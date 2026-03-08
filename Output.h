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
        void initialise_list_Of_PraiseOutSubsets(class Framework_Server* obj, uint8_t praiseID);
        // get.
        uint8_t get_out_praiseEventId();
        uint8_t get_out_playerId();
        class Output_Control* get_ptr_Output_Control();
        class Object* get_ptr_PraiseOutSubsets();
        // set.
        void set_Subset_With_OutputSubet(class Praise0_Output* praise0_Output);
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
            // create.
            // get.
            // set.
        // registers.
        static uint8_t* _stat_REG_ptr_out_praiseEventId;
        static uint8_t* _stat_REG_ptr_out_playerId;
        static class Object* _stat_REG_ptr_Praise_Out_Subsets;
            // create.
        static void stat_REG_create_ptr_out_praiseEventId(uint8_t* newDEFAULT_uint8_t);
        static void stat_REG_create_ptr_out_playerId(uint8_t* newDEFAULT_uint8_t);
        static void stat_REG_create_ptr_Output_Control();
        static void stat_REG_create_ptr_list_Of_Praise_Out_Subsets();
            // get.
        static uint8_t* stat_REG_get_ptr_out_playerId();
        static uint8_t* stat_REG_get_ptr_out_praiseEventId();
        static class Object* stat_REG_get_ptr_PraiseOutSubsets();
        static Output_Control* stat_REG_get_ptr_Output_Control();
            // set.
        static void stat_REG_set_ptr_out_playerId(uint8_t* new_uint8_t);
        static void stat_REG_set_ptr_out_praiseEventId(uint8_t* new_uint8_t);
    };
}