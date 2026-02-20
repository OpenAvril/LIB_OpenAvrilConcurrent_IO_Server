#include "pch.h"

OpenAvril::Concurrent_Control::Concurrent_Control()
{

}
OpenAvril::Concurrent_Control::~Concurrent_Control()
{

}

void OpenAvril::Concurrent_Control::Selectset_Algorithm_Subset(OpenAvril::Framework_Server* obj, __int8 ptr_praiseEventId, __int8 concurrent_coreId)
{
	switch (ptr_praiseEventId)
	{
	case 0:
		obj->get_ptr_Server()->get_ptr_Algorithms()->get_ptr_Item_On_list_Of_ptr_Concurrent(concurrent_coreId)->set_Algorithm_Subset(
			obj->get_ptr_Server()->get_ptr_Algorithms()->get_ptr_User_Algorithms()->get_Praise0_Algorithm()
		);
		break;

	case 1:
		obj->get_ptr_Server()->get_ptr_Algorithms()->get_ptr_Item_On_list_Of_ptr_Concurrent(concurrent_coreId)->set_Algorithm_Subset(
			obj->get_ptr_Server()->get_ptr_Algorithms()->get_ptr_User_Algorithms()->get_Praise1_Algorithm()
		);
		break;

	case 2:
		obj->get_ptr_Server()->get_ptr_Algorithms()->get_ptr_Item_On_list_Of_ptr_Concurrent(concurrent_coreId)->set_Algorithm_Subset(
			obj->get_ptr_Server()->get_ptr_Algorithms()->get_ptr_User_Algorithms()->get_Praise2_Algorithm()
		);
		break;
	}
}