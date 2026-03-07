#include "pch.h"

// pointers.
	// classes.
static class OpenAvrilConcurrency::Praise0_Input* _stat_REG_ptr_Praise0_Input = NULL;
// registers.
static std::list<class OpenAvrilConcurrency::Object*>* _stat_REG_ptr_list_Of_ptr_PraiseInputSubsets = { NULL };

// constructor.
OpenAvrilConcurrency::User_Input::User_Input()
{
	std::cout << "entered => User_Input()" << std::endl;
	stat_REG_create_ptr_Praise0_Input();
	std::cout << "exiting => User_Input()" << std::endl;
}

// destructor.
OpenAvrilConcurrency::User_Input::~User_Input()
{
	delete _stat_REG_ptr_Praise0_Input;
	delete _stat_REG_ptr_list_Of_ptr_PraiseInputSubsets;
}

void OpenAvrilConcurrency::User_Input::initialise_stat_REG_ptr_list_Of_ptr_PraiseInputSubsets()
{
	stat_REG_create_ptr_list_Of_ptr_PraiseInputSubsets();
}

// public.
	// dynamic.
		// get.
OpenAvrilConcurrency::Object* OpenAvrilConcurrency::User_Input::get_REG_ptr_Item_On_List_Of_ptr_list_Of_ptr_PraiseInputSubsets(uint8_t praiseID)
{
	return stat_REG_get_ptr_Item_For_Subset_In_list_Of_PraiseInputSubsets(praiseID);
}
// set.

// private.
	// dynamic.
		// get.
		// set.
	// static.
		// classes.
			// create.
void OpenAvrilConcurrency::User_Input::stat_REG_create_ptr_Praise0_Input()
{
	OpenAvrilConcurrency::Praise0_Input* _stat_REG_ptr_Praise0_Input = new class OpenAvrilConcurrency::Praise0_Input();
	while (stat_REG_get_ptr_Praise0_Input() == NULL) {}
}
// get.
OpenAvrilConcurrency::Praise0_Input* OpenAvrilConcurrency::User_Input::stat_REG_get_ptr_Praise0_Input()
{
	return _stat_REG_ptr_Praise0_Input;
}
// set.
// registers.
	// create.
void OpenAvrilConcurrency::User_Input::stat_REG_create_ptr_list_Of_ptr_PraiseInputSubsets()
{
	std::list<class OpenAvrilConcurrency::Object*>* _stat_REG_ptr_list_Of_ptr_PraiseInputSubsets = new std::list<class OpenAvrilConcurrency::Object*>();
	while (stat_REG_get_ptr_list_Of_ptr_PraiseInputSubsets() == NULL) { }
	class OpenAvrilConcurrency::Praise0_Input* _stat_REG_ptr_Praise0_Input = new class OpenAvrilConcurrency::Praise0_Input();
	while (stat_REG_get_ptr_list_Of_ptr_PraiseInputSubsets() == NULL) {}
	stat_REG_set_ptr_Item_For_Subset_In_list_Of_PraiseInputSubsets(0, reinterpret_cast<class OpenAvrilConcurrency::Object*>(_stat_REG_ptr_Praise0_Input));

}
// get.
class OpenAvrilConcurrency::Object* OpenAvrilConcurrency::User_Input::stat_REG_get_ptr_Item_For_Subset_In_list_Of_PraiseInputSubsets(uint8_t praiseID)
{
	auto temp = stat_REG_get_ptr_list_Of_ptr_PraiseInputSubsets()->begin();
	std::advance(temp, praiseID);
	return *temp;
}
std::list<class OpenAvrilConcurrency::Object*>* stat_REG_get_ptr_list_Of_ptr_PraiseInputSubsets()
{
	return _stat_REG_ptr_list_Of_ptr_PraiseInputSubsets;
}
// set.
void OpenAvrilConcurrency::User_Input::stat_REG_set_ptr_Item_For_Subset_In_list_Of_PraiseInputSubsets(uint8_t praiseID, Object* newClass)
{
	auto temp = stat_REG_get_ptr_list_Of_ptr_PraiseInputSubsets()->begin();
	std::advance(temp, praiseID);
	*temp = newClass;
}