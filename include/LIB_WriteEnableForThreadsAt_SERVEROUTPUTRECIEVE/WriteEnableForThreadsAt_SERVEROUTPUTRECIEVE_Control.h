#pragma once
namespace OpenAvrilCLIBWriteEnableForThreadsAtSERVEROUTPUTRECIEVE
{
    class WriteEnableForThreadsAt_SERVEROUTPUTRECIEVE_Control
    {
    public:
        WriteEnableForThreadsAt_SERVEROUTPUTRECIEVE_Control();
        ~WriteEnableForThreadsAt_SERVEROUTPUTRECIEVE_Control();
        void app_writeEnable_Activate(class WriteEnableForThreadsAt_SERVEROUTPUTRECIEVE_Framework* obj, uint8_t coreId);
        void app_writeEnable_SortQue(class WriteEnableForThreadsAt_SERVEROUTPUTRECIEVE_Framework* obj);
        void app_writeEnable_Request(class WriteEnableForThreadsAt_SERVEROUTPUTRECIEVE_Framework* obj, uint8_t coreId);
        void app_writeQue_Update(class WriteEnableForThreadsAt_SERVEROUTPUTRECIEVE_Framework* obj);
        void app_REG_initialise_flag_praisingWrite(bool* newDEAFULT_bool);
        void app_REG_initialise_Item_On_list_Of_3STATE_flag_WriteSTATE(uint8_t concurrentThreadID, std::array<bool, 2>* newINITIALISED_boolList);
        void app_REG_initialise_Item_On_list_Of_WriteACTIVE_Count_For_ThreadId(uint8_t concurrentThreadID, uint32_t* newINITIALISED_uint32_t);
        void app_REG_initialise_Item_On_list_Of_WriteIDLE_Count_For_ThreadId(uint8_t concurrentThreadID, uint32_t* newINITIALISED_uint32_t);
        void app_REG_initialise_Item_On_list_Of_WriteWAIT_Count_For_ThreadId(uint8_t concurrentThreadID, uint32_t* newINITIALISED_uint32_t);
        void app_REG_initialise_new_writeCycle_Try_ThreadId_Index(uint8_t* newINITIALISED_uint8_t);
        void app_REG_initialise_Item_On_QUE_List_Of_ThreadToWrite(uint8_t slotID, uint8_t* newINITIALISED_uint8_t);
        void app_REG_initialise_writeCycle_Try_ThreadId_Index(uint8_t* newINITIALISED_uint8_t);
        bool dyn_REG_get_ptr_flag_praisingWrite();
        std::array<bool, 2> dyn_REG_get_ptr_list_Of_2ibt_flag_WriteState(uint8_t concurrentThreadID);
        uint32_t dyn_REG_get_ptr_list_Of_WriteActive_Count_For_ThreadId(uint8_t concurrentThreadID);
        uint32_t dyn_REG_get_ptr_list_Of_WriteIdle_Count_For_ThreadId(uint8_t concurrentThreadID);
        uint32_t dyn_REG_get_ptr_list_Of_WriteWait_Count_For_ThreadId(uint8_t concurrentThreadID);
        uint8_t dyn_REG_get_ptr_new_writeCycle_Try_ThreadId_Index();
        uint8_t dyn_REG_get_ptr_QUE_List_Of_ThreadToWrite(uint8_t slotID);
        uint8_t dyn_REG_get_ptr_writeCycle_Try_ThreadId_Index();
        void dyn_REG_set_flag_praisingWrite(bool newBoolValue);
        void dyn_REG_set_Item_On_list_Of_2ibt_flag_WriteState(uint8_t concurrentThreadID, std::array<bool, 2> new2bitState);
        void dyn_REG_set_Item_On_list_Of_WriteActive_Count_For_ThreadId(uint8_t concurrentThreadID, uint32_t newCount);
        void dyn_REG_set_Item_On_list_Of_WriteIdle_Count_For_ThreadId(uint8_t concurrentThreadID, uint32_t newCount);
        void dyn_REG_set_Item_On_list_Of_WriteWait_Count_For_ThreadId(uint8_t concurrentThreadID, uint32_t newCount);
        void dyn_REG_set_new_writeCycle_Try_ThreadId_Index(uint8_t newID);
        void dyn_REG_set_Item_On_QUE_List_Of_ThreadToWrite(uint8_t slotID, uint8_t newID);
        void dyn_REG_set_writeCycle_Try_ThreadId_Index(uint8_t newID);
        void dynamicStagger(class WriteEnableForThreadsAt_SERVEROUTPUTRECIEVE_Framework* obj, uint8_t coreId);
        void writeEnable_ShiftQueValues(class WriteEnableForThreadsAt_SERVEROUTPUTRECIEVE_Framework* obj, uint8_t coreId_A, uint8_t coreId_B);
        static bool* _stat_REG_ptr_flag_praisingWrite;
        static std::list<std::array<bool, 2>>* _stat_REG_LIST_Of_3STATE_flag_WriteState;
        static std::list<uint32_t>* _stat_REG_LIST_Of_WriteACTIVE_Count_For_ThreadId;
        static std::list<uint32_t>* _stat_REG_LIST_Of_WriteIDLE_Count_For_ThreadId;
        static std::list<uint32_t>* _stat_REG_LIST_Of_WriteWAIT_Count_For_ThreadId;
        static uint8_t* _stat_REG_new_writeCycle_Try_ThreadId_Index;
        static std::list<uint8_t>* _stat_REG_QUE_Of_ThreadID_To_WRITE;
        static uint8_t* _stat_REG_ptr_writeCycle_Try_ThreadId_Index;
        static void state_REG_create_flag_praisingWrite(bool* newDEFAULT_bool);
        static void state_REG_create_list_Of_2ibt_flag_WriteState(std::array<bool, 2>* newDEFAULT_boolList);
        static void state_REG_create_list_Of_WriteActive_Count_For_ThreadId(uint32_t* newDEFAULT_uint32_t);
        static void state_REG_create_list_Of_WriteIdle_Count_For_ThreadId(uint32_t* newDEFAULT_uint32_t);
        static void state_REG_create_list_Of_WriteWait_Count_For_ThreadId(uint32_t* newDEFAULT_uint32_t);
        static void state_REG_create_new_writeCycle_Try_ThreadId_Index(uint8_t* newDEFAULT_uint8_t);
        static void state_REG_create_QUE_List_Of_ThreadToWrite(uint8_t* newDEFAULT_uint8_t);
        static void state_REG_create_writeCycle_Try_ThreadId_Index(uint8_t* newDEFAULT_uint8_t);
        static bool* stat_REG_get_ptr_flag_praisingWrite();
        static std::list<std::array<bool, 2>>* stat_REG_get_ptr_list_Of_2ibt_flag_WriteState();
        static std::list<uint32_t>* stat_REG_get_ptr_list_Of_WriteActive_Count_For_ThreadId();
        static std::list<uint32_t>* stat_REG_get_ptr_list_Of_WriteIdle_Count_For_ThreadId();
        static std::list<uint32_t>* stat_REG_get_ptr_list_Of_WriteWait_Count_For_ThreadId();
        static uint8_t* stat_REG_get_ptr_new_writeCycle_Try_ThreadId_Index();
        static std::list<uint8_t>* stat_REG_get_ptr_QUE_List_Of_ThreadToWrite();
        static uint8_t* stat_REG_get_ptr_writeCycle_Try_ThreadId_Index();
        static void stat_REG_dyn_REG_set_flag_praisingWrite(bool newFlag);
        static void stat_REG_set_Item_On_Of_3STATE_flag_WriteState(uint8_t concurrentThreadID, std::array<bool, 2> new2bitState);
        static void stat_REG_set_Item_On_list_Of_WriteACTIVE_Count_For_ThreadId(uint8_t concurrentThreadID, uint32_t newCount);
        static void stat_set_Item_On_list_Of_WriteIdle_Count_For_ThreadId(uint8_t concurrentThreadID, uint32_t newCount);
        static void stat_REG_set_Item_On_list_Of_WriteWait_Count_For_ThreadId(uint8_t concurrentThreadID, uint32_t newCount);
        static void stat_REG_set_new_writeCycle_Try_ThreadId_Index(uint8_t newValue);
        static void stat_REG_set_Item_On_QUE_List_Of_ThreadToWrite(uint8_t slotID, uint8_t concurrentThreadID);
        static void stat_REG_set_writeCycle_Try_ThreadId_Index(uint8_t newValue);
    };
}