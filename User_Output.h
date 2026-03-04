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
		class Object* get_REG_ptr_Item_On_List_Of_stat_REG_ptr_list_Of_ptr_PraiseOutputSubsets(uint8_t praiseID);
		// set.

	private:
// private.
	// dynamic.
		// get.
		// set.
	// static.
		// classes.
			// create.
		static void stat_REG_create_ptr_Praise0_Output();
			// get.
		static class Praise0_Output* stat_REG_get_ptr_Praise0_Output();
			// set.
		// registers.
		static std::list<class Object*>* _stat_REG_ptr_list_Of_ptr_PraiseOutputSubsets;
			// create.
		static void stat_REG_create_ptr_list_Of_ptr_PraiseOutputSubsets(class Object* newDEFAULT_Object);
			// get.
		static class Object* stat_REG_get_ptr_Item_For_Subset_In_list_Of_PraiseOutputSubsets(uint8_t praiseID);
		static std::list<class Object*>* stat_REG_get_ptr_list_Of_ptr_PraiseOutputSubsets();
			// set.
		static void stat_REG_set_ptr_Item_For_Subset_In_list_Of_PraiseOutputSubsets(uint8_t praiseID, class Object* newClass);
	};
}