#include "pch.h"

// calsses.
    OpenAvril::Concurrent_Control* ptr_Concurrent_Control = NULL;

// registers.
    std::list<class Object*> _list_Of_ptr_Algorithms_Subset = { NULL };

// pointers.
    std::list<class Object*>* _ptr_list_Of_ptr_Algorithms_Subset = NULL;

// constructor.
    OpenAvril::Concurrent::Concurrent()
    {
        std::cout << "entered => OpenAvril::Concurrent::Concurrent()" << std::endl;
        create_list_Of_ptr_Algorithms_Subset();
    }

// destructor.
    OpenAvril::Concurrent::~Concurrent()
    {
        delete ptr_Concurrent_Control;
        delete _ptr_list_Of_ptr_Algorithms_Subset;
    }

// public.
    void OpenAvril::Concurrent::do_Concurrent_Algorithm_For_PraiseEventId(OpenAvril::Framework_Server* obj, char playerId, __int8 ptr_praiseEventId, Object* ptr_Algorithm_Subset, Object* ptr_Input_Subset, Object* ptr_Output_Subset)
    {
        OpenAvril::Praise0_Algorithm* ptr_Algorithm_Subset_Praise0 = NULL;
        OpenAvril::Praise0_Input* ptr_Input_Subset_Praise0 = NULL;
        OpenAvril::Praise0_Output* ptr_Output_Subset_Praise0 = NULL;
        switch (ptr_praiseEventId)
        {
        case 0:
            ptr_Algorithm_Subset_Praise0 = reinterpret_cast <OpenAvril::Praise0_Algorithm*> (ptr_Algorithm_Subset);
            ptr_Input_Subset_Praise0 = reinterpret_cast <OpenAvril::Praise0_Input*> (ptr_Input_Subset);
            ptr_Output_Subset_Praise0 = reinterpret_cast <OpenAvril::Praise0_Output*> (ptr_Output_Subset);
            ptr_Algorithm_Subset_Praise0->Do_Praise(ptr_Input_Subset_Praise0, ptr_Output_Subset_Praise0);
            break;
        }
    }
    void OpenAvril::Concurrent::initialise_Control()
    {
        create_ptr_Concurrent_Control();
    }
    void OpenAvril::Concurrent::thread_Concurrency(OpenAvril::Framework_Server* obj, __int8 concurrent_coreId)
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
                if (obj->get_ptr_Server()->get_ptr_Data()->get_ptr_Data_Control()->get_flag_isLoaded_Stack_InputAction() == true)
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

    // get.
    OpenAvril::Concurrent_Control* OpenAvril::Concurrent::get_ptr_Concurrent_Control()
    {
        return ptr_Concurrent_Control;
    }
    class Object* OpenAvril::Concurrent::get_ptr_Item_On_list_Of_ptr_Algorithms_Subset(__int8 praiseID)
    {
        auto temp = _ptr_list_Of_ptr_Algorithms_Subset->begin();
        std::advance(temp, praiseID);
        return *temp;
    }
    // set.

// private.
    void OpenAvril::Concurrent::create_ptr_Concurrent_Control()
    {
        set_ptr_Concurrent_Control(new class OpenAvril::Concurrent_Control());
        while (get_ptr_Concurrent_Control() == NULL) {}
    }
    void OpenAvril::Concurrent::create_list_Of_ptr_Algorithms_Subset()
    {
        std::list<OpenAvril::Object*> _list_Of_ptr_Algorithms_Subset = { NULL };
        std::list<OpenAvril::Object*>* _ptr_list_Of_ptr_Algorithms_Subset = new std::list<class OpenAvril::Object*>(1);//NUMBER OF PRAISES.
        while (get_ptr_list_Of_ptr_Algorithms_Subset() == NULL) {}
        for (__int8 praiseID = 0; praiseID < sizeof(_list_Of_ptr_Algorithms_Subset); praiseID++)
        {
            while (get_ptr_Item_On_list_Of_ptr_Algorithms_Subset(praiseID) == NULL) {}
            auto temp1 = _ptr_list_Of_ptr_Algorithms_Subset->begin();
            std::advance(temp1, praiseID);
            auto temp2 = _list_Of_ptr_Algorithms_Subset.begin();
            std::advance(temp2, praiseID);
            temp2 = temp1;
        }
        create_ptr_list_Of_Praise_In_Subsets();
        set_Algorithm_Subset(new class OpenAvril::Praise0_Input());
        
    }
    // get.
    std::list<class Object*>* OpenAvril::Concurrent::get_ptr_list_Of_ptr_Algorithms_Subset()
    {
        return _ptr_list_Of_ptr_Algorithms_Subset;
    }
    // set.
    void OpenAvril::Concurrent::set_ptr_Concurrent_Control(OpenAvril::Concurrent_Control* concurrent_control)
    {
        ptr_Concurrent_Control = concurrent_control;
    }
    void OpenAvril::Concurrent::set_Algorithm_Subset(Praise0_Algorithm* praise0_algorithm)
    {
        auto temp = _ptr_list_Of_ptr_Algorithms_Subset->begin();
        std::advance(temp, 0);
        *temp = reinterpret_cast<OpenAvril::Object*>(praise0_algorithm);
    }
