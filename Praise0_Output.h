#pragma once

namespace OpenAvrilConcurrency
{
	class Praise0_Output
	{
	public:
// constructor.
		Praise0_Output();

// destructor.
		virtual ~Praise0_Output();

// public.
	// dynamic.
		// get.
		double get_Item_output_Value();
		// set.
		void set_Item_output_Value(double* newValue);
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
	// static
		static void stat_create_ptr_output_Value();
		// get.
		static double* stat_get_ptr_output_Value();
		// set.
		static void stat_set_Item_output_Value(double newValue);
	// pointers.
		// classes.
		// registers.
		static double* _ptr_output_Value;
	};
}