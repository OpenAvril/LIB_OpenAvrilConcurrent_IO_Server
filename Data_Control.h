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
        void flip_Input_DoubleBuffer();
        void flip_Output_DoubleBuffer();
        void Pop_From_Stack_Of_Input(class OpenAvril::Data* obj, __int8 concurrentThreadID);
        void pop_From_Stack_Of_Output(class OpenAvril::Data* obj);
        void push_To_Stack_Of_Input(class OpenAvril::Data* obj);
        void push_To_Stack_Of_Output(class OpenAvril::Data* obj, __int8 concurrentThreadID);
        void Store_Input_To_GameInstance(class OpenAvril::Data* obj, std::vector<class OpenAvril::Input*>* stack);
        void Store_Output_To_GameInstance(class OpenAvril::Data* obj, std::vector<class OpenAvril::Output*>* stack);
    // get.
        bool get_flag_isLoaded_Stack_InputAction();
        bool get_flag_isLoaded_Stack_OutputSend();
        __int8 get_STATE_Of_READ_For_list_Of_doubleBuffer_Input();
        __int8 get_STATE_Of_READ_For_list_Of_doubleBuffer_Output();
        __int8 get_STATE_Of_WRITE_For_list_Of_doubleBuffer_Input();
        __int8 get_STATE_Of_WRITE_For_list_Of_doubleBuffer_Output();
    // set.
        void set_flag_isLoaded_Stack_InputAction(bool value);
        void set_flag_isLoaded_Stack_OutputSend(bool value);

    private:
// private.
        __int8 BoolToInt(bool bufferSide);
        void create_flag_isLoaded_Stack_InputAction();
        void create_flag_isLoaded_Stack_OutputSend();
        void create_side_To_Write_For_list_Of_doubleBuffer_Input();
        void create_side_To_Write_For_list_Of_doubleBuffer_Output();
    // get.
    // set.
        void set_STATE_Of_WRITE_For_list_Of_doubleBuffer_Input(bool value);
        void set_STATE_Of_WRITE_For_list_Of_doubleBuffer_Output(bool value);
    };
}