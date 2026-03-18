#pragma once

namespace OpenAvrilConcurrency
{
    class Data_Control
    {
    public:
        Data_Control();
        virtual ~Data_Control();
        uint8_t app_FUNCT_Bool_To_Int(bool bufferSide);
        void app_FUNCT_Flip_Input_DoubleBuffer();
        void app_FUNCT_Flip_Output_DoubleBuffer();
        void app_FUNCT_pop_From_Stack_Of_Input(class Framework_Server* obj, uint8_t concurrentThreadID);
        void app_FUNCT_pop_From_Stack_Of_Output(class Framework_Server* obj);
        void app_FUNCT_push_To_STACK_Of_Input(class Framework_Server* obj);
        void app_FUNCT_push_To_STACK_Of_Output(class Framework_Server* obj, uint8_t concurrentThreadID);
        void app_REG_initialise_ptr_flag_isLoaded_Stack_InputAction(bool newINITIALISED_Bool);
        void app_REG_initialise_ptr_flag_isLoaded_Stack_OutputSend(bool newINITIALISED_Bool);
        void app_REG_initialise_ptr_side_To_Write_For_array_Of_doubleBuffer_Input(bool newINITIALISED_Bool);
        void app_REG_initialise_ptr_side_To_Write_For_array_Of_doubleBuffer_Output(bool newINITIALISED_Bool);
        bool dyn_REG_get_Item_flag_isLoaded_Stack_InputAction();
        bool dyn_REG_get_Item_flag_isLoaded_Stack_OutputSend();
        bool dyn_REG_get_Item_side_To_Write_For_array_Of_doubleBuffer_Input();
        bool dyn_REG_get_Item_side_To_Write_For_array_Of_doubleBuffer_Output();
        void dyn_REG_set_ptr_flag_isLoaded_Stack_InputAction(bool value);
        void dyn_REG_set_ptr_flag_isLoaded_Stack_OutputSend(bool value);
        void dyn_REG_set_ptr_side_To_Write_For_array_Of_doubleBuffer_Input(bool new_Bool);
        void dyn_REG_set_ptr_side_To_Write_For_array_Of_doubleBuffer_Output(bool new_Bool);
        static bool* _stat_REG_ptr_flag_isLoaded_Stack_InputAction;
        static bool* _stat_REG_ptr_flag_isLoaded_Stack_OutputSend;
        static bool* _stat_REG_ptr_side_To_Write_For_array_Of_doubleBuffer_Input;
        static bool* _Stat_REG_ptr_side_To_Write_For_array_Of_doubleBuffer_Output;
        static void stat_REG_create_ptr_flag_isLoaded_Stack_InputAction(bool* newINITIALISED_Bool);
        static void stat_REG_create_ptr_flag_isLoaded_Stack_OutputSend(bool* newINITIALISED_Bool);
        static void stat_REG_create_ptr_side_To_Write_For_array_Of_doubleBuffer_Input(bool* newINITIALISED_Bool);
        static void stat_REG_create_ptr_side_To_Write_For_array_Of_doubleBuffer_Output(bool* newINITIALISED_Bool);
        static bool* stat_REG_get_ptr_flag_isLoaded_Stack_InputAction();
        static bool* stat_REG_get_ptr_flag_isLoaded_Stack_OutputSend();
        static bool* stat_REG_get_ptr_side_To_Write_For_array_Of_doubleBuffer_Input();
        static bool* stat_REG_get_ptr_side_To_Write_For_array_Of_doubleBuffer_Output();
        static void stat_REG_set_Item_flag_isLoaded_Stack_InputAction(bool new_Bool);
        static void stat_REG_set_Item_flag_isLoaded_Stack_OutputSend(bool new_Bool);
        static void stat_REG_set_Item_side_To_Write_For_array_Of_doubleBuffer_Input(bool new_Bool);
        static void stat_REG_set_Item_side_To_Write_For_array_Of_doubleBuffer_Output(bool new_Bool);
    };
}