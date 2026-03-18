#pragma once


namespace OpenAvrilConcurrency
{
	class User_Algorithm
	{
	public:
// public.
	// constructor.
		User_Algorithm();

	// destructor.
		virtual ~User_Algorithm();

	// dynamic.
		// create.
		// get.
		class Object* dyn_CLASS_getr_Item_On_List_Of_ptr_PraiseAlgorithmSubsets(uint8_t praiseID);
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
		static class Praise0_Algorithm* _stat_CLASS_ptr_Praise0_Algorithm;
			// create.
		static void stat_CLASS_create_ptr_Praise0_Algorithm();
			// get.
		static class Praise0_Algorithm* stat_CLASS_get_ptr_Praise0_Algorithm();
			// set.
		// registers.
		static std::list<class Object*>* _REG_ptr_List_Of_PraiseAlgorithmSubset;
			// create.
		static void stat_REG_create_ptr_List_Of_PraiseAlgorithmSubset();
			// get.
		static std::list<class Object*>* stat_REG_get_ptr_List_Of_PraiseAlgorithmSubset();
			// set.
		static void stat_REG_set_Item_On_list_Of_ptr_PraiseAlgorithmSubset(uint8_t praiseID, class Object* newClass);
	};
}