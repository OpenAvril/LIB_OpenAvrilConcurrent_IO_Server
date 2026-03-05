#pragma once


namespace OpenAvrilConcurrency
{
	class User_Input
	{
	public:
		// constructor.
		User_Input();

		// destructor.
		virtual ~User_Input();

		// public.
			// dynamic.
				// get.
		class Object* get_REG_ptr_Item_On_List_Of_ptr_list_Of_ptr_PraiseInputSubsets(uint8_t praiseID);
		// set.

	private:
		// private.
			// dynamic.
				// get.
				// set.
			// static.
				// classes.
					// create.
		static void stat_REG_create_ptr_Praise0_Input();
		// get.
		static class Praise0_Input* stat_REG_get_ptr_Praise0_Input();
		// set.
	// registers.
		static std::list<class Object*>* _stat_REG_ptr_list_Of_ptr_PraiseInputSubsets;
		// create.
		static void stat_REG_create_ptr_list_Of_ptr_PraiseInputSubsets(class Object* newDEFAULT_Object);
		// get.
		static class Object* stat_REG_get_ptr_Item_For_Subset_In_list_Of_PraiseInputSubsets(uint8_t praiseID);
		static std::list<class Object*>* stat_REG_get_ptr_list_Of_ptr_PraiseInputSubsets();
		// set.
		static void stat_REG_set_ptr_Item_For_Subset_In_list_Of_PraiseInputSubsets(uint8_t praiseID, class Object* newClass);
	};
}