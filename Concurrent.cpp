#include "pch.h"

// pointers.
    // classes.
    OpenAvrilConcurrency::Concurrent_Control* OpenAvrilConcurrency::Concurrent::_stat_CLASS_ptr_Concurrent_Control = NULL;
    // registers.
    std::list<OpenAvrilConcurrency::Object*>* OpenAvrilConcurrency::Concurrent::_stat_REG_ptr_list_Of_ptr_Algorithms_Subset = NULL;

// public.
    // constructor.
    OpenAvrilConcurrency::Concurrent::Concurrent()
    {
        std::cout << "entered CONSTRUCTOR Concurrent()" << std::endl;
        stat_REG_create_list_Of_ptr_Algorithms_Subset();
        std::cout << "exiting CONSTRUCTOR Concurrent()" << std::endl;
    }

    // destructor.
    OpenAvrilConcurrency::Concurrent::~Concurrent()
    {
        delete _stat_CLASS_ptr_Concurrent_Control;
        delete _stat_REG_ptr_list_Of_ptr_Algorithms_Subset;
    }

    // dynamic.
    void OpenAvrilConcurrency::Concurrent::app_do_Concurrent_Algorithm_For_PraiseEventId(OpenAvrilConcurrency::Framework_Server* obj, char playerId, uint8_t praiseEventId, OpenAvrilConcurrency::Object* ptr_Algorithm_Subset, OpenAvrilConcurrency::Object* ptr_Input_Subset, OpenAvrilConcurrency::Object* ptr_Output_Subset)
    {
        OpenAvrilConcurrency::Praise0_Algorithm* ptr_Algorithm_Subset_Praise0 = NULL;
        OpenAvrilConcurrency::Praise0_Input* ptr_Input_Subset_Praise0 = NULL;
        OpenAvrilConcurrency::Praise0_Output* ptr_Output_Subset_Praise0 = NULL;
        switch (praiseEventId)
        {
        case 0:
            ptr_Algorithm_Subset_Praise0 = reinterpret_cast <OpenAvrilConcurrency::Praise0_Algorithm*> (ptr_Algorithm_Subset);
            ptr_Input_Subset_Praise0 = reinterpret_cast <OpenAvrilConcurrency::Praise0_Input*> (ptr_Input_Subset);
            ptr_Output_Subset_Praise0 = reinterpret_cast <OpenAvrilConcurrency::Praise0_Output*> (ptr_Output_Subset);
            ptr_Algorithm_Subset_Praise0->Do_Praise(ptr_Input_Subset_Praise0, ptr_Output_Subset_Praise0);
            break;
        }
    }
        // create.
    void OpenAvrilConcurrency::Concurrent::app_FUNCT_initialise_ptr_Input_Control()
    {
        stat_CLASS_create_ptr_Concurrent_Control();
    }
    void OpenAvrilConcurrency::Concurrent::app_initialise_Item_On_REG_ptr_list_Of_ptr_Algorithms_Subset(uint8_t praiseID, OpenAvrilConcurrency::Object* newINITIALISED_Object)
    {
        stat_REG_set_Item_On_list_Of_ptr_Algorithms_Subset(praiseID, newINITIALISED_Object);
    }
        // get.
    OpenAvrilConcurrency::Concurrent_Control* OpenAvrilConcurrency::Concurrent::get_CLASS_ptr_Concurrent_Control()
    {
        return stat_CLASS_get_ptr_Concurrent_Control();
    }
    OpenAvrilConcurrency::Object* OpenAvrilConcurrency::Concurrent::get_REG_ptr_Item_On_ptr_list_Of_ptr_Algorithms_Subset(uint8_t praiseID)
    {
        auto temp = stat_REG_get_ptr_list_Of_ptr_Algorithms_Subset()->begin();
        std::advance(temp, praiseID);
        return *temp;
    }
    std::list<OpenAvrilConcurrency::Object*>* OpenAvrilConcurrency::Concurrent::get_REG_List_Of_ptr_Algorithms_Subset()
    {
        return _stat_REG_ptr_list_Of_ptr_Algorithms_Subset;
    }
        // set.
    // static.
    void OpenAvrilConcurrency::Concurrent::thread_Concurrency(OpenAvrilConcurrency::Framework_Server* obj, uint8_t concurrent_threadID)
    {
        bool* doneOnce = new bool(true);
        while (obj->dyn_CLASS_get_ptr_Server()->dyn_CLASS_get_ptr_Execute()->dyn_CLASS_get_ptr_Execute_Control()->app_REG_get_Item_On_List_Of_Flag_ThreadInitialised(concurrent_threadID) == true)
        {
            if (*doneOnce == true)
            {
                obj->dyn_CLASS_get_ptr_Server()->dyn_CLASS_get_ptr_Execute()->dyn_CLASS_get_ptr_Execute_Control()->dyn_REG_set_ConditionCode_Of_Thread(concurrent_threadID);
                *doneOnce = false;
            }
        }
        std::cout << "Thread Initialised: ID=" << (concurrent_threadID) << " => Thread_Concurrency()" << std::endl;//TestBench
        while (obj->dyn_CLASS_get_ptr_Server()->dyn_CLASS_get_ptr_Execute()->dyn_CLASS_get_ptr_Execute_Control()->app_REG_get_Flag_is_SystemInitialised() == true)
        {

        }
        std::cout << "Thread Starting " << (concurrent_threadID) << " => Thread_Concurrency()" << std::endl;//TestBench
        while (obj->dyn_CLASS_get_ptr_Server()->dyn_CLASS_get_ptr_Execute()->dyn_CLASS_get_ptr_Execute_Control()->app_REG_get_Item_On_List_Of_Flag_ThreadInitialised(concurrent_threadID) == false)
        {
            switch (OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtSERVER::CLIBLaunchEnableForConcurrentThreadsAtSERVER::get_Flag_ConcurrentCoreState(obj->dyn_CLASS_get_ptr_Server()->dyn_CLASS_get_ptr_Execute()->dyn_PGM_get_ConcurrentQue_Server(), &concurrent_threadID))
            {
            case false:

                break;

            case true:
                if (obj->dyn_CLASS_get_ptr_Server()->dyn_CLASS_get_ptr_Data()->dyn_CLASS_get_ptr_Data_Control()->dyn_REG_get_Item_flag_isLoaded_Stack_InputAction() == true)
                {
                    OpenAvrilCLIBWriteEnableForThreadsAtSERVERINPUTACTION::CLIBWriteEnableForThreadsAtSERVERINPUTACTION::write_Start(obj->dyn_CLASS_get_ptr_Server()->dyn_CLASS_get_ptr_Execute()->dyn_PGM_get_WriteEnable_ServerInputAction(), OpenAvrilConcurrency::Global::stat_CONVERT_uint8_t_to_ByteArray((uint8_t)(concurrent_threadID + (uint8_t)1)));
                    //todo
                    obj->dyn_CLASS_get_ptr_Server()->dyn_CLASS_get_ptr_Data()->dyn_REG_get_ptr_Item_Of_list_Of_ptr_array_Of_buffer_Output_ReferenceForThread(concurrent_threadID)->dyn_CLASS_get_ptr_Output_Control()->select_And_Set_Output_Subset(obj, obj->dyn_CLASS_get_ptr_Server()->dyn_CLASS_get_ptr_Data()->dyn_REG_get_ptr_Item_Of_list_Of_ptr_array_Of_buffer_Output_ReferenceForThread(concurrent_threadID)->dyn_REG_get_ptr_in_praiseEventId());
                    obj->dyn_CLASS_get_ptr_Server()->dyn_CLASS_get_ptr_Algorithms()->dyn_CLASS_get_Item_On_list_Of_ptr_Concurrent(concurrent_threadID)->get_CLASS_ptr_Concurrent_Control()->selectset_Algorithm_Subset(obj, obj->dyn_CLASS_get_ptr_Server()->dyn_CLASS_get_ptr_Data()->dyn_REG_get_ptr_Item_Of_list_Of_ptr_array_Of_buffer_Input_ReferenceForThread(concurrent_threadID)->dyn_REG_get_ptr_in_praiseEventId(), concurrent_threadID);
                    obj->dyn_CLASS_get_ptr_Server()->dyn_CLASS_get_ptr_Data()->dyn_CLASS_get_ptr_Data_Control()->app_FUNCT_pop_From_Stack_Of_Input(obj, concurrent_threadID);
                    OpenAvrilCLIBWriteEnableForThreadsAtSERVERINPUTACTION::CLIBWriteEnableForThreadsAtSERVERINPUTACTION::write_End(obj->dyn_CLASS_get_ptr_Server()->dyn_CLASS_get_ptr_Execute()->dyn_PGM_get_WriteEnable_ServerInputAction(), OpenAvrilConcurrency::Global::stat_CONVERT_uint8_t_to_ByteArray((uint8_t)(concurrent_threadID + (uint8_t)1)));
                    obj->dyn_CLASS_get_ptr_Server()->dyn_CLASS_get_ptr_Algorithms()->dyn_CLASS_get_Item_On_list_Of_ptr_Concurrent(concurrent_threadID)->app_do_Concurrent_Algorithm_For_PraiseEventId(
                        obj,
                        obj->dyn_CLASS_get_ptr_Server()->dyn_CLASS_get_ptr_Data()->dyn_REG_get_ptr_Item_Of_list_Of_ptr_array_Of_buffer_Input_ReferenceForThread(concurrent_threadID)->dyn_REG_get_ptr_in_playerId(),
                        obj->dyn_CLASS_get_ptr_Server()->dyn_CLASS_get_ptr_Data()->dyn_REG_get_ptr_Item_Of_list_Of_ptr_array_Of_buffer_Input_ReferenceForThread(concurrent_threadID)->dyn_REG_get_ptr_in_praiseEventId(),
                        obj->dyn_CLASS_get_ptr_Server()->dyn_CLASS_get_ptr_Algorithms()->dyn_CLASS_get_ptr_User_Algorithims()->dyn_CLASS_getr_Item_On_List_Of_ptr_PraiseAlgorithmSubsets(obj->dyn_CLASS_get_ptr_Server()->dyn_CLASS_get_ptr_Data()->dyn_REG_get_ptr_Item_Of_list_Of_ptr_array_Of_buffer_Input_ReferenceForThread(concurrent_threadID)->dyn_REG_get_ptr_in_praiseEventId()),
                        obj->dyn_CLASS_get_ptr_Server()->dyn_CLASS_get_ptr_Data()->dyn_REG_get_ptr_Item_Of_list_Of_ptr_array_Of_buffer_Input_ReferenceForThread(concurrent_threadID)->dyn_REG_get_ptr_Item_On_List_Of_PraiseInputSubset(obj->dyn_CLASS_get_ptr_Server()->dyn_CLASS_get_ptr_Data()->dyn_REG_get_ptr_Item_Of_list_Of_ptr_array_Of_buffer_Input_ReferenceForThread(concurrent_threadID)->dyn_REG_get_ptr_in_praiseEventId()),
                        obj->dyn_CLASS_get_ptr_Server()->dyn_CLASS_get_ptr_Data()->dyn_REG_get_ptr_Item_Of_list_Of_ptr_array_Of_buffer_Output_ReferenceForThread(concurrent_threadID)->dyn_REG_get_ptr_Item_On_List_Of_PraiseOutputSubset(obj->dyn_CLASS_get_ptr_Server()->dyn_CLASS_get_ptr_Data()->dyn_REG_get_ptr_Item_Of_list_Of_ptr_array_Of_buffer_Input_ReferenceForThread(concurrent_threadID)->dyn_REG_get_ptr_in_praiseEventId())
                    );
                    OpenAvrilCLIBWriteEnableForThreadsAtSERVERINPUTACTION::CLIBWriteEnableForThreadsAtSERVERINPUTACTION::write_Start(obj->dyn_CLASS_get_ptr_Server()->dyn_CLASS_get_ptr_Execute()->dyn_PGM_get_WriteEnable_ServerInputAction(), OpenAvrilConcurrency::Global::stat_CONVERT_uint8_t_to_ByteArray((uint8_t)(concurrent_threadID + (uint8_t)1)));
                    obj->dyn_CLASS_get_ptr_Server()->dyn_CLASS_get_ptr_Data()->dyn_CLASS_get_ptr_Data_Control()->app_FUNCT_push_To_STACK_Of_Output(obj, concurrent_threadID);
                    OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtSERVER::CLIBLaunchEnableForConcurrentThreadsAtSERVER::thread_End(obj->dyn_CLASS_get_ptr_Server()->dyn_CLASS_get_ptr_Execute()->dyn_PGM_get_ConcurrentQue_Server(), OpenAvrilConcurrency::Global::stat_CONVERT_uint8_t_to_ByteArray(concurrent_threadID));
                    if (obj->dyn_CLASS_get_ptr_Server()->dyn_CLASS_get_ptr_Data()->dyn_CLASS_get_ptr_Data_Control()->dyn_REG_get_Item_flag_isLoaded_Stack_OutputSend() == true)
                    {
                        if (OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtSERVER::CLIBLaunchEnableForConcurrentThreadsAtSERVER::get_Flag_ConcurrentCoreState(obj->dyn_CLASS_get_ptr_Server()->dyn_CLASS_get_ptr_Execute()->dyn_PGM_get_ConcurrentQue_Server(), OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtSERVER::CLIBLaunchEnableForConcurrentThreadsAtSERVER::get_coreId_To_launch(obj->dyn_CLASS_get_ptr_Server()->dyn_CLASS_get_ptr_Execute()->dyn_PGM_get_ConcurrentQue_Server())) == OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtSERVER::CLIBLaunchEnableForConcurrentThreadsAtSERVER::get_Flag_Idle(obj->dyn_CLASS_get_ptr_Server()->dyn_CLASS_get_ptr_Execute()->dyn_PGM_get_ConcurrentQue_Server()))
                        {
                            OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtSERVER::CLIBLaunchEnableForConcurrentThreadsAtSERVER::request_Wait_launch(obj->dyn_CLASS_get_ptr_Server()->dyn_CLASS_get_ptr_Execute()->dyn_PGM_get_ConcurrentQue_Server(), OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtSERVER::CLIBLaunchEnableForConcurrentThreadsAtSERVER::get_coreId_To_launch(obj->dyn_CLASS_get_ptr_Server()->dyn_CLASS_get_ptr_Execute()->dyn_PGM_get_ConcurrentQue_Server()));
                        }
                    }
                    OpenAvrilCLIBWriteEnableForThreadsAtSERVEROUTPUTRECIEVE::CLIBWriteEnableForThreadsAtSERVEROUTPUTRECIEVE::write_End(obj->dyn_CLASS_get_ptr_Server()->dyn_CLASS_get_ptr_Execute()->dyn_PGM_get_WriteEnable_ServerOutputRecieve(), OpenAvrilConcurrency::Global::stat_CONVERT_uint8_t_to_ByteArray((uint8_t)(concurrent_threadID + (uint8_t)1)));
                    //}
                }
                break;
            }
        }
    }
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
void OpenAvrilConcurrency::Concurrent::stat_CLASS_create_ptr_Concurrent_Control()
{
    _stat_CLASS_ptr_Concurrent_Control = new class OpenAvrilConcurrency::Concurrent_Control();
    while (stat_CLASS_get_ptr_Concurrent_Control() == NULL) {}
}
            // get.
