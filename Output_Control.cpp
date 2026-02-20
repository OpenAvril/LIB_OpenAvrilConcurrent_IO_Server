#include "pch.h"

// calsses.

// registers.

// constructor.
	OpenAvril::Output_Control::Output_Control()
	{
		std::cout << "entered => OpenAvril::Output_Control::Output_Control()" << std::endl;
	}

// destructor.
	OpenAvril::Output_Control::~Output_Control()
	{

	}

// public.
	void OpenAvril::Output_Control::Selectset_Output_Subset(OpenAvril::Framework_Server* obj, __int8 ptr_praiseEventId, __int8 concurrent_coreId)
	{
		switch (ptr_praiseEventId)
		{
		case 0:
			obj->get_ptr_Server()->get_ptr_Data()->get_ptr_Item_Of_list_Of_buffer_Output_ReferenceForThread(concurrent_coreId)->set_Subset_OutputBuffer(obj->get_ptr_Server()->get_ptr_Data()->get_ptr_User_O()->get_Praise0_Output());
			break;
		}
	}
	// get.
	// set.

// private.
	// get.
	// set.