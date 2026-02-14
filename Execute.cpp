#include "pch.h"

OpenAvril::Execute_Control* ptr_Execute_Control = NULL;
std::thread* ptr_Thread_WithCoreId[4] = { NULL, NULL, NULL, NULL };//NUMBER OF CORES
OpenAvril::LaunchEnableForConcurrentThreadsAt_SERVER_Framework* program_ConcurrentQue_Server = NULL;
OpenAvril::WriteEnableForThreadsAt_SERVERINPUTACTION_Framework* program_WriteEnableStack_ServerInputAction = NULL;
OpenAvril::WriteEnableForThreadsAt_SERVEROUTPUTRECIEVE_Framework* program_WriteEnableStack_ServerOutputRecieve = NULL;

OpenAvril::Execute::Execute()
{

}

OpenAvril::Execute::~Execute()
{
    delete ptr_Execute_Control;
    for (int index = 0; index < 4; index++)
    {
        delete ptr_Thread_WithCoreId[index];
    }//NUMBER OF CORES
}

void OpenAvril::Execute::Initialise_Control(__int8 number_Implemented_Cores)
{
    Set_Control_Of_Execute(new class OpenAvril::Execute_Control(number_Implemented_Cores));
    while (Get_Control_Of_Execute() == NULL) { /* wait untill created */ }
}
void OpenAvril::Execute::Initialise_Libraries()
{
    program_ConcurrentQue_Server = static_cast<OpenAvril::LaunchEnableForConcurrentThreadsAt_SERVER_Framework*>(OpenAvril::CLIBLaunchEnableForConcurrentThreadsAtSERVER::Initialise_LaunchEnableForConcurrentThreadsAt());
    while (program_ConcurrentQue_Server == NULL) {}

    program_WriteEnableStack_ServerInputAction = static_cast<OpenAvril::WriteEnableForThreadsAt_SERVERINPUTACTION_Framework*>(OpenAvril::CLIBWriteEnableForThreadsAtSERVERINPUTACTION::Initialise_WriteEnable());
    while (program_WriteEnableStack_ServerInputAction == NULL) {}

    program_WriteEnableStack_ServerOutputRecieve = static_cast<OpenAvril::WriteEnableForThreadsAt_SERVEROUTPUTRECIEVE_Framework*>(OpenAvril::Library_WriteEnableForThreadsAt_SERVEROUTPUTRECIEVE::Initialise_WriteEnable());
    while (program_WriteEnableStack_ServerOutputRecieve == NULL) {}
}
void OpenAvril::Execute::Initialise_Threads(class OpenAvril::Framework_Server* obj)
{
    for (__int8 coreId = 0; coreId < obj->Get_Server_Assembly()->Get_Global()->Get_NumCores(); coreId++)
    {
        ptr_Thread_WithCoreId[coreId] = new std::thread(obj->Get_Server_Assembly()->Get_ptr_Algorithms()->Get_Concurrent(coreId)->Thread_Concurrency, obj, coreId);
    }
}

OpenAvril::Execute_Control* OpenAvril::Execute::Get_Control_Of_Execute()
{
    return ptr_Execute_Control;
}

OpenAvril::LaunchEnableForConcurrentThreadsAt_SERVER_Framework* OpenAvril::Execute::Get_Program_ConcurrentQue_Server()
{
    return program_ConcurrentQue_Server;
}

OpenAvril::WriteEnableForThreadsAt_SERVERINPUTACTION_Framework* OpenAvril::Execute::Get_Program_WriteEnable_ServerInputAction()
{
    return program_WriteEnableStack_ServerInputAction;
}

OpenAvril::WriteEnableForThreadsAt_SERVEROUTPUTRECIEVE_Framework* OpenAvril::Execute::Get_Program_WriteEnable_ServerOutputRecieve()
{
    return program_WriteEnableStack_ServerOutputRecieve;
}

void OpenAvril::Execute::Set_Control_Of_Execute(OpenAvril::Execute_Control* execute_Control)
{
    ptr_Execute_Control = execute_Control;
}
