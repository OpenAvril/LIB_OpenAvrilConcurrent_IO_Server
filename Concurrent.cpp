#include "pch.h"

// pointers.
    // classes.
    class OpenAvrilConcurrency::Concurrent_Control* OpenAvrilConcurrency::Concurrent::_stat_CLASS_ptr_Concurrent_Control = NULL;
    // registers.
    std::list<class OpenAvrilConcurrency::Object*>* OpenAvrilConcurrency::Concurrent::_stat_REG_ptr_list_Of_ptr_Algorithms_Subset = NULL;

// constructor.
    OpenAvrilConcurrency::Concurrent::Concurrent()
    {
        std::cout << "entered => OpenAvrilConcurrency::Concurrent::Concurrent()" << std::endl;
        stat_REG_create_ptr_list_Of_ptr_Algorithms_Subset();
    }

// destructor.
    OpenAvrilConcurrency::Concurrent::~Concurrent()
    {
        delete _stat_CLASS_ptr_Concurrent_Control;
        delete _stat_REG_ptr_list_Of_ptr_Algorithms_Subset;
    }

// public.
    // dynamic.
    void OpenAvrilConcurrency::Concurrent::do_Concurrent_Algorithm_For_PraiseEventId(OpenAvrilConcurrency::Framework_Server* obj, char playerId, uint8_t praiseEventId, OpenAvrilConcurrency::Object* ptr_Algorithm_Subset, OpenAvrilConcurrency::Object* ptr_Input_Subset, OpenAvrilConcurrency::Object* ptr_Output_Subset)
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
    void OpenAvrilConcurrency::Concurrent::initialise_CLASS_Control()
    {
        stat_CLASS_create_ptr_Concurrent_Control();
    }
    void OpenAvrilConcurrency::Concurrent::initialise_Item_On_REG_ptr_list_Of_ptr_Algorithms_Subset(uint8_t praiseID, OpenAvrilConcurrency::Object* newINITIALISED_Object)
    {
        stat_REG_set_ptr_Item_On_REG_ptr_list_Of_ptr_Algorithms_Subset(praiseID, newINITIALISED_Object);
    }
        // get.
    OpenAvrilConcurrency::Concurrent_Control* OpenAvrilConcurrency::Concurrent::get_CLASS_ptr_Concurrent_Control()
    {
        return stat_CLASS_get_ptr_Concurrent_Control();
    }
    OpenAvrilConcurrency::Object* OpenAvrilConcurrency::Concurrent::get_REG_ptr_Item_On_ptr_list_Of_ptr_Algorithms_Subset(uint8_t praiseID)
    {
        return stat_REG_get_ptr_Item_On_REG_ptr_list_Of_ptr_Algorithms_Subset(praiseID);
    }
    std::list<OpenAvrilConcurrency::Object*>* OpenAvrilConcurrency::Concurrent::get_REG_Item_ptr_list_Of_ptr_Algorithms_Subset()
    {
        return get_REG_Item_ptr_list_Of_ptr_Algorithms_Subset();
    }
        // set.
    // static.
    void OpenAvrilConcurrency::Concurrent::thread_Concurrency(OpenAvrilConcurrency::Framework_Server* obj, uint8_t concurrent_threadID)
    {
        bool doneOnce = true;
        while (obj->get_CLASS_ptr_Server()->get_CLASS_ptr_Execute()->get_CLASS_ptr_Execute_Control()->get_Item_On_list_Of_flag_ThreadInitialised(concurrent_threadID) == true)
        {
            if (doneOnce == true)
            {
                obj->get_CLASS_ptr_Server()->get_CLASS_ptr_Execute()->get_CLASS_ptr_Execute_Control()->set_ConditionCode_Of_Thread(concurrent_threadID);
                doneOnce = false;
            }

        }
        std::cout << "Thread Initialised: ID=" << (concurrent_threadID) << " => Thread_Concurrency()" << std::endl;//TestBench
        while (obj->get_CLASS_ptr_Server()->get_CLASS_ptr_Execute()->get_CLASS_ptr_Execute_Control()->get_Item_On_list_Of_flag_ThreadInitialised(concurrent_threadID) == true)
        {

        }
        std::cout << "Thread Starting " << (concurrent_threadID) << " => Thread_Concurrency()" << std::endl;//TestBench
        while (obj->get_CLASS_ptr_Server()->get_CLASS_ptr_Execute()->get_CLASS_ptr_Execute_Control()->get_Item_On_list_Of_flag_ThreadInitialised(concurrent_threadID) == false)
        {
            switch (OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtSERVER::CLIBLaunchEnableForConcurrentThreadsAtSERVER::get_Flag_ConcurrentCoreState(obj->get_CLASS_ptr_Server()->get_CLASS_ptr_Execute()->get_program_ConcurrentQue_Server(), concurrent_threadID))
            {
            case false:

                break;

            case true:
                if (obj->get_CLASS_ptr_Server()->get_CLASS_ptr_Data()->get_CLASS_ptr_Data_Control()->get_REG_Item_flag_isLoaded_Stack_InputAction() == true)
                {
                    OpenAvrilCLIDWriteEnableForThreadsAtSERVERINPUTACTION::CLIDWriteEnableForThreadsAtSERVERINPUTACTION::write_Start(obj->get_CLASS_ptr_Server()->get_CLASS_ptr_Execute()->get_program_WriteEnable_ServerInputAction(), (uint8_t)(concurrent_threadID + (uint8_t)1));
                    obj->get_CLASS_ptr_Server()->get_CLASS_ptr_Data()->get_REG_ptr_Item_Of_list_Of_ptr_array_Of_buffer_Output_ReferenceForThread(concurrent_threadID)->get_ptr_Output_Control()->selectset_Output_Subset(obj, obj->get_CLASS_ptr_Server()->get_CLASS_ptr_Data()->get_REG_ptr_Item_Of_list_Of_ptr_array_Of_buffer_Output_ReferenceForThread(concurrent_threadID)->get_out_praiseEventId(), concurrent_threadID);
                    obj->get_CLASS_ptr_Server()->get_CLASS_ptr_Algorithms()->get_CLASS_ptr_Item_On_list_Of_ptr_Concurrent(concurrent_threadID)->get_CLASS_ptr_Concurrent_Control()->selectset_Algorithm_Subset(obj, obj->get_CLASS_ptr_Server()->get_CLASS_ptr_Data()->get_REG_ptr_Item_Of_list_Of_ptr_array_Of_buffer_Input_ReferenceForThread(concurrent_threadID)->get_REG_in_praiseEventId(), concurrent_threadID);
                    obj->get_CLASS_ptr_Server()->get_CLASS_ptr_Data()->get_CLASS_ptr_Data_Control()->pop_From_Stack_Of_Input(obj->get_CLASS_ptr_Server()->get_CLASS_ptr_Data(), concurrent_threadID);
                    OpenAvrilCLIDWriteEnableForThreadsAtSERVERINPUTACTION::CLIDWriteEnableForThreadsAtSERVERINPUTACTION::write_End(obj->get_CLASS_ptr_Server()->get_CLASS_ptr_Execute()->get_program_WriteEnable_ServerInputAction(), (uint8_t)(concurrent_threadID + (uint8_t)1));
                    obj->get_CLASS_ptr_Server()->get_CLASS_ptr_Algorithms()->get_CLASS_ptr_Item_On_list_Of_ptr_Concurrent(concurrent_threadID)->do_Concurrent_Algorithm_For_PraiseEventId(
                        obj,
                        obj->get_CLASS_ptr_Server()->get_CLASS_ptr_Data()->get_REG_ptr_Item_Of_list_Of_ptr_array_Of_buffer_Input_ReferenceForThread(concurrent_threadID)->get_REG_in_playerId(),
                        obj->get_CLASS_ptr_Server()->get_CLASS_ptr_Data()->get_REG_ptr_Item_Of_list_Of_ptr_array_Of_buffer_Input_ReferenceForThread(concurrent_threadID)->get_REG_in_praiseEventId(),
                        obj->get_CLASS_ptr_Server()->get_CLASS_ptr_Algorithms()->get_CLASS_ptr_User_Algorithmorithms()->get_CLASS_ptr_Item_ptr_PraiseAlgorithmSubsets(obj->get_CLASS_ptr_Server()->get_CLASS_ptr_Data()->get_REG_ptr_Item_Of_list_Of_ptr_array_Of_buffer_Input_ReferenceForThread(concurrent_threadID)->get_REG_in_praiseEventId()),
                        obj->get_CLASS_ptr_Server()->get_CLASS_ptr_Data()->get_REG_ptr_Item_Of_list_Of_ptr_array_Of_buffer_Input_ReferenceForThread(concurrent_threadID)->get_REG_ptr_Item_PraiseInSubsets(),
                        obj->get_CLASS_ptr_Server()->get_CLASS_ptr_Data()->get_REG_ptr_Item_Of_list_Of_ptr_array_Of_buffer_Output_ReferenceForThread(concurrent_threadID)->get_ptr_PraiseOutSubsets()
                    );
                    OpenAvrilCLIDWriteEnableForThreadsAtSERVERINPUTACTION::CLIDWriteEnableForThreadsAtSERVERINPUTACTION::write_Start(obj->get_CLASS_ptr_Server()->get_CLASS_ptr_Execute()->get_program_WriteEnable_ServerInputAction(), (uint8_t)(concurrent_threadID + (uint8_t)1));
                    obj->get_CLASS_ptr_Server()->get_CLASS_ptr_Data()->get_CLASS_ptr_Data_Control()->push_To_Stack_Of_Output(obj->get_CLASS_ptr_Server()->get_CLASS_ptr_Data(), concurrent_threadID);
                    OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtSERVER::CLIBLaunchEnableForConcurrentThreadsAtSERVER::thread_End(obj->get_CLASS_ptr_Server()->get_CLASS_ptr_Execute()->get_program_ConcurrentQue_Server(), concurrent_threadID);
                    if (obj->get_CLASS_ptr_Server()->get_CLASS_ptr_Data()->get_CLASS_ptr_Data_Control()->get_REG_Item_flag_isLoaded_Stack_OutputSend() == true)
                    {
                        if (OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtSERVER::CLIBLaunchEnableForConcurrentThreadsAtSERVER::get_Flag_ConcurrentCoreState(obj->get_CLASS_ptr_Server()->get_CLASS_ptr_Execute()->get_program_ConcurrentQue_Server(), OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtSERVER::CLIBLaunchEnableForConcurrentThreadsAtSERVER::get_coreId_To_launch(obj->get_CLASS_ptr_Server()->get_CLASS_ptr_Execute()->get_program_ConcurrentQue_Server())) == OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtSERVER::CLIBLaunchEnableForConcurrentThreadsAtSERVER::get_Flag_Idle(obj->get_CLASS_ptr_Server()->get_CLASS_ptr_Execute()->get_program_ConcurrentQue_Server()))
                        {
                            OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtSERVER::CLIBLaunchEnableForConcurrentThreadsAtSERVER::request_Wait_launch(obj->get_CLASS_ptr_Server()->get_CLASS_ptr_Execute()->get_program_ConcurrentQue_Server(), OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtSERVER::CLIBLaunchEnableForConcurrentThreadsAtSERVER::get_coreId_To_launch(obj->get_CLASS_ptr_Server()->get_CLASS_ptr_Execute()->get_program_ConcurrentQue_Server()));
                        }
                    }
                    OpenAvrilCLIDWriteEnableForThreadsAtSERVEROUTPUTRECIEVE::CLIDWriteEnableForThreadsAtSERVEROUTPUTRECIEVE::write_End(obj->get_CLASS_ptr_Server()->get_CLASS_ptr_Execute()->get_program_WriteEnable_ServerOutputRecieve(), (uint8_t)(concurrent_threadID + (uint8_t)1));
                    //}
                }
                break;
            }
        }
    }

