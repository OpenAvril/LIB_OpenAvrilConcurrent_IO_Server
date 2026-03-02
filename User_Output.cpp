#include "pch.h"

// pointers.
	// classes.
	static class OpenAvrilConcurrency::Praise0_Output* _ptr_Praise0_Output = NULL;
	// registers.
	static std::list<class Object*>* _ptr_list_Of_Praise_Output_Subsets = { NULL };

	// constructor.
	OpenAvrilConcurrency::User_Output::User_Output()
	{
		std::cout << "entered => User_Output()" << std::endl;
		stat_create_ptr_Praise0_Output();
		std::cout << "exiting => User_Output()" << std::endl;
	}

	// destructor.
	OpenAvrilConcurrency::User_Output::~User_Output()
	{
		delete _ptr_Praise0_Output;
	}

	// public.
		// dynamic.
			// get.
	Object* OpenAvrilConcurrency::User_Output::get_ptr_Item_For_Subset_In_list_Of_Praise_Output_Subsets(uint8_t praiseID)
	{
		return stat_set_ptr_Item_For_Subset_In_list_Of_Praise_Output_Subsets(praiseID);
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
	void OpenAvrilConcurrency::User_Output::stat_create_ptr_Praise0_Output()
	{
		static class OpenAvrilConcurrency::Praise0_Output* _ptr_Praise0_Output = new class OpenAvrilConcurrency::Praise0_Output();
		while (stat_get_ptr_Praise0_Output() == NULL) {}
	}
	void OpenAvrilConcurrency::User_Output::stat_create_ptr_list_Of_Praise_Output_Subsets(Object* newDEFAULT_Object)
	{
		static std::list<class Object*>* _ptr_list_Of_Praise_Output_Subsets = new std::list<class Object*>();
		while (stat_get_ptr_Praise0_Output() == NULL) {}
		_ptr_list_Of_Praise_Output_Subsets->resize(1);//NUMBER OF PRAISES.
	}
	// get.
	OpenAvrilConcurrency::Praise0_Output* OpenAvrilConcurrency::User_Output::stat_get_ptr_Praise0_Output()
	{
		return _ptr_Praise0_Output;
	}
	Object* OpenAvrilConcurrency::User_Output::stat_set_ptr_Item_For_Subset_In_list_Of_Praise_Output_Subsets(uint8_t praiseID)
	{
		auto temp = stat_get_ptr_list_Of_Praise_Output_Subsets()->begin();
		std::advance(temp, praiseID);
		return *temp;
	}
	std::list<class Object*>* OpenAvrilConcurrency::User_Output::stat_get_ptr_list_Of_Praise_Output_Subsets()
	{
		return _ptr_list_Of_Praise_Output_Subsets;
	}
	// set.
	void OpenAvrilConcurrency::User_Output::stat_set_ptr_Item_For_Subset_In_list_Of_Praise_Output_Subsets(uint8_t praiseID, Object* newPtr)
	{
		auto temp = stat_get_ptr_list_Of_Praise_Output_Subsets()->begin();
		std::advance(temp, praiseID);
		*temp = newPtr;
	}