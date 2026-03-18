#pragma once


namespace OpenAvrilConcurrency
{
	class User_Output
	{
	public:
		// public.
			// constructor.
		User_Output();

		// destructor.
		virtual ~User_Output();

		// dynamic.
			// create.
			// get.
		class Object* dyn_CLASS_getr_Item_On_List_Of_ptr_PraiseOutputSubsets(uint8_t praiseID);
		// set.
	// static.
		// create.
		// get.
		// set.
	private:
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
		static class Praise0_Output* _stat_CLASS_ptr_Praise0_Output;
		// create.
		static void stat_CLASS_create_ptr_Praise0_Output();
		// get.
		static class Praise0_Output* stat_CLASS_get_ptr_Praise0_Output();
		// set.
	// registers.
		static std::list<class Object*>* _REG_ptr_List_Of_PraiseOutputSubset;
		// create.
		static void stat_REG_create_ptr_List_Of_PraiseOutputSubset();
		// get.
		static std::list<class Object*>* stat_REG_get_ptr_List_Of_PraiseOutputSubset();
		// set.
		static void stat_REG_set_Item_On_list_Of_ptr_PraiseOutputSubset(uint8_t praiseID, class Object* newClass);
	};
}