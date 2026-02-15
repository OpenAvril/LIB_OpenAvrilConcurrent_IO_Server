#pragma once

namespace OpenAvril
{
    class Data_Control
    {
// classes.

// registers.

    public:
// constructor.
        Data_Control();

// destructor.
        virtual ~Data_Control();

// public.
        void Flip_Input_DoubleBuffer();
        void Flip_Output_DoubleBuffer();
        void Pop_From_Stack_Of_Input(class OpenAvril::Data* obj, __int8 concurrentThreadID);
        void Pop_From_Stack_Of_Output(class OpenAvril::Data* obj);
        void Push_To_Stack_Of_Input(class OpenAvril::Data* obj);
        void Push_To_Stack_Of_Output(class OpenAvril::Data* obj, __int8 concurrentThreadID);
        void Store_Input_To_GameInstance(class OpenAvril::Data* obj, std::vector<class OpenAvril::Input*>* stack);
        void Store_Output_To_GameInstance(class OpenAvril::Data* obj, std::vector<class OpenAvril::Output*>* stack);
    // get.
        bool Get_flag_isLoaded_Stack_InputAction();
        bool Get_flag_isLoaded_Stack_OutputSend();
        __int8 Get_STATE_Of_WRITE_For_doubleBuffer_Input();
        __int8 Get_STATE_Of_WRITE_For_doubleBuffer_Output();
    // set.

    private:
// private.
        __int8 BoolToInt(bool bufferSide);
        void Create_flag_isLoaded_Stack_InputAction();
        void Create_flag_isLoaded_Stack_OutputSend();
        void Create_side_To_Write_For_doubleBuffer_Input();
        void Create_side_To_Write_For_doubleBuffer_Output();
    // get.
    // set.
        void Set_flag_isLoaded_Stack_InputAction(bool value);
        void Set_flag_isLoaded_Stack_OutputSend(bool value);
        void Set_STATE_Of_WRITE_For_doubleBuffer_Input(bool value);
        void Set_STATE_Of_WRITE_For_doubleBuffer_Output(bool value);
    };
}