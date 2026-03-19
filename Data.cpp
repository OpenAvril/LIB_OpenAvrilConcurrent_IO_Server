#include "pch.h"

// pointers.
    // classes.
    OpenAvrilConcurrency::Data_Control* OpenAvrilConcurrency::Data::_stat_CLASS_ptr_Data_Control = NULL;
    OpenAvrilConcurrency::User_Input* OpenAvrilConcurrency::Data::_stat_CLASS_ptr_User_Input = NULL;
    OpenAvrilConcurrency::User_Output* OpenAvrilConcurrency::Data::_stat_CLASS_ptr_User_Output = NULL;
    // registers.
    std::array<OpenAvrilConcurrency::Input*, 3>* OpenAvrilConcurrency::Data::_stat_REG_ptr_array_Of_buffer_Input_ReferenceForThread = NULL;//NUMBER OF CONCURRENT THREADS.
    std::array<OpenAvrilConcurrency::Output*, 3>* OpenAvrilConcurrency::Data::_stat_REG_ptr_array_Of_buffer_Output_ReferenceForThread = NULL;//NUMBER OF CONCURRENT THREADS.
    std::array<OpenAvrilConcurrency::Input*, 2>* OpenAvrilConcurrency::Data::_stat_REG_ptr_array_Of_doubleBuffer_Input = NULL;
    std::array<OpenAvrilConcurrency::Output*, 2>* OpenAvrilConcurrency::Data::_stat_REG_ptr_array_Of_doubleBuffer_Output = NULL;
    std::vector<OpenAvrilConcurrency::Input*>* OpenAvrilConcurrency::Data::_stat_REG_ptr_vector_Of_stack_Of_InputPraise = NULL;
    std::vector<OpenAvrilConcurrency::Output*>* OpenAvrilConcurrency::Data::_stat_REG_ptr_vector_Of_stack_Of_OutputPraise = NULL;

