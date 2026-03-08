#pragma once


namespace OpenAvrilConcurrency
{
	class User_Output
	{
	public:
// constructor.
		User_Output();

// destructor.
		virtual ~User_Output();

// public.
	// dynamic.
		// get.
		class Object* get_CLASS_ptr_Item_ptr_PraiseOutputSubsets(uint8_t praiseID);
		// set.

	private:
// private.
	// dynamic.
		// get.
		// set.
	// static.
		// classes.
		static class Praise0_Output* _stat_CLASS_ptr_Praise0_Output;
			// create.
		static void stat_CLASS_create_ptr_Praise0_Output();
			// get.
		static class Praise0_Output* stat_CLASS_get_ptr_Praise0_Output();
			// set.
		// CLASSisters.
			// create.
			// get.
			// set.
	};
}