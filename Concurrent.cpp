#include "pch.h"
    OpenAvrilConcurrency::Concurrent_Control* OpenAvrilConcurrency::Concurrent::_stat_CLASS_ptr_Concurrent_Control;
    std::list<OpenAvrilConcurrency::Object*>* OpenAvrilConcurrency::Concurrent::_stat_REG_ptr_list_Of_ptr_Algorithms_Subset;
// public.
/*
    OpenAvrilConcurrency::Concurrent::Concurrent()
    {
        std::cout << "entered STRUCT CONSTRUCTOR Concurrent()" << std::endl;
        stat_CLASS_boot0_DECLAIRE_Concurrent();
        stat_CLASS_boot1_DEFINE_Concurrent();
        stat_CLASS_boot3_INITIALISE_Concurrent();
        stat_REG_boot0_DECLAIRE_Concurrent();
        std::cout << "exiting STRUCT CONSTRUCTOR Concurrent()" << std::endl;
    }
    OpenAvrilConcurrency::Concurrent::~Concurrent()
    {
        delete _stat_CLASS_ptr_Concurrent_Control;
        delete _stat_REG_ptr_list_Of_ptr_Algorithms_Subset;
    }
*/
    void OpenAvrilConcurrency::Concurrent::app_do_Concurrent_Algorithm_For_PraiseEventId(OpenAvrilConcurrency::Framework_Server* obj, char playerId, uint8_t praiseEventId, OpenAvrilConcurrency::Object* ptr_Algorithm_Subset, OpenAvrilConcurrency::Object* ptr_Input_Subset, OpenAvrilConcurrency::Object* ptr_Output_Subset)
    {
        OpenAvrilConcurrency::Praise0_Algorithim* ptr_Algorithm_Subset_Praise0 = NULL;
        OpenAvrilConcurrency::Praise0_Input* ptr_Input_Subset_Praise0 = NULL;
        OpenAvrilConcurrency::Praise0_Output* ptr_Output_Subset_Praise0 = NULL;
        switch (praiseEventId)
        {
        case 0:
            ptr_Algorithm_Subset_Praise0 = reinterpret_cast <OpenAvrilConcurrency::Praise0_Algorithim*> (ptr_Algorithm_Subset);
            ptr_Input_Subset_Praise0 = reinterpret_cast <OpenAvrilConcurrency::Praise0_Input*> (ptr_Input_Subset);
            ptr_Output_Subset_Praise0 = reinterpret_cast <OpenAvrilConcurrency::Praise0_Output*> (ptr_Output_Subset);
            ptr_Algorithm_Subset_Praise0->app_Do_Praise(ptr_Input_Subset_Praise0, ptr_Output_Subset_Praise0);
            break;
        }
    }
    OpenAvrilConcurrency::Concurrent_Control* OpenAvrilConcurrency::Concurrent::dyn_CLASS_get_ptr_Concurrent_Control()
    {
        return stat_CLASS_get_ptr_Concurrent_Control();
    }
    void OpenAvrilConcurrency::Concurrent::dyn_REG_boot1_DEFINE_Concurrent(OpenAvrilConcurrency::Framework_Server* obj)
    {
        std::cout << "entered STRUCT dyn_REG_boot1_DEFINE_Concurrent()" << std::endl;
        stat_REG_boot1_DEFINE_list_Of_Algorithms_Subset();
        std::cout << "exiting STRUCT dyn_REG_boot1_DEFINE_Concurrent()" << std::endl;
    }
    void OpenAvrilConcurrency::Concurrent::dyn_REG_boot2_SUBSTANTIATE_Concurrent(OpenAvrilConcurrency::Framework_Server* obj)
    {
        std::cout << "entered STRUCT dyn_REG_boot2_SUBSTANTIATE_Concurrent()" << std::endl;
        stat_REG_boot2_SUBSTANTIATE_list_Of_Algorithms_Subset(obj);
        std::cout << "exiting STRUCT dyn_REG_boot2_SUBSTANTIATE_Concurrent()" << std::endl;
    }
    void OpenAvrilConcurrency::Concurrent::dyn_REG_boot3_INITIALISE_Concurrent(OpenAvrilConcurrency::Framework_Server* obj)
    {
        std::cout << "entered STRUCT dyn_REG_boot3_INITIALISE_dyn_REG_boot3_INITIALISE_ConcurrentConcurrent()" << std::endl;
        stat_REG_boot3_INITIALISE_list_Of_Algorithms_Subset(obj);
        std::cout << "exiting STRUCT dyn_REG_boot3_INITIALISE_Concurrent()" << std::endl;
    }
    void OpenAvrilConcurrency::Concurrent::dyn_REG_boot4_INSTANTIATE_Concurrent(OpenAvrilConcurrency::Framework_Server* obj)
    {
        std::cout << "entered STRUCT dyn_REG_boot4_INSTANTIATE_Concurrent()" << std::endl;

        std::cout << "exiting STRUCT dyn_REG_boot4_INSTANTIATE_Concurrent()" << std::endl;
    }
    OpenAvrilConcurrency::Object* OpenAvrilConcurrency::Concurrent::dyn_REG_get_ptr_Item_On_ptr_list_Of_ptr_Algorithms_Subset(uint8_t praiseID)
    {
        auto temp = stat_REG_get_ptr_list_Of_ptr_Algorithms_Subset()->begin();
        std::advance(temp, praiseID);
        return *temp;
    }
    void OpenAvrilConcurrency::Concurrent::stat_app_thread_Concurrency(OpenAvrilConcurrency::Framework_Server* obj, uint8_t concurrent_threadID)
    {
        bool* doneOnce = new bool(true);
        while (obj->dyn_CLASS_get_ptr_Server()->dyn_CLASS_get_ptr_Execute()->dyn_CLASS_get_ptr_Execute_Control()->dyn_REG_get_Item_On_List_Of_Flag_ThreadInitialised(concurrent_threadID) == true)
        {
            if (*doneOnce == true)
            {
                // set condition code (meta data).
                *doneOnce = false;
            }
        }
        //std::cout << "Thread Initialised: ID=" << (concurrent_threadID) << " => Thread_Concurrency()" << std::endl;//TestBench
        while (obj->dyn_CLASS_get_ptr_Server()->dyn_CLASS_get_ptr_Execute()->dyn_CLASS_get_ptr_Execute_Control()->dyn_REG_get_Flag_is_SystemInitialised() == true)
        {

        }
        //std::cout << "Thread Starting " << (concurrent_threadID) << " => Thread_Concurrency()" << std::endl;//TestBench
        while (obj->dyn_CLASS_get_ptr_Server()->dyn_CLASS_get_ptr_Execute()->dyn_CLASS_get_ptr_Execute_Control()->dyn_REG_get_Item_On_List_Of_Flag_ThreadInitialised(concurrent_threadID) == false)
        {
            switch (OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtSERVER::CLIBLaunchEnableForConcurrentThreadsAtSERVER::app_FUNCT_get_Flag_ConcurrentCoreState(obj->dyn_CLASS_get_ptr_Server()->dyn_CLASS_get_ptr_Execute()->dyn_PGM_get_ConcurrentQue_Server(), &concurrent_threadID))
            {
            case false:

                break;

            case true:
                if (obj->dyn_CLASS_get_ptr_Server()->dyn_CLASS_get_ptr_Data()->dyn_CLASS_get_ptr_Data_Control()->dyn_REG_get_Item_flag_isLoaded_Stack_InputAction() == true)
                {
                    OpenAvrilCLIBWriteEnableForThreadsAtSERVERINPUTACTION::CLIBWriteEnableForThreadsAtSERVERINPUTACTION::app_FUNCT_write_Start(obj->dyn_CLASS_get_ptr_Server()->dyn_CLASS_get_ptr_Execute()->dyn_PGM_get_WriteEnable_ServerInputAction(), OpenAvrilConcurrency::Global::stat_CONVERT_uint8_t_to_ByteArray((uint8_t)(concurrent_threadID + (uint8_t)1)));
                    //todo
                    obj->dyn_CLASS_get_ptr_Server()->dyn_CLASS_get_ptr_Data()->dyn_REG_get_ptr_Item_Of_list_Of_ptr_array_Of_buffer_Output_ReferenceForThread(concurrent_threadID)->dyn_CLASS_get_ptr_Output_Control()->app_select_And_Set_Output_Subset(obj, obj->dyn_CLASS_get_ptr_Server()->dyn_CLASS_get_ptr_Data()->dyn_REG_get_ptr_Item_Of_list_Of_ptr_array_Of_buffer_Output_ReferenceForThread(concurrent_threadID)->dyn_REG_get_ptr_Output_praiseEventId());
                    obj->dyn_CLASS_get_ptr_Server()->dyn_CLASS_get_ptr_Algorithms()->dyn_STRUCT_get_Item_On_list_Of_ptr_Concurrent(concurrent_threadID)->dyn_CLASS_get_ptr_Concurrent_Control()->app_selectset_Algorithm_Scubset(obj, obj->dyn_CLASS_get_ptr_Server()->dyn_CLASS_get_ptr_Data()->dyn_REG_get_ptr_Item_Of_list_Of_ptr_array_Of_buffer_Input_ReferenceForThread(concurrent_threadID)->dyn_REG_get_ptr_Input_praiseEventId(), concurrent_threadID);
                    obj->dyn_CLASS_get_ptr_Server()->dyn_CLASS_get_ptr_Data()->dyn_CLASS_get_ptr_Data_Control()->app_FUNCT_pop_From_Stack_Of_Input(obj, concurrent_threadID);
                    OpenAvrilCLIBWriteEnableForThreadsAtSERVERINPUTACTION::CLIBWriteEnableForThreadsAtSERVERINPUTACTION::app_FUNCT_write_End(obj->dyn_CLASS_get_ptr_Server()->dyn_CLASS_get_ptr_Execute()->dyn_PGM_get_WriteEnable_ServerInputAction(), OpenAvrilConcurrency::Global::stat_CONVERT_uint8_t_to_ByteArray((uint8_t)(concurrent_threadID + (uint8_t)1)));
                    obj->dyn_CLASS_get_ptr_Server()->dyn_CLASS_get_ptr_Algorithms()->dyn_STRUCT_get_Item_On_list_Of_ptr_Concurrent(concurrent_threadID)->app_do_Concurrent_Algorithm_For_PraiseEventId(
                        obj,
                        obj->dyn_CLASS_get_ptr_Server()->dyn_CLASS_get_ptr_Data()->dyn_REG_get_ptr_Item_Of_list_Of_ptr_array_Of_buffer_Input_ReferenceForThread(concurrent_threadID)->dyn_REG_get_ptr_Input_playerId(),
                        obj->dyn_CLASS_get_ptr_Server()->dyn_CLASS_get_ptr_Data()->dyn_REG_get_ptr_Item_Of_list_Of_ptr_array_Of_buffer_Input_ReferenceForThread(concurrent_threadID)->dyn_REG_get_ptr_Input_praiseEventId(),
                        obj->dyn_CLASS_get_ptr_Server()->dyn_CLASS_get_ptr_Algorithms()->dyn_CLASS_get_ptr_User_Algorithms()->dyn_CLASS_get_Item_On_List_Of_ptr_PraiseAlgorithmSubsets(obj->dyn_CLASS_get_ptr_Server()->dyn_CLASS_get_ptr_Data()->dyn_REG_get_ptr_Item_Of_list_Of_ptr_array_Of_buffer_Input_ReferenceForThread(concurrent_threadID)->dyn_REG_get_ptr_Input_praiseEventId()),
                        obj->dyn_CLASS_get_ptr_Server()->dyn_CLASS_get_ptr_Data()->dyn_REG_get_ptr_Item_Of_list_Of_ptr_array_Of_buffer_Input_ReferenceForThread(concurrent_threadID)->dyn_REG_get_Item_On_List_Of_PraiseInputSubset(),
                        obj->dyn_CLASS_get_ptr_Server()->dyn_CLASS_get_ptr_Data()->dyn_REG_get_ptr_Item_Of_list_Of_ptr_array_Of_buffer_Output_ReferenceForThread(concurrent_threadID)->dyn_REG_get_Item0_PraiseOutputSubset()
                    );
                    OpenAvrilCLIBWriteEnableForThreadsAtSERVERINPUTACTION::CLIBWriteEnableForThreadsAtSERVERINPUTACTION::app_FUNCT_write_Start(obj->dyn_CLASS_get_ptr_Server()->dyn_CLASS_get_ptr_Execute()->dyn_PGM_get_WriteEnable_ServerInputAction(), OpenAvrilConcurrency::Global::stat_CONVERT_uint8_t_to_ByteArray((uint8_t)(concurrent_threadID + (uint8_t)1)));
                    obj->dyn_CLASS_get_ptr_Server()->dyn_CLASS_get_ptr_Data()->dyn_CLASS_get_ptr_Data_Control()->app_FUNCT_push_To_STACK_Of_Output(obj, concurrent_threadID);
                    OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtSERVER::CLIBLaunchEnableForConcurrentThreadsAtSERVER::app_FUNCT_thread_End(obj->dyn_CLASS_get_ptr_Server()->dyn_CLASS_get_ptr_Execute()->dyn_PGM_get_ConcurrentQue_Server(), OpenAvrilConcurrency::Global::stat_CONVERT_uint8_t_to_ByteArray(concurrent_threadID));
                    if (obj->dyn_CLASS_get_ptr_Server()->dyn_CLASS_get_ptr_Data()->dyn_CLASS_get_ptr_Data_Control()->dyn_REG_get_Item_flag_isLoaded_Stack_OutputSend() == true)
                    {
                        if (OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtSERVER::CLIBLaunchEnableForConcurrentThreadsAtSERVER::app_FUNCT_get_Flag_ConcurrentCoreState(obj->dyn_CLASS_get_ptr_Server()->dyn_CLASS_get_ptr_Execute()->dyn_PGM_get_ConcurrentQue_Server(), OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtSERVER::CLIBLaunchEnableForConcurrentThreadsAtSERVER::app_FUNCT_get_coreId_To_launch(obj->dyn_CLASS_get_ptr_Server()->dyn_CLASS_get_ptr_Execute()->dyn_PGM_get_ConcurrentQue_Server())) == OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtSERVER::CLIBLaunchEnableForConcurrentThreadsAtSERVER::app_FUNCT_get_Flag_Idle(obj->dyn_CLASS_get_ptr_Server()->dyn_CLASS_get_ptr_Execute()->dyn_PGM_get_ConcurrentQue_Server()))
                        {
                            OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtSERVER::CLIBLaunchEnableForConcurrentThreadsAtSERVER::app_FUNCT_request_Wait_launch(obj->dyn_CLASS_get_ptr_Server()->dyn_CLASS_get_ptr_Execute()->dyn_PGM_get_ConcurrentQue_Server(), OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtSERVER::CLIBLaunchEnableForConcurrentThreadsAtSERVER::app_FUNCT_get_coreId_To_launch(obj->dyn_CLASS_get_ptr_Server()->dyn_CLASS_get_ptr_Execute()->dyn_PGM_get_ConcurrentQue_Server()));
                        }
                    }
                    OpenAvrilCLIBWriteEnableForThreadsAtSERVEROUTPUTRECIEVE::CLIBWriteEnableForThreadsAtSERVEROUTPUTRECIEVE::app_FUNCT_write_End(obj->dyn_CLASS_get_ptr_Server()->dyn_CLASS_get_ptr_Execute()->dyn_PGM_get_WriteEnable_ServerOutputRecieve(), OpenAvrilConcurrency::Global::stat_CONVERT_uint8_t_to_ByteArray((uint8_t)(concurrent_threadID + (uint8_t)1)));
                }
                break;
            }
        }
    }
    void OpenAvrilConcurrency::Concurrent::stat_CLASS_boot0_DECLAIRE_Concurrent()
    {
        std::cout << "entered STRUCT stat_CLASS_boot0_DECLAIRE_Concurrent()" << std::endl;

        std::cout << "exiting STRUCT stat_CLASS_boot0_DECLAIRE_Concurrent()" << std::endl;
    }
    void OpenAvrilConcurrency::Concurrent::stat_CLASS_boot1_DEFINE_Concurrent()
    {
        std::cout << "entered STRUCT stat_CLASS_boot1_DEFINE_Concurrent()" << std::endl;
        stat_CLASS_boot1_DEFINE_Concurrent_Control();
        std::cout << "exiting STRUCT stat_CLASS_boot1_DEFINE_Concurrent()" << std::endl;
    }
    void OpenAvrilConcurrency::Concurrent::stat_CLASS_boot3_INITIALISE_Concurrent()
    {
        std::cout << "entered STRUCT stat_CLASS_boot3_INITIALISE_Concurrent()" << std::endl;
        stat_CLASS_boot3_INITIALISE_Concurrent_Control();
        std::cout << "exiting STRUCT stat_CLASS_boot3_INITIALISE_Concurrent()" << std::endl;
    }
    void OpenAvrilConcurrency::Concurrent::stat_CLASS_boot4_INSTANTIATE_Concurrent()
    {
        std::cout << "entered STRUCT stat_CLASS_boot4_INSTANTIATE_Concurrent()" << std::endl;

        std::cout << "exiting STRUCT stat_CLASS_boot4_INSTANTIATE_Concurrent()" << std::endl;
    }
    void OpenAvrilConcurrency::Concurrent::stat_REG_boot0_DECLAIRE_Concurrent()
    {
        std::cout << "entered STRUCT stat_REG_boot0_DECLAIRE_Concurrent()" << std::endl;

        std::cout << "exiting STRUCT stat_REG_boot0_DECLAIRE_Concurrent()" << std::endl;
    }
