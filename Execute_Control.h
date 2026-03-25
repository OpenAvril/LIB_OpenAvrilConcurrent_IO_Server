#pragma once
namespace OpenAvrilConcurrency
{
    class Execute_Control
    {
    public:
        Execute_Control();
        virtual ~Execute_Control();
        void dyn_REG_boot1_DEFINE_Execute_Control(class Framework_Server* obj);
        void dyn_REG_boot2_SUBSTANTIATE_Execute_Control(class Framework_Server* obj);
        void dyn_REG_boot3_INITIALISE_Execute_Control(class Framework_Server* obj);
        void dyn_REG_boot4_INSTANTIATE_Execute_Control(class Framework_Server* obj);
        bool dyn_REG_get_Flag_is_SystemInitialised();
        bool dyn_REG_get_Item_On_List_Of_Flag_ThreadInitialised(uint8_t threadID);
        static void stat_CLASS_boot0_DECLAIRE_Execute_Control();
        static void stat_CLASS_boot1_DEFINE_Execute_Control();
        static void stat_CLASS_boot3_INITIALISE_Execute_Control();
        static void stat_CLASS_boot4_INSTANTIATE_Execute_Control();
        static void stat_REG_boot0_DECLAIRE_Execute_Control();
    private:
        static bool* _stat_REG_ptr_Flag_isSystemInitialised;
        static std::array<bool, 4>* _stat_REG_ptr_Flag_array_ThreadInitialised;//NUMBER OF THREADS
        static void stat_REG_boot1_DEFINE_Flag_isSystemInitialised();
        static void stat_REG_boot1_DEFINE_Flag_array_ThreadInitialised();
        static void stat_REG_boot2_SUBSTANTIATE_Flag_isSystemInitialised(class Framework_Server* obj);
        static void stat_REG_boot2_SUBSTANTIATE_Flag_array_ThreadInitialised(class Framework_Server* obj);
        static void stat_REG_boot3_INITIALISE_Flag_isSystemInitialised(class Framework_Server* obj);
        static void stat_REG_boot3_INITIALISE_Flag_array_ThreadInitialised(class Framework_Server* obj);
        static bool* stat_REG_get_ptr_Flag_is_SystemInitialised();
        static std::array<bool, 4>* stat_get_ptr_list_Of_flag_ThreadInitialised();
        static void stat_REG_set_Flag_is_SystemInitialised(bool newFlag);
    };
}