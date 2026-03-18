#include "pch.h"

// pointers.
    // classes.
    class OpenAvrilConcurrency::Execute_Control* OpenAvrilConcurrency::Execute::_stat_CLASS_ptr_Execute_Control = NULL;
    // registers.
    std::list<std::thread*>* OpenAvrilConcurrency::Execute::_stat_REG_ptr_array_Of_ptr_list_Of_Threads = NULL;
    // programs.
    void* OpenAvrilConcurrency::Execute::_stat_PGM_ConcurrentQue_Server = NULL;
    void* OpenAvrilConcurrency::Execute::_stat_PGM_WriteEnable_ServerInputAction = NULL;
    void* OpenAvrilConcurrency::Execute::_stat_PGM_WriteEnable_ServerOutputRecieve = NULL;

// public.
    // constructor.
    OpenAvrilConcurrency::Execute::Execute()
    {
        std::cout << "entered CONSTRUCTOR of Execute()." << std::endl;
        
        std::cout << "exiting CONSTRUCTOR of Execute()." << std::endl;
    }

    // destructor.
    OpenAvrilConcurrency::Execute::~Execute()
    {
        delete _stat_CLASS_ptr_Execute_Control;
        delete _stat_REG_ptr_array_Of_ptr_list_Of_Threads;
        delete _stat_PGM_ConcurrentQue_Server;
        delete _stat_PGM_WriteEnable_ServerInputAction;
        delete _stat_PGM_WriteEnable_ServerOutputRecieve;
    }

    // dynamic.
        // create.
    void OpenAvrilConcurrency::Execute::app_FUNCT_initialise_ptr_Input_Control(uint8_t number_Implemented_Cores)
    {
        stat_CLASS_create_ptr_Execute_Control();
    }
    void OpenAvrilConcurrency::Execute::app_FUNCT_initialise_Libraries()
    {
        _stat_PGM_ConcurrentQue_Server = OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtSERVER::CLIBLaunchEnableForConcurrentThreadsAtSERVER::generate_Program();
        while (dyn_PGM_get_ConcurrentQue_Server() == NULL) {}

        _stat_PGM_WriteEnable_ServerInputAction = OpenAvrilCLIBWriteEnableForThreadsAtSERVERINPUTACTION::CLIBWriteEnableForThreadsAtSERVERINPUTACTION::generate_Program();
        while (dyn_PGM_get_WriteEnable_ServerInputAction() == NULL) {}

        _stat_PGM_WriteEnable_ServerOutputRecieve = OpenAvrilCLIBWriteEnableForThreadsAtSERVEROUTPUTRECIEVE::CLIBWriteEnableForThreadsAtSERVEROUTPUTRECIEVE::generate_Program();
        while (dyn_PGM_get_WriteEnable_ServerOutputRecieve() == NULL) {}
    }
    void OpenAvrilConcurrency::Execute::app_FUNCT_initialise_Threads(OpenAvrilConcurrency::Framework_Server* obj)
    {
        stat_REG_create_ptr_Array_Of_ptr_list_Of_Threads(obj);
    }
    void OpenAvrilConcurrency::Execute::app_FUNCT_Initialise_ptr_array_Of_ptr_list_Of_Threads(OpenAvrilConcurrency::Framework_Server* obj, uint8_t threadId)
    {
        stat_REG_create_ptr_Array_Of_ptr_list_Of_Threads(obj);
    }
        // get.
    OpenAvrilConcurrency::Execute_Control* OpenAvrilConcurrency::Execute::dyn_CLASS_get_ptr_Execute_Control()
    {
        return _stat_CLASS_ptr_Execute_Control;
    }
    void* OpenAvrilConcurrency::Execute::dyn_PGM_get_ConcurrentQue_Server()
    {
        return stat_PGM_get_ConcurrentQue_Server();
    }
    void* OpenAvrilConcurrency::Execute::dyn_PGM_get_WriteEnable_ServerInputAction()
    {
        return stat_PGM_get_WriteEnable_ServerInputAction();
    }
    void* OpenAvrilConcurrency::Execute::dyn_PGM_get_WriteEnable_ServerOutputRecieve()
    {
        return stat_PGM_WriteEnable_ServerOutputRecieve();
    }
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
    void OpenAvrilConcurrency::Execute::stat_CLASS_create_ptr_Execute_Control()
    {
        _stat_CLASS_ptr_Execute_Control = new class OpenAvrilConcurrency::Execute_Control();
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
    void OpenAvrilConcurrency::Execute::stat_REG_create_ptr_Array_Of_ptr_list_Of_Threads(OpenAvrilConcurrency::Framework_Server* obj)
    {
        _stat_REG_ptr_array_Of_ptr_list_Of_Threads = new std::list<std::thread*>;
        while (stat_REG_get_ptr_Array_Of_Threads() == NULL) {}
        stat_REG_get_ptr_Array_Of_Threads()->resize(4);//NUMBER OF THEREADS.
        for (uint8_t threadID = 1; threadID < sizeof(*stat_REG_get_ptr_Array_Of_Threads()); threadID++)
        {
            stat_REG_set_Item_On_array_Of_Threads(obj, threadID);
        }
    }
            // get.
    std::list<std::thread*>* OpenAvrilConcurrency::Execute::stat_REG_get_ptr_Array_Of_Threads()
    {
        return _stat_REG_ptr_array_Of_ptr_list_Of_Threads;
    }
            // set.
    void OpenAvrilConcurrency::Execute::stat_REG_set_Item_On_array_Of_Threads(OpenAvrilConcurrency::Framework_Server* obj, uint8_t threadID)
    {
        auto temp = stat_REG_get_ptr_Array_Of_Threads()->begin();
        std::advance(temp, threadID);
        *temp = new std::thread(obj->dyn_CLASS_get_ptr_Server()->dyn_CLASS_get_ptr_Algorithms()->dyn_CLASS_get_Item_On_list_Of_ptr_Concurrent(threadID)->thread_Concurrency, obj, threadID);
    }
        // programs.
            // create.
            // get.
    void* OpenAvrilConcurrency::Execute::stat_PGM_get_ConcurrentQue_Server()
    {
        return _stat_PGM_ConcurrentQue_Server;
    }
    void* OpenAvrilConcurrency::Execute::stat_PGM_get_WriteEnable_ServerInputAction()
    {
        return _stat_PGM_WriteEnable_ServerInputAction;
    }
    void* OpenAvrilConcurrency::Execute::stat_PGM_WriteEnable_ServerOutputRecieve()
    {
        return _stat_PGM_WriteEnable_ServerOutputRecieve;
    }
            // set.