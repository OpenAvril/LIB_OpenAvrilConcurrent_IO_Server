#pragma once
namespace OpenAvrilConcurrency
{
    class Data
    {
    public:
        Data();
        virtual ~Data();
        class Data_Control* dyn_CLASS_get_ptr_Data_Control();
        class User_Input* dyn_CLASS_get_ptr_User_Input();
        class User_Output* dyn_CLASS_get_ptr_User_Output();
        void dyn_REG_boot1_DEFINE_Data(class Framework_Server* obj);
        void dyn_REG_boot2_SUBSTANTIATE_Data(class Framework_Server* obj);
        void dyn_REG_boot3_INITIALISE_Data(class Framework_Server* obj);
        void dyn_REG_boot4_INSTANTIATE_Data(class Framework_Server* obj);
        class Input* dyn_REG_get_ptr_Item_array_Of_doubleBuffer_Input_READ(class Framework_Server* obj);
        class Input* dyn_REG_get_ptr_Item_array_Of_doubleBuffer_Input_WRITE(class Framework_Server* obj);
        class Output* dyn_REG_get_ptr_Item_array_Of_doubleBuffer_Output_READ(class Framework_Server* obj);
        class Output* dyn_REG_get_ptr_Item_array_Of_doubleBuffer_Output_WRITE(class Framework_Server* obj);
        class Input* dyn_REG_get_ptr_Item_Of_list_Of_ptr_array_Of_buffer_Input_ReferenceForThread(uint8_t concurrentThreadID);
        class Output* dyn_REG_get_ptr_Item_Of_list_Of_ptr_array_Of_buffer_Output_ReferenceForThread(uint8_t concurrentThreadID);
        class Input* dyn_REG_get_ptr_Item_On_vector_Of_stack_Of_InputPraise(uint8_t slot);
        class Output* dyn_REG_get_ptr_Item_On_vector_Of_stack_Of_OutputPraise(uint8_t slot);
        std::vector<class Input*>* dyn_REG_get_ptr_vector_Of_stack_Of_InputPraise();
        std::vector<class Output*>* dyn_REG_get_ptr_vector_Of_stack_Of_OutputPraise();
        void dyn_REG_set_Item_On_Array_Of_doubleBuffer_Input_READ(class Framework_Server* obj, class Input* newClass);
        void dyn_REG_set_Item_On_Array_Of_doubleBuffer_Input_WRITE(class Framework_Server* obj, class Input* newClass);
        void dyn_REG_set_Item_On_Array_Of_doubleBuffer_Output_READ(class Framework_Server* obj, class Output* newClass);
        void dyn_REG_set_Item_On_Array_Of_doubleBuffer_Output_WRITE(class Framework_Server* obj, class Output* newClass);
        void dyn_REG_set_Item_On_Array_Of_buffer_Input_ReferenceForThread(uint8_t concurrentThreadID, class Input* newClass);
        void dyn_REG_set_Item_On_Array_Of_buffer_Output_ReferenceForThread(uint8_t concurrentThreadID, class Output* newClass);
        void dyn_REG_set_Item_On_Vector_Of_stack_Of_InputPraise(uint8_t slot, class Input* newClass);
        void dyn_REG_set_Item_On_Vector_Of_stack_Of_OutputPraise(uint8_t slot, class Output* newClass);
        static void stat_CLASS_boot0_DECLAIRE_Data();
        static void stat_CLASS_boot1_DEFINE_Data();
        static void stat_CLASS_boot3_INITIALISE_Data();
        static void stat_CLASS_boot4_INSTANTIATE_Data();
        static void stat_REG_boot0_DECLAIRE_Data();
    private:
        static class Data_Control* _stat_CLASS_ptr_Data_Control;
        static class User_Input* _stat_CLASS_ptr_User_Input;
        static class User_Output* _stat_CLASS_ptr_User_Output;
        static std::array<class Input*, 3>* _stat_REG_ptr_array_Of_buffer_Input_ReferenceForThread;//NUMBER OF CONCURRENT THREADS.
        static std::array<class Output*, 3>* _stat_REG_ptr_array_Of_buffer_Output_ReferenceForThread;//NUMBER OF CONCURRENT THREADS.
        static std::array<class Input*, 2>* _stat_REG_ptr_array_Of_doubleBuffer_Input;
        static std::array<class Output*, 2>* _stat_REG_ptr_array_Of_doubleBuffer_Output;
        static std::vector<class Input*>* _stat_REG_ptr_vector_Of_stack_Of_InputPraise;
        static std::vector<class Output*>* _stat_REG_ptr_vector_Of_stack_Of_OutputPraise;
        static void stat_CLASS_boot1_DEFINE_Data_Control();
        static void stat_CLASS_boot1_DEFINE_User_Input();
        static void stat_CLASS_boot1_DEFINE_User_Output();
        static void stat_CLASS_boot3_INITIALISE_Data_Control();
        static void stat_CLASS_boot3_INITIALISE_User_Input();
        static void stat_CLASS_boot3_INITIALISE_User_Output();
        static class Data_Control* stat_CLASS_get_ptr_Data_Control();
        static class User_Input* stat_CLASS_get_ptr_User_Input();
        static class User_Output* stat_CLASS_get_ptr_User_Output();
        static void stat_REG_boot1_DEFINE_buffer_Input_ReferenceForThread();
        static void stat_REG_boot1_DEFINE_buffer_Output_ReferenceForThread();
        static void stat_REG_boot1_DEFINE_buffer_doubleBuffer_Input();
        static void stat_REG_boot1_DEFINE_buffer_doubleBuffer_Output();
        static void stat_REG_boot1_DEFINE_buffer_stack_Of_InputPraise();
        static void stat_REG_boot1_DEFINE_buffer_stack_Of_OutputPraise();
        static void stat_REG_boot2_SUBSTANTIATE_buffer_Input_ReferenceForThread(class Framework_Server* obj);
        static void stat_REG_boot2_SUBSTANTIATE_buffer_Output_ReferenceForThread(class Framework_Server* obj);
        static void stat_REG_boot2_SUBSTANTIATE_buffer_doubleBuffer_Input();
        static void stat_REG_boot2_SUBSTANTIATE_buffer_doubleBuffer_Output();
        static void stat_REG_boot2_SUBSTANTIATE_buffer_stack_Of_InputPraise();
        static void stat_REG_boot2_SUBSTANTIATE_buffer_stack_Of_OutputPraise();
        static void stat_REG_boot3_INITIALISE_buffer_Input_ReferenceForThread(class Framework_Server* obj);
        static void stat_REG_boot3_INITIALISE_buffer_Output_ReferenceForThread(class Framework_Server* obj);
        static void stat_REG_boot3_INITIALISE_doubleBuffer_Input();
        static void stat_REG_boot3_INITIALISE_doubleBuffer_Output();
        static void stat_REG_boot3_INITIALISE_stack_Of_InputPraise();
        static void stat_REG_boot3_INITIALISE_stack_Of_OutputPraise();
        static std::array<class Input*, 3>* stat_REG_get_ptr_Array_Of_buffer_Input_ReferenceForThread();//NUMBER OF CONCURRENT THREADS.
        static std::array<class Output*, 3>* stat_REG_get_ptr_array_Of_buffer_Output_ReferenceForThread();//NUMBER OF CONCURRENT THREADS.
        static std::array<class Input*, 2>* stat_get_REG_ptr_array_Of_doubleBuffer_Input();
        static std::array<class Output*, 2>* stat_get_REG_ptr_array_Of_doubleBuffer_Output();
        static std::vector<class Input*>* stat_REG_get_ptr_vector_Of_stack_Of_InputPraise();
        static std::vector<class Output*>* stat_REG_get_ptr_vector_Of_stack_Of_OutputPraise();
        static void stat_REG_set_Item_On_Array_Of_buffer_Input_ReferenceForThread(uint8_t concurrentThreadID, class Input* newClass);
        static void stat_REG_set_Item_On_Array_Of_buffer_Output_ReferenceForThread(uint8_t concurrentThreadID, class Output* newClass);
        static void stat_REG_set_Item_On_Array_Of_doubleBuffer_Input_READ(class Framework_Server* obj, class Input* newClass);
        static void stat_REG_set_Item_On_Array_Of_doubleBuffer_Input_WRITE(class Framework_Server* obj, class Input* newClass);
        static void stat_REG_set_Item_On_Array_Of_doubleBuffer_Output_READ(class Framework_Server* obj, class Output* newClass);
        static void stat_REG_set_Item_On_Array_Of_doubleBuffer_Output_WRITE(class Framework_Server* obj, class Output* newClass);
        static void stat_REG_set_Item_On_Vector_Of_stack_Of_InputPraise(uint8_t slot, class Input* newClass);
        static void stat_REG_set_Item_On_Vector_Of_stack_Of_OutputPraise(uint8_t slot, class Output* newClass);
    };
}