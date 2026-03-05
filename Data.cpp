#include "pch.h"

// pointers.
    // classes.
    static class OpenAvrilConcurrency::Data_Control* _stat_CLASS_ptr_Data_Control = NULL;
    static class OpenAvrilConcurrency::User_Input* _stat_CLASS_ptr_User_Input = NULL;
    static class OpenAvrilConcurrency::User_Output* _stat_CLASS_ptr_User_Output = NULL;
    // registers.
    static std::array<class OpenAvrilConcurrency::Input*, 3>* _stat_REG_stat_ptr_array_Of_buffer_Input_ReferenceForThread = NULL;//NUMBER OF CONCURRENT THREADS.
    static std::array<class OpenAvrilConcurrency::Output*, 3>* _stat_REG_stat_ptr_array_Of_buffer_Output_ReferenceForThread = NULL;//NUMBER OF CONCURRENT THREADS.
    static std::array<class OpenAvrilConcurrency::Input*, 2>* _stat_REG_stat_ptr_array_Of_doubleBuffer_Input = NULL;
    static std::array<class OpenAvrilConcurrency::Output*, 2>* _stat_REG_stat_ptr_array_Of_doubleBuffer_Output = NULL;
    static std::vector<class OpenAvrilConcurrency::Input*>* _stat_REG_stat_ptr_vector_Of_stack_Of_InputPraise = NULL;
    static std::vector<class OpenAvrilConcurrency::Output*>* _stat_REG_stat_ptr_vector_Of_stack_Of_OutputPraise = NULL;

// constructor.
    OpenAvrilConcurrency::Data::Data()
    {
        std::cout << "entered constructor of OpenAvrilConcurrency::Data::Data()" << std::endl;
        stat_CLASS_create_ptr_User_Input();
        stat_CLASS_create_ptr_User_Output();
       
        OpenAvrilConcurrency::Input* newDEFAULT_Input = new class OpenAvrilConcurrency::Input();
        while (newDEFAULT_Input == NULL) {}
        stat_REG_create_ptr_array_Of_buffer_Input_ReferenceForThread(newDEFAULT_Input);
        stat_REG_create_ptr_array_Of_doubleBuffer_Input(newDEFAULT_Input);
        stat_REG_create_ptr_vector_Of_stack_Of_InputPraise(newDEFAULT_Input);
        delete newDEFAULT_Input;
        
        OpenAvrilConcurrency::Output* newDEFAULT_output = new class OpenAvrilConcurrency::Output();
        while (newDEFAULT_output == NULL) {}
        stat_REG_create_ptr_array_Of_buffer_Output_ReferenceForThread(newDEFAULT_output);
        stat_REG_create_ptr_array_Of_doubleBuffer_Output(newDEFAULT_output);
        stat_REG_create_ptr_vector_Of_stack_Of_OutputPraise(newDEFAULT_output);
        delete newDEFAULT_output;
        std::cout << "exiting constructor of OpenAvrilConcurrency::Data::Data()" << std::endl;
    }

// destructor.
    OpenAvrilConcurrency::Data::~Data()
    {
        delete _stat_CLASS_ptr_Data_Control;
        delete _stat_CLASS_ptr_User_Input;
        delete _stat_CLASS_ptr_User_Output;
        delete _stat_REG_stat_ptr_array_Of_buffer_Input_ReferenceForThread;
        delete _stat_REG_stat_ptr_array_Of_buffer_Output_ReferenceForThread;
        delete _stat_REG_stat_ptr_array_Of_doubleBuffer_Input;
        delete _stat_REG_stat_ptr_array_Of_doubleBuffer_Output;
        delete _stat_REG_stat_ptr_vector_Of_stack_Of_InputPraise;
        delete _stat_REG_stat_ptr_vector_Of_stack_Of_OutputPraise;
    }

