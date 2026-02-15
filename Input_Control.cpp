#include "pch.h"

OpenAvril::Input_Control::Input_Control()
{

}
OpenAvril::Input_Control::~Input_Control()
{

}

void OpenAvril::Input_Control::SelectSet_Input_Subset(OpenAvril::Framework_Server* obj, __int8 praiseEventId)
{
    switch (praiseEventId)
    {
    case 0:
        obj->Get_ptr_Server()->Get_ptr_Data()->GetBuffer_InputFrontDouble()->Set_Subset_InputBuffer(
            obj->Get_ptr_Server()->Get_ptr_Data()->Get_User_I()->Get_Praise0_Input()
        );
        break;

    case 1:
        obj->Get_ptr_Server()->Get_ptr_Data()->GetBuffer_InputFrontDouble()->Set_Subset_InputBuffer(
            obj->Get_ptr_Server()->Get_ptr_Data()->Get_User_I()->Get_Praise1_Input()
        );
        break;

    case 2:
        obj->Get_ptr_Server()->Get_ptr_Data()->GetBuffer_InputFrontDouble()->Set_Subset_InputBuffer(
            obj->Get_ptr_Server()->Get_ptr_Data()->Get_User_I()->Get_Praise2_Input()
        );
        break;
    }
}