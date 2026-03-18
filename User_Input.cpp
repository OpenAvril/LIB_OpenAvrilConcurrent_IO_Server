#include "pch.h"

// pointers.
	// classes.
OpenAvrilConcurrency::Praise0_Input* OpenAvrilConcurrency::User_Input::_stat_CLASS_ptr_Praise0_Input = NULL;
std::list<OpenAvrilConcurrency::Object*>* OpenAvrilConcurrency::User_Input::_REG_ptr_List_Of_PraiseInputSubset = NULL;
// registers.

// public.
	// constructor.
OpenAvrilConcurrency::User_Input::User_Input()
{
	std::cout << "entered CONSTRUCTOR of User_Input()." << std::endl;
	stat_CLASS_create_ptr_Praise0_Input();
	stat_REG_create_ptr_List_Of_PraiseInputSubset();
	std::cout << "exiting CONSTRUCTOR of User_Input()." << std::endl;
}

// destructor.
OpenAvrilConcurrency::User_Input::~User_Input()
{
	delete _stat_CLASS_ptr_Praise0_Input;
	delete _REG_ptr_List_Of_PraiseInputSubset;
}

// dynamic.
	// create.
	// get.
OpenAvrilConcurrency::Object* OpenAvrilConcurrency::User_Input::dyn_CLASS_getr_Item_On_List_Of_ptr_PraiseInputSubsets(uint8_t praiseID)
{
	auto temp = stat_REG_get_ptr_List_Of_PraiseInputSubset()->begin();
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
void OpenAvrilConcurrency::User_Input::stat_CLASS_create_ptr_Praise0_Input()
{
	_stat_CLASS_ptr_Praise0_Input = new class OpenAvrilConcurrency::Praise0_Input();
	while (stat_CLASS_get_ptr_Praise0_Input() == NULL) {}
}
// get.
OpenAvrilConcurrency::Praise0_Input* OpenAvrilConcurrency::User_Input::stat_CLASS_get_ptr_Praise0_Input()
{
	return _stat_CLASS_ptr_Praise0_Input;
}
// set.
// registers.
	// create.
void OpenAvrilConcurrency::User_Input::stat_REG_create_ptr_List_Of_PraiseInputSubset()
{
	_REG_ptr_List_Of_PraiseInputSubset = new std::list<OpenAvrilConcurrency::Object*>();
	while (stat_REG_get_ptr_List_Of_PraiseInputSubset() == NULL) {}
	stat_REG_get_ptr_List_Of_PraiseInputSubset()->resize(1);
	stat_REG_set_Item_On_list_Of_ptr_PraiseInputSubset(0, reinterpret_cast<class OpenAvrilConcurrency::Object*>(stat_CLASS_get_ptr_Praise0_Input()));
	//todo: user praise.
}
// get.
std::list<OpenAvrilConcurrency::Object*>* OpenAvrilConcurrency::User_Input::stat_REG_get_ptr_List_Of_PraiseInputSubset()
{
	return _REG_ptr_List_Of_PraiseInputSubset;
}
// set.
void OpenAvrilConcurrency::User_Input::stat_REG_set_Item_On_list_Of_ptr_PraiseInputSubset(uint8_t praiseID, OpenAvrilConcurrency::Object* objObject)
{
	auto temp = stat_REG_get_ptr_List_Of_PraiseInputSubset()->begin();
	std::advance(temp, praiseID);
	*temp = objObject;
}