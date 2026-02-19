#include "pch.h"

OpenAvril::Output_Control::Output_Control()
{
	std::cout << "entered => OpenAvril::Output_Control::Output_Control()" << std::endl;
}
OpenAvril::Output_Control::~Output_Control()
{

}

void OpenAvril::Output_Control::SelectSet_Output_Subset(OpenAvril::Framework_Server* obj, __int8 ptr_praiseEventId, __int8 concurrent_coreId)
{
	switch (ptr_praiseEventId)
	{
	case 0:
		obj->Get_ptr_Server()->Get_ptr_Data()->Get_ptr_Item_Of_list_Of_buffer_Output_ReferenceForThread(concurrent_coreId)->Set_OutputBuffer_Subset(
			obj->Get_ptr_Server()->Get_ptr_Data()->Get_ptr_User_O()->Get_Praise0_Output()
		);
		break;

	case 1:
		obj->Get_ptr_Server()->Get_ptr_Data()->Get_ptr_Item_Of_list_Of_buffer_Output_ReferenceForThread(concurrent_coreId)->Set_OutputBuffer_Subset(
			obj->Get_ptr_Server()->Get_ptr_Data()->Get_ptr_User_O()->Get_Praise1_Output()
		);
		break;

	case 2:
		obj->Get_ptr_Server()->Get_ptr_Data()->Get_ptr_Item_Of_list_Of_buffer_Output_ReferenceForThread(concurrent_coreId)->Set_OutputBuffer_Subset(
			obj->Get_ptr_Server()->Get_ptr_Data()->Get_ptr_User_O()->Get_Praise2_Output()
		);
		break;
	}
}