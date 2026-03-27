#pragma once
namespace OpenAvrilConcurrency
{
    struct Input
    {
    public:
        //Input();
        //virtual ~Input();
        struct Input_Control* dyn_CLASS_get_ptr_Input_Control();
        void dyn_REG_boot1_DEFINE_Input(class Framework_Server* obj);
        void dyn_REG_boot2_SUBSTANTIATE_Input(class Framework_Server* obj);
        void dyn_REG_boot3_INITIALISE_Input(class Framework_Server* obj);
        void dyn_REG_boot4_INSTANTIATE_Input(class Framework_Server* obj);
        uint8_t dyn_REG_get_ptr_Input_playerId();
        uint8_t dyn_REG_get_ptr_Input_praiseEventId();
        class Object* dyn_REG_get_Item_On_List_Of_PraiseInputSubset();
        void dyn_REG_set_Input_praiseEventId(uint8_t newPraiseId);
        void dyn_REG_set_ptr_Input_praiseEventId(uint8_t new_uint8_t);
        void dyn_REG_set_Item0_PraiseInputSubset(class Praise0_Input* objPraiseSubset);
        static void stat_CLASS_boot0_DECLAIRE_Input();
        static void stat_CLASS_boot1_DEFINE_Input();
        static void stat_CLASS_boot3_INITIALISE_Input();
        static void stat_CLASS_boot4_INSTANTIATE_Input();
        static void stat_REG_boot0_DECLAIRE_Input();
    private:
        static struct Input_Control* stat_CLASS_ptr_Input_Control;
        static uint8_t* _REG_ptr_Input_praiseEventId;
        static uint8_t* _REG_ptr_Input_playerId;
        static std::list<class Object*>* _REG_ptr_List_Of_PraiseInputSubset;
        static void stat_CLASS_boot1_DEFINE_Input_Control();
        static void stat_CLASS_boot3_INITIALISE_Input_Control();
        static struct Input_Control* stat_CLASS_get_ptr_Input_Control();
        static void stat_REG_boot1_DEFINE_Input_praiseEventId();
        static void stat_REG_boot1_DEFINE_Input_playerId();
        static void stat_REG_boot1_DEFINE_Input_List_Of_PraiseInputSubset();
        static void stat_REG_boot2_SUBSTANTIATE_Input_praiseEventId();
        static void stat_REG_boot2_SUBSTANTIATE_Input_playerId();
        static void stat_REG_boot2_SUBSTANTIATE_List_Of_PraiseInputSubset(class Framework_Server* obj);
        static void stat_REG_boot3_INITIALISE_Input_praiseEventId();
        static void stat_REG_boot3_INITIALISE_Input_playerId();
        static void stat_REG_boot3_INITIALISE_List_Of_PraiseInputSubset(class Framework_Server* obj, uint8_t praiseId);
        static uint8_t* stat_REG_get_ptr_Input_praiseEventId();
        static uint8_t* stat_REG_get_ptr_Input_playerId();
        static std::list<class Object*>* stat_REG_get_ptr_Item0_PraiseInputSubset();
        static void stat_REG_set_ptr_Input_playerId(uint8_t new_uint8_t);
        static void stat_REG_set_ptr_Input_praiseEventId(uint8_t new_uint8_t);
    };
}