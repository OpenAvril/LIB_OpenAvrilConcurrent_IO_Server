#include "pch.h"


// pointers.
	// classes.
static class OpenAvrilConcurrency::Praise0_Input* _ptr_Praise0_Input = NULL;
// registers.
static std::list<class Object*>* _ptr_list_Of_Praise_Input_Subsets = { NULL };

// constructor.
OpenAvrilConcurrency::User_Input::User_Input()
{
	std::cout << "entered => User_Input()" << std::endl;
	stat_create_ptr_Praise0_Input();
	std::cout << "exiting => User_Input()" << std::endl;
}

// destructor.
OpenAvrilConcurrency::User_Input::~User_Input()
{
	delete _ptr_Praise0_Input;
}

// public.
	// dynamic.
		// get.
Object* OpenAvrilConcurrency::User_Input::get_ptr_Item_For_Subset_In_list_Of_Praise_Input_Subsets(uint8_t praiseID)
{
	return stat_set_ptr_Item_For_Subset_In_list_Of_Praise_Input_Subsets(praiseID);
}
// set.
// static.
	// get.
	// set.

// private.
	// dynamic.
		// get.
		// set.
	// static.
void OpenAvrilConcurrency::User_Input::stat_create_ptr_Praise0_Input()
{
	static class OpenAvrilConcurrency::Praise0_Input* _ptr_Praise0_Input = new class OpenAvrilConcurrency::Praise0_Input();
	while (stat_get_ptr_Praise0_Input() == NULL) {}
}
void OpenAvrilConcurrency::User_Input::stat_create_ptr_list_Of_Praise_Input_Subsets(Object* newDEFAULT_Object)
{
	static std::list<class Object*>* _ptr_list_Of_Praise_Input_Subsets = new std::list<class Object*>();
	while (stat_get_ptr_Praise0_Input() == NULL) {}
	_ptr_list_Of_Praise_Input_Subsets->resize(1);//NUMBER OF PRAISES.
}
// get.
OpenAvrilConcurrency::Praise0_Input* OpenAvrilConcurrency::User_Input::stat_get_ptr_Praise0_Input()
{
	return _ptr_Praise0_Input;
}
Object* OpenAvrilConcurrency::User_Input::stat_set_ptr_Item_For_Subset_In_list_Of_Praise_Input_Subsets(uint8_t praiseID)
{
	auto temp = stat_get_ptr_list_Of_Praise_Input_Subsets()->begin();
	std::advance(temp, praiseID);
	return *temp;
}
std::list<class Object*>* OpenAvrilConcurrency::User_Input::stat_get_ptr_list_Of_Praise_Input_Subsets()
{
	return _ptr_list_Of_Praise_Input_Subsets;
}
// set.
void OpenAvrilConcurrency::User_Input::stat_set_ptr_Item_For_Subset_In_list_Of_Praise_Input_Subsets(uint8_t praiseID, Object* newPtr)
{
	auto temp = stat_get_ptr_list_Of_Praise_Input_Subsets()->begin();
	std::advance(temp, praiseID);
	*temp = newPtr;
}