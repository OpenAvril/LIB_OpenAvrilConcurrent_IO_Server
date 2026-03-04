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
        void initialise_CLASS_Control();
        void initialise_REG_Item_On_array_Of_ptr_array_Of_buffer_Input_ReferenceForThread(uint8_t concurrentThreadID, class Input* newINITIALISED_Input);
        void initialise_REG_Item_On_array_Of_ptr_array_Of_buffer_Output_ReferenceForThread(uint8_t concurrentThreadID, class Output* newINITIALISED_Output);
        void initialise_REG_Item_On_array_Of_doubleBuffer_Input(uint8_t sideRW, class OpenAvrilConcurrency::Input* newINITIALISED_Input);
        void initialise_REG_Item_On_array_Of_doubleBuffer_Output(uint8_t sideRW, class OpenAvrilConcurrency::Output* newINITIALISED_Output);
        void initialise_REG_Item_On_vector_Of_stack_Of_InputPraise(uint8_t slot, class OpenAvrilConcurrency::Input* newINITIALISED_Input);
        void initialise_REG_Item_On_vector_Of_stack_Of_OutputPraise(uint8_t slot, class OpenAvrilConcurrency::Output* newINITIALISED_Output);
        // get.
        class Data_Control* get_CLASS_ptr_Data_Control();
        class User_Input* get_CLASS_ptr_User_Input();
        class User_Output* get_CLASS_ptr_User_Output();
        class Input* get_REG_ptr_Item_array_Of_doubleBuffer_Input_READ(class Framework_Server* obj);
        class Input* get_REG_ptr_Item_array_Of_doubleBuffer_Input_WRITE(class Framework_Server* obj);
        class Output* get_REG_ptr_Item_array_Of_doubleBuffer_Output_READ(class Framework_Server* obj);
        class Output* get_REG_ptr_Item_array_Of_doubleBuffer_Output_WRITE(class Framework_Server* obj);
        class Input* get_REG_ptr_Item_Of_list_Of_ptr_array_Of_buffer_Input_ReferenceForThread(uint8_t threadID);
        class Output* get_REG_ptr_Item_Of_list_Of_ptr_array_Of_buffer_Output_ReferenceForThread(uint8_t threadID);
        class Input* get_REG_ptr_Item_On_vector_Of_stack_Of_InputPraise(uint8_t slot);
        class Output* get_REG_ptr_Item_On_vector_Of_stack_Of_OutputPraise(uint8_t slot);
        static std::array<class OpenAvrilConcurrency::Input*, 3>* get_REG_ptr_array_Of_buffer_Input_ReferenceForThread();//NUMBER OF CONCURRENT THREADS.
        static std::array<class OpenAvrilConcurrency::Output*, 3>* get_REG_ptr_array_Of_buffer_Output_ReferenceForThread();//NUMBER OF CONCURRENT THREADS.
        static std::array<class OpenAvrilConcurrency::Input*, 2>* get_REG_ptr_array_Of_doubleBuffer_Input();
        static std::array<class OpenAvrilConcurrency::Output*, 2>* get_REG_ptr_array_Of_doubleBuffer_Output();
        static std::vector<class OpenAvrilConcurrency::Input*>* get_REG_ptr_vector_Of_stack_Of_InputPraise();
        static std::vector<class OpenAvrilConcurrency::Output*>* get_REG_ptr_vector_Of_stack_Of_OutputPraise();
        // set.
        void set_REG_ptr_Item_array_Of_doubleBuffer_Input_READ(class Framework_Server* obj, class Input* newClass);
        void set_REG_ptr_Item_array_Of_doubleBuffer_Input_WRITE(class Framework_Server* obj, class Input* newClass);
        void set_REG_ptr_Item_array_Of_doubleBuffer_Output_READ(class Framework_Server* obj, class Output* newClass);
        void set_REG_ptr_Item_array_Of_doubleBuffer_Output_WRITE(class Framework_Server* obj, class Output* newClass);
        void set_REG_ptr_Item_Of_list_Of_ptr_array_Of_buffer_Input_ReferenceForThread(uint8_t threadID, class Input* newClass);
        void set_REG_ptr_Item_Of_list_Of_ptr_array_Of_buffer_Output_ReferenceForThread(uint8_t threadID, class Output* newClass);
        void set_REG_ptr_Item_On_vector_Of_stack_Of_InputPraise(uint8_t slot, class Input* newClass);
        void set_REG_ptr_Item_On_vector_Of_stack_Of_OutputPraise(uint8_t slot, class Output* newClass);

    private:
