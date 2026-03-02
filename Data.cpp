#include "pch.h"

// pointers.
    // classes.
    static class OpenAvrilConcurrency::Data_Control* _ptr_Data_Control = NULL;
    static class OpenAvrilConcurrency::User_Input* _ptr_User_Input = NULL;
    static class OpenAvrilConcurrency::User_Output* _ptr_User_Output = NULL;
    // registers.
    static std::array<class OpenAvrilConcurrency::Input*, 3>* _ptr_array_Of_buffer_Input_ReferenceForThread = NULL;//NUMBER OF CONCURRENT THREADS.
    static std::array<class OpenAvrilConcurrency::Output*, 3>* _ptr_array_Of_buffer_Output_ReferenceForThread = NULL;//NUMBER OF CONCURRENT THREADS.
    static std::array<class OpenAvrilConcurrency::Input*, 2>* _ptr_array_Of_doubleBuffer_Input = NULL;
    static std::array<class OpenAvrilConcurrency::Output*, 2>* ptr_array_Of_doubleBuffer_Output = NULL;
    static std::vector<class OpenAvrilConcurrency::Input*>* _ptr_vector_Of_stack_Of_InputPraise = NULL;
    static std::vector<class OpenAvrilConcurrency::Output*>* _ptr_vector_Of_stack_Of_OutputPraise = NULL;

// constructor.
    OpenAvrilConcurrency::Data::Data()
    {
        std::cout << "entered constructor of OpenAvrilConcurrency::Data::Data()" << std::endl;
        stat_create_ptr_User_Input();
        stat_create_ptr_User_Output();
       
        OpenAvrilConcurrency::Input* newDEFAULT_Input = new class OpenAvrilConcurrency::Input();
        while (newDEFAULT_Input == NULL) {}
        stat_create_ptr_array_Of_buffer_Input_ReferenceForThread(newDEFAULT_Input);
        stat_create_ptr_array_Of_doubleBuffer_Input(newDEFAULT_Input);
        stat_create_ptr_vector_Of_stack_Of_InputPraise(newDEFAULT_Input);
        delete newDEFAULT_Input;
        
        OpenAvrilConcurrency::Output* newDEFAULT_output = new class OpenAvrilConcurrency::Output();
        while (newDEFAULT_output == NULL) {}
        stat_create_ptr_array_Of_buffer_Output_ReferenceForThread(newDEFAULT_output);
        stat_create_ptr_array_Of_doubleBuffer_Output(newDEFAULT_output);
        stat_create_ptr_vector_Of_stack_Of_OutputPraise(newDEFAULT_output);
        delete newDEFAULT_output;
        std::cout << "exiting constructor of OpenAvrilConcurrency::Data::Data()" << std::endl;
    }

// destructor.
    OpenAvrilConcurrency::Data::~Data()
    {
        delete _ptr_Data_Control;
        delete _ptr_User_Input;
        delete _ptr_User_Output;
        delete _ptr_array_Of_buffer_Input_ReferenceForThread;
        delete _ptr_array_Of_buffer_Output_ReferenceForThread;
        delete _ptr_array_Of_doubleBuffer_Input;
        delete _ptr_array_Of_doubleBuffer_Output;
        delete _ptr_vector_Of_stack_Of_InputPraise;
        delete _ptr_vector_Of_stack_Of_OutputPraise;
    }

