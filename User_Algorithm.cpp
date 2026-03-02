#include "pch.h"


// pointers.
	// classes.
	static class OpenAvrilConcurrency::Algorithm* _ptr_Praise0_Alogorithm = NULL;
// registers.
	static std::list<class Object*>* _ptr_list_Of_Praise_Alogorithm_Subsets = { NULL };

// constructor.
	OpenAvrilConcurrency::User_Alogorithm::User_Alogorithm()
	{
		std::cout << "entered => User_Alogorithm()" << std::endl;
		stat_create_ptr_Algorithm();
		std::cout << "exiting => User_Alogorithm()" << std::endl;
	}

// destructor.
	OpenAvrilConcurrency::User_Alogorithm::~User_Alogorithm()
	{
		delete _ptr_Praise0_Alogorithm;
		delete _ptr_list_Of_Praise_Alogorithm_Subsets;
	}

// public.
	// dynamic.
		// get.
	Object* OpenAvrilConcurrency::User_Alogorithm::get_ptr_Item_For_Subset_In_list_Of_Praise_Alogorithm_Subsets(uint8_t praiseID)
	{
		return stat_set_ptr_Item_For_Subset_In_list_Of_Praise_Alogorithm_Subsets(praiseID);
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
	void OpenAvrilConcurrency::User_Alogorithm::stat_create_ptr_Algorithm()
	{
		static class OpenAvrilConcurrency::Praise0_Algorithm* _ptr_Algorithm = new class OpenAvrilConcurrency::Praise0_Algorithm();
		while (stat_get_ptr_Algorithm() == NULL) {}
	}
	void OpenAvrilConcurrency::User_Alogorithm::stat_create_ptr_list_Of_Praise_Alogorithm_Subsets(Object* newDEFAULT_Object)
	{
		static std::list<class Object*>* _ptr_list_Of_Praise_Alogorithm_Subsets = new std::list<class Object*>();
		while (stat_get_ptr_Algorithm() == NULL) {}
		_ptr_list_Of_Praise_Alogorithm_Subsets->resize(1);//NUMBER OF PRAISES.
	}
// get.
	OpenAvrilConcurrency::Algorithm* OpenAvrilConcurrency::User_Alogorithm::stat_get_ptr_Algorithm()
	{
		return _ptr_Algorithm;
	}
	Object* OpenAvrilConcurrency::User_Alogorithm::stat_set_ptr_Item_For_Subset_In_list_Of_Praise_Alogorithm_Subsets(uint8_t praiseID)
	{
		auto temp = stat_get_ptr_list_Of_Praise_Alogorithm_Subsets()->begin();
		std::advance(temp, praiseID);
		return *temp;
	}
	std::list<class Object*>* OpenAvrilConcurrency::User_Alogorithm::stat_get_ptr_list_Of_Praise_Alogorithm_Subsets()
	{
		return _ptr_list_Of_Praise_Alogorithm_Subsets;
	}
// set.
	void OpenAvrilConcurrency::User_Alogorithm::stat_set_ptr_Item_For_Subset_In_list_Of_Praise_Alogorithm_Subsets(uint8_t praiseID, Object* newPtr)
	{
		auto temp = stat_get_ptr_list_Of_Praise_Alogorithm_Subsets()->begin();
		std::advance(temp, praiseID);
		*temp = newPtr;
	}