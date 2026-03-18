#pragma once


namespace OpenAvrilConcurrency
{
	class User_Input
	{
	public:
		// public.
			// constructor.
		User_Input();

		// destructor.
		virtual ~User_Input();

		// dynamic.
			// create.
			// get.
		class Object* dyn_CLASS_getr_Item_On_List_Of_ptr_PraiseInputSubsets(uint8_t praiseID);
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
		static class Praise0_Input* _stat_CLASS_ptr_Praise0_Input;
		// create.
		static void stat_CLASS_create_ptr_Praise0_Input();
		// get.
		static class Praise0_Input* stat_CLASS_get_ptr_Praise0_Input();
		// set.
	// registers.
		static std::list<class Object*>* _REG_ptr_List_Of_PraiseInputSubset;
		// create.
		static void stat_REG_create_ptr_List_Of_PraiseInputSubset();
		// get.
		static std::list<class Object*>* stat_REG_get_ptr_List_Of_PraiseInputSubset();
		// set.
		static void stat_REG_set_Item_On_list_Of_ptr_PraiseInputSubset(uint8_t praiseID, class Object* newClass);
	};
}