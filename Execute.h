#pragma once

namespace OpenAvrilConcurrency
{
    class Execute
    {
    public:
// public.
    // constructor.

    // destructor.

    // dynamic.
        // create.
        // get.
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
            // create.
            // get.
            // set.
        // registers.
            // create.
            // get.
            // set.



// constructor.
        Execute();

// destructor.
        virtual ~Execute();

// public.
    // dynamic.
        void initialise_CLASS_Control(uint8_t number_Implemented_Cores);
        void initialise_Libraries();
        void initialise_Threads(class Framework_Server* obj);
        void initialise_ptr_array_Of_ptr_list_Of_Threads(class Framework_Server* obj, uint8_t threadId);
        // get.
        class Execute_Control* dyn_CLASS_get_ptr_Execute_Control();
        void* get_program_ConcurrentQue_Server();
        void* get_program_WriteEnable_ServerInputAction();
        void* get_program_WriteEnable_ServerOutputRecieve();
        // set.
    // static.
        // get.
        // set.

    private:
// private.
    // dynamic.
        // get.
        // set.
    // static.
        // programs.
            // create.
            // get.
            // set.
        // classes.
        static class Execute_Control* _stat_CLASS_ptr_Execute_Control;
            // create.
        static void stat_CLASS_create_ptr_Execute_Control(uint8_t number_Implemented_Cores);
            // get.
        static class Execute_Control* stat_CLASS_get_ptr_Execute_Control();
            // set.
        // registers.
        static std::list<std::thread*>* _stat_REG_ptr_array_Of_ptr_list_Of_Threads;
            // create.
        static void stat_REG_create_ptr_array_Of_ptr_list_Of_Threads();
            // get.
        static std::thread* stat_REG_get_Item_On_array_Of_ptr_list_Of_Threads(uint8_t threadId);
        static std::list<std::thread*>* stat_REG_get_ptr_array_Of_ptr_list_Of_Threads();
            // set.
        static void stat_REG_set_Item_On_array_Of_ptr_list_Of_Threads(OpenAvrilConcurrency::Framework_Server* obj, uint8_t threadID);
        // programs.
        static void* _stat_program_ConcurrentQue_Server;
        static void* _stat_program_WriteEnable_ServerInputAction;
        static void* _stat_program_WriteEnable_ServerOutputRecieve;
            // get.
        static void* stat_get_program_ConcurrentQue_Server();
        static void* stat_get_program_WriteEnable_ServerInputAction();
        static void* stat_get_program_WriteEnable_ServerOutputRecieve();
            // seet.
    };
}