// private.
    void OpenAvrilConcurrency::Concurrent::stat_CLASS_boot1_DEFINE_Concurrent_Control()
    {
        _stat_CLASS_ptr_Concurrent_Control = NULL;
    }
    void OpenAvrilConcurrency::Concurrent::stat_CLASS_boot3_INITIALISE_Concurrent_Control()
    {
        _stat_CLASS_ptr_Concurrent_Control = new class OpenAvrilConcurrency::Concurrent_Control();
        while (stat_CLASS_get_ptr_Concurrent_Control() == NULL) { }
    }
    OpenAvrilConcurrency::Concurrent_Control* OpenAvrilConcurrency::Concurrent::stat_CLASS_get_ptr_Concurrent_Control()
    {
        return _stat_CLASS_ptr_Concurrent_Control;
    }
    void OpenAvrilConcurrency::Concurrent::stat_REG_boot1_DEFINE_list_Of_Algorithms_Subset()
    {
        _stat_REG_ptr_list_Of_ptr_Algorithms_Subset = NULL;
    }
    void OpenAvrilConcurrency::Concurrent::stat_REG_boot2_SUBSTANTIATE_list_Of_Algorithms_Subset(OpenAvrilConcurrency::Framework_Server* obj)
    {
        _stat_REG_ptr_list_Of_ptr_Algorithms_Subset = new std::list<OpenAvrilConcurrency::Object*>();
        while (stat_REG_get_ptr_list_Of_ptr_Algorithms_Subset() == NULL) {}
        stat_REG_get_ptr_list_Of_ptr_Algorithms_Subset()->resize(obj->dyn_CLASS_get_ptr_Server()->dyn_CLASS_get_ptr_Global()->dyn_REG_get_Item_number_Of_Praise_Events());
    }
    void OpenAvrilConcurrency::Concurrent::stat_REG_boot3_INITIALISE_list_Of_Algorithms_Subset(OpenAvrilConcurrency::Framework_Server* obj)
    {
       
        //todo.        
        for (uint8_t praiseId = 0; praiseId < sizeof(*stat_REG_get_ptr_list_Of_ptr_Algorithms_Subset()); praiseId++)//NUMBER OF PRAISES.
        {
            switch (praiseId)
            {
                case 0:
                    stat_REG_set_PraiseOutputSubset_As_Praise0_Output(reinterpret_cast<OpenAvrilConcurrency::Praise0_Output*>(obj->dyn_CLASS_get_ptr_Server()->dyn_CLASS_get_ptr_Algorithms()->dyn_CLASS_get_ptr_User_Algorithms()->dyn_CLASS_get_Item_On_List_Of_ptr_PraiseAlgorithmSubsets(praiseId)));
                    break;
            }
            auto temp = stat_REG_get_ptr_list_Of_ptr_Algorithms_Subset()->begin();
            std::advance(temp, praiseId);
            *temp = reinterpret_cast<OpenAvrilConcurrency::Object*>(obj->dyn_CLASS_get_ptr_Server()->dyn_CLASS_get_ptr_Algorithms()->dyn_CLASS_get_ptr_User_Algorithms()->dyn_CLASS_get_Item_On_List_Of_ptr_PraiseAlgorithmSubsets(praiseId));
        }
    }
    std::list<OpenAvrilConcurrency::Object*>* OpenAvrilConcurrency::Concurrent::stat_REG_get_ptr_list_Of_ptr_Algorithms_Subset()
    {
        return _stat_REG_ptr_list_Of_ptr_Algorithms_Subset;
    }
    void OpenAvrilConcurrency::Concurrent::stat_REG_set_PraiseOutputSubset_As_Praise0_Output(OpenAvrilConcurrency::Praise0_Output* objPraise_Output)
    {
        auto temp = stat_REG_get_ptr_list_Of_ptr_Algorithms_Subset()->begin();
        std::advance(temp, uint8_t(0));
        *temp = reinterpret_cast<OpenAvrilConcurrency::Object*>(objPraise_Output);
    }