// private.
    // dynamic.
        // get.
        // set.
    // static.
        // classes.
            // create.
        static void initialise_Control();
        static void stat_CLASS_create_ptr_Data_Control();
        static void stat_CLASS_create_ptr_User_Input();
        static  void stat_CLASS_create_ptr_User_Output();
            // get.
        static class Data_Control* stat_CLASS_get_ptr_Data_Control();
        static class User_Input* stat_CLASS_get_ptr_User_Input();
        static class User_Output* stat_CLASS_get_ptr_User_Output();
            // set.
        // registers.
        static std::array<class Input*, 3>* _REG_stat_ptr_array_Of_buffer_Input_ReferenceForThread;//NUMBER OF CONCURRENT THREADS.
        static std::array<class Output*, 3>* _REG_stat_ptr_array_Of_buffer_Output_ReferenceForThread;//NUMBER OF CONCURRENT THREADS.
        static std::array<class Input*, 2>* _REG_stat_ptr_array_Of_doubleBuffer_Input;
        static std::array<class Output*, 2>* _REG_stat_ptr_array_Of_doubleBuffer_Output;
        static std::vector<class Input*>* _REG_stat_ptr_vector_Of_stack_Of_InputPraise;
        static std::vector<class Output*>* _REG_stat_ptr_vector_Of_stack_Of_OutputPraise;
            // create.
        static void stat_REG_create_ptr_array_Of_buffer_Input_ReferenceForThread(Input* newDEFAULT_Input);
        static void stat_REG_create_ptr_array_Of_buffer_Output_ReferenceForThread(Output* newDEFAULT_Output);
        static void stat_REG_create_ptr_array_Of_doubleBuffer_Input(Input* newDEFAULT_Input);
        static void stat_REG_create_ptr_array_Of_doubleBuffer_Output(Output* newDEFAULT_Input);
        static void stat_REG_create_ptr_vector_Of_stack_Of_InputPraise(Input* newDEFAULT_Input);
        static void stat_REG_create_ptr_vector_Of_stack_Of_OutputPraise(Output* newDEFAULT_Output);
            // get.
        static class Input* stat_REG_get_ptr_Item_Of_list_Of_ptr_array_Of_buffer_Input_ReferenceForThread(uint8_t threadID);
        static class Output* stat_REG_get_ptr_Item_Of_list_Of_ptr_array_Of_buffer_Output_ReferenceForThread(uint8_t threadID);
        static class Input* stat_REG_get_ptr_Item_array_Of_doubleBuffer_Input_READ(uint8_t side);
        static class Input* stat_REG_get_ptr_Item_array_Of_doubleBuffer_Input_WRITE(uint8_t side);
        static class Output* stat_REG_get_ptr_Item_array_Of_doubleBuffer_Output_READ(uint8_t side);
        static class Output* stat_REG_get_ptr_Item_array_Of_doubleBuffer_Output_WRITE(uint8_t side);
        static class Input* stat_REG_get_ptr_Item_On_vector_Of_stack_Of_InputPraise(uint8_t slot);
        static class Output* stat_REG_get_ptr_Item_On_vector_Of_stack_Of_OutputPraise(uint8_t slot);
        static std::array<class OpenAvrilConcurrency::Input*, 3>* stat_REG_get_ptr_array_Of_buffer_Input_ReferenceForThread();//NUMBER OF CONCURRENT THREADS.
        static std::array<class OpenAvrilConcurrency::Output*, 3>* stat_REG_get_ptr_array_Of_buffer_Output_ReferenceForThread();//NUMBER OF CONCURRENT THREADS.
        static std::array<class OpenAvrilConcurrency::Input*, 2>* stat_REG_get_ptr_array_Of_doubleBuffer_Input();
        static std::array<class OpenAvrilConcurrency::Output*, 2>* stat_REG_get_ptr_array_Of_doubleBuffer_Output();
        static std::vector<class OpenAvrilConcurrency::Input*>* stat_REG_get_ptr_vector_Of_stack_Of_InputPraise();
        static std::vector<class OpenAvrilConcurrency::Output*>* stat_REG_get_ptr_vector_Of_stack_Of_OutputPraise();
            // set.
        static void stat_set_ptr_Item_Of_list_Of_ptr_array_Of_buffer_Input_ReferenceForThread(uint8_t concurrentThreadID, class Input* newCLass);
        static void stat_set_ptr_Item_Of_list_Of_ptr_array_Of_buffer_Output_ReferenceForThread(uint8_t concurrentThreadID, class Output* newCLass);
        static void stat_set_ptr_Item_array_Of_doubleBuffer_Input_WRITE(uint8_t side, class Input* newClass);
        static void stat_set_ptr_Item_array_Of_doubleBuffer_Output_WRITE(uint8_t side, class Output* newClass);
        static void stat_set_ptr_Item_On_vector_Of_stack_Of_InputPraise(uint8_t slot, class Input* newCLass);
        static void stat_set_ptr_Item_On_vector_Of_stack_Of_OutputPraise(uint8_t slot, class Output* newCLass);
    };
}
