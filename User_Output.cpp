#include "pch.h"

// pointers.
	// classes.
	static class OpenAvrilConcurrency::Praise0_Output* _stat_REG_ptr_Praise0_Output = NULL;
	// registers.
	static std::list<class OpenAvrilConcurrency::Object*>* _stat_REG_ptr_list_Of_ptr_PraiseOutputSubsets = { NULL };

// constructor.
	OpenAvrilConcurrency::User_Output::User_Output()
	{
		std::cout << "entered => User_Output()" << std::endl;
		stat_REG_create_ptr_Praise0_Output();
		std::cout << "exiting => User_Output()" << std::endl;
	}

// destructor.
	OpenAvrilConcurrency::User_Output::~User_Output()
	{
		delete _stat_REG_ptr_Praise0_Output;
	}

// public.
	// dynamic.
		// get.
	OpenAvrilConcurrency::Object* OpenAvrilConcurrency::User_Output::get_REG_ptr_Item_On_List_Of_stat_REG_ptr_list_Of_ptr_PraiseOutputSubsets(uint8_t praiseID)
	{
		return stat_REG_get_ptr_Item_For_Subset_In_list_Of_PraiseOutputSubsets(praiseID);
	}
		// set.

// private.
	// dynamic.
		// get.
		// set.
	// static.
		// classes.
			// create.
	void OpenAvrilConcurrency::User_Output::stat_REG_create_ptr_Praise0_Output()
	{
		class OpenAvrilConcurrency::Praise0_Output* _stat_REG_ptr_Praise0_Output = new class OpenAvrilConcurrency::Praise0_Output();
		while (stat_REG_get_ptr_Praise0_Output() == NULL) {}
	}
			// get.
	OpenAvrilConcurrency::Praise0_Output* OpenAvrilConcurrency::User_Output::stat_REG_get_ptr_Praise0_Output()
	{
		return _stat_REG_ptr_Praise0_Output;
	}
			// set.
		// registers.
			// create.
	void OpenAvrilConcurrency::User_Output::stat_REG_create_ptr_list_Of_ptr_PraiseOutputSubsets(OpenAvrilConcurrency::Object* newDEFAULT_Object)
	{
		class OpenAvrilConcurrency::Praise0_Output* _stat_REG_ptr_Praise0_Output = new class OpenAvrilConcurrency::Praise0_Output();
		while (stat_REG_get_ptr_list_Of_ptr_PraiseOutputSubsets() == NULL) {}
	}
			// get.
	class OpenAvrilConcurrency::Object* OpenAvrilConcurrency::User_Output::stat_REG_get_ptr_Item_For_Subset_In_list_Of_PraiseOutputSubsets(uint8_t praiseID)
	{
		auto temp = stat_REG_get_ptr_list_Of_ptr_PraiseOutputSubsets()->begin();
		std::advance(temp, praiseID);
		return *temp;
	}
	std::list<class OpenAvrilConcurrency::Object*>* OpenAvrilConcurrency::User_Output::stat_REG_get_ptr_list_Of_ptr_PraiseOutputSubsets()
	{
		return stat_REG_get_ptr_list_Of_ptr_PraiseOutputSubsets();
	}
	std::list<class OpenAvrilConcurrency::Object*>* stat_REG_get_ptr_list_Of_ptr_PraiseOutputSubsets()
	{
			return _stat_REG_ptr_list_Of_ptr_PraiseOutputSubsets;
	}
			// set.
	void OpenAvrilConcurrency::User_Output::stat_REG_set_ptr_Item_For_Subset_In_list_Of_PraiseOutputSubsets(uint8_t praiseID, Object* newClass)
	{
		auto temp = stat_REG_get_ptr_list_Of_ptr_PraiseOutputSubsets()->begin();
		std::advance(temp, praiseID);
		*temp = newClass;
	}		