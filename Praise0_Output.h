#pragma once
namespace OpenAvrilConcurrency
{
	class Praise0_Output
	{
	public:
		Praise0_Output();
		virtual ~Praise0_Output();
		double dyn_REG_get_output_Value();
		void dyn_REG_set_output_Value(double newValue);
	private:
		static double* _REG_ptr_output_Value;
		static void stat_REG_create_ptr_output_Value();
		static double* stat_REG_get_ptr_output_Value();
		static void stat_REG_set_Item_output_Value(double newValue);
	};
}