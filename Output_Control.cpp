#include "pch.h"

// pointers.
	// classes.
	// registers.

// constructor.
	OpenAvrilConcurrency::Output_Control::Output_Control()
	{
		std::cout << "entered => OpenAvrilConcurrency::Output_Control::Output_Control()" << std::endl;
	}

// destructor.
	OpenAvrilConcurrency::Output_Control::~Output_Control()
	{

	}

// public.
	// dynamic.
		// get.
		// set.
	void OpenAvrilConcurrency::Output_Control::selectset_Output_Subset(OpenAvrilConcurrency::Framework_Server* obj, uint8_t praiseEventId, uint8_t concurrent_threadID)
	{
		switch (praiseEventId)
		{
		case 0:
			obj->get_CLASS_ptr_Server()->get_CLASS_ptr_Data()->get_REG_ptr_Item_array_Of_doubleBuffer_Output_WRITE(obj)->set_Subset_With_Praise0_OutputSubet(obj->get_CLASS_ptr_Server()->get_CLASS_ptr_Data()->get_CLASS_ptr_User_Output()->get_CLASS_ptr_Item_ptr_PraiseOutputSubsets(praiseEventId));
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