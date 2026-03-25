#pragma once
namespace OpenAvrilConcurrency
{
    class Concurrent
    {
    public:
        Concurrent();
        virtual ~Concurrent();
        void app_do_Concurrent_Algorithm_For_PraiseEventId(class Framework_Server* obj, char playerId, uint8_t ptr_praiseEventId, class Object* ptr_Algorithm_Subset, class Object* ptr_Input_Subset, class Object* ptr_Output_Subset);
        class Concurrent_Control* dyn_CLASS_get_ptr_Concurrent_Control();
        void dyn_REG_boot1_DEFINE_Concurrent(class Framework_Server* obj);
        void dyn_REG_boot2_SUBSTANTIATE_Concurrent(class Framework_Server* obj);
        void dyn_REG_boot3_INITIALISE_Concurrent(class Framework_Server* obj);
        void dyn_REG_boot4_INSTANTIATE_Concurrent(class Framework_Server* obj);
        class Object* dyn_REG_get_ptr_Item_On_ptr_list_Of_ptr_Algorithms_Subset(uint8_t praiseID);
        static void stat_app_thread_Concurrency(class Framework_Server* obj, uint8_t concurrent_threadID);
        static void stat_CLASS_boot0_DECLAIRE_Concurrent();
        static void stat_CLASS_boot1_DEFINE_Concurrent();
        static void stat_CLASS_boot3_INITIALISE_Concurrent();
        static void stat_CLASS_boot4_INSTANTIATE_Concurrent();
        static void stat_REG_boot0_DECLAIRE_Concurrent();
    private:
        static class Concurrent_Control* _stat_CLASS_ptr_Concurrent_Control;
        static std::list<class Object*>* _stat_REG_ptr_list_Of_ptr_Algorithms_Subset;
        static void stat_CLASS_boot1_DEFINE_Concurrent_Control();
        static void stat_CLASS_boot3_INITIALISE_Concurrent_Control();
        static class Concurrent_Control* stat_CLASS_get_ptr_Concurrent_Control();
        static void stat_REG_boot1_DEFINE_list_Of_Algorithms_Subset();
        static void stat_REG_boot2_SUBSTANTIATE_list_Of_Algorithms_Subset(class Framework_Server* obj);
        static void stat_REG_boot3_INITIALISE_list_Of_Algorithms_Subset(class Framework_Server* obj);
        static std::list<class Object*>* stat_REG_get_ptr_list_Of_ptr_Algorithms_Subset();
        static void stat_REG_set_PraiseOutputSubset_As_Praise0_Output(class Praise0_Output* objPraise_Output);
        //todo.
     };
}