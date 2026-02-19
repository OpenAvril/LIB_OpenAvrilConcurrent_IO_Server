#pragma once

namespace OpenAvril
{
    class Data
    {
// classes.

// registers.

    public:
// constructor.
        Data();

// destructor.
        virtual ~Data();

// public.
        void Initialise_Control(Data* data);
    // get.
        class Input* Get_doubleBuffer_Input_READ();
        class Input* Get_doubleBuffer_Input_WRITE();
        class Output* Get_doubleBuffer_Output_READ();
        class Output* Get_doubleBuffer_Output_WRITE();
        class Data_Control* Get_ptr_Data_Control();
        class Input* Get_ptr_Item_Of_list_Of_buffer_Input_ReferenceForThread(__int8 threadID);
        class Output* Get_ptr_Item_Of_list_Of_buffer_Output_ReferenceForThread(__int8 threadID);
        class Input* Get_ptr_Item_On_vector_Of_stack_Of_InputPraise(__int8 slot);
        class Output* Get_ptr_Item_On_vector_Of_stack_Of_OutputPraise(__int8 slot);
    // set.
 
// private.
        void Create_ptr_Data_Control();
        void Create_ptr_GameInstance();
        void Create_ptr_User_I();
        void Create_ptr_User_O();
        void Create_list_Of_buffer_Input_ReferenceForThread();
        void Create_list_Of_buffer_Output_ReferenceForThread();
        void Create_list_Of_doubleBuffer_Input();          
        void Create_list_Of_doubleBuffer_Output();
        void Create_vector_Of_stack_Of_InputPraise();
        void Create_vector_Of_stack_Of_OutputPraise();
        void Create_ptr_list_Of_buffer_Input_ReferenceForThread();
        void Create_ptr_list_Of_buffer_Output_ReferenceForThread();
        void Create_ptr_list_Of_doubleBuffer_Input();
        void Create_ptr_list_Of_doubleBuffer_Output();
        void Create_ptr_vector_Of_stack_Of_InputPraise();
        void Create_ptr_vector_Of_stack_Of_OutputPraise();
    // get.

        class GameInstance* Get_ptr_GameInstance();
        std::list<class Input*>* Get_ptr_list_Of_buffer_Input_ReferenceForThread();
        std::list<class Output*>* Get_ptr_list_Of_buffer_Output_ReferenceForThread();
        std::list<class Input*>* Get_ptr_list_Of_doubleBuffer_Input();
        std::list<class Output*>* Get_ptr_list_Of_doubleBuffer_Output();
        class User_I* Get_ptr_User_I();
        class User_O* Get_ptr_User_O();
        std::vector<class Input*>* Get_ptr_vector_Of_stack_Of_InputPraise();
        std::vector<class Output*>* Get_ptr_vector_Of_stack_Of_OutputPraise();
    // set.
        void Set_ptr_Data_Control(class Data_Control* newClass);
        void Set_ptr_GameInstance(class GameInstance* newClass);
        void Set_ptr_list_Of_buffer_Input_ReferenceForThread(std::list<class Input*>* newListPtr);
        void Set_ptr_list_Of_buffer_Output_ReferenceForThread(std::list<class Output*>* newListPtr);
        void Set_ptr_list_Of_doubleBuffer_Input(std::list<class Input*>* newListPtr);
        void Set_ptr_list_Of_doubleBuffer_Output(std::list<class Output*>* newListPtr);
        void Set_ptr_User_I(class User_I* newClass);
        void Set_ptr_User_O(class User_O* newClass);
        void Set_ptr_vector_Of_stack_Of_InputPraise(std::vector<class Input*>* newStack);
        void Set_ptr_vector_Of_stack_Of_OutputPraise(std::vector<class Output*>* newStack);
    };
}
