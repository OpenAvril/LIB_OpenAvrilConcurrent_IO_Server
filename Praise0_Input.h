#pragma once
namespace OpenAvrilConcurrency
{
	class Praise0_Input
	{
	public:
		Praise0_Input();
		virtual ~Praise0_Input();
		void dyn_REG_boot1_DEFINE_Praise0_Input(class Framework_Server* obj);
		void dyn_REG_boot2_SUBSTANTIATE_Praise0_Input(class Framework_Server* obj);
		void dyn_REG_boot3_INITIALISE_Praise0_Input(class Framework_Server* obj);
		void dyn_REG_boot4_INSTANTIATE_Praise0_Input(class Framework_Server* obj);
		float dyn_REG_get_Item_input_Value_A();
		float dyn_REG_get_Item_input_Value_B();
		void dyn_REG_set_Item_input_Value_A(float newValue);
		void dyn_REG_set_Item_input_Value_B(float newValue);
		static void stat_CLASS_boot0_DECLAIRE_Praise0_Input();
		static void stat_CLASS_boot1_DEFINE_Praise0_Input();
		static void stat_CLASS_boot3_INITIALISE_Praise0_Input();
		static void stat_CLASS_boot4_INSTANTIATE_Praise0_Input();
		static void stat_REG_boot0_DECLAIRE_Praise0_Input();
	private:
		static float* _stat_REG_ptr_input_Value_A;
		static float* _stat_REG_ptr_input_Value_B;
		static void stat_REG_boot1_DEFINE_Input_Value_A();
		static void stat_REG_boot1_DEFINE_Input_Value_B();
		static void stat_REG_boot2_SUBSTANTIATE_Iinput_Value_A();
		static void stat_REG_boot2_SUBSTANTIATE_Input_Value_B();
		static void stat_REG_boot3_INITIALISE_Input_Value_A();
		static void stat_REG_boot3_INITIALISE_input_Value_B();
		static float* stat_REG_get_ptr_Input_Value_A();
		static float* stat_REG_get_ptr_Input_Value_B();
		static void stat_REG_dyn_REG_set_Item_input_Value_A(float newValue);
		static void stat_REG_dyn_REG_set_Item_input_Value_B(float newValue);
	};
}