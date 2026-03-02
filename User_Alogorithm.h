#pragma once


namespace OpenAvrilConcurrency
{
	class User_Alogorithm
	{
	public:
	// constructor.
		User_Alogorithm();

	// destructor.
		virtual ~User_Alogorithm();

// public.
	// dynamic.
		// get.
		class Object* get_ptr_Item_For_Subset_In_list_Of_Praise_Alogorithm_Subsets(uint8_t praiseID);
		// set.
	// static.
		// get.
		// set.

	private:
// private.
	// dynamic.
		// get.
		// set.
	// static.
		static void stat_create_ptr_Algorithm();
		static void stat_create_ptr_list_Of_Praise_Alogorithm_Subsets(class Object* newDEFAULT_Object);
		// get.
		static class Algorithm* stat_get_ptr_Algorithm();
		static class Object* stat_set_ptr_Item_For_Subset_In_list_Of_Praise_Alogorithm_Subsets(uint8_t praiseID);
		static std::list<class Object*>* stat_get_ptr_list_Of_Praise_Alogorithm_Subsets();
		// set.
		static void stat_set_ptr_Item_For_Subset_In_list_Of_Praise_Alogorithm_Subsets(uint8_t praiseID, class Object* newPtr);
	// pointers.
		// registers.
		static std::list<class Object*>* _ptr_list_Of_Praise_Alogorithm_Subsets;
	};
}
