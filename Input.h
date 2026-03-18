#pragma once
namespace OpenAvrilConcurrency
{
    class Input
    {
    public:
        Input();
        virtual ~Input();
        void app_FUNCT_create_ptr_Input_Control();
        void app_FUNCT_initialise_Item_PraiseInSubset(class Framework_Server* obj);
        class Input_Control* dyn_CLASS_get_ptr_Input_Control();
        uint8_t dyn_REG_get_ptr_in_playerId();
        uint8_t dyn_REG_get_ptr_in_praiseEventId();
        class Object* dyn_REG_get_ptr_Item_On_List_Of_PraiseInputSubset(uint8_t praiseId);
        void dyn_REG_Set_in_praiseEventId(uint8_t newPraiseId);
    private:
        static class Input_Control* _CLASS_ptr_Input_Control;
        static void stat_CLASS_create_ptr_Input_Control();
        static Input_Control* stat_CLASS_get_ptr_Input_Control();
        static uint8_t* _REG_ptr_in_praiseEventId;
        static uint8_t* _REG_ptr_in_playerId;
        static class Object* _REG_ptr_PraiseInSubset;
        static void stat_REG_create_ptr_in_playerId(uint8_t* newDEFAULT_uint8_t);
        static void stat_REG_create_ptr_in_praiseEventId(uint8_t* newDEFAULT_uint8_t);
        static void stat_REG_create_ptr_PraiseInSubsets();
        static uint8_t* stat_REG_get_ptr_in_praiseEventId();
        static uint8_t* stat_REG_get_ptr_in_playerId();
        static class Object* stat_REG_get_ptr_List_Of_PraiseInputSubset();
        static void stat_REG_set_ptr_in_playerId(uint8_t new_uint8_t);
        static void stat_REG_set_ptr_in_praiseEventId(uint8_t new_uint8_t);
        static void stat_REG_set_ptr_Item_PraiseInputSubset(class Object* objObject);
    };
}