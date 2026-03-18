#pragma once
namespace OpenAvrilConcurrency
{
    class Concurrent
    {
    public:
        Concurrent();
        virtual ~Concurrent();
        void app_do_Concurrent_Algorithm_For_PraiseEventId(class Framework_Server* obj, char playerId, uint8_t ptr_praiseEventId, class Object* ptr_Algorithm_Subset, class Object* ptr_Input_Subset, class Object* ptr_Output_Subset);
        void app_FUNCT_initialise_ptr_Input_Control();
        void app_initialise_Item_On_REG_ptr_list_Of_ptr_Algorithms_Subset(uint8_t praiseID, class Object* newINITIALISED_Object);
        class Concurrent_Control* get_CLASS_ptr_Concurrent_Control();
        class Object* get_REG_ptr_Item_On_ptr_list_Of_ptr_Algorithms_Subset(uint8_t praiseID);
        std::list<class Object*>* get_REG_List_Of_ptr_Algorithms_Subset();
        static void thread_Concurrency(class Framework_Server* obj, uint8_t concurrent_threadID);
    private:
        static class Concurrent_Control* _stat_CLASS_ptr_Concurrent_Control;
        static void stat_CLASS_create_ptr_Concurrent_Control();
        static class Concurrent_Control* stat_CLASS_get_ptr_Concurrent_Control();
        static std::list<class Object*>* _stat_REG_ptr_list_Of_ptr_Algorithms_Subset;
        static void stat_REG_create_list_Of_ptr_Algorithms_Subset();
        static std::list<class Object*>* stat_REG_get_ptr_list_Of_ptr_Algorithms_Subset();
        static void stat_REG_set_Item_On_list_Of_ptr_Algorithms_Subset(uint8_t praiseID, class Object* newDEFAULT_Object);
    };
}