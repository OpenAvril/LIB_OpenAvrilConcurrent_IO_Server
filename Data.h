#pragma once

namespace OpenAvrilConcurrency
{
    class Data
    {
    public:
// constructor.
        Data();

// destructor.
        virtual ~Data();

// public.
    // dynamic.
        void initialise_Control();
        void initialise_Item_On_array_Of_ptr_array_Of_buffer_Input_ReferenceForThread(uint8_t concurrentThreadID, class Input* newINITIALISED_Input);
        void initialise_Item_On_array_Of_ptr_array_Of_buffer_Output_ReferenceForThread(uint8_t concurrentThreadID, class Output* newINITIALISED_Output);
        void initialise_Item_On_array_Of_doubleBuffer_Input(uint8_t sideRW, class OpenAvrilConcurrency::Input* newINITIALISED_Input);
        void initialise_Item_On_array_Of_doubleBuffer_Output(uint8_t sideRW, class OpenAvrilConcurrency::Output* newINITIALISED_Output);
        void initialise_Item_On_vector_Of_stack_Of_InputPraise(uint8_t slot, class OpenAvrilConcurrency::Input* newINITIALISED_Input);
        void initialise_Item_On_vector_Of_stack_Of_OutputPraise(uint8_t slot, class OpenAvrilConcurrency::Output* newINITIALISED_Output);
        // get.
        class Data_Control* get_ptr_Data_Control();
        class Input* get_ptr_Item_array_Of_doubleBuffer_Input_READ(class Framework_Server* obj);
        class Input* get_ptr_Item_array_Of_doubleBuffer_Input_WRITE(class Framework_Server* obj);
        class Output* get_ptr_Item_array_Of_doubleBuffer_Output_READ(class Framework_Server* obj);
        class Output* get_ptr_Item_array_Of_doubleBuffer_Output_WRITE(class Framework_Server* obj);
        class Input* get_ptr_Item_Of_list_Of_ptr_array_Of_buffer_Input_ReferenceForThread(uint8_t threadID);
        class Output* get_ptr_Item_Of_list_Of_ptr_array_Of_buffer_Output_ReferenceForThread(uint8_t threadID);
        class Input* get_ptr_Item_On_vector_Of_stack_Of_InputPraise(uint8_t slot);
        class Output* get_ptr_Item_On_vector_Of_stack_Of_OutputPraise(uint8_t slot);
        class std::array<class OpenAvrilConcurrency::Input*, 3>* get_ptr_array_Of_buffer_Input_ReferenceForThread();
        class std::array<class OpenAvrilConcurrency::Output*, 3>* get_ptr_array_Of_buffer_Output_ReferenceForThread();
        class std::vector<class OpenAvrilConcurrency::Input*>* get_ptr_vector_Of_stack_Of_InputPraise();
        class std::vector<class OpenAvrilConcurrency::Output*>* get_ptr_vector_Of_stack_Of_OutputPraise();
        class User_Input* get_ptr_User_Input();
        class User_Output* get_ptr_User_Output();
        // set.
    // static.
        // get.
        // set.

