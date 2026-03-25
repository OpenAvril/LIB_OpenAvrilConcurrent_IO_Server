#pragma once
namespace OpenAvrilConcurrency
{
    class Output
    {
    public:
        Output();
        virtual ~Output();
        class Output_Control* dyn_CLASS_get_ptr_Output_Control();
        void dyn_REG_boot1_DEFINE_Output(class Framework_Server* obj);
        void dyn_REG_boot2_SUBSTANTIATE_Output(class Framework_Server* obj);
        void dyn_REG_boot3_INITIALISE_Output(class Framework_Server* obj);
        void dyn_REG_boot4_INSTANTIATE_Output(class Framework_Server* obj);
        uint8_t dyn_REG_get_ptr_Output_playerId();
        uint8_t dyn_REG_get_ptr_Output_praiseEventId();
        class Object* dyn_REG_get_Item_On_List_Of_PraiseOutputSubset();
        void dyn_REG_set_Output_praiseEventId(uint8_t newPraiseId);
        void dyn_REG_set_ptr_Output_praiseEventId(uint8_t new_uint8_t);
        void dyn_REG_set_PraiseOutputSubset_As_Praise0_Output(class Praise0_Output* objPraise_Output);
        static void stat_CLASS_boot0_DECLAIRE_Output();
        static void stat_CLASS_boot1_DEFINE_Output();
        static void stat_CLASS_boot3_INITIALISE_Output();
        static void stat_CLASS_boot4_INSTANTIATE_Output();
        static void stat_REG_boot0_DECLAIRE_Output();
    private:
        static class Output_Control* stat_CLASS_ptr_Output_Control;
        static uint8_t* _REG_ptr_Output_praiseEventId;
        static uint8_t* _REG_ptr_Output_playerId;
        static std::list<class Object*>* _REG_ptr_List_Of_PraiseOutputSubset;
        static void stat_CLASS_boot1_DEFINE_Output_Control();
        static void stat_CLASS_boot3_INITIALISE_Output_Control();
        static class Output_Control* stat_CLASS_get_ptr_Output_Control();
        static void stat_REG_boot1_DEFINE_Output_praiseEventId();
        static void stat_REG_boot1_DEFINE_Output_playerId();
        static void stat_REG_boot1_DEFINE_Output_List_Of_PraiseOutputSubset();
        static void stat_REG_boot2_SUBSTANTIATE_Output_praiseEventId();
        static void stat_REG_boot2_SUBSTANTIATE_Output_playerId();
        static void stat_REG_boot2_SUBSTANTIATE_List_Of_PraiseOutputSubset(class Framework_Server* obj);
        static void stat_REG_boot3_INITIALISE_Output_praiseEventId();
        static void stat_REG_boot3_INITIALISE_Output_playerId();
        static void stat_REG_boot3_INITIALISE_List_Of_PraiseOutputSubset(class Framework_Server* obj, uint8_t praiseId);
        static uint8_t* stat_REG_get_ptr_Output_praiseEventId();
        static uint8_t* stat_REG_get_ptr_Output_playerId();
        static std::list<class Object*>* stat_REG_get_ptr_List_Of_PraiseOutputSubset();
        static void stat_REG_set_ptr_Output_playerId(uint8_t new_uint8_t);
        static void stat_REG_set_ptr_Output_praiseEventId(uint8_t new_uint8_t);
    };
}