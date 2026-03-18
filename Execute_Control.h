#pragma once
namespace OpenAvrilConcurrency
{
    class Execute_Control
    {
    public:
        Execute_Control();
        virtual ~Execute_Control();
        bool app_REG_get_Flag_is_SystemInitialised();
        bool app_REG_get_Item_On_List_Of_Flag_ThreadInitialised(uint8_t threadID);
        void dyn_REG_set_ConditionCode_Of_Thread(uint8_t threadID);
        static bool* _stat_REG_ptr_Flag_isSystemInitialised;
        static std::array<bool, 4>* _stat_REG_ptr_Flag_array_ThreadInitialised;//NUMBER OF THREADS
        static void stat_REG_create_Flag_is_SystemInitialised(bool newDEFAULT_Bool);
        static void stat_REG_create_Array_Of_Flag_ThreadInitialised(bool newDEFAULT_Bool);
        static bool* stat_REG_get_ptr_Flag_is_SystemInitialised();
        static std::array<bool, 4>* stat_get_ptr_list_Of_flag_ThreadInitialised();
        static void stat_REG_set_Flag_is_SystemInitialised(bool newFlag);
        static void stat_REG_set_Item_On_List_Of_Flag_ThreadInitialised(uint8_t threadID, bool newFlag);
    };
}