// public.
    // dynamic.
    void OpenAvrilConcurrency::Data::initialise_Control()
    {
        stat_create_CLASS_Data_Control();
    }
    void OpenAvrilConcurrency::Data::initialise_Item_On_array_Of_ptr_array_Of_buffer_Input_ReferenceForThread(uint8_t concurrentThreadID, OpenAvrilConcurrency::Input* newINITIALISED_Input)
    {
        stat_set_ptr_Item_Of_list_Of_ptr_array_Of_buffer_Input_ReferenceForThread(concurrentThreadID, newINITIALISED_Input);
    }
    void OpenAvrilConcurrency::Data::initialise_Item_On_array_Of_ptr_array_Of_buffer_Output_ReferenceForThread(uint8_t concurrentThreadID, OpenAvrilConcurrency::Output* newINITIALISED_Output)
    {
        stat_set_ptr_Item_Of_list_Of_ptr_array_Of_buffer_Output_ReferenceForThread(concurrentThreadID, newINITIALISED_Output);
    }
    void OpenAvrilConcurrency::Data::initialise_Item_On_array_Of_doubleBuffer_Input(uint8_t sideRW, OpenAvrilConcurrency::Input* newINITIALISED_Input)
    {
        auto temp = stat_get_ptr_array_Of_doubleBuffer_Input()->begin();
        std::advance(temp, sideRW);
        *temp = newINITIALISED_Input;
    }
    void OpenAvrilConcurrency::Data::initialise_Item_On_array_Of_doubleBuffer_Output(uint8_t sideRW, OpenAvrilConcurrency::Output* newINITIALISED_Output)
    {
        auto temp = stat_get_ptr_array_Of_doubleBuffer_Output()->begin();
        std::advance(temp, sideRW);
        *temp = newINITIALISED_Output;
    }
    void OpenAvrilConcurrency::Data::initialise_Item_On_vector_Of_stack_Of_InputPraise(uint8_t slot, OpenAvrilConcurrency::Input* newINITIALISED_Input)
    {
        auto temp = stat_get_ptr_vector_Of_stack_Of_InputPraise()->begin();
        std::advance(temp, slot);
        *temp = newINITIALISED_Input;
    }
    void OpenAvrilConcurrency::Data::initialise_Item_On_vector_Of_stack_Of_OutputPraise(uint8_t slot, OpenAvrilConcurrency::Output* newINITIALISED_Output)
    {
        auto temp = stat_get_ptr_vector_Of_stack_Of_OutputPraise()->begin();
        std::advance(temp, slot);
        *temp = newINITIALISED_Output;
    }
        // get.
    OpenAvrilConcurrency::Data_Control* OpenAvrilConcurrency::Data::get_ptr_CLASS_Data_Control()
    {
        return stat_get_ptr_CLASS_Data_Control();
    }
    OpenAvrilConcurrency::Input* OpenAvrilConcurrency::Data::get_ptr_Item_array_Of_doubleBuffer_Input_READ(OpenAvrilConcurrency::Framework_Server* obj)
    {
        stat_set_ptr_Item_array_Of_doubleBuffer_Input_WRITE(obj->get_CLASS_ptr_Server()->get_ptr_CLASS_Data()->get_ptr_CLASS_Data_Control()->get_STATE_Of_READ_For_array_Of_doubleBuffer_Input());
    }
    OpenAvrilConcurrency::Input* OpenAvrilConcurrency::Data::get_ptr_Item_array_Of_doubleBuffer_Input_WRITE(OpenAvrilConcurrency::Framework_Server* obj)
    {
        auto temp = stat_get_ptr_array_Of_doubleBuffer_Input()->begin();
        std::advance(temp, obj->get_CLASS_ptr_Server()->get_ptr_CLASS_Data()->get_ptr_CLASS_Data_Control()->get_STATE_Of_WRITE_For_array_Of_doubleBuffer_Input());
        return *temp;
    }
    OpenAvrilConcurrency::Output* OpenAvrilConcurrency::Data::get_ptr_Item_array_Of_doubleBuffer_Output_READ(OpenAvrilConcurrency::Framework_Server* obj)
    {
        auto temp = stat_get_ptr_array_Of_doubleBuffer_Output()->begin();
        std::advance(temp, obj->get_CLASS_ptr_Server()->get_ptr_CLASS_Data()->get_ptr_CLASS_Data_Control()->get_STATE_Of_READ_For_array_Of_doubleBuffer_Output());
        return *temp;
    }
    OpenAvrilConcurrency::Output* OpenAvrilConcurrency::Data::get_ptr_Item_array_Of_doubleBuffer_Output_WRITE(OpenAvrilConcurrency::Framework_Server* obj)
    {
        auto temp = stat_get_ptr_array_Of_doubleBuffer_Output()->begin();
        std::advance(temp, obj->get_CLASS_ptr_Server()->get_ptr_CLASS_Data()->get_ptr_CLASS_Data_Control()->get_STATE_Of_WRITE_For_array_Of_doubleBuffer_Output());
        return *temp;
    }
    OpenAvrilConcurrency::Input* OpenAvrilConcurrency::Data::get_ptr_Item_Of_list_Of_ptr_array_Of_buffer_Input_ReferenceForThread(uint8_t threadID)
    {
        return stat_get_ptr_Item_Of_list_Of_ptr_array_Of_buffer_Input_ReferenceForThread(threadID);
    }
    OpenAvrilConcurrency::Output* OpenAvrilConcurrency::Data::get_ptr_Item_Of_list_Of_ptr_array_Of_buffer_Output_ReferenceForThread(uint8_t threadID)
    {
        return stat_get_ptr_Item_Of_list_Of_ptr_array_Of_buffer_Output_ReferenceForThread(threadID);
    }
    OpenAvrilConcurrency::Input* OpenAvrilConcurrency::Data::get_ptr_Item_On_vector_Of_stack_Of_InputPraise(uint8_t slot)
    {
        return stat_get_ptr_Item_On_vector_Of_stack_Of_InputPraise(slot);
    }
    OpenAvrilConcurrency::Output* OpenAvrilConcurrency::Data::get_ptr_Item_On_vector_Of_stack_Of_OutputPraise(uint8_t slot)
    {
        return stat_get_ptr_Item_On_vector_Of_stack_Of_OutputPraise(slot);
    }
    std::array<class OpenAvrilConcurrency::Input*, 3>* OpenAvrilConcurrency::Data::get_ptr_array_Of_buffer_Input_ReferenceForThread()
    {
        return stat_get_ptr_array_Of_buffer_Input_ReferenceForThread();
    }
    std::array<class OpenAvrilConcurrency::Output*, 3>* OpenAvrilConcurrency::Data::get_ptr_array_Of_buffer_Output_ReferenceForThread()
    {
        return stat_get_ptr_array_Of_buffer_Output_ReferenceForThread();
    }
    std::vector<class OpenAvrilConcurrency::Input*>* OpenAvrilConcurrency::Data::get_ptr_vector_Of_stack_Of_InputPraise()
    {
        return stat_get_ptr_vector_Of_stack_Of_InputPraise();
    }
    std::vector<class OpenAvrilConcurrency::Output*>* OpenAvrilConcurrency::Data::get_ptr_vector_Of_stack_Of_OutputPraise()
    {
        return stat_get_ptr_vector_Of_stack_Of_OutputPraise();
    }
    OpenAvrilConcurrency::User_Input* OpenAvrilConcurrency::Data::get_ptr_User_Input()
    {
        return stat_get_ptr_User_Input();
    }
    OpenAvrilConcurrency::User_Output* OpenAvrilConcurrency::Data::get_ptr_User_Output()
    {
        return stat_get_ptr_User_Output();
    }
        // set.
    void OpenAvrilConcurrency::Data::set_ptr_Item_array_Of_doubleBuffer_Input_READ(Framework_Server* obj, Input* newClass)
    {
        stat_set_ptr_Item_array_Of_doubleBuffer_Input_WRITE(side, newClass);
    }
    void OpenAvrilConcurrency::Data::set_ptr_Item_array_Of_doubleBuffer_Input_WRITE(Framework_Server* obj, Input* newClass)
    {
        stat_set_ptr_Item_array_Of_doubleBuffer_Output_WRITE(obj->get_CLASS_ptr_Server()->get_ptr_CLASS_Data()->get_ptr_CLASS_Data_Control()->, newClass);
    }
    void OpenAvrilConcurrency::Data::set_ptr_Item_array_Of_doubleBuffer_Output_READ(Framework_Server* obj, Output* newClass)
    {
        set_ptr_Item_array_Of_doubleBuffer_Output_READ(obj, newClass);
    }
    void OpenAvrilConcurrency::Data::set_ptr_Item_array_Of_doubleBuffer_Output_WRITE(Framework_Server* obj, Output* newClass)
    {
        set_ptr_Item_array_Of_doubleBuffer_Output_WRITE(obj, newClass);
    }
    void OpenAvrilConcurrency::Data::set_ptr_Item_Of_list_Of_ptr_array_Of_buffer_Input_ReferenceForThread(uint8_t threadID, Input* newClass)
    {

    }
    void OpenAvrilConcurrency::Data::set_ptr_Item_Of_list_Of_ptr_array_Of_buffer_Output_ReferenceForThread(uint8_t threadID, Output* newClass)
    {

    }
    void OpenAvrilConcurrency::Data::set_ptr_Item_On_vector_Of_stack_Of_InputPraise(uint8_t slot, Input* newClass)
    {

    }
    void OpenAvrilConcurrency::Data::set_ptr_Item_On_vector_Of_stack_Of_OutputPraise(uint8_t slot, Output* newClass)
    {

    }
    // static
        // get.
        // set.

