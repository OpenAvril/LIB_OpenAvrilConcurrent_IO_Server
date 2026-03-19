#pragma once
namespace OpenAvrilConcurrency
{
    class Execute
    {
    public:
        Execute();
        virtual ~Execute();
        void app_FUNCT_initialise_ptr_Execute_Control();
        void app_FUNCT_initialise_Libraries();
        void app_FUNCT_initialise_Threads(class Framework_Server* obj);
        void app_FUNCT_Initialise_ptr_array_Of_ptr_list_Of_Threads(class Framework_Server* obj, uint8_t threadId);
        class Execute_Control* dyn_CLASS_get_ptr_Execute_Control();
        void* dyn_PGM_get_ConcurrentQue_Server();
        void* dyn_PGM_get_WriteEnable_ServerInputAction();
        void* dyn_PGM_get_WriteEnable_ServerOutputRecieve();
    private:
        static class Execute_Control* _stat_CLASS_ptr_Execute_Control;
        static void stat_CLASS_create_ptr_Execute_Control();
        static class Execute_Control* stat_CLASS_get_ptr_Execute_Control();
        static std::list<std::thread*>* _stat_REG_ptr_array_Of_ptr_list_Of_Threads;
        static void stat_REG_create_ptr_Array_Of_ptr_list_Of_Threads(class Framework_Server* obj);
        static std::list<std::thread*>* stat_REG_get_ptr_Array_Of_Threads();
        static void* _stat_PGM_ConcurrentQue_Server;
        static void* _stat_PGM_WriteEnable_ServerInputAction;
        static void* _stat_PGM_WriteEnable_ServerOutputRecieve;
        static void* stat_PGM_get_ConcurrentQue_Server();
        static void* stat_PGM_get_WriteEnable_ServerInputAction();
        static void* stat_PGM_WriteEnable_ServerOutputRecieve();
        static void stat_REG_set_Item_On_array_Of_Threads(class Framework_Server* obj, uint8_t threadID);
    };
}