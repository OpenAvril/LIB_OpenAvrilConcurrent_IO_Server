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

void OpenAvril::Concurrent::initialise_Control()
{
    set_Concurrent_Control(new class OpenAvril::Concurrent_Control());
    while (get_ptr_Item_On_list_Of_ptr_Concurrent_Control() == NULL) { }
}

OpenAvril::Concurrent_Control* OpenAvril::Concurrent::get_ptr_Item_On_list_Of_ptr_Concurrent_Control()
{
    return ptr_Concurrent_Control;
}

void OpenAvril::Concurrent::Thread_Concurrency(OpenAvril::Framework_Server* obj, __int8 concurrent_coreId)
{
    bool doneOnce = true;
    while (obj->get_ptr_Server()->get_ptr_Execute()->get_ptr_Execute_Control()->GetFlag_ThreadInitialised(concurrent_coreId) == true)
    {
        if (doneOnce == true)
        {
            obj->get_ptr_Server()->get_ptr_Execute()->get_ptr_Execute_Control()->SetConditionCodeOfThisThreadedCore(concurrent_coreId);
            doneOnce = false;
        }

    }
    std::cout << "Thread Initialised: ID=" << (concurrent_coreId) << " => Thread_Concurrency()" << std::endl;//TestBench
    while (obj->get_ptr_Server()->get_ptr_Execute()->get_ptr_Execute_Control()->GetFlag_SystemInitialised(obj) == true)
    {

    }
    std::cout << "Thread Starting " << (concurrent_coreId) << " => Thread_Concurrency()" << std::endl;//TestBench
    while (obj->get_ptr_Server()->get_ptr_Execute()->get_ptr_Execute_Control()->GetFlag_SystemInitialised(obj) == false)
    {
        switch (OpenAvril::CLIBLaunchEnableForConcurrentThreadsAtSERVER::get_Flag_ConcurrentCoreState(obj->get_ptr_Server()->get_ptr_Execute()->get_Program_ConcurrentQue_Server(), concurrent_coreId))
        {
        case false:

            break;

        case true:
            if(obj->get_ptr_Server()->get_ptr_Data()->get_ptr_Data_Control()->get_flag_isLoaded_Stack_InputAction() == true)
            {
                    OpenAvril::CLIBWriteEnableForThreadsAtSERVERINPUTACTION::Write_Start(obj->get_ptr_Server()->get_ptr_Execute()->get_Program_WriteEnable_ServerInputAction(), (__int8)(concurrent_coreId + (__int8)1));
                    obj->get_ptr_Server()->get_ptr_Data()->get_ptr_Item_Of_list_Of_buffer_Output_ReferenceForThread(concurrent_coreId)->get_control_Of_Output()->Selectset_Output_Subset(obj, obj->get_ptr_Server()->get_ptr_Data()->get_ptr_Item_Of_list_Of_buffer_Output_ReferenceForThread(concurrent_coreId)->get_out_praiseEventId(), concurrent_coreId);
                    obj->get_ptr_Server()->get_ptr_Algorithms()->get_ptr_Item_On_list_Of_ptr_Concurrent(concurrent_coreId)->get_ptr_Item_On_list_Of_ptr_Concurrent_Control()->Selectset_Algorithm_Subset(obj, obj->get_ptr_Server()->get_ptr_Data()->get_ptr_Item_Of_list_Of_buffer_Input_ReferenceForThread(concurrent_coreId)->GetPraiseEventId(), concurrent_coreId);
                    obj->get_ptr_Server()->get_ptr_Data()->get_ptr_Data_Control()->Store_Input_To_GameInstance(obj->get_ptr_Server()->get_ptr_Data(), obj->get_ptr_Server()->get_ptr_Data()->get_ptr_vector_Of_stack_Of_InputPraise());
                    obj->get_ptr_Server()->get_ptr_Data()->get_ptr_Data_Control()->Pop_From_Stack_Of_Input(obj->get_ptr_Server()->get_ptr_Data(), concurrent_coreId);
                    OpenAvril::CLIBWriteEnableForThreadsAtSERVERINPUTACTION::Write_End(obj->get_ptr_Server()->get_ptr_Execute()->get_Program_WriteEnable_ServerInputAction(), (__int8)(concurrent_coreId + (__int8)1));
                    obj->get_ptr_Server()->get_ptr_Algorithms()->get_ptr_Item_On_list_Of_ptr_Concurrent(concurrent_coreId)->Do_Concurrent_Algorithm_For_PraiseEventId(
                        obj,
                        obj->get_ptr_Server()->get_ptr_Data()->get_ptr_Item_Of_list_Of_buffer_Input_ReferenceForThread(concurrent_coreId)->get_playerId(),
                        obj->get_ptr_Server()->get_ptr_Data()->get_ptr_Item_Of_list_Of_buffer_Input_ReferenceForThread(concurrent_coreId)->GetPraiseEventId(),
                        obj->get_ptr_Server()->get_ptr_Algorithms()->get_ptr_Item_On_list_Of_ptr_Concurrent(concurrent_coreId)->get_Algorithm_Subset(),
                        obj->get_ptr_Server()->get_ptr_Data()->get_ptr_Item_Of_list_Of_buffer_Input_ReferenceForThread(concurrent_coreId)->get_InputBuffer_Subset(),
                        obj->get_ptr_Server()->get_ptr_Data()->get_ptr_Item_Of_list_Of_buffer_Output_ReferenceForThread(concurrent_coreId)->get_praiseOutputBuffer_Subset()
                    );
                    OpenAvril::Library_WriteEnableForThreadsAt_SERVEROUTPUTRECIEVE::Write_Start(obj->get_ptr_Server()->get_ptr_Execute()->get_Program_WriteEnable_ServerOutputRecieve(), (__int8)(concurrent_coreId + (__int8)1));
                    obj->get_ptr_Server()->get_ptr_Data()->get_ptr_Data_Control()->push_To_Stack_Of_Output(obj->get_ptr_Server()->get_ptr_Data(), concurrent_coreId);
                    obj->get_ptr_Server()->get_ptr_Data()->get_ptr_Data_Control()->Store_Output_To_GameInstance(obj->get_ptr_Server()->get_ptr_Data(), obj->get_ptr_Server()->get_ptr_Data()->get_ptr_vector_Of_stack_Of_OutputPraise());
                    OpenAvril::CLIBLaunchEnableForConcurrentThreadsAtSERVER::Thread_End(obj->get_ptr_Server()->get_ptr_Execute()->get_Program_ConcurrentQue_Server(), concurrent_coreId);
                    if (obj->get_ptr_Server()->get_ptr_Data()->get_ptr_Data_Control()->get_flag_isLoaded_Stack_OutputSend() == true)
                    {
                        if (OpenAvril::CLIBLaunchEnableForConcurrentThreadsAtSERVER::get_Flag_ConcurrentCoreState(obj->get_ptr_Server()->get_ptr_Execute()->get_Program_ConcurrentQue_Server(), OpenAvril::CLIBLaunchEnableForConcurrentThreadsAtSERVER::get_coreId_To_Launch(obj->get_ptr_Server()->get_ptr_Execute()->get_Program_ConcurrentQue_Server())) == OpenAvril::CLIBLaunchEnableForConcurrentThreadsAtSERVER::get_Flag_Idle(obj->get_ptr_Server()->get_ptr_Execute()->get_Program_ConcurrentQue_Server()))
                        {
                            OpenAvril::CLIBLaunchEnableForConcurrentThreadsAtSERVER::Request_Wait_Launch(obj->get_ptr_Server()->get_ptr_Execute()->get_Program_ConcurrentQue_Server(), OpenAvril::CLIBLaunchEnableForConcurrentThreadsAtSERVER::get_coreId_To_Launch(obj->get_ptr_Server()->get_ptr_Execute()->get_Program_ConcurrentQue_Server()));
                        }
                    }
                   OpenAvril::Library_WriteEnableForThreadsAt_SERVEROUTPUTRECIEVE::Write_End(obj->get_ptr_Server()->get_ptr_Execute()->get_Program_WriteEnable_ServerOutputRecieve(), (__int8)(concurrent_coreId + (__int8)1));
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

OpenAvril::Object* OpenAvril::Concurrent::get_Algorithm_Subset()
{
    return ptr_Algorithms_Subset;
}

void OpenAvril::Concurrent::set_Algorithm_Subset(Praise0_Algorithm* praise0_algorithm)
{
    ptr_Algorithms_Subset = reinterpret_cast<OpenAvril::Object*>(praise0_algorithm);
}
void OpenAvril::Concurrent::set_Algorithm_Subset(Praise1_Algorithm* praise1_algorithm)
{
    ptr_Algorithms_Subset = reinterpret_cast<OpenAvril::Object*>(praise1_algorithm);
}
void OpenAvril::Concurrent::set_Algorithm_Subset(Praise2_Algorithm* praise2_algorithm)
{
    ptr_Algorithms_Subset = reinterpret_cast<OpenAvril::Object*>(praise2_algorithm);
}
void OpenAvril::Concurrent::set_Concurrent_Control(Concurrent_Control* concurrent_control)
{
    ptr_Concurrent_Control = concurrent_control;
}