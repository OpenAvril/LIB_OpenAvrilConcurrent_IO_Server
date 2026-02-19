#include "pch.h"

// classes.
    OpenAvril::Execute_Control* _ptr_Execute_Control = NULL;

// registers.
    std::list<std::thread*> _list_Of_Threads = { NULL };

// pointers.
    std::list<std::thread*>* _ptr_list_Of_Threads =  NULL;
    // programgs.
    OpenAvril::LaunchEnableForConcurrentThreadsAt_SERVER_Framework* _program_ConcurrentQue_Server = NULL;
    OpenAvril::WriteEnableForThreadsAt_SERVERINPUTACTION_Framework* _program_WriteEnableStack_ServerInputAction = NULL;
    OpenAvril::WriteEnableForThreadsAt_SERVEROUTPUTRECIEVE_Framework* _program_WriteEnableStack_ServerOutputRecieve = NULL;

// constructor.
    OpenAvril::Execute::Execute()
    {
        Create_list_Of_Threads();
    }

// desructor.
    OpenAvril::Execute::~Execute()
{
    delete ptr_Execute_Control;
    delete _ptr_list_Of_Threads;
}

// public.
    void OpenAvril::Execute::Initialise_Control(__int8 number_Implemented_Cores)
{
    Set_ptr_Execute_Control(new class OpenAvril::Execute_Control(number_Implemented_Cores));
    while (Get_ptr_Execute_Control() == NULL) { }
}
    void OpenAvril::Execute::Initialise_Libraries()
    {
        Set_program_ConcurrentQue_Server(static_cast<OpenAvril::LaunchEnableForConcurrentThreadsAt_SERVER_Framework*>(OpenAvril::CLIBLaunchEnableForConcurrentThreadsAtSERVER::Initialise_LaunchEnableForConcurrentThreadsAt()));
        while (Get_program_ConcurrentQue_Server() == NULL) {}

        Set_program_WriteEnableStack_ServerInputAction(static_cast<OpenAvril::WriteEnableForThreadsAt_SERVERINPUTACTION_Framework*>(OpenAvril::CLIBWriteEnableForThreadsAtSERVERINPUTACTION::Initialise_WriteEnable()));
        while (Get_program_WriteEnable_ServerInputAction() == NULL) {}

        Set_program_WriteEnableStack_ServerOutputRecieve(static_cast<OpenAvril::WriteEnableForThreadsAt_SERVEROUTPUTRECIEVE_Framework*>(OpenAvril::Library_WriteEnableForThreadsAt_SERVEROUTPUTRECIEVE::Initialise_WriteEnable()));
        while (Get_program_WriteEnable_ServerOutputRecieve() == NULL) {}
    }
    void OpenAvril::Execute::Initialise_Threads(OpenAvril::Framework_Server* obj)
    {
        std::list<std::thread*> _list_Of_Threads = { NULL, NULL, NULL, NULL };
        Create_ptr_list_Of_Threads();
        auto temp = Get_ptr_list_Of_Threads()->begin();
        std::advance(temp, obj->Get_ptr_Server()->Get_ptr_Data()->Get_ptr_Data_Control()->Get_STATE_Of_WRITE_For_list_Of_doubleBuffer_Input());
        for (__int8 threadID = 0; threadID < sizeof(_list_Of_Threads); threadID++)
        {
            *temp = new std::thread(obj->Get_ptr_Server()->Get_ptr_Algorithms()->Get_ptr_Item_On_list_Of_ptr_Concurrent(threadID)->Thread_Concurrency, obj, threadID);
            while (Get_Item_On_ptr_list_Of_Threads(threadID) == NULL) {}
        }
    }
    // get.
    std::thread* OpenAvril::Execute::Get_Item_On_ptr_list_Of_Threads(__int8 threadID)
    {
        auto temp = Get_ptr_list_Of_Threads()->begin();
        std::advance(temp, threadID);
        return *temp;
    }
    OpenAvril::Execute_Control* OpenAvril::Execute::Get_ptr_Execute_Control()
    {
        return _ptr_Execute_Control;
    }
    OpenAvril::LaunchEnableForConcurrentThreadsAt_SERVER_Framework* OpenAvril::Execute::Get_program_ConcurrentQue_Server()
    {
        return _program_ConcurrentQue_Server;
    }
    OpenAvril::WriteEnableForThreadsAt_SERVERINPUTACTION_Framework* OpenAvril::Execute::Get_program_WriteEnable_ServerInputAction()
    {
        return _program_WriteEnableStack_ServerInputAction;
    }
    OpenAvril::WriteEnableForThreadsAt_SERVEROUTPUTRECIEVE_Framework* OpenAvril::Execute::Get_program_WriteEnable_ServerOutputRecieve()
    {
        return _program_WriteEnableStack_ServerOutputRecieve;
    }
    // set.

// private.
    void OpenAvril::Execute::Create_list_Of_Threads()
    {
        std::list<std::thread*> _list_Of_Threads = { NULL, NULL, NULL, NULL };
        Create_ptr_list_Of_Threads();
    }
    void OpenAvril::Execute::Create_ptr_list_Of_Threads()
    {
        Set_ptr_list_Of_Threads();
    }
    // get.
    std::list<std::thread*> OpenAvril::Execute::Get_list_Of_Threads()
    {
        return _list_Of_Threads;
    }
    std::list<std::thread*>* OpenAvril::Execute::Get_ptr_list_Of_Threads()
    {
        return _ptr_list_Of_Threads;
    }
    // set.
    void OpenAvril::Execute::Set_Item_On_list_Of_Threads(__int8 threadID, std::thread* thread)
    {
        auto temp = Get_list_Of_Threads().begin();
        std::advance(temp, threadID);
        *temp = thread;
    }
    void OpenAvril::Execute::Set_program_ConcurrentQue_Server(LaunchEnableForConcurrentThreadsAt_SERVER_Framework* pgmID)
    {
        _program_ConcurrentQue_Server = pgmID;
    }
    void OpenAvril::Execute::Set_program_WriteEnableStack_ServerInputAction(WriteEnableForThreadsAt_SERVERINPUTACTION_Framework* pgmID)
    {
        _program_WriteEnableStack_ServerInputAction = pgmID;
    }
    void OpenAvril::Execute::Set_program_WriteEnableStack_ServerOutputRecieve(WriteEnableForThreadsAt_SERVEROUTPUTRECIEVE_Framework* pgmID)
    {
        _program_WriteEnableStack_ServerOutputRecieve = pgmID;
    }
    void OpenAvril::Execute::Set_ptr_Execute_Control(OpenAvril::Execute_Control* execute_Control)
    {
        _ptr_Execute_Control = execute_Control;
    }
    void OpenAvril::Execute::Set_ptr_list_Of_Threads()
    {
        _ptr_list_Of_Threads = &_list_Of_Threads;
    }