// public.
    // constructor.
    OpenAvrilConcurrency::Data::Data()
    {
        std::cout << "entered CONSTRUCTOR of Data()" << std::endl;
        stat_CLASS_create_ptr_User_Input();
        std::cout << "alpha Data()." << std::endl;
        stat_CLASS_create_ptr_User_Output();
        std::cout << "bravo Data()." << std::endl;
        class OpenAvrilConcurrency::Input* newDEFAULT_Input = new class OpenAvrilConcurrency::Input();
        std::cout << "charlie Data()." << std::endl;
        while (newDEFAULT_Input == NULL) {}
        std::cout << "delta Data()." << std::endl;
        newDEFAULT_Input->app_FUNCT_create_ptr_Input_Control();
        std::cout << "echo Data()." << std::endl;
        stat_REG_create_ptr_array_Of_buffer_Input_ReferenceForThread(newDEFAULT_Input);
        std::cout << "foxtrotData()." << std::endl;
        //delete newDEFAULT_Input;
        std::cout << "giga Data()." << std::endl;
        class OpenAvrilConcurrency::Output* newDEFAULT_output = new class OpenAvrilConcurrency::Output();
        std::cout << "helio Data()." << std::endl;
        while (newDEFAULT_output == NULL) {}
        std::cout << "indigo Data()." << std::endl;
        newDEFAULT_output->app_FUNCT_create_ptr_Output_Control();
        std::cout << "java Data()." << std::endl;
        stat_REG_create_ptr_array_Of_buffer_Output_ReferenceForThread(newDEFAULT_output);
        std::cout << "kilo Data()." << std::endl;
        //delete newDEFAULT_output;
        std::cout << "exiting CONSTRUCTOR of Data()" << std::endl;
    }

    // destructor.
    OpenAvrilConcurrency::Data::~Data()
    {
        delete _stat_CLASS_ptr_Data_Control;
        delete _stat_CLASS_ptr_User_Input;
        delete _stat_CLASS_ptr_User_Output;
        delete _stat_REG_ptr_array_Of_buffer_Input_ReferenceForThread;
        delete _stat_REG_ptr_array_Of_buffer_Output_ReferenceForThread;
        delete _stat_REG_ptr_array_Of_doubleBuffer_Input;
        delete _stat_REG_ptr_array_Of_doubleBuffer_Output;
        delete _stat_REG_ptr_vector_Of_stack_Of_InputPraise;
        delete _stat_REG_ptr_vector_Of_stack_Of_OutputPraise;
    }

    // dynamic.
        // create.
    void OpenAvrilConcurrency::Data::app_FUNCT_initialise_ptr_Data_Control()
    {
        _stat_CLASS_ptr_Data_Control = new OpenAvrilConcurrency::Data_Control();
        while (stat_CLASS_get_ptr_Data_Control() == NULL) {}
    }
    void OpenAvrilConcurrency::Data::app_initialise_REG_Item_On_array_Of_ptr_array_Of_buffer_Input_ReferenceForThread(uint8_t concurrentThreadID, OpenAvrilConcurrency::Input* newINITIALISED_Input)
    {
        stat_REG_set_Item_On_Array_Of_buffer_Input_ReferenceForThread(concurrentThreadID, newINITIALISED_Input);
    }
    void OpenAvrilConcurrency::Data::app_initialise_REG_Item_On_array_Of_ptr_array_Of_buffer_Output_ReferenceForThread(uint8_t concurrentThreadID, OpenAvrilConcurrency::Output* newINITIALISED_Output)
    {
        stat_REG_set_Item_On_Array_Of_buffer_Output_ReferenceForThread(concurrentThreadID, newINITIALISED_Output);
    }
    void OpenAvrilConcurrency::Data::app_initialise_REG_Item_On_array_Of_doubleBuffer_Input(OpenAvrilConcurrency::Framework_Server* obj, OpenAvrilConcurrency::Input* newINITIALISED_Input)
    {
        stat_REG_set_Item_On_Array_Of_doubleBuffer_Input_READ(obj, newINITIALISED_Input);
        stat_REG_set_Item_On_Array_Of_doubleBuffer_Input_WRITE(obj, newINITIALISED_Input);
    }
    void OpenAvrilConcurrency::Data::app_initialise_REG_Item_On_array_Of_doubleBuffer_Output(OpenAvrilConcurrency::Framework_Server* obj, OpenAvrilConcurrency::Output* newINITIALISED_Output)
    {
        stat_REG_set_Item_On_Array_Of_doubleBuffer_Output_READ(obj, newINITIALISED_Output);
        stat_REG_set_Item_On_Array_Of_doubleBuffer_Output_WRITE(obj, newINITIALISED_Output);
    }
    void OpenAvrilConcurrency::Data::app_initialise_REG_Item_On_vector_Of_stack_Of_InputPraise(uint8_t slotID, OpenAvrilConcurrency::Input* newINITIALISED_Input)
    {
        stat_REG_set_Item_On_Vector_Of_stack_Of_InputPraise(slotID, newINITIALISED_Input);
    }
    void OpenAvrilConcurrency::Data::app_initialise_REG_Item_On_vector_Of_stack_Of_OutputPraise(uint8_t slotID, OpenAvrilConcurrency::Output* newINITIALISED_Output)
    {
        stat_REG_set_Item_On_Vector_Of_stack_Of_OutputPraise(slotID, newINITIALISED_Output);
    }
        // get.
    OpenAvrilConcurrency::Data_Control* OpenAvrilConcurrency::Data::dyn_CLASS_get_ptr_Data_Control()
    {
        return stat_CLASS_get_ptr_Data_Control();
    }
    OpenAvrilConcurrency::User_Input* OpenAvrilConcurrency::Data::dyn_CLASS_get_ptr_User_Input()
    {
        return stat_CLASS_get_ptr_User_Input();
    }
    OpenAvrilConcurrency::User_Output* OpenAvrilConcurrency::Data::dyn_CLASS_get_ptr_User_Output()
    {
        return stat_CLASS_get_ptr_User_Output();
    }
    OpenAvrilConcurrency::Input* OpenAvrilConcurrency::Data::dyn_REG_get_ptr_Item_array_Of_doubleBuffer_Input_READ(OpenAvrilConcurrency::Framework_Server* obj)
    {
        auto temp = stat_get_REG_ptr_array_Of_doubleBuffer_Input()->begin();
        std::advance(temp, obj->dyn_CLASS_get_ptr_Server()->dyn_CLASS_get_ptr_Data()->dyn_CLASS_get_ptr_Data_Control()->app_FUNCT_Bool_To_Int(!obj->dyn_CLASS_get_ptr_Server()->dyn_CLASS_get_ptr_Data()->dyn_CLASS_get_ptr_Data_Control()->dyn_REG_get_Item_side_To_Write_For_array_Of_doubleBuffer_Input()));
        return *temp;
    }
    OpenAvrilConcurrency::Input* OpenAvrilConcurrency::Data::dyn_REG_get_ptr_Item_array_Of_doubleBuffer_Input_WRITE(OpenAvrilConcurrency::Framework_Server* obj)
    {
        auto temp = stat_get_REG_ptr_array_Of_doubleBuffer_Input()->begin();
        std::advance(temp, obj->dyn_CLASS_get_ptr_Server()->dyn_CLASS_get_ptr_Data()->dyn_CLASS_get_ptr_Data_Control()->app_FUNCT_Bool_To_Int(obj->dyn_CLASS_get_ptr_Server()->dyn_CLASS_get_ptr_Data()->dyn_CLASS_get_ptr_Data_Control()->dyn_REG_get_Item_side_To_Write_For_array_Of_doubleBuffer_Input()));
        return *temp;
    }
    OpenAvrilConcurrency::Output* OpenAvrilConcurrency::Data::dyn_REG_get_ptr_Item_array_Of_doubleBuffer_Output_READ(OpenAvrilConcurrency::Framework_Server* obj)
    {
        auto temp = stat_get_REG_ptr_array_Of_doubleBuffer_Output()->begin();
        std::advance(temp, obj->dyn_CLASS_get_ptr_Server()->dyn_CLASS_get_ptr_Data()->dyn_CLASS_get_ptr_Data_Control()->app_FUNCT_Bool_To_Int(!obj->dyn_CLASS_get_ptr_Server()->dyn_CLASS_get_ptr_Data()->dyn_CLASS_get_ptr_Data_Control()->dyn_REG_get_Item_side_To_Write_For_array_Of_doubleBuffer_Output()));
        return *temp;
    }
    OpenAvrilConcurrency::Output* OpenAvrilConcurrency::Data::dyn_REG_get_ptr_Item_array_Of_doubleBuffer_Output_WRITE(OpenAvrilConcurrency::Framework_Server* obj)
    {
        auto temp = stat_get_REG_ptr_array_Of_doubleBuffer_Output()->begin();
        std::advance(temp, obj->dyn_CLASS_get_ptr_Server()->dyn_CLASS_get_ptr_Data()->dyn_CLASS_get_ptr_Data_Control()->app_FUNCT_Bool_To_Int(obj->dyn_CLASS_get_ptr_Server()->dyn_CLASS_get_ptr_Data()->dyn_CLASS_get_ptr_Data_Control()->dyn_REG_get_Item_side_To_Write_For_array_Of_doubleBuffer_Output()));
        return *temp;
    }
    OpenAvrilConcurrency::Input* OpenAvrilConcurrency::Data::dyn_REG_get_ptr_Item_Of_list_Of_ptr_array_Of_buffer_Input_ReferenceForThread(uint8_t threadID)
    {
        auto temp = stat_REG_get_ptr_Array_Of_buffer_Input_ReferenceForThread()->begin();
        std::advance(temp, threadID);
        return *temp;
    }
    OpenAvrilConcurrency::Output* OpenAvrilConcurrency::Data::dyn_REG_get_ptr_Item_Of_list_Of_ptr_array_Of_buffer_Output_ReferenceForThread(uint8_t threadID)
    {
        auto temp = stat_REG_get_ptr_array_Of_buffer_Output_ReferenceForThread()->begin();
        std::advance(temp, threadID);
        return *temp;
    }
    OpenAvrilConcurrency::Input* OpenAvrilConcurrency::Data::dyn_REG_get_ptr_Item_On_vector_Of_stack_Of_InputPraise(uint8_t slot)
    {
        auto temp = stat_REG_get_ptr_vector_Of_stack_Of_InputPraise()->begin();
        std::advance(temp, slot);
        return *temp;
    }
    OpenAvrilConcurrency::Output* OpenAvrilConcurrency::Data::dyn_REG_get_ptr_Item_On_vector_Of_stack_Of_OutputPraise(uint8_t slot)
    {
        auto temp = stat_REG_get_ptr_vector_Of_stack_Of_OutputPraise()->begin();
        std::advance(temp, slot);
        return *temp;
    }
        // set.
    void OpenAvrilConcurrency::Data::set_REG_ptr_Item_array_Of_doubleBuffer_Input_READ(OpenAvrilConcurrency::Framework_Server* obj, OpenAvrilConcurrency::Input* newClass)
    {
        stat_REG_set_Item_On_Array_Of_doubleBuffer_Input_READ(obj, newClass);
    }
    void OpenAvrilConcurrency::Data::set_REG_ptr_Item_array_Of_doubleBuffer_Input_WRITE(OpenAvrilConcurrency::Framework_Server* obj, OpenAvrilConcurrency::Input* newClass)
    {
        stat_REG_set_Item_On_Array_Of_doubleBuffer_Input_WRITE(obj, newClass);
    }
    void OpenAvrilConcurrency::Data::set_REG_ptr_Item_array_Of_doubleBuffer_Output_READ(OpenAvrilConcurrency::Framework_Server* obj, OpenAvrilConcurrency::Output* newClass)
    {
        stat_REG_set_Item_On_Array_Of_doubleBuffer_Output_READ(obj, newClass);
    }
    void OpenAvrilConcurrency::Data::set_REG_ptr_Item_array_Of_doubleBuffer_Output_WRITE(OpenAvrilConcurrency::Framework_Server* obj, OpenAvrilConcurrency::Output* newClass)
    {
        stat_REG_set_Item_On_Array_Of_doubleBuffer_Output_WRITE(obj, newClass);
    }
    void OpenAvrilConcurrency::Data::set_REG_ptr_Item_Of_list_Of_ptr_array_Of_buffer_Input_ReferenceForThread(uint8_t threadID, Input* newClass)
    {
        stat_REG_set_Item_On_Array_Of_buffer_Input_ReferenceForThread(threadID, newClass);
    }
    void OpenAvrilConcurrency::Data::set_REG_ptr_Item_Of_list_Of_ptr_array_Of_buffer_Output_ReferenceForThread(uint8_t threadID, Output* newClass)
    {
        stat_REG_set_Item_On_Array_Of_buffer_Output_ReferenceForThread(threadID, newClass);
    }
    void OpenAvrilConcurrency::Data::set_REG_ptr_Item_On_vector_Of_stack_Of_InputPraise(uint8_t slot, Input* newClass)
    {
        stat_REG_set_Item_On_Vector_Of_stack_Of_InputPraise(slot, newClass);
    }
    void OpenAvrilConcurrency::Data::set_REG_ptr_Item_On_vector_Of_stack_Of_OutputPraise(uint8_t slot, Output* newClass)
    {
        stat_REG_set_Item_On_Vector_Of_stack_Of_OutputPraise(slot, newClass);
    }
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
            // create.
    void OpenAvrilConcurrency::Data::stat_CLASS_create_ptr_Data_Control()
    {
        _stat_CLASS_ptr_Data_Control = new class OpenAvrilConcurrency::Data_Control();
        while (stat_CLASS_get_ptr_Data_Control() == NULL) {}
    }
    void OpenAvrilConcurrency::Data::stat_CLASS_create_ptr_User_Input()
    {
        _stat_CLASS_ptr_User_Input = new class OpenAvrilConcurrency::User_Input();
        while (stat_CLASS_get_ptr_User_Input() == NULL) {}
    }
    void OpenAvrilConcurrency::Data::stat_CLASS_create_ptr_User_Output()
    {
        _stat_CLASS_ptr_User_Output = new class OpenAvrilConcurrency::User_Output();
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
    void OpenAvrilConcurrency::Data::stat_REG_create_ptr_array_Of_buffer_Input_ReferenceForThread(OpenAvrilConcurrency::Input* newDEFAULT_Input)
    {
        _stat_REG_ptr_array_Of_buffer_Input_ReferenceForThread = new std::array<class OpenAvrilConcurrency::Input*, 3>();
        for (uint8_t concurrentThreadID = 0; concurrentThreadID < sizeof(*stat_REG_get_ptr_Array_Of_buffer_Input_ReferenceForThread()); concurrentThreadID++)
        {
            stat_REG_set_Item_On_Array_Of_buffer_Input_ReferenceForThread(concurrentThreadID, newDEFAULT_Input);
        }
    }
    void OpenAvrilConcurrency::Data::stat_REG_create_ptr_array_Of_buffer_Output_ReferenceForThread(OpenAvrilConcurrency::Output* newDEFAULT_Output)
    {
        _stat_REG_ptr_array_Of_buffer_Output_ReferenceForThread = new std::array<class OpenAvrilConcurrency::Output*, 3>();
        for (uint8_t concurrentThreadID = 0; concurrentThreadID < sizeof(*stat_REG_get_ptr_array_Of_buffer_Output_ReferenceForThread()); concurrentThreadID++)
        {
            stat_REG_set_Item_On_Array_Of_buffer_Output_ReferenceForThread(concurrentThreadID, newDEFAULT_Output);
        }
    }
    void OpenAvrilConcurrency::Data::stat_REG_create_ptr_array_Of_doubleBuffer_Input(OpenAvrilConcurrency::Framework_Server* obj, OpenAvrilConcurrency::Input* newDEFAULT_Input)
    {
        _stat_REG_ptr_array_Of_doubleBuffer_Input = new std::array<class OpenAvrilConcurrency::Input*, 2>();
        while (stat_get_REG_ptr_array_Of_doubleBuffer_Input() == NULL) {}
        stat_REG_set_Item_On_Array_Of_doubleBuffer_Input_READ(obj, newDEFAULT_Input);
        stat_REG_set_Item_On_Array_Of_doubleBuffer_Input_WRITE(obj, newDEFAULT_Input);
    }
    void OpenAvrilConcurrency::Data::stat_REG_create_ptr_array_Of_doubleBuffer_Output(OpenAvrilConcurrency::Framework_Server* obj, OpenAvrilConcurrency::Output* newDEFAULT_Output)
    {
        _stat_REG_ptr_array_Of_doubleBuffer_Output = new std::array<class OpenAvrilConcurrency::Output*, 2>();
        while (stat_get_REG_ptr_array_Of_doubleBuffer_Output() == NULL) {}
        stat_REG_set_Item_On_Array_Of_doubleBuffer_Output_READ(obj, newDEFAULT_Output);
        stat_REG_set_Item_On_Array_Of_doubleBuffer_Output_WRITE(obj, newDEFAULT_Output);
    }
    void OpenAvrilConcurrency::Data::stat_REG_create_ptr_vector_Of_stack_Of_InputPraise(OpenAvrilConcurrency::Input* newDEFAULT_Input)
    {
        _stat_REG_ptr_vector_Of_stack_Of_InputPraise = new std::vector<class OpenAvrilConcurrency::Input*>();
        while (stat_REG_get_ptr_vector_Of_stack_Of_InputPraise() == NULL) {}
        stat_REG_get_ptr_vector_Of_stack_Of_InputPraise()->resize(1);
        stat_REG_set_Item_On_Vector_Of_stack_Of_InputPraise(0, newDEFAULT_Input);
    }
    void OpenAvrilConcurrency::Data::stat_REG_create_ptr_vector_Of_stack_Of_OutputPraise(OpenAvrilConcurrency::Output* newDEFAULT_Output)
    {
        _stat_REG_ptr_vector_Of_stack_Of_OutputPraise = new std::vector<class Output*>();
        while (stat_REG_get_ptr_vector_Of_stack_Of_OutputPraise() == NULL) {}
        stat_REG_get_ptr_vector_Of_stack_Of_OutputPraise()->resize(1);
        stat_REG_set_Item_On_Vector_Of_stack_Of_OutputPraise(0, newDEFAULT_Output);
    }
    // get.
    std::array<class OpenAvrilConcurrency::Input*, 3>* OpenAvrilConcurrency::Data::stat_REG_get_ptr_Array_Of_buffer_Input_ReferenceForThread()
    {
        return _stat_REG_ptr_array_Of_buffer_Input_ReferenceForThread;
    }
    std::array<class OpenAvrilConcurrency::Output*, 3>* OpenAvrilConcurrency::Data::stat_REG_get_ptr_array_Of_buffer_Output_ReferenceForThread()
    {
        return _stat_REG_ptr_array_Of_buffer_Output_ReferenceForThread;
    }
    std::array<class OpenAvrilConcurrency::Input*, 2>* OpenAvrilConcurrency::Data::stat_get_REG_ptr_array_Of_doubleBuffer_Input()
    {
        return _stat_REG_ptr_array_Of_doubleBuffer_Input;
    }
    std::array<class OpenAvrilConcurrency::Output*, 2>* OpenAvrilConcurrency::Data::stat_get_REG_ptr_array_Of_doubleBuffer_Output()
    {
        return _stat_REG_ptr_array_Of_doubleBuffer_Output;
    }
    std::vector<class OpenAvrilConcurrency::Input*>* OpenAvrilConcurrency::Data::stat_REG_get_ptr_vector_Of_stack_Of_InputPraise()
    {
        return _stat_REG_ptr_vector_Of_stack_Of_InputPraise;
    }
    std::vector<class OpenAvrilConcurrency::Output*>* OpenAvrilConcurrency::Data::stat_REG_get_ptr_vector_Of_stack_Of_OutputPraise()
    {
        return _stat_REG_ptr_vector_Of_stack_Of_OutputPraise;
    }
            // set.
    void OpenAvrilConcurrency::Data::stat_REG_set_Item_On_Array_Of_buffer_Input_ReferenceForThread(uint8_t concurrentThreadID, OpenAvrilConcurrency::Input* newClass)
    {
        auto temp = stat_REG_get_ptr_Array_Of_buffer_Input_ReferenceForThread()->begin();
        std::advance(temp, concurrentThreadID);
        *temp = newClass;
    }
    void OpenAvrilConcurrency::Data::stat_REG_set_Item_On_Array_Of_buffer_Output_ReferenceForThread(uint8_t concurrentThreadID, OpenAvrilConcurrency::Output* newClass)
    {
        auto temp = stat_REG_get_ptr_array_Of_buffer_Output_ReferenceForThread()->begin();
        std::advance(temp, concurrentThreadID);
        *temp = newClass;
    }
    void OpenAvrilConcurrency::Data::stat_REG_set_Item_On_Array_Of_doubleBuffer_Input_READ(OpenAvrilConcurrency::Framework_Server* obj, OpenAvrilConcurrency::Input* newClass)
    {
        auto temp = stat_get_REG_ptr_array_Of_doubleBuffer_Input()->begin();
        std::advance(temp, obj->dyn_CLASS_get_ptr_Server()->dyn_CLASS_get_ptr_Data()->dyn_CLASS_get_ptr_Data_Control()->app_FUNCT_Bool_To_Int(!obj->dyn_CLASS_get_ptr_Server()->dyn_CLASS_get_ptr_Data()->dyn_CLASS_get_ptr_Data_Control()->dyn_REG_get_Item_side_To_Write_For_array_Of_doubleBuffer_Output()));
        *temp = newClass;
    }
    void OpenAvrilConcurrency::Data::stat_REG_set_Item_On_Array_Of_doubleBuffer_Input_WRITE(OpenAvrilConcurrency::Framework_Server* obj, OpenAvrilConcurrency::Input* newClass)
    {
        auto temp = stat_get_REG_ptr_array_Of_doubleBuffer_Input()->begin();
        std::advance(temp, obj->dyn_CLASS_get_ptr_Server()->dyn_CLASS_get_ptr_Data()->dyn_CLASS_get_ptr_Data_Control()->app_FUNCT_Bool_To_Int(obj->dyn_CLASS_get_ptr_Server()->dyn_CLASS_get_ptr_Data()->dyn_CLASS_get_ptr_Data_Control()->dyn_REG_get_Item_side_To_Write_For_array_Of_doubleBuffer_Input()));
        *temp = newClass;
    }
    void OpenAvrilConcurrency::Data::stat_REG_set_Item_On_Array_Of_doubleBuffer_Output_READ(OpenAvrilConcurrency::Framework_Server* obj, OpenAvrilConcurrency::Output* newClass)
    {
        auto temp = stat_REG_get_ptr_vector_Of_stack_Of_OutputPraise()->begin();
        std::advance(temp, obj->dyn_CLASS_get_ptr_Server()->dyn_CLASS_get_ptr_Data()->dyn_CLASS_get_ptr_Data_Control()->app_FUNCT_Bool_To_Int(!obj->dyn_CLASS_get_ptr_Server()->dyn_CLASS_get_ptr_Data()->dyn_CLASS_get_ptr_Data_Control()->dyn_REG_get_Item_side_To_Write_For_array_Of_doubleBuffer_Output()));
        *temp = newClass;
    }
    void OpenAvrilConcurrency::Data::stat_REG_set_Item_On_Array_Of_doubleBuffer_Output_WRITE(OpenAvrilConcurrency::Framework_Server* obj, OpenAvrilConcurrency::Output* newClass)
    {
        auto temp = stat_REG_get_ptr_vector_Of_stack_Of_OutputPraise()->begin();
        std::advance(temp, obj->dyn_CLASS_get_ptr_Server()->dyn_CLASS_get_ptr_Data()->dyn_CLASS_get_ptr_Data_Control()->app_FUNCT_Bool_To_Int(obj->dyn_CLASS_get_ptr_Server()->dyn_CLASS_get_ptr_Data()->dyn_CLASS_get_ptr_Data_Control()->dyn_REG_get_Item_side_To_Write_For_array_Of_doubleBuffer_Output()));
        *temp = newClass;
    }
    void OpenAvrilConcurrency::Data::stat_REG_set_Item_On_Vector_Of_stack_Of_InputPraise(uint8_t slot, OpenAvrilConcurrency::Input* newClass)
    {
        auto temp = stat_REG_get_ptr_vector_Of_stack_Of_InputPraise()->begin();
        std::advance(temp, slot);
        *temp = newClass;
    }
    void OpenAvrilConcurrency::Data::stat_REG_set_Item_On_Vector_Of_stack_Of_OutputPraise(uint8_t slot, OpenAvrilConcurrency::Output* newClass)
    {
        auto temp = stat_REG_get_ptr_vector_Of_stack_Of_OutputPraise()->begin();
        std::advance(temp, slot);
        *temp = newClass;
    }