#pragma once

namespace OpenAvrilConcurrency
{
	class Praise0_Input
	{
	public:
// public.
	// constructor.

	// destructor.

	// dynamic.
		// create.
		// get.
		// set.
	// static.
		// create.
		// get.
		// set.

// private.
	// dynamic.
		// classes.
			// create.
			// get.
			// set.
		// registers.
			// create.
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

// constructor.
		Praise0_Input();

// destructor.
		virtual ~Praise0_Input();

// public.
	// dynamic.
		// get.
		float get_Item_input_Value_A();
		float get_Item_input_Value_B();
		// set.
		void dyn_REG_set_Item_input_Value_A(float newValue);
		void dyn_REG_set_Item_input_Value_B(float newValue);

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
		static float* _stat_REG_ptr_input_Value_A;
		static float* _stat_REG_ptr_input_Value_B;

			// create.
		static void stat_REG_create_ptr_input_Value_A(float* newDEFAULT_Float);
		static void stat_REG_create_ptr_input_Value_B(float* newDEFAULT_Float);
			// get.
		static float stat_REG_get_Item_input_Value_A();
		static float stat_REG_get_Item_input_Value_B();
			// set.
		static void stat_REG_dyn_REG_set_Item_input_Value_A(float newValue);
		static void stat_REG_dyn_REG_set_Item_input_Value_B(float newValue);
	};
}