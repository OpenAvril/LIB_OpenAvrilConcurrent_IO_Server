#include "pch.h"

// classes.

// registers.
    bool _flag_isLoaded_Stack_InputAction = NULL;
    bool _flag_isLoaded_Stack_OutputSend = NULL;
    bool _side_To_Write_For_doubleBuffer_Input = NULL;
    bool _side_To_Write_For_doubleBuffer_Output = NULL;

// constructor.
    OpenAvril::Data_Control::Data_Control()
    {
        _flag_isLoaded_Stack_InputAction = bool(false);
        _flag_isLoaded_Stack_OutputSend = bool(false);
        _side_To_Write_For_doubleBuffer_Input = bool(false);
        _side_To_Write_For_doubleBuffer_Output = bool(false);
    }

// destructor.
    OpenAvril::Data_Control::~Data_Control()
    {

    }

// public.
    void OpenAvril::Data_Control::Flip_Input_DoubleBuffer()
    {
        Set_STATE_Of_WRITE_For_doubleBuffer_Input(!Get_STATE_Of_WRITE_For_doubleBuffer_Input());
    }
    void OpenAvril::Data_Control::Flip_Output_DoubleBuffer()
    {
        Set_STATE_Of_WRITE_For_doubleBuffer_Output(!Get_STATE_Of_WRITE_For_doubleBuffer_Output());
    }
    void OpenAvril::Data_Control::Pop_From_Stack_Of_Input(OpenAvril::Data* data, __int8 concurrentThreadID)
    {
        class OpenAvril::Input* referenceForCore = data->Get_Item_Of_buffer_Input_ReferenceForThread(concurrentThreadID);
        class OpenAvril::Input* inputSlot = data->Get_Item_On_stack_Of_InputPraise(1);
        referenceForCore = inputSlot;
        data->Get_ptr_stack_Of_InputPraise()->erase(data->Get_ptr_stack_Of_InputPraise()->begin() + 1);
        if (sizeof(data->Get_ptr_stack_Of_InputPraise()) < 2)
        {
            Set_flag_isLoaded_Stack_InputAction(false);
        }
        else
        {
            Set_flag_isLoaded_Stack_InputAction(true);
        }
    }
    void OpenAvril::Data_Control::Pop_From_Stack_Of_Output(OpenAvril::Data* data)
    {
        class OpenAvril::Output* distributeBuffer = data->Get_doubleBuffer_Output_BACK();
        class OpenAvril::Output* outputSlot = data->Get_Item_On_stack_Of_OutputPraise(1);
        distributeBuffer = outputSlot;
        data->Get_ptr_stack_Of_OutputPraise()->erase(data->Get_ptr_stack_Of_OutputPraise()->begin() + 1);
        if (sizeof(data->Get_ptr_stack_Of_OutputPraise()) < 2)
        {
            Set_flag_isLoaded_Stack_OutputSend(false);
        }
        else
        {
            Set_flag_isLoaded_Stack_OutputSend(true);
        }
    }
    void OpenAvril::Data_Control::Push_To_Stack_Of_Input(OpenAvril::Data* data)
    {
        class OpenAvril::Input* inputBuffer = data->Get_doubleBuffer_Input_BACK();
        std::vector<class OpenAvril::Input*>* inputStackt = data->Get_ptr_stack_Of_InputPraise();
        inputStackt->push_back(inputBuffer);
        if (sizeof(inputStackt) < 2)
        {
            Set_flag_isLoaded_Stack_InputAction(false);
        }
        else
        {
            Set_flag_isLoaded_Stack_InputAction(true);
        }
    }
    void OpenAvril::Data_Control::Push_To_Stack_Of_Output(OpenAvril::Data* data, __int8 concurrentThreadID)
    {
        class OpenAvril::Output* referenceForCore = data->Get_Item_Of_buffer_Output_ReferenceForThread(concurrentThreadID);
        std::vector<class OpenAvril::Output*>* outputStack = data->Get_ptr_stack_Of_OutputPraise();
        outputStack->push_back(referenceForCore);
        if (sizeof(outputStack) < 2)
        {
            Set_flag_isLoaded_Stack_OutputSend(false);
        }
        else
        {
            Set_flag_isLoaded_Stack_OutputSend(true);
        }
    }
    void OpenAvril::Data_Control::Store_Input_To_GameInstance(OpenAvril::Data* data, std::vector<class OpenAvril::Input*>* stack)
    {
        OpenAvril::Input* input = stack->at(1);
        switch (input->GetPraiseEventId())
        {
        case 0:
            break;

        case 1:
            OpenAvril::Praise1_Input* subset = (OpenAvril::Praise1_Input*)input->Get_InputBuffer_Subset();
            data->Get_ptr_GameInstance()->Get_player(input->Get_playerId())->Set_mouse_Position_X(subset->Get_mouse_X());
            data->Get_ptr_GameInstance()->Get_player(input->Get_playerId())->Set_mouse_Position_Y(subset->Get_mouse_Y());
            break;
        }
    }
    void OpenAvril::Data_Control::Store_Output_To_GameInstance(OpenAvril::Data* data, std::vector<class OpenAvril::Output*>* stack)
    {
        OpenAvril::Output* output = stack->at(1);
        switch (output->Get_out_praiseEventId())
        {
        case 0:
            break;

        case 1:
            OpenAvril::Praise1_Output* subset = (OpenAvril::Praise1_Output*)output->Get_praiseOutputBuffer_Subset();
            data->Get_ptr_GameInstance()->Get_player(output->Get_out_playerId())->Set_front(subset->GetFowards());
            data->Get_ptr_GameInstance()->Get_player(output->Get_out_playerId())->Set_right(subset->GetRight());
            data->Get_ptr_GameInstance()->Get_player(output->Get_out_playerId())->Set_up(subset->GetUp());
            break;
        }
    }
    // get.
    bool OpenAvril::Data_Control::Get_flag_isLoaded_Stack_InputAction()
    {
        return _flag_isLoaded_Stack_InputAction;
    }
    bool OpenAvril::Data_Control::Get_flag_isLoaded_Stack_OutputSend()
    {
        return _flag_isLoaded_Stack_OutputSend;
    }
    __int8 OpenAvril::Data_Control::Get_STATE_Of_WRITE_For_doubleBuffer_Input()
    {
        return BoolToInt(_side_To_Write_For_doubleBuffer_Input);
    }
    __int8 OpenAvril::Data_Control::Get_STATE_Of_WRITE_For_doubleBuffer_Output()
    {
        return BoolToInt(_side_To_Write_For_doubleBuffer_Input);
    }

