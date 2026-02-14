#include "pch.h"

OpenAvril::Concurrent_Control* ptr_Concurrent_Control = NULL;
OpenAvril::Object* ptr_Algorithms_Subset = NULL;

OpenAvril::Concurrent::Concurrent()
{
    std::cout << "entered => OpenAvril::Concurrent::Concurrent()" << std::endl;
}

OpenAvril::Concurrent::~Concurrent()
{
    delete ptr_Concurrent_Control;
    delete ptr_Algorithms_Subset;
}

void OpenAvril::Concurrent::Initialise_Control()
{
    Set_Concurrent_Control(new class OpenAvril::Concurrent_Control());
    while (Get_Concurrent_Control() == NULL) { }
}

OpenAvril::Concurrent_Control* OpenAvril::Concurrent::Get_Concurrent_Control()
{
    return ptr_Concurrent_Control;
}

void OpenAvril::Concurrent::Thread_Concurrency(OpenAvril::Framework_Server* obj, __int8 concurrent_coreId)
{
    bool doneOnce = true;
    while (obj->Get_Server_Assembly()->Get_Execute()->Get_Control_Of_Execute()->GetFlag_ThreadInitialised(concurrent_coreId) == true)
    {
        if (doneOnce == true)
        {
            obj->Get_Server_Assembly()->Get_Execute()->Get_Control_Of_Execute()->SetConditionCodeOfThisThreadedCore(concurrent_coreId);
            doneOnce = false;
        }

    }
    std::cout << "Thread Initialised: ID=" << (concurrent_coreId) << " => Thread_Concurrency()" << std::endl;//TestBench
    while (obj->Get_Server_Assembly()->Get_Execute()->Get_Control_Of_Execute()->GetFlag_SystemInitialised(obj) == true)
    {

    }
    std::cout << "Thread Starting " << (concurrent_coreId) << " => Thread_Concurrency()" << std::endl;//TestBench
    while (obj->Get_Server_Assembly()->Get_Execute()->Get_Control_Of_Execute()->GetFlag_SystemInitialised(obj) == false)
    {
        switch (OpenAvril::CLIBLaunchEnableForConcurrentThreadsAtSERVER::Get_Flag_ConcurrentCoreState(obj->Get_Server_Assembly()->Get_Execute()->Get_Program_ConcurrentQue_Server(), concurrent_coreId))
        {
        case false:

            break;

        case true:
            if(obj->Get_Server_Assembly()->Get_Data()->Get_Data_Control()->Get_flag_IsStackLoaded_Server_InputAction() == true)
            {
                    OpenAvril::CLIBWriteEnableForThreadsAtSERVERINPUTACTION::Write_Start(obj->Get_Server_Assembly()->Get_Execute()->Get_Program_WriteEnable_ServerInputAction(), (__int8)(concurrent_coreId + (__int8)1));
                    obj->Get_Server_Assembly()->Get_Data()->Get_OutputRefferenceOfCore(concurrent_coreId)->Get_control_Of_Output()->SelectSet_Output_Subset(obj, obj->Get_Server_Assembly()->Get_Data()->Get_OutputRefferenceOfCore(concurrent_coreId)->Get_out_praiseEventId(), concurrent_coreId);
                    obj->Get_Server_Assembly()->Get_ptr_Algorithms()->Get_Concurrent(concurrent_coreId)->Get_Concurrent_Control()->SelectSet_Algorithm_Subset(obj, obj->Get_Server_Assembly()->Get_Data()->Get_InputRefferenceOfCore(concurrent_coreId)->GetPraiseEventId(), concurrent_coreId);
                    obj->Get_Server_Assembly()->Get_Data()->Get_Data_Control()->Store_Praise_In_Data_To_GameInstance_Data(obj, obj->Get_Server_Assembly()->Get_Data()->Get_Stack_InputPraise());
                    obj->Get_Server_Assembly()->Get_Data()->Get_Data_Control()->Pop_Stack_InputPraises(obj, concurrent_coreId);
                    OpenAvril::CLIBWriteEnableForThreadsAtSERVERINPUTACTION::Write_End(obj->Get_Server_Assembly()->Get_Execute()->Get_Program_WriteEnable_ServerInputAction(), (__int8)(concurrent_coreId + (__int8)1));
                    obj->Get_Server_Assembly()->Get_ptr_Algorithms()->Get_Concurrent(concurrent_coreId)->Do_Concurrent_Algorithm_For_PraiseEventId(
                        obj,
                        obj->Get_Server_Assembly()->Get_Data()->Get_InputRefferenceOfCore(concurrent_coreId)->Get_playerId(),
                        obj->Get_Server_Assembly()->Get_Data()->Get_InputRefferenceOfCore(concurrent_coreId)->GetPraiseEventId(),
                        obj->Get_Server_Assembly()->Get_ptr_Algorithms()->Get_Concurrent(concurrent_coreId)->Get_Algorithm_Subset(),
                        obj->Get_Server_Assembly()->Get_Data()->Get_InputRefferenceOfCore(concurrent_coreId)->Get_InputBuffer_Subset(),
                        obj->Get_Server_Assembly()->Get_Data()->Get_OutputRefferenceOfCore(concurrent_coreId)->Get_praiseOutputBuffer_Subset()
                    );
                    OpenAvril::Library_WriteEnableForThreadsAt_SERVEROUTPUTRECIEVE::Write_Start(obj->Get_Server_Assembly()->Get_Execute()->Get_Program_WriteEnable_ServerOutputRecieve(), (__int8)(concurrent_coreId + (__int8)1));
                    obj->Get_Server_Assembly()->Get_Data()->Get_Data_Control()->Push_Stack_Output(obj, concurrent_coreId);
                    obj->Get_Server_Assembly()->Get_Data()->Get_Data_Control()->Store_Praise_Out_Data_To_GameInstance_Data(obj, obj->Get_Server_Assembly()->Get_Data()->Get_Stack_OutputPraise());
                    OpenAvril::CLIBLaunchEnableForConcurrentThreadsAtSERVER::Thread_End(obj->Get_Server_Assembly()->Get_Execute()->Get_Program_ConcurrentQue_Server(), concurrent_coreId);
                    if (obj->Get_Server_Assembly()->Get_Data()->Get_Data_Control()->Get_flag_IsStackLoaded_Server_OutputRecieve() == true)
                    {
                        if (OpenAvril::CLIBLaunchEnableForConcurrentThreadsAtSERVER::Get_Flag_ConcurrentCoreState(obj->Get_Server_Assembly()->Get_Execute()->Get_Program_ConcurrentQue_Server(), OpenAvril::CLIBLaunchEnableForConcurrentThreadsAtSERVER::Get_coreId_To_Launch(obj->Get_Server_Assembly()->Get_Execute()->Get_Program_ConcurrentQue_Server())) == OpenAvril::CLIBLaunchEnableForConcurrentThreadsAtSERVER::Get_Flag_Idle(obj->Get_Server_Assembly()->Get_Execute()->Get_Program_ConcurrentQue_Server()))
                        {
                            OpenAvril::CLIBLaunchEnableForConcurrentThreadsAtSERVER::Request_Wait_Launch(obj->Get_Server_Assembly()->Get_Execute()->Get_Program_ConcurrentQue_Server(), OpenAvril::CLIBLaunchEnableForConcurrentThreadsAtSERVER::Get_coreId_To_Launch(obj->Get_Server_Assembly()->Get_Execute()->Get_Program_ConcurrentQue_Server()));
                        }
                    }
                   OpenAvril::Library_WriteEnableForThreadsAt_SERVEROUTPUTRECIEVE::Write_End(obj->Get_Server_Assembly()->Get_Execute()->Get_Program_WriteEnable_ServerOutputRecieve(), (__int8)(concurrent_coreId + (__int8)1));
                //}
            }
            break;
        }
    }
}

