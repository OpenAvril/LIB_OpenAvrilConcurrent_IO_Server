#include "pch.h"

// pointers.
    // classes.
    class OpenAvrilConcurrency::Execute_Control* OpenAvrilConcurrency::Execute::_stat_CLASS_ptr_Execute_Control = NULL;
    // registers.
    std::list<std::thread*>* OpenAvrilConcurrency::Execute::_stat_REG_ptr_array_Of_ptr_list_Of_Threads = NULL;
    // programs.
    void* OpenAvrilConcurrency::Execute::_stat_program_ConcurrentQue_Server = NULL;
    void* OpenAvrilConcurrency::Execute::_stat_program_WriteEnable_ServerInputAction = NULL;
    void* OpenAvrilConcurrency::Execute::_stat_program_WriteEnable_ServerOutputRecieve = NULL;

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
    OpenAvrilConcurrency::Execute::Execute()
    {
        std::cout << "entered constructor of OpenAvrilConcurrency::Execute::Execute()" << std::endl;
        stat_REG_create_ptr_array_Of_ptr_list_Of_Threads();
        std::cout << "entered constructor of OpenAvrilConcurrency::Execute::Execute()" << std::endl;
    }

// destructor.
    OpenAvrilConcurrency::Execute::~Execute()
    {
        delete _stat_CLASS_ptr_Execute_Control;
        delete _stat_REG_ptr_array_Of_ptr_list_Of_Threads;
        delete _stat_program_ConcurrentQue_Server;
        delete _stat_program_WriteEnable_ServerInputAction;
        delete _stat_program_WriteEnable_ServerOutputRecieve;
    }

// public.
    // dynamic.
    void OpenAvrilConcurrency::Execute::initialise_CLASS_Control(uint8_t number_Implemented_Cores)
    {
        OpenAvrilConcurrency::Execute_Control* _stat_CLASS_ptr_Execute_Control = new OpenAvrilConcurrency::Execute_Control(number_Implemented_Cores);
        while (stat_REG_get_ptr_array_Of_ptr_list_Of_Threads() == NULL) {}
    }
    void OpenAvrilConcurrency::Execute::initialise_Libraries()
    {
        _stat_program_ConcurrentQue_Server = OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtSERVER::CLIBLaunchEnableForConcurrentThreadsAtSERVER::app_generate_Program();
        while (get_program_ConcurrentQue_Server() == NULL) {}

        _stat_program_WriteEnable_ServerInputAction = OpenAvrilCLIDWriteEnableForThreadsAtSERVERINPUTACTION::CLIDWriteEnableForThreadsAtSERVERINPUTACTION::app_generate_Program();
        while (get_program_WriteEnable_ServerInputAction() == NULL) {}

       _stat_program_WriteEnable_ServerOutputRecieve = OpenAvrilCLIDWriteEnableForThreadsAtSERVEROUTPUTRECIEVE::CLIDWriteEnableForThreadsAtSERVEROUTPUTRECIEVE::app_generate_Program();
        while (get_program_WriteEnable_ServerOutputRecieve() == NULL) {}
    }
    void OpenAvrilConcurrency::Execute::initialise_Threads(OpenAvrilConcurrency::Framework_Server* obj)
    {
        _stat_REG_ptr_array_Of_ptr_list_Of_Threads = new std::list<std::thread*>(NULL);
        while (stat_REG_get_ptr_array_Of_ptr_list_Of_Threads() == NULL) { }
        for (uint8_t threadID = 0; threadID < sizeof(stat_REG_get_ptr_array_Of_ptr_list_Of_Threads()); threadID++)
        {
            stat_REG_set_Item_On_array_Of_ptr_list_Of_Threads(obj, threadID);
        }
    }
    void OpenAvrilConcurrency::Execute::initialise_ptr_array_Of_ptr_list_Of_Threads(OpenAvrilConcurrency::Framework_Server* obj, uint8_t threadId)
    {
        stat_REG_set_Item_On_array_Of_ptr_list_Of_Threads(obj, threadId);
    }
    OpenAvrilConcurrency::Execute_Control* OpenAvrilConcurrency::Execute::get_CLASS_ptr_Execute_Control()
    {
        return _stat_CLASS_ptr_Execute_Control;
    }
    // get.
    void* OpenAvrilConcurrency::Execute::get_program_ConcurrentQue_Server()
    {
        return stat_get_program_ConcurrentQue_Server();
    }
    void* OpenAvrilConcurrency::Execute::get_program_WriteEnable_ServerInputAction()
    {
        return stat_get_program_WriteEnable_ServerInputAction();
    }
    void* OpenAvrilConcurrency::Execute::get_program_WriteEnable_ServerOutputRecieve()
    {
        return stat_get_program_WriteEnable_ServerOutputRecieve();
    }
        // set.
    // static.
        // get.
        // set.

