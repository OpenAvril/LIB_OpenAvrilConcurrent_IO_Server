#include "pch.h"

// pointers.
	// classes.
class OpenAvrilConcurrency::Praise0_Input* OpenAvrilConcurrency::User_Input::_stat_CLASS_ptr_Praise0_Input = NULL;
	// registers.

// public.
	// constructor.

	// destructor.

	// dynamic.
		// create.
		// get.
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
			// get.
			// set.
		// registers.
			// create.
			// get.
			// set.


// constructor.
	OpenAvrilConcurrency::User_Input::User_Input()
	{
		std::cout << "entered => User_Input()" << std::endl;
		stat_CLASS_create_ptr_Praise0_Input();
		std::cout << "exiting => User_Input()" << std::endl;
	}

// destructor.
	OpenAvrilConcurrency::User_Input::~User_Input()
	{
		delete _stat_CLASS_ptr_Praise0_Input;
	}



// public.
	// dynamic.
		// get.
	OpenAvrilConcurrency::Object* OpenAvrilConcurrency::User_Input::get_CLASS_ptr_Item_ptr_PraiseInputSubsets(uint8_t praiseID)
	{
		switch (praiseID)
		{
		case 0:
			return reinterpret_cast<class OpenAvrilConcurrency::Object*>(stat_CLASS_get_ptr_Praise0_Input());
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
	void OpenAvrilConcurrency::User_Input::stat_CLASS_create_ptr_Praise0_Input()
	{
		OpenAvrilConcurrency::Praise0_Input* _stat_CLASS_ptr_Praise0_Input = new class OpenAvrilConcurrency::Praise0_Input();
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
			// get.
			// set.