// public.
    // dynamic.
    void OpenAvrilConcurrency::Data::initialise_CLASS_Control()
    {
        class OpenAvrilConcurrency::Data_Control* _CLASS_ptr_Data_Control = new OpenAvrilConcurrency::Data_Control();
        while (stat_CLASS_get_ptr_Data_Control() == NULL) {}
    }
    void OpenAvrilConcurrency::Data::initialise_REG_Item_On_array_Of_ptr_array_Of_buffer_Input_ReferenceForThread(uint8_t concurrentThreadID, OpenAvrilConcurrency::Input* newINITIALISED_Input)
    {
        stat_set_ptr_Item_Of_list_Of_ptr_array_Of_buffer_Input_ReferenceForThread(concurrentThreadID, newINITIALISED_Input);
    }
    void OpenAvrilConcurrency::Data::initialise_REG_Item_On_array_Of_ptr_array_Of_buffer_Output_ReferenceForThread(uint8_t concurrentThreadID, OpenAvrilConcurrency::Output* newINITIALISED_Output)
    {
        stat_set_ptr_Item_Of_list_Of_ptr_array_Of_buffer_Output_ReferenceForThread(concurrentThreadID, newINITIALISED_Output);
    }
    void OpenAvrilConcurrency::Data::initialise_REG_Item_On_array_Of_doubleBuffer_Input(uint8_t sideRW, OpenAvrilConcurrency::Input* newINITIALISED_Input)
    {
        stat_set_ptr_Item_array_Of_doubleBuffer_Input_WRITE(sideRW, newINITIALISED_Input);
    }
    void OpenAvrilConcurrency::Data::initialise_REG_Item_On_array_Of_doubleBuffer_Output(uint8_t sideRW, OpenAvrilConcurrency::Output* newINITIALISED_Output)
    {
        stat_set_ptr_Item_array_Of_doubleBuffer_Output_WRITE(sideRW, newINITIALISED_Output);
    }
    void OpenAvrilConcurrency::Data::initialise_REG_Item_On_vector_Of_stack_Of_InputPraise(uint8_t slot, OpenAvrilConcurrency::Input* newINITIALISED_Input)
    {
        stat_set_ptr_Item_On_vector_Of_stack_Of_InputPraise(slot, newINITIALISED_Input);
    }
    void OpenAvrilConcurrency::Data::initialise_REG_Item_On_vector_Of_stack_Of_OutputPraise(uint8_t slot, OpenAvrilConcurrency::Output* newINITIALISED_Output)
    {
        stat_set_ptr_Item_On_vector_Of_stack_Of_OutputPraise(slot, newINITIALISED_Output);
    }
        // get.
    OpenAvrilConcurrency::Data_Control* OpenAvrilConcurrency::Data::get_CLASS_ptr_Data_Control()
    {
        return stat_CLASS_get_ptr_Data_Control();
    }
    OpenAvrilConcurrency::User_Input* OpenAvrilConcurrency::Data::get_CLASS_ptr_User_Input()
    {
        return stat_CLASS_get_ptr_User_Input();
    }
    OpenAvrilConcurrency::User_Output* OpenAvrilConcurrency::Data::get_CLASS_ptr_User_Output()
    {
        return stat_CLASS_get_ptr_User_Output();
    }
    OpenAvrilConcurrency::Input* OpenAvrilConcurrency::Data::get_REG_ptr_Item_array_Of_doubleBuffer_Input_READ(OpenAvrilConcurrency::Framework_Server* obj)
    {
        stat_REG_get_ptr_Item_array_Of_doubleBuffer_Input_READ(obj);
    }
    OpenAvrilConcurrency::Input* OpenAvrilConcurrency::Data::get_REG_ptr_Item_array_Of_doubleBuffer_Input_WRITE(OpenAvrilConcurrency::Framework_Server* obj)
    {
        stat_REG_get_ptr_Item_array_Of_doubleBuffer_Input_WRITE(obj);
    }
    OpenAvrilConcurrency::Output* OpenAvrilConcurrency::Data::get_REG_ptr_Item_array_Of_doubleBuffer_Output_READ(OpenAvrilConcurrency::Framework_Server* obj)
    {
        stat_REG_get_ptr_Item_array_Of_doubleBuffer_Output_READ(obj);
    }
    OpenAvrilConcurrency::Output* OpenAvrilConcurrency::Data::get_REG_ptr_Item_array_Of_doubleBuffer_Output_WRITE(OpenAvrilConcurrency::Framework_Server* obj)
    {
        stat_REG_get_ptr_Item_array_Of_doubleBuffer_Output_WRITE(obj);
    }
    OpenAvrilConcurrency::Input* OpenAvrilConcurrency::Data::get_REG_ptr_Item_Of_list_Of_ptr_array_Of_buffer_Input_ReferenceForThread(uint8_t threadID)
    {
        return stat_REG_get_ptr_Item_Of_list_Of_ptr_array_Of_buffer_Input_ReferenceForThread(threadID);
    }
    OpenAvrilConcurrency::Output* OpenAvrilConcurrency::Data::get_REG_ptr_Item_Of_list_Of_ptr_array_Of_buffer_Output_ReferenceForThread(uint8_t threadID)
    {
        return stat_REG_get_ptr_Item_Of_list_Of_ptr_array_Of_buffer_Output_ReferenceForThread(threadID);
    }
    OpenAvrilConcurrency::Input* OpenAvrilConcurrency::Data::get_REG_ptr_Item_On_vector_Of_stack_Of_InputPraise(uint8_t slot)
    {
        return stat_REG_get_ptr_Item_On_vector_Of_stack_Of_InputPraise(slot);
    }
    OpenAvrilConcurrency::Output* OpenAvrilConcurrency::Data::get_REG_ptr_Item_On_vector_Of_stack_Of_OutputPraise(uint8_t slot)
    {
        return stat_REG_get_ptr_Item_On_vector_Of_stack_Of_OutputPraise(slot);
    }
        // set.
    OpenAvrilConcurrency::Input* OpenAvrilConcurrency::Data::set_REG_ptr_Item_array_Of_doubleBuffer_Input_READ(OpenAvrilConcurrency::Framework_Server* obj, OpenAvrilConcurrency::Input* newClass)
    {
        stat_REG_set_ptr_Item_array_Of_doubleBuffer_Input_READ(obj, newClass);
    }
    OpenAvrilConcurrency::Input* OpenAvrilConcurrency::Data::set_REG_ptr_Item_array_Of_doubleBuffer_Input_WRITE(OpenAvrilConcurrency::Framework_Server* obj, OpenAvrilConcurrency::Input* newClass)
    {
        stat_REG_set_ptr_Item_array_Of_doubleBuffer_Input_WRITE(obj, newClass);
    }
    OpenAvrilConcurrency::Output* OpenAvrilConcurrency::Data::set_REG_ptr_Item_array_Of_doubleBuffer_Output_READ(OpenAvrilConcurrency::Framework_Server* obj, OpenAvrilConcurrency::Output* newClass)
    {
        stat_REG_set_ptr_Item_array_Of_doubleBuffer_Output_READ(obj, newClass);
    }
    OpenAvrilConcurrency::Output* OpenAvrilConcurrency::Data::set_REG_ptr_Item_array_Of_doubleBuffer_Output_WRITE(OpenAvrilConcurrency::Framework_Server* obj, OpenAvrilConcurrency::Output* newClass)
    {
        stat_REG_set_ptr_Item_array_Of_doubleBuffer_Output_WRITE(obj, newClass);
    }

    void OpenAvrilConcurrency::Data::set_REG_ptr_Item_Of_list_Of_ptr_array_Of_buffer_Input_ReferenceForThread(uint8_t threadID, Input* newClass)
    {
    }

    void OpenAvrilConcurrency::Data::set_REG_ptr_Item_Of_list_Of_ptr_array_Of_buffer_Output_ReferenceForThread(uint8_t threadID, Output* newClass)
    {
    }

    void OpenAvrilConcurrency::Data::set_REG_ptr_Item_On_vector_Of_stack_Of_InputPraise(uint8_t slot, Input* newClass)
    {
    }

    void OpenAvrilConcurrency::Data::set_REG_ptr_Item_On_vector_Of_stack_Of_OutputPraise(uint8_t slot, Output* newClass)
    {
    }

