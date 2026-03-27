#include "pch.h"
    OpenAvrilConcurrency::Execute_Control* OpenAvrilConcurrency::Execute::_stat_CLASS_ptr_Execute_Control;
    std::list<std::thread*>* OpenAvrilConcurrency::Execute::_stat_REG_List_Of_Threads;
    void* OpenAvrilConcurrency::Execute::_stat_PGM_ConcurrentQue_Server;
    void* OpenAvrilConcurrency::Execute::_stat_PGM_WriteEnable_ServerInputAction;
    void* OpenAvrilConcurrency::Execute::_stat_PGM_WriteEnable_ServerOutputRecieve;
// public.
    OpenAvrilConcurrency::Execute::Execute()
{
    std::cout << "entered CONSTRUCTOR of Execute()." << std::endl;
    stat_CLASS_boot0_DECLAIRE_Execute();
    stat_CLASS_boot1_DEFINE_Execute();
    stat_CLASS_boot3_INITIALISE_Execute();
    stat_REG_boot0_DECLAIRE_Execute();
    std::cout << "exiting CONSTRUCTOR of Execute()." << std::endl;
}
    OpenAvrilConcurrency::Execute::~Execute()
{
    delete _stat_CLASS_ptr_Execute_Control;
    delete _stat_REG_List_Of_Threads;
    delete _stat_PGM_ConcurrentQue_Server;
    delete _stat_PGM_WriteEnable_ServerInputAction;
    delete _stat_PGM_WriteEnable_ServerOutputRecieve;
}
    OpenAvrilConcurrency::Execute_Control* OpenAvrilConcurrency::Execute::dyn_CLASS_get_ptr_Execute_Control()
    {
        return stat_CLASS_get_ptr_Execute_Control();
    }
    void OpenAvrilConcurrency::Execute::dyn_REG_boot1_DEFINE_Execute(OpenAvrilConcurrency::Framework_Server* obj)
    {
        std::cout << "entered dyn_REG_boot1_DEFINE_Execute()" << std::endl;
        stat_REG_boot1_DEFINE_List_Of_Threads();
        std::cout << "exiting dyn_REG_boot1_DEFINE_Execute()" << std::endl;
    }
    void OpenAvrilConcurrency::Execute::dyn_REG_boot2_SUBSTANTIATE_Execute(OpenAvrilConcurrency::Framework_Server* obj)
    {
        std::cout << "entered dyn_REG_boot2_SUBSTANTIATE_Execute()" << std::endl;
        stat_REG_boot2_SUBSTANTIATE_List_Of_Threads(obj);
        std::cout << "exiting dyn_REG_boot2_SUBSTANTIATE_Execute()" << std::endl;
    }
    void OpenAvrilConcurrency::Execute::dyn_REG_boot3_INITIALISE_Execute(OpenAvrilConcurrency::Framework_Server* obj)
    {
        std::cout << "entered dyn_REG_boot3_INITIALISE_Execute()" << std::endl;
        stat_REG_boot3_INITIALISE_List_Of_Threads(obj);
        std::cout << "exiting dyn_REG_boot3_INITIALISE_Execute()" << std::endl;
    }
    void OpenAvrilConcurrency::Execute::dyn_REG_boot4_INSTANTIATE_Execute(OpenAvrilConcurrency::Framework_Server* obj)
    {
        std::cout << "entered dyn_REG_boot4_INSTANTIATE_Execute()" << std::endl;

        std::cout << "exiting dyn_REG_boot4_INSTANTIATE_Execute()" << std::endl;
    }
    void* OpenAvrilConcurrency::Execute::dyn_PGM_get_ConcurrentQue_Server()
    {
        return stat_PGM_get_ptr_ConcurrentQue_Server();
    }
    void* OpenAvrilConcurrency::Execute::dyn_PGM_get_WriteEnable_ServerInputAction()
    {
        return stat_PGM_get_ptr_WriteEnable_ServerInputAction();
    }
    void* OpenAvrilConcurrency::Execute::dyn_PGM_get_WriteEnable_ServerOutputRecieve()
    {
        return stat_PGM_get_ptr_WriteEnable_ServerOutputRecieve();
    }
    void OpenAvrilConcurrency::Execute::stat_CLASS_boot0_DECLAIRE_Execute()
    {
        std::cout << "entered stat_CLASS_boot0_DECLAIRE_Execute()" << std::endl;

        std::cout << "exiting stat_CLASS_boot0_DECLAIRE_Execute()" << std::endl;
    }
    void OpenAvrilConcurrency::Execute::stat_CLASS_boot1_DEFINE_Execute()
    {
        std::cout << "entered stat_CLASS_boot1_DEFINE_Execute()" << std::endl;
        stat_CLASS_boot1_DEFINE_Execute_Control();
        stat_PGM_boot1_DEFINE_ConcurrentQue_Server();
        stat_PGM_boot1_DEFINE_ServerInputAction();
        stat_PGM_boot1_DEFINE_ServerOutputRecieve();
        std::cout << "exiting stat_CLASS_boot1_DEFINE_Execute()" << std::endl;
    }
    void OpenAvrilConcurrency::Execute::stat_CLASS_boot3_INITIALISE_Execute()
    {
        std::cout << "entered stat_CLASS_boot3_INITIALISE_Execute()" << std::endl;
        stat_CLASS_boot3_INITIALISE_Execute_Control();
        stat_PGM_boot3_INITIALISE_ConcurrentQue_Server();
        std::cout << "* booted. ConcurrentQue_Server()" << std::endl;
        stat_PGM_boot3_INITIALISE_ServerInputAction();
        std::cout << "* booted. ServerInputAction()" << std::endl;
        stat_PGM_boot3_INITIALISE_ServerOutputRecieve();
        std::cout << "* booted. ServerOutputRecieve()" << std::endl;
        std::cout << "exiting stat_CLASS_boot3_INITIALISE_Execute()" << std::endl;
    }
    void OpenAvrilConcurrency::Execute::stat_CLASS_boot4_INSTANTIATE_Execute()
    {
        std::cout << "entered stat_CLASS_boot4_INSTANTIATE_Execute()" << std::endl;

        std::cout << "exiting stat_CLASS_boot4_INSTANTIATE_Execute()" << std::endl;
    }
    void OpenAvrilConcurrency::Execute::stat_REG_boot0_DECLAIRE_Execute()
    {
        std::cout << "entered stat_CLASS_boot4_INSTANTIATE_Execute()" << std::endl;

        std::cout << "exiting stat_CLASS_boot4_INSTANTIATE_Execute()" << std::endl;
    }
