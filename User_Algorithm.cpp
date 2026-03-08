#include "pch.h"

// pointers.
	// classes.
class OpenAvrilConcurrency::Praise0_Algorithm* OpenAvrilConcurrency::User_Algorithm::_stat_CLASS_ptr_Praise0_Algorithm = NULL;
	// CLASSisters.

// constructor.
	OpenAvrilConcurrency::User_Algorithm::User_Algorithm()
	{
		std::cout << "entered => User_Algorithm()" << std::endl;
		stat_CLASS_create_ptr_Praise0_Algorithm();
		std::cout << "exiting => User_Algorithm()" << std::endl;
	}

// destructor.
	OpenAvrilConcurrency::User_Algorithm::~User_Algorithm()
	{
		delete _stat_CLASS_ptr_Praise0_Algorithm;
	}

// public.
	// dynamic.
		// get.
	OpenAvrilConcurrency::Object* OpenAvrilConcurrency::User_Algorithm::get_CLASS_ptr_Item_ptr_PraiseAlgorithmSubsets(uint8_t praiseID)
	{
		switch (praiseID)
		{
		case 0:
			return reinterpret_cast<class OpenAvrilConcurrency::Object*>(stat_CLASS_get_ptr_Praise0_Algorithm());
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
	void OpenAvrilConcurrency::User_Algorithm::stat_CLASS_create_ptr_Praise0_Algorithm()
	{
		OpenAvrilConcurrency::Praise0_Algorithm* _stat_CLASS_ptr_Praise0_Algorithm = new class OpenAvrilConcurrency::Praise0_Algorithm();
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
