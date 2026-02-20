#include "pch.h"

OpenAvril::Input_Control::Input_Control()
{

}
OpenAvril::Input_Control::~Input_Control()
{

}

void OpenAvril::Input_Control::Selectset_Input_Subset(OpenAvril::Framework_Server* obj, __int8 praiseEventId)
{
    switch (praiseEventId)
    {
    case 0:
        obj->get_ptr_Server()->get_ptr_Data()->get_doubleBuffer_Input_WRITE()->set_Subset_InputBuffer(
            obj->get_ptr_Server()->get_ptr_Data()->get_ptr_User_I()->get_Praise0_Input()
        );
        break;

    case 1:
        obj->get_ptr_Server()->get_ptr_Data()->get_doubleBuffer_Input_WRITE()->set_Subset_InputBuffer(
            obj->get_ptr_Server()->get_ptr_Data()->get_ptr_User_I()->get_Praise1_Input()
        );
        break;

    case 2:
        obj->get_ptr_Server()->get_ptr_Data()->get_doubleBuffer_Input_WRITE()->set_Subset_InputBuffer(
            obj->get_ptr_Server()->get_ptr_Data()->get_ptr_User_I()->get_Praise2_Input()
        );
        break;
    }
}