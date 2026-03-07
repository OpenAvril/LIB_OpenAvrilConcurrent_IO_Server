#pragma once


namespace OpenAvrilConcurrency
{
	class User_Algorithm
	{
	public:
		// constructor.
		User_Algorithm();

		// destructor.
		virtual ~User_Algorithm();

		// public.
			// dynamic.
				// get.
		class Object* get_REG_ptr_Item_On_List_Of_ptr_list_Of_ptr_PraiseAlgorithmSubsets(uint8_t praiseID);
		// set.

	private:
		// private.
			// dynamic.
				// get.
				// set.
			// static.
				// classes.
					// create.
		static void stat_REG_create_ptr_Praise0_Algorithm();
		// get.
		static class Praise0_Algorithm* stat_REG_get_ptr_Praise0_Algorithm();
		// set.
	// registers.
		static std::list<class Object*>* _stat_REG_ptr_list_Of_ptr_PraiseAlgorithmSubsets;
		// create.
		static void stat_REG_create_ptr_list_Of_ptr_PraiseAlgorithmSubsets(class Object* newDEFAULT_Object);
		// get.
		static class Object* stat_REG_get_ptr_Item_On_list_Of_ptr_PraiseAlgorithmSubsets(uint8_t praiseID);
		static std::list<class Object*>* stat_REG_get_ptr_list_Of_ptr_PraiseAlgorithmSubsets();
		// set.
		static void stat_REG_set_ptr_Item_For_Subset_In_list_Of_PraiseAlgorithmSubsets(uint8_t praiseID, class Object* newClass);
	};
}