    private:
// private.
    // dynamic.
        // get.
        // set.
    // static.
        static void stat_create_ptr_array_Of_doubleBuffer_Input(Input* newDEFAULT_Input);
        static void stat_create_ptr_array_Of_doubleBuffer_Output(Output* newDEFAULT_Input);
        static void stat_create_ptr_Data_Control();
        static void stat_create_ptr_array_Of_buffer_Input_ReferenceForThread(Input* newDEFAULT_Input);
        static void stat_create_ptr_array_Of_buffer_Output_ReferenceForThread(Output* newDEFAULT_Output);
        static void stat_create_ptr_vector_Of_stack_Of_InputPraise(Input* newDEFAULT_Input);
        static void stat_create_ptr_vector_Of_stack_Of_OutputPraise(Output* newDEFAULT_Output);
        static void stat_create_ptr_User_Input();
        static  void stat_create_ptr_User_Output();
        // get.
        static class Input* stat_get_ptr_Item_array_Of_doubleBuffer_Input_READ(uint8_t side);
        static class Input* stat_get_ptr_Item_array_Of_doubleBuffer_Input_WRITE(uint8_t side);
        static class Output* stat_get_ptr_Item_array_Of_doubleBuffer_Output_READ(uint8_t side);
        static class Output* stat_get_ptr_Item_array_Of_doubleBuffer_Output_WRITE(uint8_t side);
        static class Data_Control* stat_get_ptr_Data_Control();
        static std::array<class OpenAvrilConcurrency::Input*, 3>* stat_get_ptr_array_Of_buffer_Input_ReferenceForThread();//NUMBER OF CONCURRENT THREADS.
        static std::array<class OpenAvrilConcurrency::Output*, 3>* stat_get_ptr_array_Of_buffer_Output_ReferenceForThread();//NUMBER OF CONCURRENT THREADS.
        static std::array<class OpenAvrilConcurrency::Input*, 2>* stat_get_ptr_array_Of_doubleBuffer_Input();
        static std::array<class OpenAvrilConcurrency::Output*, 2>* stat_get_ptr_array_Of_doubleBuffer_Output();
        static class Input* stat_get_ptr_Item_Of_list_Of_ptr_array_Of_buffer_Input_ReferenceForThread(uint8_t threadID);
        static  class Output* stat_get_ptr_Item_Of_list_Of_ptr_array_Of_buffer_Output_ReferenceForThread(uint8_t threadID);
        static class Input* stat_get_ptr_Item_On_vector_Of_stack_Of_InputPraise(uint8_t slot);
        static class Output* stat_get_ptr_Item_On_vector_Of_stack_Of_OutputPraise(uint8_t slot);
        static std::vector<class OpenAvrilConcurrency::Input*>* stat_get_ptr_vector_Of_stack_Of_InputPraise();
        static std::vector<class OpenAvrilConcurrency::Output*>* stat_get_ptr_vector_Of_stack_Of_OutputPraise();
        static class User_Input* stat_get_ptr_User_Input();
        static class User_Output* stat_get_ptr_User_Output();
        // set.
        static void stat_set_ptr_Item_array_Of_doubleBuffer_Input_WRITE(uint8_t side, class Input* newClass);
        static void stat_set_ptr_Item_array_Of_doubleBuffer_Output_WRITE(uint8_t side, class Output* newClass);
        static void stat_set_ptr_Item_Of_list_Of_ptr_array_Of_buffer_Input_ReferenceForThread(uint8_t concurrentThreadID, class Input* newCLass);
        static void stat_set_ptr_Item_Of_list_Of_ptr_array_Of_buffer_Output_ReferenceForThread(uint8_t concurrentThreadID, class Output* newCLass);
        static void stat_set_ptr_Item_On_vector_Of_stack_Of_InputPraise(uint8_t slot, class Input* newCLass);
        static void stat_set_ptr_Item_On_vector_Of_stack_Of_OutputPraise(uint8_t slot, class Output* newCLass);
    // pointers.
        // registers.
        static std::array<class Input*, 3>* _ptr_array_Of_buffer_Input_ReferenceForThread;//NUMBER OF CONCURRENT THREADS.
        static std::array<class Output*, 3>* _ptr_array_Of_buffer_Output_ReferenceForThread;//NUMBER OF CONCURRENT THREADS.
        static std::array<class Input*, 2>* _ptr_array_Of_doubleBuffer_Input;
        static std::array<class Output*, 2>* _ptr_array_Of_doubleBuffer_Output;
        static std::vector<class Input*>* _ptr_vector_Of_stack_Of_InputPraise;
        static std::vector<class Output*>* _ptr_vector_Of_stack_Of_OutputPraise;
    };
}
