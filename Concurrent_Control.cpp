#include "pch.h"

OpenAvril::Concurrent_Control::Concurrent_Control()
{

}
OpenAvril::Concurrent_Control::~Concurrent_Control()
{

}

void OpenAvril::Concurrent_Control::SelectSet_Algorithm_Subset(OpenAvril::Framework_Server* obj, __int8 ptr_praiseEventId, __int8 concurrent_coreId)
{
	switch (ptr_praiseEventId)
	{
	case 0:
		obj->Get_ptr_Server()->Get_ptr_Algorithms()->Get_Item_On_list_Of_ptr_Concurrent(concurrent_coreId)->Set_Algorithm_Subset(
			obj->Get_ptr_Server()->Get_ptr_Algorithms()->Get_ptr_User_Algorithms()->Get_Praise0_Algorithm()
		);
		break;

	case 1:
		obj->Get_ptr_Server()->Get_ptr_Algorithms()->Get_Item_On_list_Of_ptr_Concurrent(concurrent_coreId)->Set_Algorithm_Subset(
			obj->Get_ptr_Server()->Get_ptr_Algorithms()->Get_ptr_User_Algorithms()->Get_Praise1_Algorithm()
		);
		break;

	case 2:
		obj->Get_ptr_Server()->Get_ptr_Algorithms()->Get_Item_On_list_Of_ptr_Concurrent(concurrent_coreId)->Set_Algorithm_Subset(
			obj->Get_ptr_Server()->Get_ptr_Algorithms()->Get_ptr_User_Algorithms()->Get_Praise2_Algorithm()
		);
		break;
	}
}