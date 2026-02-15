#include "pch.h"

bool flag_isLoaded_Stack_InputPraise = false;
bool flag_isLoaded_Stack_OutputPraise = false;
bool flag_isNewInputDataReady = false;
bool flag_isNewOutputDataReady = false;
bool _side_To_Write_For_doubleBuffer_Input = NULL;
bool _side_To_Write_For_doubleBuffer_Output = NULL;
OpenAvril::Data_Control::Data_Control()
{
    flag_isLoaded_Stack_InputPraise = bool(false);
    flag_isLoaded_Stack_OutputPraise = bool(false);
    flag_isNewInputDataReady = bool(false);
    flag_isNewOutputDataReady = bool(false);
}
OpenAvril::Data_Control::~Data_Control()
{

}

void OpenAvril::Data_Control::Flip_Input_DoubleBuffer()
{
    Set_side_To_Write_For_doubleBuffer_Input(!Get_side_To_Write_For_doubleBuffer_Input());
}
void OpenAvril::Data_Control::Flip_Output_DoubleBuffer()
{
    Set_side_To_Write_For_doubleBuffer_Output(!Get_side_To_Write_For_doubleBuffer_Output());
}

void OpenAvril::Data_Control::Pop_Stack_InputPraises(OpenAvril::Data* data, __int8 concurrentThreadID)
{
    class OpenAvril::Input* referenceForCore = data->Get_Item_Of_buffer_Input_ReferenceForThread(concurrentThreadID);
    std::vector<class OpenAvril::Input*>* ptr_inputStack = data->Get_ptr_stack_Of_InputPraise();
    referenceForCore = ptr_inputStack->at(1);
    ptr_inputStack->erase(ptr_inputStack->begin() + 1);
    if (sizeof(ptr_inputStack) < 2)
    {
        Set_flag_IsStackLoaded_Server_InputAction(false);
    }
    else
    {
        Set_flag_IsStackLoaded_Server_InputAction(true);
    }
}

void OpenAvril::Data_Control::Pop_Stack_Output(OpenAvril::Data* data)
{
    class Output* distributeBuffer = data->Get_doubleBuffer_Input();
    std::vector<class Output*>* ptr_outputStack = data->Get_Stack_OutputPraise();
    distributeBuffer = ptr_outputStack->at(1);
    ptr_outputStack->erase(ptr_outputStack->begin() + 1);
    if (sizeof(ptr_outputStack) < 2)
    {
        Set_flag_IsStackLoaded_Server_OutputRecieve(false);
    }
    else
    {
        Set_flag_IsStackLoaded_Server_OutputRecieve(true);
    }
}
void OpenAvril::Data_Control::Push_Stack_InputPraises(OpenAvril::Data* data)
{
    std::vector<class OpenAvril::Input*>* ptr_InputStack = data->Get_ptr_stack_Of_InputPraise();
    class OpenAvril::Input* ptr_Buffer_Praise = data->Get_doubleBuffer_Input();
    ptr_InputStack->push_back(ptr_InputStack->at(0));
    ptr_InputStack->at(ptr_InputStack->size()) = ptr_Buffer_Praise;
    if (sizeof(ptr_InputStack) < 2)
    {
        Set_flag_IsStackLoaded_Server_InputAction(false);
    }
    else
    {
        Set_flag_IsStackLoaded_Server_InputAction(true);
    }
}

void OpenAvril::Data_Control::Push_Stack_Output(OpenAvril::Data* data, __int8 concurrentThreadID)
{
    std::vector<class OpenAvril::Output*>* ptr_outputStack = data->Get_Stack_OutputPraise();
    class OpenAvril::Output* ptr_referenceForCore = data->Get_OutputRefferenceOfCore(concurrentThreadID);
    ptr_outputStack->push_back(ptr_outputStack->at(0));
    ptr_outputStack->at(ptr_outputStack->size()) = ptr_referenceForCore;
    if (sizeof(ptr_outputStack) < 2)
    {
        Set_flag_IsStackLoaded_Server_OutputRecieve(false);
    }
    else
    {
        Set_flag_IsStackLoaded_Server_OutputRecieve(true);
    }
}

