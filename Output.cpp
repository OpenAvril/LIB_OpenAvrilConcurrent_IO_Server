#include "pch.h"

OpenAvril::Output_Control* ptr_control_Of_Output = NULL;
OpenAvril::Object* ptr_praiseOutputBuffer_Subset = NULL;
__int8 _out_praiseEventId;
__int8 _out_playerId;


OpenAvril::Output::Output()
{
    std::cout << "entered => Output()" << std::endl;
    Set_praiseEventId(__int8(255));
    Set_out_playerId(__int8(255));
}

OpenAvril::Output::~Output()
{
    delete ptr_control_Of_Output;
    delete ptr_praiseOutputBuffer_Subset;
}

void OpenAvril::Output::Initialise_Control()
{
    std::cout << "entered => OpenAvril::Output::Initialise_Control()" << std::endl;
    Set_control_Of_Output(new class OpenAvril::Output_Control());
    std::cout << "entered => OpenAvril::Output::Initialise_Control() ALPHA" << std::endl;
}

OpenAvril::Output_Control* OpenAvril::Output::Get_control_Of_Output()
{
    return ptr_control_Of_Output;
}
OpenAvril::Object* OpenAvril::Output::Get_praiseOutputBuffer_Subset()
{
    return ptr_praiseOutputBuffer_Subset;
}
__int8 OpenAvril::Output::Get_out_praiseEventId()
{
    return _out_praiseEventId;
}
__int8 OpenAvril::Output::Get_out_playerId()
{
    return _out_playerId;
}

void OpenAvril::Output::Set_control_Of_Output(OpenAvril::Output_Control* output_Control)
{

}
void OpenAvril::Output::Set_praiseEventId(__int8 value)
{
    _out_praiseEventId = value;
}
void OpenAvril::Output::Set_out_playerId(__int8 value)
{
    _out_playerId = value;
}

//
void OpenAvril::Output::Set_OutputBuffer_Subset(OpenAvril::Praise0_Output* praise0_value)
{
    ptr_praiseOutputBuffer_Subset = reinterpret_cast<OpenAvril::Object*>(praise0_value);
}
void OpenAvril::Output::Set_OutputBuffer_Subset(OpenAvril::Praise1_Output* praise0_value)
{
    ptr_praiseOutputBuffer_Subset = reinterpret_cast<OpenAvril::Object*>(praise0_value);
}
void OpenAvril::Output::Set_OutputBuffer_Subset(OpenAvril::Praise2_Output* praise0_value)
{
    ptr_praiseOutputBuffer_Subset = reinterpret_cast<OpenAvril::Object*>(praise0_value);
}