// private.
    // dynamic.
        // get.
        // set.
    // static.
        // classes.
            // create.
    void OpenAvrilConcurrency::Concurrent::stat_CLASS_create_ptr_Concurrent_Control()
    {
        class OpenAvrilConcurrency::Concurrent_Control* _stat_CLASS_ptr_Concurrent_Control = new class OpenAvrilConcurrency::Concurrent_Control();
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
    void OpenAvrilConcurrency::Concurrent::stat_REG_create_ptr_list_Of_ptr_Algorithms_Subset()
    {
        std::list<class OpenAvrilConcurrency::Object*>* _stat_REG_ptr_list_Of_ptr_Algorithms_Subset = new std::list<class OpenAvrilConcurrency::Object*>();
        while (stat_REG_get_ptr_list_Of_ptr_Algorithms_Subset() == NULL) { }
        stat_REG_get_ptr_list_Of_ptr_Algorithms_Subset()->resize(1);

    }
            // get.
    OpenAvrilConcurrency::Object* OpenAvrilConcurrency::Concurrent::stat_REG_get_ptr_Item_On_REG_ptr_list_Of_ptr_Algorithms_Subset(uint8_t praiseID)
    {
        auto temp = stat_REG_get_ptr_list_Of_ptr_Algorithms_Subset()->begin();
        std::advance(temp, praiseID);
        return *temp;
    }
    std::list<class OpenAvrilConcurrency::Object*>* OpenAvrilConcurrency::Concurrent::stat_REG_get_ptr_list_Of_ptr_Algorithms_Subset()
    {
        return _stat_REG_ptr_list_Of_ptr_Algorithms_Subset;
    }
            // set.