// private.
    // dynamic.
        // get.
        // set.
    // static.
        // classes.
            // create.
    void OpenAvrilConcurrency::Execute::stat_CLASS_create_ptr_Execute_Control(uint8_t number_Implemented_Cores)
    {
        static class OpenAvrilConcurrency::Execute_Control* _stat_CLASS_ptr_Execute_Control = new class OpenAvrilConcurrency::Execute_Control(number_Implemented_Cores);
        while (stat_CLASS_get_ptr_Execute_Control() == NULL) {}
    }
            // get.
    OpenAvrilConcurrency::Execute_Control* OpenAvrilConcurrency::Execute::stat_CLASS_get_ptr_Execute_Control()
    {
        return _stat_CLASS_ptr_Execute_Control;
    }
            // set.
        // registers.
            // create.
    void OpenAvrilConcurrency::Execute::stat_REG_create_ptr_array_Of_ptr_list_Of_Threads()
    {
        std::list<std::thread*>* _stat_REG_ptr_array_Of_ptr_list_Of_Threads = new std::list<std::thread*>;
        while (stat_REG_get_ptr_array_Of_ptr_list_Of_Threads() == NULL) {}
        for (uint8_t threadID = 0; threadID < sizeof(stat_REG_get_ptr_array_Of_ptr_list_Of_Threads()); threadID++)
        {
            stat_REG_get_Item_On_array_Of_ptr_list_Of_Threads(threadID);
        }
    }
            // get.
    std::thread* OpenAvrilConcurrency::Execute::stat_REG_get_Item_On_array_Of_ptr_list_Of_Threads(uint8_t threadID)
    {
        auto temp = stat_REG_get_ptr_array_Of_ptr_list_Of_Threads()->begin();
        std::advance(temp, threadID);
        return *temp;
    }
    std::list<std::thread*>* OpenAvrilConcurrency::Execute::stat_REG_get_ptr_array_Of_ptr_list_Of_Threads()
    {
        return _stat_REG_ptr_array_Of_ptr_list_Of_Threads;
    }
            // set.
    void OpenAvrilConcurrency::Execute::stat_REG_set_Item_On_array_Of_ptr_list_Of_Threads(OpenAvrilConcurrency::Framework_Server* obj, uint8_t threadID)
    {
        auto temp = stat_REG_get_ptr_array_Of_ptr_list_Of_Threads()->begin();
        std::advance(temp, threadID);
        *temp = new std::thread(obj->get_CLASS_ptr_Server()->get_CLASS_ptr_Algorithms()->get_CLASS_ptr_Item_On_list_Of_ptr_Concurrent(threadID)->thread_Concurrency, obj, threadID);
    }
        // programs.
            // create.
            // get.
    void* OpenAvrilConcurrency::Execute::stat_get_program_ConcurrentQue_Server()
    {
        return _stat_program_ConcurrentQue_Server;
    }
    void* OpenAvrilConcurrency::Execute::stat_get_program_WriteEnable_ServerInputAction()
    {
        return _stat_program_WriteEnable_ServerInputAction;
    }
    void* OpenAvrilConcurrency::Execute::stat_get_program_WriteEnable_ServerOutputRecieve()
    {
        return _stat_program_WriteEnable_ServerOutputRecieve;
    }
            // set.