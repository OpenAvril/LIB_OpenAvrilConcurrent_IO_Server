// LIB_Concurrent_IO_Server.cpp : Defines the exported functions for the DLL.
//
#include "pch.h"
#include "framework.h"
#include "LIB_Concurrent_IO_Server.h"

class OpenAvril::Framework_Server* _Server_Assembly;
void* programHandleId_WriteEnalbe_ServerInputAction;
void* programHandleId_WriteEnalbe_ServerOutputRecieve;

bool _flag_IsStackLoaded_Server_InputAction;
bool _flag_IsStackLoaded_Server_OutputRecieve;
bool _flag_IsInitialised_Avril_FSD_ServerAssembly;

// Praise Event Id
__int8 _PraiseEventId;

// Praise 0 Data
bool _Praise0_Input_IsPingActive;
bool _Praise0_Output_IsPingActive;

// Praise 1 Data


void* OpenAvril::CLIBServerIOConcurrnecy::Initialise_Server_Concurrency()
{
    _Server_Assembly = new class OpenAvril::Framework_Server();
    while (_Server_Assembly == NULL) {}
    return (void*)_Server_Assembly;
}
void OpenAvril::CLIBServerIOConcurrnecy::Initalise_Programs(OpenAvril::Framework_Server* obj)
{
    obj->Initialise_Program(obj);
}
void OpenAvril::CLIBServerIOConcurrnecy::Flip_InBufferToWrite(OpenAvril::Framework_Server* obj)
{
    obj->Get_ptr_Server()->Get_ptr_Data()->Flip_Input_DoubleBuffer();
}

void OpenAvril::CLIBServerIOConcurrnecy::Flip_OutBufferToWrite(OpenAvril::Framework_Server* obj)
{
    obj->Get_ptr_Server()->Get_ptr_Data()->Flip_Output_DoubleBuffer();
}

bool OpenAvril::CLIBServerIOConcurrnecy::Get_flag_isStackLoaded_Server_InputAction(class OpenAvril::Framework_Server* obj)
{
    _flag_IsStackLoaded_Server_InputAction = obj->Get_ptr_Server()->Get_ptr_Data()->Get_ptr_Data_Control()->Get_flag_isStackLoaded_Server_InputAction();
    return _flag_IsStackLoaded_Server_InputAction;
}
bool OpenAvril::CLIBServerIOConcurrnecy::Get_flag_isLoaded_Stack_OutputSend(class OpenAvril::Framework_Server* obj)
{
    _flag_IsStackLoaded_Server_OutputRecieve = obj->Get_ptr_Server()->Get_ptr_Data()->Get_ptr_Data_Control()->Get_flag_isLoaded_Stack_OutputSend();
    return _flag_IsStackLoaded_Server_OutputRecieve;
}
bool OpenAvril::CLIBServerIOConcurrnecy::Get_flag_IsInitialised_Avril_FSD_ServerConcurrency(class OpenAvril::Framework_Server* obj)
{
    _flag_IsInitialised_Avril_FSD_ServerAssembly = obj->Get_ptr_Server()->Get_ptr_Execute()->Get_Control_Of_Execute()->GetFlag_SystemInitialised(obj);
    return _flag_IsInitialised_Avril_FSD_ServerAssembly;
}
void* OpenAvril::CLIBServerIOConcurrnecy::Get_program_WriteEnableStack_ServerInputAction()
{
    return (void*)programHandleId_WriteEnalbe_ServerInputAction;
}
void* OpenAvril::CLIBServerIOConcurrnecy::Get_program_WriteEnableStack_ServerOutputRecieve()
{
    return (void*)programHandleId_WriteEnalbe_ServerOutputRecieve;
}
void OpenAvril::CLIBServerIOConcurrnecy::Pop_From_Stack_Of_Output(class OpenAvril::Framework_Server* obj)
{
    obj->Get_ptr_Server()->Get_ptr_Data()->Get_ptr_Data_Control()->Pop_From_Stack_Of_Output(obj);
}
void OpenAvril::CLIBServerIOConcurrnecy::Push_To_Stack_Of_Input(class OpenAvril::Framework_Server* obj)
{
    obj->Get_ptr_Server()->Get_ptr_Data()->Get_ptr_Data_Control()->Push_To_Stack_Of_Input(obj);
}

void OpenAvril::CLIBServerIOConcurrnecy::Select_Set_Intput_Subset(class OpenAvril::Framework_Server* obj, __int8 praiseEventId)
{
    obj->Get_ptr_Server()->Get_ptr_Data()->GetBuffer_InputFrontDouble()->Get_Input_Control()->SelectSet_Input_Subset(obj, praiseEventId);
}

void OpenAvril::CLIBServerIOConcurrnecy::Set_flag_IsNewInputDataReady(OpenAvril::Framework_Server* obj, bool value)
{
    obj->Get_ptr_Server()->Get_ptr_Data()->Get_ptr_Data_Control()->Set_flag_IsNewInputDataReady(value);
}

void OpenAvril::CLIBServerIOConcurrnecy::Set_flag_IsNewOutputDataReady(OpenAvril::Framework_Server* obj, bool value)
{
    obj->Get_ptr_Server()->Get_ptr_Data()->Get_ptr_Data_Control()->Set_flag_IsNewOutputDataReady(value);
}

__int8 OpenAvril::CLIBServerIOConcurrnecy::Get_PraiseEventId(class OpenAvril::Framework_Server* obj)
{
    _PraiseEventId = obj->Get_ptr_Server()->Get_ptr_Data()->Get_doubleBuffer_Input()->Get_out_praiseEventId();
    return _PraiseEventId;
}
void OpenAvril::CLIBServerIOConcurrnecy::Set_PraiseEventId(class OpenAvril::Framework_Server* obj, __int8 value)
{
    obj->Get_ptr_Server()->Get_ptr_Data()->GetBuffer_InputBackDouble()->Set_in_praiseEventId(value);
}
//
bool OpenAvril::CLIBServerIOConcurrnecy::Get_Praise0_Input_IsPingActive(class OpenAvril::Framework_Server* obj)
{
    _Praise0_Input_IsPingActive = obj->Get_ptr_Server()->Get_ptr_Data()->Get_User_I()->Get_Praise0_Input()->Get_ping_Active();
    return _Praise0_Input_IsPingActive;
}
void OpenAvril::CLIBServerIOConcurrnecy::Set_Praise0_Input_IsPingActive(class OpenAvril::Framework_Server* obj, bool value)
{
    obj->Get_ptr_Server()->Get_ptr_Data()->Get_User_I()->Get_Praise0_Input()->Set_ping_Active(value);
}
bool OpenAvril::CLIBServerIOConcurrnecy::Get_Praise0_Output_IsPingActive(class OpenAvril::Framework_Server* obj)
{
    _Praise0_Output_IsPingActive = obj->Get_ptr_Server()->Get_ptr_Data()->Get_User_O()->Get_Praise0_Output()->Get_ping_Active();
    return _Praise0_Output_IsPingActive;
}
void OpenAvril::CLIBServerIOConcurrnecy::Set_Praise0_Output_IsPingActive(class OpenAvril::Framework_Server* obj, bool value)
{
    obj->Get_ptr_Server()->Get_ptr_Data()->Get_User_O()->Get_Praise0_Output()->Set_ping_Active(value);
}
//


// This is the constructor of a class that has been exported.
OpenAvril::CLIBServerIOConcurrnecy::CLIBServerIOConcurrnecy()
{
    return;
}

