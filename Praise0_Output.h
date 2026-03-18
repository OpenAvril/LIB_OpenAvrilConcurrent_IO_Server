#pragma once
namespace OpenAvrilConcurrency
{
	class Praise0_Output
	{
	public:
		Praise0_Output();
		virtual ~Praise0_Output();
		double dyn_REG_get_ptr_output_Value();
		void set_REG_ptr_output_Value(double newValue);
	private:
		static double* _REG_ptr_output_Value;
		static void stat_create_REG_ptr_output_Value();
		static double stat_dyn_REG_get_ptr_output_Value();
		static void stat_set_REG_ptr_output_Value(double newValue);
	};
}