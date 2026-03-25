#pragma once
namespace OpenAvrilConcurrency
{
    class Execute
    {
    public:
        Execute();
        virtual ~Execute();
        class Execute_Control* dyn_CLASS_get_ptr_Execute_Control();
        void dyn_REG_boot1_DEFINE_Execute(class Framework_Server* obj);
        void dyn_REG_boot2_SUBSTANTIATE_Execute(class Framework_Server* obj);
        void dyn_REG_boot3_INITIALISE_Execute(class Framework_Server* obj);
        void dyn_REG_boot4_INSTANTIATE_Execute(class Framework_Server* obj);
        void* dyn_PGM_get_ConcurrentQue_Server();
        void* dyn_PGM_get_WriteEnable_ServerInputAction();
        void* dyn_PGM_get_WriteEnable_ServerOutputRecieve();
        static void stat_CLASS_boot0_DECLAIRE_Execute();
        static void stat_CLASS_boot1_DEFINE_Execute();
        static void stat_CLASS_boot3_INITIALISE_Execute();
        static void stat_CLASS_boot4_INSTANTIATE_Execute();
        static void stat_REG_boot0_DECLAIRE_Execute();
    private:
        static class Execute_Control* _stat_CLASS_ptr_Execute_Control;
        static std::list<std::thread*>* _stat_REG_List_Of_Threads;
        static void* _stat_PGM_ConcurrentQue_Server;
        static void* _stat_PGM_WriteEnable_ServerInputAction;
        static void* _stat_PGM_WriteEnable_ServerOutputRecieve;
        static void stat_CLASS_boot1_DEFINE_Execute_Control();
        static void stat_CLASS_boot3_INITIALISE_Execute_Control();
        static class Execute_Control* stat_CLASS_get_ptr_Execute_Control();
        static void stat_REG_boot1_DEFINE_List_Of_Threads();
        static void stat_REG_boot2_SUBSTANTIATE_List_Of_Threads(class Framework_Server* obj);
        static void stat_REG_boot3_INITIALISE_List_Of_Threads(class Framework_Server* obj);
        static std::list<std::thread*>* stat_PGM_get_ptr_List_Of_Threads();
        static void stat_PGM_boot1_DEFINE_ConcurrentQue_Server();
        static void stat_PGM_boot1_DEFINE_ServerInputAction();
        static void stat_PGM_boot1_DEFINE_ServerOutputRecieve();
        static void stat_PGM_boot3_INITIALISE_ConcurrentQue_Server();
        static void stat_PGM_boot3_INITIALISE_ServerInputAction();
        static void stat_PGM_boot3_INITIALISE_ServerOutputRecieve();
        static void* stat_PGM_get_ptr_ConcurrentQue_Server();
        static void* stat_PGM_get_ptr_WriteEnable_ServerInputAction();
        static void* stat_PGM_get_ptr_WriteEnable_ServerOutputRecieve();
    };
}