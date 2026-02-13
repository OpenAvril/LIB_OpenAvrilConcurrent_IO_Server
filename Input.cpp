#include "pch.h"

OpenAvril::Input_Control* ptr_input_Control = NULL;
__int8 _in_praiseEventId = 255;
__int8 _in_playerId = 255;
OpenAvril::Object* ptr_buffer_SubSet_InputPraise = NULL;

OpenAvril::Input::Input()
{
    Set_in_praiseEventId(__int8(255));
}

OpenAvril::Input::~Input()
{
    delete ptr_input_Control;
    delete ptr_buffer_SubSet_InputPraise;
}

void OpenAvril::Input::Initialise_Control()
{
    Set_input_Control(new class OpenAvril::Input_Control());
    while (Get_Input_Control() == NULL) {}
}

class OpenAvril::Input_Control* OpenAvril::Input::Get_Input_Control()
{
    return ptr_input_Control;
}
class OpenAvril::Object* OpenAvril::Input::Get_InputBuffer_Subset()
{
    return ptr_buffer_SubSet_InputPraise;
}
__int8 OpenAvril::Input::GetPraiseEventId()
{
    return _in_praiseEventId;
}
__int8 OpenAvril::Input::Get_playerId()
{
    return _in_playerId;
}
void OpenAvril::Input::Set_in_praiseEventId(__int8 value)
{
    _in_praiseEventId = value;
}
void OpenAvril::Input::Set_in_playerId(__int8 value)
{
    _in_playerId = value;
}
void OpenAvril::Input::Set_input_Control(OpenAvril::Input_Control* input_Control)
{
    ptr_input_Control = input_Control;
}

void OpenAvril::Input::Set_Subset_InputBuffer(OpenAvril::Praise0_Input* praise0_value)
{
    ptr_buffer_SubSet_InputPraise = reinterpret_cast<OpenAvril::Object*>(praise0_value);
}

void OpenAvril::Input::Set_Subset_InputBuffer(OpenAvril::Praise1_Input* praise1_value)
{
    ptr_buffer_SubSet_InputPraise = reinterpret_cast<OpenAvril::Object*>(praise1_value);
}

void OpenAvril::Input::Set_Subset_InputBuffer(OpenAvril::Praise2_Input* praise2_value)
{
    ptr_buffer_SubSet_InputPraise = reinterpret_cast<OpenAvril::Object*>(praise2_value);
}