// private.
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
    void OpenAvril::Data_Control::Create_flag_isLoaded_Stack_InputAction()
    {
        Set_flag_isLoaded_Stack_InputAction(false);
    }
    void OpenAvril::Data_Control::Create_flag_isLoaded_Stack_OutputSend()
    {
        Set_flag_isLoaded_Stack_OutputSend(false);
    }
    void OpenAvril::Data_Control::Create_side_To_Write_For_doubleBuffer_Input()
    {
        _side_To_Write_For_doubleBuffer_Input = bool(false);
    }
    void OpenAvril::Data_Control::Create_side_To_Write_For_doubleBuffer_Output()
    {
        _side_To_Write_For_doubleBuffer_Output = bool(false);
    }
    // get.
    // set.
    void OpenAvril::Data_Control::Set_flag_isLoaded_Stack_InputAction(bool value)
    {
        _flag_isLoaded_Stack_InputAction = value;
    }
    void OpenAvril::Data_Control::Set_flag_isLoaded_Stack_OutputSend(bool value)
    {
        _flag_isLoaded_Stack_OutputSend = value;
    }
    void OpenAvril::Data_Control::Set_STATE_Of_WRITE_For_doubleBuffer_Input(bool value)
    {
        _side_To_Write_For_doubleBuffer_Input = value;
    }
    void OpenAvril::Data_Control::Set_STATE_Of_WRITE_For_doubleBuffer_Output(bool value)
    {
        _side_To_Write_For_doubleBuffer_Output = value;
    }