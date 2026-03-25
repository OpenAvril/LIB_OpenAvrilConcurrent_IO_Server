#pragma once
namespace OpenAvrilConcurrency
{
    class Input_Control
    {
	public:
		Input_Control();
		virtual ~Input_Control();
        void app_select_And_Set_Input_Subset(class Framework_Server* obj, uint8_t ptr_praiseEventId);
        void dyn_REG_boot1_DEFINE_Input_Control(class Framework_Server* obj);
        void dyn_REG_boot2_SUBSTANTIATE_Input_Control(class Framework_Server* obj);
        void dyn_REG_boot3_INITIALISE_Input_Control(class Framework_Server* obj);
        void dyn_REG_boot4_INSTANTIATE_Input_Control(class Framework_Server* obj);
        static void stat_CLASS_boot0_DECLAIRE_Input_Control();
        static void stat_CLASS_boot1_DEFINE_Input_Control();
        static void stat_CLASS_boot3_INITIALISE_Input_Control();
        static void stat_CLASS_boot4_INSTANTIATE_Input_Control();
        static void stat_REG_boot0_DECLAIRE_Input_Control();
	private:
    };
}