void OpenAvril::Data_Control::Store_Praise_In_Data_To_GameInstance_Data(OpenAvril::Data* data, std::vector<class OpenAvril::Input*>* stack)
{
    OpenAvril::Input* input = stack->at(1);
    switch (input->GetPraiseEventId())
    {
    case 0:
        break;

    case 1:
        OpenAvril::Praise1_Input* subset = (OpenAvril::Praise1_Input*)input->Get_InputBuffer_Subset();
        data->Get_GameInstance()->Get_player(input->Get_playerId())->Set_mouse_Position_X(subset->Get_mouse_X());
        data->Get_GameInstance()->Get_player(input->Get_playerId())->Set_mouse_Position_Y(subset->Get_mouse_Y());
        break;
    }
}

void OpenAvril::Data_Control::Store_Praise_Out_Data_To_GameInstance_Data(OpenAvril::Data* data, std::vector<class OpenAvril::Output*>* stack)
{
    OpenAvril::Output* output = stack->at(1);
    switch (output->Get_out_praiseEventId())
    {
    case 0:
        break;

    case 1:
        OpenAvril::Praise1_Output* subset = (OpenAvril::Praise1_Output*)output->Get_praiseOutputBuffer_Subset();
        data->Get_GameInstance()->Get_player(output->Get_out_playerId())->Set_front(subset->GetFowards());
        data->Get_GameInstance()->Get_player(output->Get_out_playerId())->Set_right(subset->GetRight());
        data->Get_GameInstance()->Get_player(output->Get_out_playerId())->Set_up(subset->GetUp());
        break;
    }
}

bool OpenAvril::Data_Control::Get_flag_IsStackLoaded_Server_InputAction()
{
    return flag_isLoaded_Stack_InputPraise;
}
bool OpenAvril::Data_Control::Get_flag_IsStackLoaded_Server_OutputRecieve()
{
    return flag_isLoaded_Stack_OutputPraise;
}

bool OpenAvril::Data_Control::Get_flag_IsNewInputDataReady()
{
    return flag_isNewInputDataReady;
}

bool OpenAvril::Data_Control::Get_flag_IsNewOutputDataReady()
{
    return flag_isNewOutputDataReady;
}
__int8 OpenAvril::Data_Control::Get_side_To_Write_For_doubleBuffer_Input()
{
    return BoolToInt(_side_To_Write_For_doubleBuffer_Input);
}
__int8 OpenAvril::Data_Control::Get_side_To_Write_For_doubleBuffer_Output()
{
    return BoolToInt(_side_To_Write_For_doubleBuffer_Output);
}







__int8 OpenAvril::Data_Control::BoolToInt(bool bufferSide)
{
    __int8 temp = 2;
    if (bufferSide)
    {
        temp = 1;
    }
    else
    {
        temp = 0;
    }
    return temp;
}
void OpenAvril::Data_Control::Create_side_To_Write_For_doubleBuffer_Input()
{
    _side_To_Write_For_doubleBuffer_Input = bool(false);
}
void OpenAvril::Data_Control::Create_side_To_Write_For_doubleBuffer_Output()
{
    _side_To_Write_For_doubleBuffer_Output = bool(false);
}

void OpenAvril::Data_Control::Set_flag_IsStackLoaded_Server_InputAction(bool value)
{
    flag_isLoaded_Stack_InputPraise = value;
}
void OpenAvril::Data_Control::Set_flag_IsStackLoaded_Server_OutputRecieve(bool value)
{
    flag_isLoaded_Stack_OutputPraise = value;
}

void OpenAvril::Data_Control::Set_side_To_Write_For_doubleBuffer_Input(bool value)
{
    _side_To_Write_For_doubleBuffer_Input = value;
}

void OpenAvril::Data_Control::Set_side_To_Write_For_doubleBuffer_Output(bool value)
{
    _side_To_Write_For_doubleBuffer_Output = value;
}

void OpenAvril::Data_Control::Set_flag_IsNewInputDataReady(bool value)
{
    flag_isNewInputDataReady = value;
}

void OpenAvril::Data_Control::Set_flag_IsNewOutputDataReady(bool value)
{
    flag_isNewOutputDataReady = value;
}
