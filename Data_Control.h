#pragma once

namespace OpenAvrilConcurrency
{
    class Data_Control
    {
    public:
// constructor.
        Data_Control();

// destructor.
        virtual ~Data_Control();

// public.
    // dynamic.
        uint8_t boolToInt(bool bufferSide);
        void flip_Input_DoubleBuffer(class Data* obj);
        void flip_Output_DoubleBuffer(class Data* obj);
        void initialise_REG_ptr_flag_isLoaded_Stack_InputAction(bool* newINITIALISED_Bool);
        void initialise_REG_ptr_flag_isLoaded_Stack_OutputSend(bool* newINITIALISED_Bool);
        void initialise_REG_ptr_side_To_Write_For_array_Of_doubleBuffer_Input(uint8_t side, bool* newINITIALISED_Bool);
        void initialise_REG_ptr_side_To_Write_For_array_Of_doubleBuffer_Output(uint8_t side, bool* newINITIALISED_Bool);
        void pop_From_Stack_Of_Input(class Data* data, uint8_t concurrentThreadID);
        void pop_From_Stack_Of_Output(class Framework_Server* obj, Data* data);
        void push_To_Stack_Of_Input(class Framework_Server* obj, class Data* data);
        void push_To_Stack_Of_Output(class Data* data, uint8_t concurrentThreadID);
        // get.
        bool get_REG_Item_flag_isLoaded_Stack_InputAction();
        bool get_REG_Item_flag_isLoaded_Stack_OutputSend();
        bool get_REG_Item_side_To_Write_For_array_Of_doubleBuffer_Input();
        bool get_REG_Item_side_To_Write_For_array_Of_doubleBuffer_Output();
        // set.
        void set_REG_ptr_flag_isLoaded_Stack_InputAction(bool value);
        void set_REG_ptr_flag_isLoaded_Stack_OutputSend(bool value);
        void set_REG_ptr_side_To_Write_For_array_Of_doubleBuffer_Input(uint8_t side, bool* new_Bool);
        void set_REG_ptr_side_To_Write_For_array_Of_doubleBuffer_Output(uint8_t side, bool* new_Bool);
    // static.
        // get.
        // set.

    private:
// private.
    // dynamic.
        // get.
        // set.
    // static.
        // classes.
            // create.
            // get.
            // set.
        // registers.
        static bool* _stat_REG_ptr_flag_isLoaded_Stack_InputAction;
        static bool* _stat_REG_ptr_flag_isLoaded_Stack_OutputSend;
        static bool* _stat_REG_ptr_side_To_Write_For_array_Of_doubleBuffer_Input;
        static bool* _Stat_REG_ptr_side_To_Write_For_array_Of_doubleBuffer_Output;
            // create.
        static void stat_REG_create_ptr_flag_isLoaded_Stack_InputAction(bool* newINITIALISED_Bool);
        static void stat_REG_create_ptr_flag_isLoaded_Stack_OutputSend(bool* newINITIALISED_Bool);
        static void stat_REG_create_ptr_side_To_Write_For_array_Of_doubleBuffer_Input(bool* newINITIALISED_Bool);
        static void stat_REG_create_ptr_side_To_Write_For_array_Of_doubleBuffer_Output(bool* newINITIALISED_Bool);
            // get.
        static bool stat_REG_get_Item_flag_isLoaded_Stack_InputAction();
        static bool stat_REG_get_Item_flag_isLoaded_Stack_OutputSend();
        static bool stat_REG_get_Item_side_To_Write_For_array_Of_doubleBuffer_Input();
        static bool stat_REG_get_Item_side_To_Write_For_array_Of_doubleBuffer_Output();
        static bool* stat_REG_get_ptr_flag_isLoaded_Stack_InputAction();
        static bool* stat_REG_get_ptr_flag_isLoaded_Stack_OutputSend();
        static bool* stat_REG_get_ptr_side_To_Write_For_array_Of_doubleBuffer_Input();
        static bool* stat_REG_get_ptr_side_To_Write_For_array_Of_doubleBuffer_Output();
            // set.
        static void stat_REG_set_Item_flag_isLoaded_Stack_InputAction(bool* newPtr);
        static void stat_REG_set_Item_flag_isLoaded_Stack_OutputSend(bool* newPtr);
        static void stat_REG_set_Item_side_To_Write_For_array_Of_doubleBuffer_Input(bool* newvalue);
        static void stat_REG_set_Item_side_To_Write_For_array_Of_doubleBuffer_Output(bool* newvalue);
    };
}