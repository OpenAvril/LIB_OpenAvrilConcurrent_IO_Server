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
		void set_Item_input_Value_A(double* newValue);
		void set_Item_input_Value_B(double* newValue);
	// static.
		// get.
		// set.

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
			// create.
			// get.
			// set.
// private.
	// dynamic.
		// get.
		// set.
	// static.
		static void stat_create_ptr_input_Value_A(double* newDEFAULT_Double);
		static void stat_create_ptr_input_Value_B(double* newDEFAULT_Double);
		// get.
		static double stat_get_Item_input_Value_A();
		static double stat_get_Item_input_Value_B();
		// set.
		static void stat_set_Item_input_Value_A(double* newValue);
		static void stat_set_Item_input_Value_B(double* newValue);
	// pointers.
		// registers.
		static double* _ptr_input_Value_A;
		static double* _ptr_input_Value_B;
	};
}