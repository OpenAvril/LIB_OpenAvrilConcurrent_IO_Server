#pragma once
namespace OpenAvrilConcurrency
{
	class Praise0_Input
	{
	public:

		Praise0_Input();
		virtual ~Praise0_Input();
		float get_Item_input_Value_A();
		float get_Item_input_Value_B();
		void dyn_REG_set_Item_input_Value_A(float newValue);
		void dyn_REG_set_Item_input_Value_B(float newValue);
	private:
		static float* _stat_REG_ptr_input_Value_A;
		static float* _stat_REG_ptr_input_Value_B;
		static void stat_REG_create_ptr_input_Value_A(float* newDEFAULT_Float);
		static void stat_REG_create_ptr_input_Value_B(float* newDEFAULT_Float);
		static float* stat_REG_get_Item_input_Value_A();
		static float* stat_REG_get_Item_input_Value_B();
		static void stat_REG_dyn_REG_set_Item_input_Value_A(float newValue);
		static void stat_REG_dyn_REG_set_Item_input_Value_B(float newValue);
	};
}