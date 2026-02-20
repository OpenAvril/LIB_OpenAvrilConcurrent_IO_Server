#include "pch.h"

class OpenAvril::Output_Control* ptr_control_Of_Output = NULL;
class OpenAvril::Object* ptr_praiseOutputBuffer_Subset = NULL;
__int8 _out_praiseEventId;
__int8 _out_playerId;


OpenAvril::Output::Output()
{
    std::cout << "entered => Output()" << std::endl;
    set_praiseEventId(__int8(255));
    set_out_playerId(__int8(255));
}

OpenAvril::Output::~Output()
{
    delete ptr_control_Of_Output;
    delete ptr_praiseOutputBuffer_Subset;
}

void OpenAvril::Output::initialise_Control()
{
    std::cout << "entered => OpenAvril::Output::initialise_Control()" << std::endl;
    set_control_Of_Output(new class OpenAvril::Output_Control());
    std::cout << "entered => OpenAvril::Output::initialise_Control() ALPHA" << std::endl;
}

OpenAvril::Output_Control* OpenAvril::Output::get_control_Of_Output()
{
    return ptr_control_Of_Output;
}
OpenAvril::Object* OpenAvril::Output::get_praiseOutputBuffer_Subset()
{
    return ptr_praiseOutputBuffer_Subset;
}
__int8 OpenAvril::Output::get_out_praiseEventId()
{
    return _out_praiseEventId;
}
__int8 OpenAvril::Output::get_out_playerId()
{
    return _out_playerId;
}

void OpenAvril::Output::set_control_Of_Output(OpenAvril::Output_Control* output_Control)
{

}
void OpenAvril::Output::set_praiseEventId(__int8 value)
{
    _out_praiseEventId = value;
}
void OpenAvril::Output::set_out_playerId(__int8 value)
{
    _out_playerId = value;
}

//
void OpenAvril::Output::set_OutputBuffer_Subset(OpenAvril::Praise0_Output* praise0_value)
{
    ptr_praiseOutputBuffer_Subset = reinterpret_cast<OpenAvril::Object*>(praise0_value);
}
void OpenAvril::Output::set_OutputBuffer_Subset(OpenAvril::Praise1_Output* praise0_value)
{
    ptr_praiseOutputBuffer_Subset = reinterpret_cast<OpenAvril::Object*>(praise0_value);
}
void OpenAvril::Output::set_OutputBuffer_Subset(OpenAvril::Praise2_Output* praise0_value)
{
    ptr_praiseOutputBuffer_Subset = reinterpret_cast<OpenAvril::Object*>(praise0_value);
}
