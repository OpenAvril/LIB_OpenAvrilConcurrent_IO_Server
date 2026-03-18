#pragma once
namespace OpenAvrilConcurrency
{
    class Output
    {
    public:
        Output();
        virtual ~Output();
        void app_FUNCT_create_ptr_Output_Control();
        void app_FUNCT_initialise_Item_PraiseInSubset(class Framework_Server* obj);
        class Output_Control* dyn_CLASS_get_ptr_Output_Control();
        uint8_t dyn_REG_get_ptr_in_playerId();
        uint8_t dyn_REG_get_ptr_in_praiseEventId();
        class Object* dyn_REG_get_ptr_Item_On_List_Of_PraiseOutputSubset(uint8_t praiseId);
    private:
        static class Output_Control* _CLASS_ptr_Output_Control;
        static void stat_CLASS_create_ptr_Output_Control();
        static Output_Control* stat_CLASS_get_ptr_Output_Control();
        static uint8_t* _REG_ptr_in_praiseEventId;
        static uint8_t* _REG_ptr_in_playerId;
        static class Object* _REG_ptr_PraiseInSubset;
        static void stat_REG_create_ptr_in_playerId(uint8_t* newDEFAULT_uint8_t);
        static void stat_REG_create_ptr_in_praiseEventId(uint8_t* newDEFAULT_uint8_t);
        static void stat_REG_create_ptr_PraiseInSubsets();
        static uint8_t* stat_REG_get_ptr_in_praiseEventId();
        static uint8_t* stat_REG_get_ptr_in_playerId();
        static class Object* stat_REG_get_ptr_List_Of_PraiseOutputSubset();
        static void stat_REG_set_ptr_in_playerId(uint8_t new_uint8_t);
        static void stat_REG_set_ptr_in_praiseEventId(uint8_t new_uint8_t);
        static void stat_REG_set_ptr_Item_PraiseOutputSubset(class Object* objObject);
    };
}