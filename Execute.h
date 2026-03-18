#pragma once

namespace OpenAvrilConcurrency
{
    class Execute
    {
    public:
// public.
    // constructor.
        Execute();

    // destructor.
        virtual ~Execute();

    // dynamic.
        // create.
        void app_FUNCT_initialise_ptr_Input_Control(uint8_t number_Implemented_Cores);
        void app_FUNCT_initialise_Libraries();
        void app_FUNCT_initialise_Threads(class Framework_Server* obj);
        void app_FUNCT_Initialise_ptr_array_Of_ptr_list_Of_Threads(class Framework_Server* obj, uint8_t threadId);
        // get.
        class Execute_Control* dyn_CLASS_get_ptr_Execute_Control();
        void* dyn_PGM_get_ConcurrentQue_Server();
        void* dyn_PGM_get_WriteEnable_ServerInputAction();
        void* dyn_PGM_get_WriteEnable_ServerOutputRecieve();
        // set.
    // static.
        // create.
        // get.
        // set.

// private.
    // dynamic.
        // classes.
            // create.
            // get.
            // set.
        // registers.
            // create.
            // get.
            // set.
    // static.
        // classes.
        static class Execute_Control* _stat_CLASS_ptr_Execute_Control;
            // create.
        static void stat_CLASS_create_ptr_Execute_Control();
            // get.
        static class Execute_Control* stat_CLASS_get_ptr_Execute_Control();
            // set.
        // registers.
        static std::list<std::thread*>* _stat_REG_ptr_array_Of_ptr_list_Of_Threads;
            // create.
        static void stat_REG_create_ptr_Array_Of_ptr_list_Of_Threads(class Framework_Server* obj);
            // get.
        static std::list<std::thread*>* stat_REG_get_ptr_Array_Of_Threads();
            // set.
        // programs.
        static void* _stat_PGM_ConcurrentQue_Server;
        static void* _stat_PGM_WriteEnable_ServerInputAction;
        static void* _stat_PGM_WriteEnable_ServerOutputRecieve;
            // create.
            // get.
        static void* stat_PGM_get_ConcurrentQue_Server();
        static void* stat_PGM_get_WriteEnable_ServerInputAction();
        static void* stat_PGM_WriteEnable_ServerOutputRecieve();
            // set.
        static void stat_REG_set_Item_On_array_Of_Threads(class Framework_Server* obj, uint8_t threadID);
    };
}