#pragma once
namespace OpenAvrilConcurrency
{
    class Data
    {
    public:
// public.
    // constructor.
        Data();

    // destructor.
        virtual ~Data();

    // dynamic.
        // create.
        void app_FUNCT_initialise_ptr_Input_Control();
        void app_initialise_REG_Item_On_array_Of_ptr_array_Of_buffer_Input_ReferenceForThread(uint8_t concurrentThreadID, class Input* newINITIALISED_Input);
        void app_initialise_REG_Item_On_array_Of_ptr_array_Of_buffer_Output_ReferenceForThread(uint8_t concurrentThreadID, class Output* newINITIALISED_Output);
        void app_initialise_REG_Item_On_array_Of_doubleBuffer_Input(class Framework_Server* obj, class Input* newINITIALISED_Input);
        void app_initialise_REG_Item_On_array_Of_doubleBuffer_Output(class Framework_Server* obj, class Output* newINITIALISED_Output);
        void app_initialise_REG_Item_On_vector_Of_stack_Of_InputPraise(uint8_t slotID, class Input* newINITIALISED_Input);
        void app_initialise_REG_Item_On_vector_Of_stack_Of_OutputPraise(uint8_t slotID, class Output* newINITIALISED_Output);
        // get.
        class Data_Control* dyn_CLASS_get_ptr_Data_Control();
        class User_Input* dyn_CLASS_get_ptr_User_Input();
        class User_Output* dyn_CLASS_get_ptr_User_Output();
        class Input* dyn_REG_get_ptr_Item_array_Of_doubleBuffer_Input_READ(class Framework_Server* obj);
        class Input* dyn_REG_get_ptr_Item_array_Of_doubleBuffer_Input_WRITE(class Framework_Server* obj);
        class Output* dyn_REG_get_ptr_Item_array_Of_doubleBuffer_Output_READ(class Framework_Server* obj);
        class Output* dyn_REG_get_ptr_Item_array_Of_doubleBuffer_Output_WRITE(class Framework_Server* obj);
        class Input* dyn_REG_get_ptr_Item_Of_list_Of_ptr_array_Of_buffer_Input_ReferenceForThread(uint8_t concurrentThreadID);
        class Output* dyn_REG_get_ptr_Item_Of_list_Of_ptr_array_Of_buffer_Output_ReferenceForThread(uint8_t concurrentThreadID);
        class Input* dyn_REG_get_ptr_Item_On_vector_Of_stack_Of_InputPraise(uint8_t slot);
        class Output* dyn_REG_get_ptr_Item_On_vector_Of_stack_Of_OutputPraise(uint8_t slot);
        // set.
        void set_REG_ptr_Item_array_Of_doubleBuffer_Input_READ(class Framework_Server* obj, class Input* newClass);
        void set_REG_ptr_Item_array_Of_doubleBuffer_Input_WRITE(class Framework_Server* obj, class Input* newClass);
        void set_REG_ptr_Item_array_Of_doubleBuffer_Output_READ(class Framework_Server* obj, class Output* newClass);
        void set_REG_ptr_Item_array_Of_doubleBuffer_Output_WRITE(class Framework_Server* obj, class Output* newClass);
        void set_REG_ptr_Item_Of_list_Of_ptr_array_Of_buffer_Input_ReferenceForThread(uint8_t concurrentThreadID, class Input* newClass);
        void set_REG_ptr_Item_Of_list_Of_ptr_array_Of_buffer_Output_ReferenceForThread(uint8_t concurrentThreadID, class Output* newClass);
        void set_REG_ptr_Item_On_vector_Of_stack_Of_InputPraise(uint8_t slot, class Input* newClass);
        void set_REG_ptr_Item_On_vector_Of_stack_Of_OutputPraise(uint8_t slot, class Output* newClass);
    // static.
        // create.
        // get.
        // set.

// private.
    // dynamic.
        // classes.
            // create.
            // get.
            // set.
        // registers.
            // create.
            // get.
            // set.
    // static.
        // classes.
        static class Data_Control* _stat_CLASS_ptr_Data_Control;
        static class User_Input* _stat_CLASS_ptr_User_Input;
        static class User_Output* _stat_CLASS_ptr_User_Output;
            // create.
        static void stat_CLASS_create_ptr_Data_Control();
        static void stat_CLASS_create_ptr_User_Input();
        static  void stat_CLASS_create_ptr_User_Output();
            // get.
        static class Data_Control* stat_CLASS_get_ptr_Data_Control();
        static class User_Input* stat_CLASS_get_ptr_User_Input();
        static class User_Output* stat_CLASS_get_ptr_User_Output();
            // set.
        // registers.
        static std::array<class Input*, 3>* _stat_REG_ptr_array_Of_buffer_Input_ReferenceForThread;//NUMBER OF CONCURRENT THREADS.
        static std::array<class Output*, 3>* _stat_REG_ptr_array_Of_buffer_Output_ReferenceForThread;//NUMBER OF CONCURRENT THREADS.
        static std::array<class Input*, 2>* _stat_REG_ptr_array_Of_doubleBuffer_Input;
        static std::array<class Output*, 2>* _stat_REG_ptr_array_Of_doubleBuffer_Output;
        static std::vector<class Input*>* _stat_REG_ptr_vector_Of_stack_Of_InputPraise;
        static std::vector<class Output*>* _stat_REG_ptr_vector_Of_stack_Of_OutputPraise;
            // create.
        static void stat_REG_create_ptr_array_Of_buffer_Input_ReferenceForThread(class Input* newDEFAULT_Input);
        static void stat_REG_create_ptr_array_Of_buffer_Output_ReferenceForThread(class Output* newDEFAULT_Output);
        static void stat_REG_create_ptr_array_Of_doubleBuffer_Input(class Input* newDEFAULT_Input);
        static void stat_REG_create_ptr_array_Of_doubleBuffer_Output(class Output* newDEFAULT_Input);
        static void stat_REG_create_ptr_vector_Of_stack_Of_InputPraise(class Input* newDEFAULT_Input);
        static void stat_REG_create_ptr_vector_Of_stack_Of_OutputPraise(class Output* newDEFAULT_Output);
            // get.
        static std::array<class Input*, 3>* stat_REG_get_ptr_Array_Of_buffer_Input_ReferenceForThread();//NUMBER OF CONCURRENT THREADS.
        static std::array<class Output*, 3>* stat_REG_get_ptr_array_Of_buffer_Output_ReferenceForThread();//NUMBER OF CONCURRENT THREADS.
        static std::array<class Input*, 2>* stat_get_REG_ptr_array_Of_doubleBuffer_Input();
        static std::array<class Output*, 2>* stat_get_REG_ptr_array_Of_doubleBuffer_Output();
        static std::vector<class Input*>* stat_REG_get_ptr_vector_Of_stack_Of_InputPraise();
        static std::vector<class Output*>* stat_REG_get_ptr_vector_Of_stack_Of_OutputPraise();
            // set.
        static void stat_REG_set_Item_On_Array_Of_buffer_Input_ReferenceForThread(uint8_t concurrentThreadID, class Input* newClass);
        static void stat_REG_set_Item_On_Array_Of_buffer_Output_ReferenceForThread(uint8_t concurrentThreadID, class Output* newClass);
        static void stat_REG_set_Item_On_Array_Of_doubleBuffer_Input_READ(class Framework_Server* obj, class Input* newClass);
        static void stat_REG_set_Item_On_Array_Of_doubleBuffer_Input_WRITE(class Framework_Server* obj, class Input* newClass);
        static void stat_REG_set_Item_On_Array_Of_doubleBuffer_Output_READ(class Framework_Server* obj, class Output* newClass);
        static void stat_REG_set_Item_On_Array_Of_doubleBuffer_Output_WRITE(class Framework_Server* obj, class Output* newClass);
        static void stat_REG_set_Item_On_Vector_Of_stack_Of_InputPraise(uint8_t slot, class Input* newClass);
        static void stat_REG_set_Item_On_Vector_Of_stack_Of_OutputPraise(uint8_t slot, class Output* newCLass);
    };
}