// private.
    // dynamic.
        // get.
        // set.
    // static.
        // classes.
            // create.
    void OpenAvrilConcurrency::Data::stat_CLASS_create_ptr_Data_Control()
    {
        class OpenAvrilConcurrency::Data_Control* _CLASS_ptr_Data_Control = new class OpenAvrilConcurrency::Data_Control();
        while (stat_CLASS_get_ptr_Data_Control() == NULL) {}

    }
    void OpenAvrilConcurrency::Data::stat_CLASS_create_ptr_User_Input()
    {
        class OpenAvrilConcurrency::User_Input* _CLASS_ptr_User_Input = new class OpenAvrilConcurrency::User_Input();
        while (stat_CLASS_get_ptr_User_Input() == NULL) {}
    }
    void OpenAvrilConcurrency::Data::stat_CLASS_create_ptr_User_Output()
    {
        class OpenAvrilConcurrency::User_Output* _CLASS_ptr_User_Output = new class OpenAvrilConcurrency::User_Output();
        while (stat_CLASS_get_ptr_User_Output() == NULL) {}
    }
            // get.
    OpenAvrilConcurrency::Data_Control* OpenAvrilConcurrency::Data::stat_CLASS_get_ptr_Data_Control()
    {
        return _stat_CLASS_ptr_Data_Control;
    }
    OpenAvrilConcurrency::User_Input* OpenAvrilConcurrency::Data::stat_CLASS_get_ptr_User_Input()
    {
        return _stat_CLASS_ptr_User_Input;
    }
    OpenAvrilConcurrency::User_Output* OpenAvrilConcurrency::Data::stat_CLASS_get_ptr_User_Output()
    {
        return _stat_CLASS_ptr_User_Output;
    }
            // set.
        // registers.
            // create.
    void OpenAvrilConcurrency::Data::stat_REG_create_ptr_array_Of_buffer_Input_ReferenceForThread(Input* newDEFAULT_Input)
    {

    }
    void OpenAvrilConcurrency::Data::stat_REG_create_ptr_array_Of_buffer_Output_ReferenceForThread(Output* newDEFAULT_Output)
    {
    }
    void OpenAvrilConcurrency::Data::stat_REG_create_ptr_array_Of_doubleBuffer_Input(Input* newDEFAULT_Input)
    {
    }
    void OpenAvrilConcurrency::Data::stat_REG_create_ptr_array_Of_doubleBuffer_Output(Output* newDEFAULT_Input)
    {
    }
    void OpenAvrilConcurrency::Data::stat_REG_create_ptr_vector_Of_stack_Of_InputPraise(Input* newDEFAULT_Input)
    {
    }
    void OpenAvrilConcurrency::Data::stat_REG_create_ptr_vector_Of_stack_Of_OutputPraise(Output* newDEFAULT_Output)
    {
    }
            // get.
    OpenAvrilConcurrency::Input* OpenAvrilConcurrency::Data::stat_REG_get_ptr_Item_Of_list_Of_ptr_array_Of_buffer_Input_ReferenceForThread(uint8_t threadID)
    {
        return nullptr;
    }
    OpenAvrilConcurrency::Output* OpenAvrilConcurrency::Data::stat_REG_get_ptr_Item_Of_list_Of_ptr_array_Of_buffer_Output_ReferenceForThread(uint8_t threadID)
    {
        return nullptr;
    }
    OpenAvrilConcurrency::Input* OpenAvrilConcurrency::Data::stat_REG_get_ptr_Item_array_Of_doubleBuffer_Input_READ(Framework_Server* obj, Input* newCLass)
    {
        return nullptr;
    }
    OpenAvrilConcurrency::Input* OpenAvrilConcurrency::Data::stat_REG_get_ptr_Item_array_Of_doubleBuffer_Input_WRITE(Framework_Server* obj, Input* newCLass)
    {
        return nullptr;
    }
    OpenAvrilConcurrency::Output* OpenAvrilConcurrency::Data::stat_REG_get_ptr_Item_array_Of_doubleBuffer_Output_READ(Framework_Server* obj, Output* newCLass)
    {
        return nullptr;
    }
    OpenAvrilConcurrency::Output* OpenAvrilConcurrency::Data::stat_REG_get_ptr_Item_array_Of_doubleBuffer_Output_WRITE(Framework_Server* obj, Output* newCLass)
    {
        return nullptr;
    }
    OpenAvrilConcurrency::Input* OpenAvrilConcurrency::Data::stat_REG_get_ptr_Item_On_vector_Of_stack_Of_InputPraise(uint8_t slot)
    {
        return nullptr;
    }
    OpenAvrilConcurrency::Output* OpenAvrilConcurrency::Data::stat_REG_get_ptr_Item_On_vector_Of_stack_Of_OutputPraise(uint8_t slot)
    {
        return nullptr;
    }
    std::array<class OpenAvrilConcurrency::Input*, 3>* OpenAvrilConcurrency::Data::stat_REG_get_ptr_array_Of_buffer_Input_ReferenceForThread()
    {
        return nullptr;
    }
    std::array<class OpenAvrilConcurrency::Output*, 3>* OpenAvrilConcurrency::Data::stat_REG_get_ptr_array_Of_buffer_Output_ReferenceForThread()
    {
        return nullptr;
    }
    std::array<class OpenAvrilConcurrency::Input*, 2>* OpenAvrilConcurrency::Data::stat_get_REG_ptr_array_Of_doubleBuffer_Input()
    {
        return nullptr;
    }
    std::array<class OpenAvrilConcurrency::Output*, 2>* OpenAvrilConcurrency::Data::stat_get_REG_ptr_array_Of_doubleBuffer_Output()
    {
        return nullptr;
    }
    std::vector<class OpenAvrilConcurrency::Input*>* OpenAvrilConcurrency::Data::stat_REG_get_ptr_vector_Of_stack_Of_InputPraise()
    {
        return nullptr;
    }
    std::vector<class OpenAvrilConcurrency::Output*>* OpenAvrilConcurrency::Data::stat_REG_get_ptr_vector_Of_stack_Of_OutputPraise()
    {
        return nullptr;
    }
            // set.
        void OpenAvrilConcurrency::Data::stat_REG_set_ptr_Item_Of_list_Of_ptr_array_Of_buffer_Input_ReferenceForThread(uint8_t concurrentThreadID, Input* newCLass)
    {
    }

        void OpenAvrilConcurrency::Data::stat_REG_set_ptr_Item_Of_list_Of_ptr_array_Of_buffer_Output_ReferenceForThread(uint8_t concurrentThreadID, Output* newCLass)
        {
        }

        void OpenAvrilConcurrency::Data::stat_REG_set_ptr_Item_array_Of_doubleBuffer_Input_WRITE(Framework_Server* obj, Input* newClass)
        {
        }

        void OpenAvrilConcurrency::Data::stat_REG_set_ptr_Item_array_Of_doubleBuffer_Output_WRITE(Framework_Server* obj, Output* newClass)
        {
        }

        void OpenAvrilConcurrency::Data::stat_REG_set_ptr_Item_On_vector_Of_stack_Of_InputPraise(Framework_Server* obj, Input* newCLass)
        {
        }

        void OpenAvrilConcurrency::Data::stat_REG_set_ptr_Item_On_vector_Of_stack_Of_OutputPraise(Framework_Server* obj, Output* newCLass)
        {
        }

        std::array<class OpenAvrilConcurrency::Input*, 3>* OpenAvrilConcurrency::Data::stat_REG_set_ptr_array_Of_buffer_Input_ReferenceForThread()
        {
            return nullptr;
        }

        std::array<class OpenAvrilConcurrency::Output*, 3>* OpenAvrilConcurrency::Data::stat_REG_set_ptr_array_Of_buffer_Output_ReferenceForThread()
        {
            return nullptr;
        }

        std::array<class OpenAvrilConcurrency::Input*, 2>* OpenAvrilConcurrency::Data::stat_REG_set_ptr_array_Of_doubleBuffer_Input()
        {
            return nullptr;
        }

        std::array<class OpenAvrilConcurrency::Output*, 2>* OpenAvrilConcurrency::Data::stat_REG_set_ptr_array_Of_doubleBuffer_Output()
        {
            return nullptr;
        }

        std::vector<class OpenAvrilConcurrency::Input*>* OpenAvrilConcurrency::Data::stat_REG_set_ptr_vector_Of_stack_Of_InputPraise()
        {
            return nullptr;
        }

        std::vector<class OpenAvrilConcurrency::Output*>* OpenAvrilConcurrency::Data::stat_REG_set_ptr_vector_Of_stack_Of_OutputPraise()
        {
            return nullptr;
        }
