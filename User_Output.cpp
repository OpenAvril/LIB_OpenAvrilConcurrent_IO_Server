#include "pch.h"

// pointers.
	// classes.
OpenAvrilConcurrency::Praise0_Output* OpenAvrilConcurrency::User_Output::_stat_CLASS_ptr_Praise0_Output = NULL;
std::list<OpenAvrilConcurrency::Object*>* OpenAvrilConcurrency::User_Output::_REG_ptr_List_Of_PraiseOutputSubset = NULL;
// registers.

// public.
	// constructor.
OpenAvrilConcurrency::User_Output::User_Output()
{
	std::cout << "entered CONSTRUCTOR of User_Output()." << std::endl;
	stat_CLASS_create_ptr_Praise0_Output();
	stat_REG_create_ptr_List_Of_PraiseOutputSubset();
	std::cout << "exiting CONSTRUCTOR of User_Output()." << std::endl;
}

// destructor.
OpenAvrilConcurrency::User_Output::~User_Output()
{
	delete _stat_CLASS_ptr_Praise0_Output;
	delete _REG_ptr_List_Of_PraiseOutputSubset;
}

// dynamic.
	// create.
	// get.
OpenAvrilConcurrency::Object* OpenAvrilConcurrency::User_Output::dyn_CLASS_getr_Item_On_List_Of_ptr_PraiseOutputSubsets(uint8_t praiseID)
{
	auto temp = stat_REG_get_ptr_List_Of_PraiseOutputSubset()->begin();
std:advance(temp, praiseID);
	return *temp;
}
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
void OpenAvrilConcurrency::User_Output::stat_CLASS_create_ptr_Praise0_Output()
{
	_stat_CLASS_ptr_Praise0_Output = new class OpenAvrilConcurrency::Praise0_Output();
	while (stat_CLASS_get_ptr_Praise0_Output() == NULL) {}
}
// get.
OpenAvrilConcurrency::Praise0_Output* OpenAvrilConcurrency::User_Output::stat_CLASS_get_ptr_Praise0_Output()
{
	return _stat_CLASS_ptr_Praise0_Output;
}
// set.
// registers.
	// create.
void OpenAvrilConcurrency::User_Output::stat_REG_create_ptr_List_Of_PraiseOutputSubset()
{
	_REG_ptr_List_Of_PraiseOutputSubset = new std::list<OpenAvrilConcurrency::Object*>();
	while (stat_REG_get_ptr_List_Of_PraiseOutputSubset() == NULL) {}
	stat_REG_get_ptr_List_Of_PraiseOutputSubset()->resize(1);
	stat_REG_set_Item_On_list_Of_ptr_PraiseOutputSubset(0, reinterpret_cast<class OpenAvrilConcurrency::Object*>(stat_CLASS_get_ptr_Praise0_Output()));
	//todo: user praise.
}
// get.
std::list<OpenAvrilConcurrency::Object*>* OpenAvrilConcurrency::User_Output::stat_REG_get_ptr_List_Of_PraiseOutputSubset()
{
	return _REG_ptr_List_Of_PraiseOutputSubset;
}
// set.
void OpenAvrilConcurrency::User_Output::stat_REG_set_Item_On_list_Of_ptr_PraiseOutputSubset(uint8_t praiseID, OpenAvrilConcurrency::Object* objObject)
{
	auto temp = stat_REG_get_ptr_List_Of_PraiseOutputSubset()->begin();
	std::advance(temp, praiseID);
	*temp = objObject;
}