OpenAvrilConcurrency::Concurrent_Control* OpenAvrilConcurrency::Concurrent::stat_CLASS_get_ptr_Concurrent_Control()
{
    return _stat_CLASS_ptr_Concurrent_Control;
}
            // set.
        // registers.
            // create.
void OpenAvrilConcurrency::Concurrent::stat_REG_create_list_Of_ptr_Algorithms_Subset()
{
    _stat_REG_ptr_list_Of_ptr_Algorithms_Subset = new std::list<OpenAvrilConcurrency::Object*>();
    while (stat_REG_get_ptr_list_Of_ptr_Algorithms_Subset() == NULL) {}
    stat_REG_get_ptr_list_Of_ptr_Algorithms_Subset()->resize(1);

}
            // get.
std::list<class OpenAvrilConcurrency::Object*>* OpenAvrilConcurrency::Concurrent::stat_REG_get_ptr_list_Of_ptr_Algorithms_Subset()
{
    return _stat_REG_ptr_list_Of_ptr_Algorithms_Subset;
}
            // set.
void OpenAvrilConcurrency::Concurrent::stat_REG_set_Item_On_list_Of_ptr_Algorithms_Subset(uint8_t praiseID, Object* newDEFAULT_Object)
{
    auto temp = stat_REG_get_ptr_list_Of_ptr_Algorithms_Subset()->begin();
    std::advance(temp, praiseID);
    *temp = newDEFAULT_Object;
}
