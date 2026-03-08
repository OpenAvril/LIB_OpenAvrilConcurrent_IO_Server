#include "pch.h"

// pointers.
	// classes.
	class OpenAvrilConcurrency::Praise0_Output* _stat_CLASS_ptr_Praise0_Output = NULL;
	// registers.

// constructor.
	OpenAvrilConcurrency::User_Output::User_Output()
	{
		std::cout << "entered => User_Output()" << std::endl;
		stat_CLASS_create_ptr_Praise0_Output();
		std::cout << "exiting => User_Output()" << std::endl;
	}

// destructor.
	OpenAvrilConcurrency::User_Output::~User_Output()
	{
		delete _stat_CLASS_ptr_Praise0_Output;
	}



// public.
	// dynamic.
		// get.
	OpenAvrilConcurrency::Object* OpenAvrilConcurrency::User_Output::get_CLASS_ptr_Item_ptr_PraiseOutputSubsets(uint8_t praiseID)
	{
		switch (praiseID)
		{
		case 0:
			return reinterpret_cast<class OpenAvrilConcurrency::Object*>(stat_CLASS_get_ptr_Praise0_Output());
			break;

		case 1:
			break;
		}
	}
		// set.

// private.
	// dynamic.
		// get.
		// set.
	// static.
		// classes.
			// create.
	void OpenAvrilConcurrency::User_Output::stat_CLASS_create_ptr_Praise0_Output()
	{
		class OpenAvrilConcurrency::Praise0_Output* _stat_CLASS_ptr_Praise0_Output = new class OpenAvrilConcurrency::Praise0_Output();
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
			// get.
			// set.