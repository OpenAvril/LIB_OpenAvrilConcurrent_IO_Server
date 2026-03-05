#pragma once

namespace OpenAvrilConcurrency
{
	class Praise0_Input
	{
	public:
// constructor.
		Praise0_Input();

// destructor.
		virtual ~Praise0_Input();

// public.
	// dynamic.
		// get.
		double get_Item_input_Value_A();
		double get_Item_input_Value_B();
		// set.
		void set_Item_input_Value_A(double newValue);
		void set_Item_input_Value_B(double newValue);

	private:
// private.
	// dynamic.
		// get.
		// set.
	// static.
		// classes.
			// create.
			// get.
			// set.
		// registers.
		static double* _stat_REG_ptr_input_Value_A;
		static double* _stat_REG_ptr_input_Value_B;

			// create.
		static void stat_REG_create_ptr_input_Value_A(double* newDEFAULT_Double);
		static void stat_REG_create_ptr_input_Value_B(double* newDEFAULT_Double);
			// get.
		static double stat_REG_get_Item_input_Value_A();
		static double stat_REG_get_Item_input_Value_B();
			// set.
		static void stat_REG_set_Item_input_Value_A(double newValue);
		static void stat_REG_set_Item_input_Value_B(double newValue);
	};
}