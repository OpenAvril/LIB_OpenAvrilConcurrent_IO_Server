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
			obj->get_CLASS_ptr_Server()->get_CLASS_ptr_Data()->get_REG_ptr_Item_array_Of_doubleBuffer_Output_WRITE()->set_Subset_With_OutputSubet(obj->get_CLASS_ptr_Server()->get_CLASS_ptr_Data()->get_CLASS_ptr_User_Output()->get_ptr_Item_For_Subset_In_list_Of_Praise_Output_Subsets(praiseEventId));
			break;
		}
	}
	// static.
		// get.
		// set.

// private.
	// dynamic.
		// get.
		// set.
	// static.
		// get.
		// set.