// private.
    // dynamic.
        // get.
        // set.
    // static.
    void OpenAvrilConcurrency::Data::stat_create_ptr_array_Of_doubleBuffer_Input(OpenAvrilConcurrency::Input* newDEFAULT_Input)
    {
        std::array<class OpenAvrilConcurrency::Input*, 2>* _ptr_array_Of_doubleBuffer_Input = new std::array<class OpenAvrilConcurrency::Input*, 2>();
        while (stat_get_ptr_array_Of_doubleBuffer_Input() == NULL) {}
        *_ptr_array_Of_doubleBuffer_Input = { newDEFAULT_Input, newDEFAULT_Input };
    }
    void OpenAvrilConcurrency::Data::stat_create_ptr_array_Of_doubleBuffer_Output(OpenAvrilConcurrency::Output* newDEFAULT_Output)
    {
        std::array<class OpenAvrilConcurrency::Output*, 2>* _ptr_array_Of_doubleBuffer_Output = new std::array<class OpenAvrilConcurrency::Output*, 2>();
        while (stat_get_ptr_array_Of_doubleBuffer_Output() == NULL) {}
        *_ptr_array_Of_doubleBuffer_Output = { newDEFAULT_Output, newDEFAULT_Output };
    }
    void OpenAvrilConcurrency::Data::stat_create_CLASS_Data_Control()
    {
        class OpenAvrilConcurrency::Data_Control* _ptr_Data_Control = new class OpenAvrilConcurrency::Data_Control();
        while (stat_get_ptr_CLASS_Data_Control() == NULL) {}

    }
    void OpenAvrilConcurrency::Data::stat_create_ptr_array_Of_buffer_Input_ReferenceForThread(OpenAvrilConcurrency::Input* newDEFAULT_Input)
    {
        std::array<class OpenAvrilConcurrency::Input*, 3>* _ptr_array_Of_doubleBuffer_Input = new std::array<class OpenAvrilConcurrency::Input*, 3>();//NUMBER Of CONCURRENT THREADS.
        while (stat_get_ptr_array_Of_buffer_Input_ReferenceForThread() == NULL) {}
        *_ptr_array_Of_doubleBuffer_Input = { newDEFAULT_Input, newDEFAULT_Input, newDEFAULT_Input };//NUMBER OF CONCURRENT THREADS.
    }
    void OpenAvrilConcurrency::Data::stat_create_ptr_array_Of_buffer_Output_ReferenceForThread(OpenAvrilConcurrency::Output* newDEFAULT_Output)
    {
        std::array<class OpenAvrilConcurrency::Output*, 3>* _ptr_array_Of_doubleBuffer_Output = new std::array<class OpenAvrilConcurrency::Output*, 3>();//NUMBER OF CONCURRENT THREADS.
        while (stat_get_ptr_array_Of_buffer_Output_ReferenceForThread() == NULL) {}
        *_ptr_array_Of_doubleBuffer_Output = { newDEFAULT_Output, newDEFAULT_Output, newDEFAULT_Output };//NUMBER OF CONCURRENT THREADS.
    }
    void OpenAvrilConcurrency::Data::stat_create_ptr_vector_Of_stack_Of_InputPraise(OpenAvrilConcurrency::Input* newDEFAULT_Input)
    {
        std::vector<class OpenAvrilConcurrency::Input*>* _ptr_vector_Of_stack_Of_InputPraise = new std::vector<class OpenAvrilConcurrency::Input*>();
        while (stat_get_ptr_vector_Of_stack_Of_InputPraise() == NULL) { }
        *_ptr_vector_Of_stack_Of_InputPraise = { newDEFAULT_Input };
    }
    void OpenAvrilConcurrency::Data::stat_create_ptr_vector_Of_stack_Of_OutputPraise(OpenAvrilConcurrency::Output* newDEFAULT_Output)
    {
        std::vector<class OpenAvrilConcurrency::Output*>* _ptr_vector_Of_stack_Of_OutputPraise = new std::vector<class OpenAvrilConcurrency::Output*>();
        while (stat_get_ptr_vector_Of_stack_Of_OutputPraise() == NULL) { }
        *_ptr_vector_Of_stack_Of_OutputPraise = { newDEFAULT_Output };
    }
    void OpenAvrilConcurrency::Data::stat_create_ptr_User_Input()
    {
        class OpenAvrilConcurrency::User_Input* _ptr_User_Input = new class OpenAvrilConcurrency::User_Input();
        while (stat_get_ptr_User_Input() == NULL) {}
    }
    void OpenAvrilConcurrency::Data::stat_create_ptr_User_Output()
    {
        class OpenAvrilConcurrency::User_Output* _ptr_User_Output = new class OpenAvrilConcurrency::User_Output();
        while (stat_get_ptr_User_Output() == NULL) {}
    }
        // get.
    OpenAvrilConcurrency::Input* OpenAvrilConcurrency::Data::stat_get_ptr_Item_array_Of_doubleBuffer_Input_READ(uint8_t side)
    {
        auto temp = stat_get_ptr_array_Of_doubleBuffer_Input()->begin();
        std::advance(temp, side);
        return *temp;
    }
    OpenAvrilConcurrency::Input* OpenAvrilConcurrency::Data::stat_get_ptr_Item_array_Of_doubleBuffer_Input_WRITE(uint8_t side)
    {
        auto temp = stat_get_ptr_array_Of_doubleBuffer_Input()->begin();
        std::advance(temp, side);
        return *temp;
    }
    OpenAvrilConcurrency::Output* OpenAvrilConcurrency::Data::stat_get_ptr_Item_array_Of_doubleBuffer_Output_READ(uint8_t side)
    {
        auto temp = stat_get_ptr_array_Of_doubleBuffer_Output()->begin();
        std::advance(temp, side);
        return *temp;
    }
    OpenAvrilConcurrency::Output* OpenAvrilConcurrency::Data::stat_get_ptr_Item_array_Of_doubleBuffer_Output_WRITE(uint8_t side)
    {
        auto temp = stat_get_ptr_array_Of_doubleBuffer_Output()->begin();
        std::advance(temp, side);
        return *temp;
    }
    OpenAvrilConcurrency::Data_Control* OpenAvrilConcurrency::Data::stat_get_ptr_CLASS_Data_Control()
    {
        return _ptr_Data_Control;
    }
    std::array<class OpenAvrilConcurrency::Input*, 3>* OpenAvrilConcurrency::Data::stat_get_ptr_array_Of_buffer_Input_ReferenceForThread()
    {
        return _ptr_array_Of_buffer_Input_ReferenceForThread;
    }
    std::array<class OpenAvrilConcurrency::Output*, 3>* OpenAvrilConcurrency::Data::stat_get_ptr_array_Of_buffer_Output_ReferenceForThread()
    {
        return _ptr_array_Of_buffer_Output_ReferenceForThread;
    }
    std::array<class OpenAvrilConcurrency::Input*, 2>* OpenAvrilConcurrency::Data::stat_get_ptr_array_Of_doubleBuffer_Input()
    {
        return _ptr_array_Of_doubleBuffer_Input;
    }
    std::array<class OpenAvrilConcurrency::Output*, 2>* OpenAvrilConcurrency::Data::stat_get_ptr_array_Of_doubleBuffer_Output()
    {
        return _ptr_array_Of_doubleBuffer_Output;
    }
    OpenAvrilConcurrency::Input* OpenAvrilConcurrency::Data::stat_get_ptr_Item_Of_list_Of_ptr_array_Of_buffer_Input_ReferenceForThread(uint8_t threadID)
    {
        auto temp = stat_get_ptr_array_Of_buffer_Input_ReferenceForThread()->begin();
        std::advance(temp, threadID);
        return *temp;
        
    }
    OpenAvrilConcurrency::Output* OpenAvrilConcurrency::Data::stat_get_ptr_Item_Of_list_Of_ptr_array_Of_buffer_Output_ReferenceForThread(uint8_t threadID)
    {
        auto temp = stat_get_ptr_array_Of_buffer_Output_ReferenceForThread()->begin();
        std::advance(temp, threadID);
        return *temp;
    }
    OpenAvrilConcurrency::Input* OpenAvrilConcurrency::Data::stat_get_ptr_Item_On_vector_Of_stack_Of_InputPraise(uint8_t slot)
    {
        auto temp = stat_get_ptr_vector_Of_stack_Of_InputPraise()->begin();
        std::advance(temp, slot);
        return *temp;
    }
    OpenAvrilConcurrency::Output* OpenAvrilConcurrency::Data::stat_get_ptr_Item_On_vector_Of_stack_Of_OutputPraise(uint8_t slot)
    {
        auto temp = stat_get_ptr_vector_Of_stack_Of_OutputPraise()->begin();
        std::advance(temp, slot);
        return *temp;
    }
    std::vector<class OpenAvrilConcurrency::Input*>* OpenAvrilConcurrency::Data::stat_get_ptr_vector_Of_stack_Of_InputPraise()
    {
        return _ptr_vector_Of_stack_Of_InputPraise;
    }
    std::vector<class OpenAvrilConcurrency::Output*>* OpenAvrilConcurrency::Data::stat_get_ptr_vector_Of_stack_Of_OutputPraise()
    {
        return _ptr_vector_Of_stack_Of_OutputPraise;
    }
    OpenAvrilConcurrency::User_Input* OpenAvrilConcurrency::Data::stat_get_ptr_User_Input()
    {
        return _ptr_User_Input;
    }
    OpenAvrilConcurrency::User_Output* OpenAvrilConcurrency::Data::stat_get_ptr_User_Output()
    {
        return _ptr_User_Output;
    }
        // set.
    void OpenAvrilConcurrency::Data::stat_set_ptr_Item_array_Of_doubleBuffer_Input_WRITE(uint8_t side, OpenAvrilConcurrency::Input* newClass)
    {
        auto temp = stat_get_ptr_array_Of_doubleBuffer_Input()->begin();
        std::advance(temp, side);
        *temp = newClass;
    }
    void OpenAvrilConcurrency::Data::stat_set_ptr_Item_array_Of_doubleBuffer_Output_WRITE(uint8_t side, OpenAvrilConcurrency::Output* newClass)
    {
        auto temp = stat_get_ptr_array_Of_doubleBuffer_Output()->begin();
        std::advance(temp, side);
        *temp = newClass;
    }
    void OpenAvrilConcurrency::Data::stat_set_ptr_Item_Of_list_Of_ptr_array_Of_buffer_Input_ReferenceForThread(uint8_t concurrentThreadID, OpenAvrilConcurrency::Input* newClass)
    {
        auto temp = stat_get_ptr_array_Of_buffer_Input_ReferenceForThread()->begin();
        std::advance(temp, concurrentThreadID);
        *temp = newClass;
    }
    void OpenAvrilConcurrency::Data::stat_set_ptr_Item_Of_list_Of_ptr_array_Of_buffer_Output_ReferenceForThread(uint8_t concurrentThreadID, OpenAvrilConcurrency::Output* newClass)
    {
        auto temp = stat_get_ptr_array_Of_buffer_Output_ReferenceForThread()->begin();
        std::advance(temp, concurrentThreadID);
        *temp = newClass;
    }
    void OpenAvrilConcurrency::Data::stat_set_ptr_Item_On_vector_Of_stack_Of_InputPraise(uint8_t slot, OpenAvrilConcurrency::Input* newClass)
    {
        auto temp = stat_get_ptr_array_Of_buffer_Input_ReferenceForThread()->begin();
        std::advance(temp, slot);
        *temp = newClass;
    }
    void OpenAvrilConcurrency::Data::stat_set_ptr_Item_On_vector_Of_stack_Of_OutputPraise(uint8_t slot, OpenAvrilConcurrency::Output* newClass)
    {
        auto temp = stat_get_ptr_array_Of_buffer_Output_ReferenceForThread()->begin();
        std::advance(temp, slot);
        *temp = newClass;
    }
