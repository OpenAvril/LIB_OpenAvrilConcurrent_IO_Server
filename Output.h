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
        void initialise_list_Of_PraiseOutSubsets(class Framework_Server* obj);
        // get.
        class Output_Control* get_CLASS_ptr_Output_Control();
        uint8_t get_REG_out_praiseEventId();
        uint8_t get_REG_out_playerId();
        class Object* get_REG_ptr_Item_On_List_Of_PraiseOutputSubset(uint8_t praiseID);
        // set.
        void set_REG_ptr_Item_PraiseOutputSubset(uint8_t praiseID, class Object* objObject);
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
        static std::list<class Object*>* _REG_ptr_Lits_Of_PraiseOutSubset;
        // create.
        static void stat_REG_create_ptr_out_playerId(uint8_t* newDEFAULT_uint8_t);
        static void stat_REG_create_ptr_out_praiseEventId(uint8_t* newDEFAULT_uint8_t);
        static void stat_REG_create_ptr_PraiseOutSubsets();
        // get.
        static uint8_t stat_REG_get_ptr_out_playerId();
        static uint8_t stat_REG_get_ptr_out_praiseEventId();
        static class Object* stat_get_REG_ptr_Item_On_List_Of_PraiseOutputSubset(uint8_t praiseID);
        static std::list<class Object*>* stat_get_REG_ptr_List_Of_PraiseOutputSubset();
        // set.
        static void stat_REG_set_ptr_out_playerId(uint8_t* new_uint8_t);
        static void stat_REG_set_ptr_out_praiseEventId(uint8_t* new_uint8_t);
        static void stat_REG_set_ptr_Output_Control(class Output_Control* newClass);
        static void stat_REG_set_ptr_Item_PraiseOutputSubset(uint8_t praiseID, class Object* objObject);
    };
}