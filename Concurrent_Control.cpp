#include "pch.h"

// pointers.
	// classes.
	// registers.

// public.
	// constructor.
	OpenAvrilConcurrency::Concurrent_Control::Concurrent_Control()
	{
		std::cout << "entered CONSTRUCTOR Concurrent()" << std::endl;
		std::cout << "exiting CONSTRUCTOR Concurrent()" << std::endl;
	}

	// destructor.
	OpenAvrilConcurrency::Concurrent_Control::~Concurrent_Control()
	{

	}

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


// destructor.


// public.
	// dynamic.
		// get.
		// set.
	void OpenAvrilConcurrency::Concurrent_Control::selectset_Algorithm_Subset(OpenAvrilConcurrency::Framework_Server* obj, uint8_t praiseEventId, uint8_t concurrent_threadID)
	{
		switch (praiseEventId)
		{
		case 0:
			obj->dyn_CLASS_get_ptr_Server()->dyn_CLASS_get_ptr_Algorithms()->get_CLASS_ptr_Item_On_list_Of_ptr_Concurrent(concurrent_threadID)->get_CLASS_ptr_Concurrent_Control()->selectset_Algorithm_Subset(obj, praiseEventId, concurrent_threadID);
			break;
		}
	}

// private.
	// dynamic.
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