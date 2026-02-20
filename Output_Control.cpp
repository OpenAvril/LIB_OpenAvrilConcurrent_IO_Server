#include "pch.h"

// calsses.

// registers.

// constructor.

// destructor.

// public.
	// get.
	// set.

// private.
	// get.
	// set.

OpenAvril::Output_Control::Output_Control()
{
	std::cout << "entered => OpenAvril::Output_Control::Output_Control()" << std::endl;
}
OpenAvril::Output_Control::~Output_Control()
{

}

void OpenAvril::Output_Control::Selectset_Output_Subset(OpenAvril::Framework_Server* obj, __int8 ptr_praiseEventId, __int8 concurrent_coreId)
{
	switch (ptr_praiseEventId)
	{
	case 0:
		obj->get_ptr_Server()->get_ptr_Data()->get_ptr_Item_Of_list_Of_buffer_Output_ReferenceForThread(concurrent_coreId)->set_OutputBuffer_Subset(
			obj->get_ptr_Server()->get_ptr_Data()->get_ptr_User_O()->get_Praise0_Output()
		);
		break;

	case 1:
		obj->get_ptr_Server()->get_ptr_Data()->get_ptr_Item_Of_list_Of_buffer_Output_ReferenceForThread(concurrent_coreId)->set_OutputBuffer_Subset(
			obj->get_ptr_Server()->get_ptr_Data()->get_ptr_User_O()->get_Praise1_Output()
		);
		break;

	case 2:
		obj->get_ptr_Server()->get_ptr_Data()->get_ptr_Item_Of_list_Of_buffer_Output_ReferenceForThread(concurrent_coreId)->set_OutputBuffer_Subset(
			obj->get_ptr_Server()->get_ptr_Data()->get_ptr_User_O()->get_Praise2_Output()
		);
		break;
	}
}