// private.
    void OpenAvrilConcurrency::Execute::stat_CLASS_boot1_DEFINE_Execute_Control()
    {
        _stat_CLASS_ptr_Execute_Control = NULL;
    }
    void OpenAvrilConcurrency::Execute::stat_CLASS_boot3_INITIALISE_Execute_Control()
    {
        _stat_CLASS_ptr_Execute_Control = new OpenAvrilConcurrency::Execute_Control();
        while (stat_CLASS_get_ptr_Execute_Control() == NULL) {}
    }
    OpenAvrilConcurrency::Execute_Control* OpenAvrilConcurrency::Execute::stat_CLASS_get_ptr_Execute_Control()
    {
        return _stat_CLASS_ptr_Execute_Control;
    }
    void OpenAvrilConcurrency::Execute::stat_REG_boot1_DEFINE_List_Of_Threads()
    {
        _stat_REG_List_Of_Threads = NULL;
    }
    void OpenAvrilConcurrency::Execute::stat_REG_boot2_SUBSTANTIATE_List_Of_Threads(class Framework_Server* obj)
    {
        _stat_REG_List_Of_Threads = new std::list<std::thread*>();
        while (stat_PGM_get_ptr_List_Of_Threads() == NULL) { }
        stat_PGM_get_ptr_List_Of_Threads()->resize(obj->dyn_CLASS_get_ptr_Server()->dyn_CLASS_get_ptr_Global()->dyn_REG_get_Item_number_Of_Implemented_Cores() - 1);
        for (uint8_t threadId = 0; threadId < sizeof(*stat_PGM_get_ptr_List_Of_Threads()); threadId++)
        {
            auto temp = stat_PGM_get_ptr_List_Of_Threads()->begin();
            std::advance(temp, threadId);
            *temp = NULL;
        }
    }
    void OpenAvrilConcurrency::Execute::stat_REG_boot3_INITIALISE_List_Of_Threads(class Framework_Server* obj)
    {
        for (uint8_t threadId = 0; threadId < sizeof(*stat_PGM_get_ptr_List_Of_Threads()); threadId++)
        {
            auto temp = stat_PGM_get_ptr_List_Of_Threads()->begin();
            std::advance(temp, threadId);
            *temp = new std::thread(obj->dyn_CLASS_get_ptr_Server()->dyn_CLASS_get_ptr_Algorithms()->dyn_STRUCT_get_Item_On_list_Of_ptr_Concurrent(threadId)->stat_app_thread_Concurrency, obj, threadId);
        }
    }
    std::list<std::thread*>* OpenAvrilConcurrency::Execute::stat_PGM_get_ptr_List_Of_Threads()
    {
        return _stat_REG_List_Of_Threads;
    }
    void OpenAvrilConcurrency::Execute::stat_PGM_boot1_DEFINE_ConcurrentQue_Server()
    {
        _stat_PGM_ConcurrentQue_Server = NULL;
    }
    void OpenAvrilConcurrency::Execute::stat_PGM_boot1_DEFINE_ServerInputAction()
    {
        _stat_PGM_WriteEnable_ServerInputAction = NULL;
    }
    void OpenAvrilConcurrency::Execute::stat_PGM_boot1_DEFINE_ServerOutputRecieve()
    {
        _stat_PGM_WriteEnable_ServerOutputRecieve = NULL;
    }
    void OpenAvrilConcurrency::Execute::stat_PGM_boot3_INITIALISE_ConcurrentQue_Server()
    {
        _stat_PGM_ConcurrentQue_Server = OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtSERVER::CLIBLaunchEnableForConcurrentThreadsAtSERVER::app_FUNCT_generate_Program();
        while (stat_PGM_get_ptr_ConcurrentQue_Server() == NULL) {}
    }
    void OpenAvrilConcurrency::Execute::stat_PGM_boot3_INITIALISE_ServerInputAction()
    {
        _stat_PGM_WriteEnable_ServerInputAction = OpenAvrilCLIBWriteEnableForThreadsAtSERVERINPUTACTION::CLIBWriteEnableForThreadsAtSERVERINPUTACTION::app_FUNCT_generate_Program();
        while (stat_PGM_get_ptr_WriteEnable_ServerInputAction() == NULL) {}
    }
    void OpenAvrilConcurrency::Execute::stat_PGM_boot3_INITIALISE_ServerOutputRecieve()
    {
        _stat_PGM_WriteEnable_ServerOutputRecieve = OpenAvrilCLIBWriteEnableForThreadsAtSERVEROUTPUTRECIEVE::CLIBWriteEnableForThreadsAtSERVEROUTPUTRECIEVE::app_FUNCT_generate_Program();
        while (stat_PGM_get_ptr_WriteEnable_ServerOutputRecieve() == NULL) {}
    }
    void* OpenAvrilConcurrency::Execute::stat_PGM_get_ptr_ConcurrentQue_Server()
{
    return _stat_PGM_ConcurrentQue_Server;
}
    void* OpenAvrilConcurrency::Execute::stat_PGM_get_ptr_WriteEnable_ServerInputAction()
{
    return _stat_PGM_WriteEnable_ServerInputAction;
}
    void* OpenAvrilConcurrency::Execute::stat_PGM_get_ptr_WriteEnable_ServerOutputRecieve()
{
    return _stat_PGM_WriteEnable_ServerOutputRecieve;
}