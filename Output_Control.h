#pragma once
namespace OpenAvrilConcurrency
{
    class Output_Control
    {
    public:
        Output_Control();
        virtual ~Output_Control();
        void app_select_And_Set_Output_Subset(class Framework_Server* obj, uint8_t ptr_praiseEventId);
        void dyn_REG_boot1_DEFINE_Output_Control(class Framework_Server* obj);
        void dyn_REG_boot2_SUBSTANTIATE_Output_Control(class Framework_Server* obj);
        void dyn_REG_boot3_INITIALISE_Output_Control(class Framework_Server* obj);
        void dyn_REG_boot4_INSTANTIATE_Output_Control(class Framework_Server* obj);
        static void stat_CLASS_boot0_DECLAIRE_Output_Control();
        static void stat_CLASS_boot1_DEFINE_Output_Control();
        static void stat_CLASS_boot3_INITIALISE_Output_Control();
        static void stat_CLASS_boot4_INSTANTIATE_Output_Control();
        static void stat_REG_boot0_DECLAIRE_Output_Control();
    private:
    };
}