void OpenAvril::Concurrent::Do_Concurrent_Algorithm_For_PraiseEventId(
    OpenAvril::Framework_Server* obj,
    char playerId,
    __int8 ptr_praiseEventId,
    Object* ptr_Algorithm_Subset,
    Object* ptr_Input_Subset,
    Object* ptr_Output_Subset
)
{
    OpenAvril::Praise0_Algorithm* ptr_Algorithm_Subset_Praise0 = NULL;
    OpenAvril::Praise0_Input* ptr_Input_Subset_Praise0 = NULL;
    OpenAvril::Praise0_Output* ptr_Output_Subset_Praise0 = NULL;
    OpenAvril::Praise1_Algorithm* ptr_Algorithm_Subset_Praise1 = NULL;
    OpenAvril::Praise1_Input* ptr_Input_Subset_Praise1 = NULL;
    OpenAvril::Praise1_Output* ptr_Output_Subset_Praise1 = NULL;
    OpenAvril::Praise2_Algorithm* ptr_Algorithm_Subset_Praise2 = NULL;
    OpenAvril::Praise2_Input* ptr_Input_Subset_Praise2 = NULL;
    OpenAvril::Praise2_Output* ptr_Output_Subset_Praise2 = NULL;
    switch (ptr_praiseEventId)
    {
    case 0:
        ptr_Algorithm_Subset_Praise0 = reinterpret_cast <OpenAvril::Praise0_Algorithm*> (ptr_Algorithm_Subset);
        ptr_Input_Subset_Praise0 = reinterpret_cast <OpenAvril::Praise0_Input*> (ptr_Input_Subset);
        ptr_Output_Subset_Praise0 = reinterpret_cast <OpenAvril::Praise0_Output*> (ptr_Output_Subset);
        ptr_Algorithm_Subset_Praise0->Do_Praise(
            ptr_Input_Subset_Praise0,
            ptr_Output_Subset_Praise0
        );
        break;

    case 1: 
        ptr_Algorithm_Subset_Praise1 = reinterpret_cast <OpenAvril::Praise1_Algorithm*> (ptr_Algorithm_Subset);
        ptr_Input_Subset_Praise1 = reinterpret_cast <OpenAvril::Praise1_Input*> (ptr_Input_Subset);
        ptr_Output_Subset_Praise1 = reinterpret_cast <OpenAvril::Praise1_Output*> (ptr_Output_Subset);
        ptr_Algorithm_Subset_Praise1->Do_Praise(obj, playerId, ptr_Input_Subset_Praise1, ptr_Output_Subset_Praise1);
        break;

    case 2:
        ptr_Algorithm_Subset_Praise2 = reinterpret_cast <OpenAvril::Praise2_Algorithm*> (ptr_Algorithm_Subset);
        ptr_Input_Subset_Praise2 = reinterpret_cast <OpenAvril::Praise2_Input*> (ptr_Input_Subset);
        ptr_Output_Subset_Praise2 = reinterpret_cast <OpenAvril::Praise2_Output*> (ptr_Output_Subset);
        ptr_Algorithm_Subset_Praise2->Do_Praise(
            ptr_Input_Subset_Praise2,
            ptr_Output_Subset_Praise2
        );
        break;
    }
}

OpenAvril::Object* OpenAvril::Concurrent::Get_Algorithm_Subset()
{
    return ptr_Algorithms_Subset;
}

void OpenAvril::Concurrent::Set_Algorithm_Subset(Praise0_Algorithm* praise0_algorithm)
{
    ptr_Algorithms_Subset = reinterpret_cast<OpenAvril::Object*>(praise0_algorithm);
}
void OpenAvril::Concurrent::Set_Algorithm_Subset(Praise1_Algorithm* praise1_algorithm)
{
    ptr_Algorithms_Subset = reinterpret_cast<OpenAvril::Object*>(praise1_algorithm);
}
void OpenAvril::Concurrent::Set_Algorithm_Subset(Praise2_Algorithm* praise2_algorithm)
{
    ptr_Algorithms_Subset = reinterpret_cast<OpenAvril::Object*>(praise2_algorithm);
}
void OpenAvril::Concurrent::Set_Concurrent_Control(Concurrent_Control* concurrent_control)
{
    ptr_Concurrent_Control = concurrent_control;
}