#include "pch.h"

// pointers.
	// classes.
	OpenAvrilConcurrency::Praise0_Algorithm* OpenAvrilConcurrency::User_Algorithm::_stat_CLASS_ptr_Praise0_Algorithm = NULL;
	// registers.

// public.
	// constructor.
	OpenAvrilConcurrency::User_Algorithm::User_Algorithm()
	{
		std::cout << "entered CONSTRUCTOR of User_Algorithm()." << std::endl;
		stat_CLASS_create_ptr_Praise0_Algorithm();
		std::cout << "exiting CONSTRUCTOR of User_Algorithm()." << std::endl;
	}

	// destructor.
	OpenAvrilConcurrency::User_Algorithm::~User_Algorithm()
	{
		delete _stat_CLASS_ptr_Praise0_Algorithm;
	}

	// dynamic.
		// create.
		// get.
	OpenAvrilConcurrency::Object* OpenAvrilConcurrency::User_Algorithm::dyn_CLASS_getr_Item_On_List_Of_ptr_PraiseAlgorithmSubsets(uint8_t praiseID)
	{
		switch (praiseID)
		{
		case 0:
			return reinterpret_cast<OpenAvrilConcurrency::Object*>(stat_CLASS_get_ptr_Praise0_Algorithm());
			break;

		case 1:
			break;
		}
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
	void OpenAvrilConcurrency::User_Algorithm::stat_CLASS_create_ptr_Praise0_Algorithm()
	{
		_stat_CLASS_ptr_Praise0_Algorithm = new class OpenAvrilConcurrency::Praise0_Algorithm();
		while (stat_CLASS_get_ptr_Praise0_Algorithm() == NULL) {}
	}
			// get.
	OpenAvrilConcurrency::Praise0_Algorithm* OpenAvrilConcurrency::User_Algorithm::stat_CLASS_get_ptr_Praise0_Algorithm()
	{
		return _stat_CLASS_ptr_Praise0_Algorithm;
	}
			// set.
		// registers.
			// create.
			// get.
			// set.