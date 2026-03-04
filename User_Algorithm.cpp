#include "pch.h"

// pointers.
	// classes.
static class OpenAvrilConcurrency::Praise0_Algorithm* _stat_REG_ptr_Praise0_Algorithm = NULL;
// registers.
static std::list<class Object*>* _stat_REG_ptr_list_Of_ptr_PraiseAlgorithmSubsets = { NULL };

// constructor.
OpenAvrilConcurrency::User_Algorithm::User_Algorithm()
{
	std::cout << "entered => User_Algorithm()" << std::endl;
	stat_REG_create_ptr_Praise0_Algorithm();
	std::cout << "exiting => User_Algorithm()" << std::endl;
}

// destructor.
OpenAvrilConcurrency::User_Algorithm::~User_Algorithm()
{
	delete _stat_REG_ptr_Praise0_Algorithm;
}

// public.
	// dynamic.
		// get.
class Object* OpenAvrilConcurrency::User_Algorithm::get_REG_ptr_Item_On_List_Of_stat_REG_ptr_list_Of_ptr_PraiseAlgorithmSubsets(uint8_t praiseID)
{
	return stat_REG_get_ptr_Item_For_Subset_In_list_Of_PraiseAlgorithmSubsets(praiseID);
}
// set.

// private.
	// dynamic.
		// get.
		// set.
	// static.
		// classes.
			// create.
void OpenAvrilConcurrency::User_Algorithm::stat_REG_create_ptr_Praise0_Algorithm()
{
	OpenAvrilConcurrency::Praise0_Algorithm* _stat_REG_ptr_Praise0_Algorithm = new class OpenAvrilConcurrency::Praise0_Algorithm();
	while (stat_REG_get_ptr_Praise0_Algorithm() == NULL) {}
}
// get.
OpenAvrilConcurrency::Praise0_Algorithm* OpenAvrilConcurrency::User_Algorithm::stat_REG_get_ptr_Praise0_Algorithm()
{
	return _stat_REG_ptr_Praise0_Algorithm;
}
// set.
// registers.
	// create.
void OpenAvrilConcurrency::User_Algorithm::stat_REG_create_ptr_list_Of_ptr_PraiseAlgorithmSubsets(Object* newDEFAULT_Object)
{
	OpenAvrilConcurrency::Praise0_Algorithm* _stat_REG_ptr_Praise0_Algorithm = new class OpenAvrilConcurrency::Praise0_Algorithm();
	while (stat_REG_get_ptr_list_Of_ptr_PraiseAlgorithmSubsets() == NULL) {}
}
// get.
Object* stat_REG_get_ptr_Item_For_Subset_In_list_Of_PraiseAlgorithmSubsets(uint8_t praiseID)
{
	auto temp = stat_REG_get_ptr_list_Of_ptr_PraiseAlgorithmSubsets()->begin();
	std::advance(temp, praiseID);
	return *temp;
}
std::list<class Object*>* stat_REG_get_ptr_list_Of_ptr_PraiseAlgorithmSubsets()
{
	return _stat_REG_ptr_list_Of_ptr_PraiseAlgorithmSubsets;
}
// set.
void OpenAvrilConcurrency::User_Algorithm::stat_REG_set_ptr_Item_For_Subset_In_list_Of_PraiseAlgorithmSubsets(uint8_t praiseID, Object* newClass)
{
	auto temp = stat_REG_get_ptr_list_Of_ptr_PraiseAlgorithmSubsets()->begin();
	std::advance(temp, praiseID);
	*temp = newClass;
}