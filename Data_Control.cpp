#include "pch.h"

// pointers.
    // classes.
    // registers.
    bool* OpenAvrilConcurrency::Data_Control::_stat_REG_ptr_flag_isLoaded_Stack_InputAction = NULL;
    bool* OpenAvrilConcurrency::Data_Control::_stat_REG_ptr_flag_isLoaded_Stack_OutputSend = NULL;
    bool* OpenAvrilConcurrency::Data_Control::_stat_REG_ptr_side_To_Write_For_array_Of_doubleBuffer_Input = NULL;
    bool* OpenAvrilConcurrency::Data_Control::_Stat_REG_ptr_side_To_Write_For_array_Of_doubleBuffer_Output = NULL;

// public.
    // constructor.
    OpenAvrilConcurrency::Data_Control::Data_Control()
    {
        std::cout << "entered CONSTRUCTOR of Data_Control()." << std::endl;
        bool* newDEFAULT_Bool = new bool(true);
        stat_REG_create_ptr_flag_isLoaded_Stack_InputAction(newDEFAULT_Bool);
        stat_REG_create_ptr_flag_isLoaded_Stack_OutputSend(newDEFAULT_Bool);
        stat_REG_create_ptr_side_To_Write_For_array_Of_doubleBuffer_Input(newDEFAULT_Bool);
        stat_REG_create_ptr_side_To_Write_For_array_Of_doubleBuffer_Output(newDEFAULT_Bool);
        delete newDEFAULT_Bool;
        std::cout << "exiting CONSTRUCTOR of Data_Control()" << std::endl;
    }

    // destructor.
    OpenAvrilConcurrency::Data_Control::~Data_Control()
    {
        delete _stat_REG_ptr_flag_isLoaded_Stack_InputAction;
        delete _stat_REG_ptr_flag_isLoaded_Stack_OutputSend;
        delete _stat_REG_ptr_side_To_Write_For_array_Of_doubleBuffer_Input;
        delete _Stat_REG_ptr_side_To_Write_For_array_Of_doubleBuffer_Output;
    }

    // dynamic.
    uint8_t OpenAvrilConcurrency::Data_Control::app_FUNCT_Bool_To_Int(bool bufferSide)
    {
        uint8_t* temp = new uint8_t(UINT8_MAX);
        if (bufferSide)
        {
            *temp = 1;
        }
        else
        {
            *temp = 0;
        }
        return *temp;
    }
    void OpenAvrilConcurrency::Data_Control::app_FUNCT_Flip_Input_DoubleBuffer(OpenAvrilConcurrency::Data* data)
    {
        stat_REG_set_Item_side_To_Write_For_array_Of_doubleBuffer_Input(!*stat_REG_get_ptr_side_To_Write_For_array_Of_doubleBuffer_Input());
    }
    void OpenAvrilConcurrency::Data_Control::app_FUNCT_Flip_Output_DoubleBuffer(OpenAvrilConcurrency::Data* data)
    {
        stat_REG_set_Item_side_To_Write_For_array_Of_doubleBuffer_Output(!stat_REG_get_ptr_side_To_Write_For_array_Of_doubleBuffer_Output());
    }
    void OpenAvrilConcurrency::Data_Control::dyn_FUNCT_pop_From_Stack_Of_Input(OpenAvrilConcurrency::Data* data, uint8_t concurrentThreadID)
    {
        class OpenAvrilConcurrency::Input* referenceForCore = data->dyn_REG_get_ptr_Item_Of_list_Of_ptr_array_Of_buffer_Input_ReferenceForThread(concurrentThreadID);
        class OpenAvrilConcurrency::Input* inputSlot = data->dyn_REG_get_ptr_Item_On_vector_Of_stack_Of_InputPraise(1);
        referenceForCore = inputSlot;
        data->stat_REG_get_ptr_vector_Of_stack_Of_InputPraise()->erase(data->stat_REG_get_ptr_vector_Of_stack_Of_InputPraise()->begin() + 1);
        if (sizeof(*data->stat_REG_get_ptr_vector_Of_stack_Of_InputPraise()) < 2)
        {
            stat_REG_set_Item_flag_isLoaded_Stack_InputAction(new bool(false));
        }
        else
        {
            stat_REG_set_Item_flag_isLoaded_Stack_InputAction(new bool(true));
        }
    }
    void OpenAvrilConcurrency::Data_Control::app_FUNCT_pop_From_Stack_Of_Output(OpenAvrilConcurrency::Data* data)
    {
        class OpenAvrilConcurrency::Output* distributeBuffer = data->dyn_REG_get_ptr_Item_array_Of_doubleBuffer_Output_WRITE(obj);
        class OpenAvrilConcurrency::Output* outputSlot = data->dyn_REG_get_ptr_Item_On_vector_Of_stack_Of_OutputPraise(1);
        distributeBuffer = outputSlot;
        data->stat_REG_get_ptr_vector_Of_stack_Of_OutputPraise()->erase(data->stat_REG_get_ptr_vector_Of_stack_Of_OutputPraise()->begin() + 1);
        if (sizeof(data->stat_REG_get_ptr_vector_Of_stack_Of_OutputPraise()) < 2)
        {
            stat_REG_set_Item_flag_isLoaded_Stack_OutputSend(new bool(false));
        }
        else
        {
            stat_REG_set_Item_flag_isLoaded_Stack_OutputSend(new bool(true));
        }
    }
    void OpenAvrilConcurrency::Data_Control::app_FUNCT_push_To_STACK_Of_Input(OpenAvrilConcurrency::Data* data)
    {
        class OpenAvrilConcurrency::Input* inputBuffer = data->dyn_REG_get_ptr_Item_array_Of_doubleBuffer_Input_READ(obj);
        std::vector<class OpenAvrilConcurrency::Input*>* inputStackt = data->stat_REG_get_ptr_vector_Of_stack_Of_InputPraise();
        inputStackt->push_back(inputBuffer);
        if (sizeof(inputStackt) < 2)
        {
            stat_REG_set_Item_flag_isLoaded_Stack_InputAction(new bool(false));
        }
        else
        {
            stat_REG_set_Item_flag_isLoaded_Stack_InputAction(new bool(true));
        }
    }
    void OpenAvrilConcurrency::Data_Control::app_FUNCT_push_To_STACK_Of_Output(OpenAvrilConcurrency::Data* data, uint8_t concurrentThreadID)
    {
        class OpenAvrilConcurrency::Output* referenceForCore = data->dyn_REG_get_ptr_Item_Of_list_Of_ptr_array_Of_buffer_Output_ReferenceForThread(concurrentThreadID);
        std::vector<class OpenAvrilConcurrency::Output*>* outputStack = data->stat_REG_get_ptr_vector_Of_stack_Of_OutputPraise();
        outputStack->push_back(referenceForCore);
        if (sizeof(outputStack) < 2)
        {
            stat_REG_set_Item_flag_isLoaded_Stack_OutputSend(new bool(false));
        }
        else
        {
            stat_REG_set_Item_flag_isLoaded_Stack_OutputSend(new bool(true));
        }
    }
        // create.
    void OpenAvrilConcurrency::Data_Control::app_REG_initialise_ptr_flag_isLoaded_Stack_InputAction(bool newINITIALISED_Bool)
    {
        stat_REG_set_Item_flag_isLoaded_Stack_InputAction(newINITIALISED_Bool);
    }
    void OpenAvrilConcurrency::Data_Control::app_REG_initialise_ptr_flag_isLoaded_Stack_OutputSend(bool newINITIALISED_Bool)
    {
        stat_REG_set_Item_flag_isLoaded_Stack_OutputSend(newINITIALISED_Bool);
    }
    void OpenAvrilConcurrency::Data_Control::app_REG_initialise_ptr_side_To_Write_For_array_Of_doubleBuffer_Input(bool newINITIALISED_Bool)
    {
        stat_REG_set_Item_side_To_Write_For_array_Of_doubleBuffer_Input(newINITIALISED_Bool);
    }
    void OpenAvrilConcurrency::Data_Control::app_REG_initialise_ptr_side_To_Write_For_array_Of_doubleBuffer_Output(bool newINITIALISED_Bool)
    {
        stat_REG_set_Item_side_To_Write_For_array_Of_doubleBuffer_Output(newINITIALISED_Bool);
    }
        // get.
    bool OpenAvrilConcurrency::Data_Control::dyn_REG_get_Item_flag_isLoaded_Stack_InputAction()
    {
        return stat_REG_get_ptr_flag_isLoaded_Stack_InputAction();
    }
    bool OpenAvrilConcurrency::Data_Control::dyn_REG_get_Item_flag_isLoaded_Stack_OutputSend()
    {
        return stat_REG_get_ptr_flag_isLoaded_Stack_OutputSend();
    }
    bool OpenAvrilConcurrency::Data_Control::dyn_REG_get_Item_side_To_Write_For_array_Of_doubleBuffer_Input()
    {
        return stat_REG_get_ptr_side_To_Write_For_array_Of_doubleBuffer_Input();
    }
    bool OpenAvrilConcurrency::Data_Control::dyn_REG_get_Item_side_To_Write_For_array_Of_doubleBuffer_Output()
    {
        return stat_REG_get_ptr_side_To_Write_For_array_Of_doubleBuffer_Output;
    }
        // set.
    void OpenAvrilConcurrency::Data_Control::dyn_REG_set_ptr_flag_isLoaded_Stack_InputAction(bool new_Bool)
    {
        stat_REG_set_Item_flag_isLoaded_Stack_InputAction(new_Bool);
    }
    void OpenAvrilConcurrency::Data_Control::dyn_REG_set_ptr_flag_isLoaded_Stack_OutputSend(bool new_Bool)
    {
        stat_REG_set_Item_flag_isLoaded_Stack_OutputSend(new_Bool);
    }
    void OpenAvrilConcurrency::Data_Control::dyn_REG_set_ptr_side_To_Write_For_array_Of_doubleBuffer_Input(bool new_Bool)
    {
        stat_REG_set_Item_side_To_Write_For_array_Of_doubleBuffer_Input(new_Bool);
    }
    void OpenAvrilConcurrency::Data_Control::dyn_REG_set_ptr_side_To_Write_For_array_Of_doubleBuffer_Output(bool new_Bool)
    {
        stat_REG_set_Item_side_To_Write_For_array_Of_doubleBuffer_Output(new_Bool);
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
            // get.
            // set.
        // registers.
            // create.
    void OpenAvrilConcurrency::Data_Control::stat_REG_create_ptr_flag_isLoaded_Stack_InputAction(bool* newDEFAULT_Bool)
    {
        _stat_REG_ptr_flag_isLoaded_Stack_InputAction = new bool(NULL);
        while (stat_REG_get_ptr_flag_isLoaded_Stack_InputAction() == NULL) {}
        stat_REG_set_Item_flag_isLoaded_Stack_InputAction(*newDEFAULT_Bool);
    }
    void OpenAvrilConcurrency::Data_Control::stat_REG_create_ptr_flag_isLoaded_Stack_OutputSend(bool* newDEFAULT_Bool)
    {
        _stat_REG_ptr_flag_isLoaded_Stack_OutputSend = new bool(NULL);
        while (stat_REG_get_ptr_flag_isLoaded_Stack_OutputSend() == NULL) {}
        stat_REG_set_Item_flag_isLoaded_Stack_OutputSend(*newDEFAULT_Bool);
    }
    void OpenAvrilConcurrency::Data_Control::stat_REG_create_ptr_side_To_Write_For_array_Of_doubleBuffer_Input(bool* newDEFAULT_Bool)
    {
        _stat_REG_ptr_side_To_Write_For_array_Of_doubleBuffer_Input = new bool(NULL);
        while (stat_REG_get_ptr_side_To_Write_For_array_Of_doubleBuffer_Input() == NULL) {}
        stat_REG_set_Item_side_To_Write_For_array_Of_doubleBuffer_Input(*newDEFAULT_Bool);
    }
    void OpenAvrilConcurrency::Data_Control::stat_REG_create_ptr_side_To_Write_For_array_Of_doubleBuffer_Output(bool* newDEFAULT_Bool)
    {
        _Stat_REG_ptr_side_To_Write_For_array_Of_doubleBuffer_Output = new bool(NULL);
        while (stat_REG_get_ptr_side_To_Write_For_array_Of_doubleBuffer_Output() == NULL) {}
        stat_REG_set_Item_side_To_Write_For_array_Of_doubleBuffer_Output(*newDEFAULT_Bool);
    }
            // get.
    bool* OpenAvrilConcurrency::Data_Control::stat_REG_get_ptr_flag_isLoaded_Stack_InputAction()
    {
        return _stat_REG_ptr_flag_isLoaded_Stack_InputAction;
    }
    bool* OpenAvrilConcurrency::Data_Control::stat_REG_get_ptr_flag_isLoaded_Stack_OutputSend()
    {
        return _stat_REG_ptr_flag_isLoaded_Stack_OutputSend;
    }
    bool* OpenAvrilConcurrency::Data_Control::stat_REG_get_ptr_side_To_Write_For_array_Of_doubleBuffer_Input()
    {
        return _stat_REG_ptr_side_To_Write_For_array_Of_doubleBuffer_Input;
    }
    bool* OpenAvrilConcurrency::Data_Control::stat_REG_get_ptr_side_To_Write_For_array_Of_doubleBuffer_Output()
    {
        return _Stat_REG_ptr_side_To_Write_For_array_Of_doubleBuffer_Output;
    }
            // set.
    void OpenAvrilConcurrency::Data_Control::stat_REG_set_Item_flag_isLoaded_Stack_InputAction(bool newPtr)
    {
        *_stat_REG_ptr_flag_isLoaded_Stack_InputAction = newPtr;
    }
    void OpenAvrilConcurrency::Data_Control::stat_REG_set_Item_flag_isLoaded_Stack_OutputSend(bool newPtr)
    {
        *_stat_REG_ptr_flag_isLoaded_Stack_OutputSend = newPtr;
    }
    void OpenAvrilConcurrency::Data_Control::stat_REG_set_Item_side_To_Write_For_array_Of_doubleBuffer_Input(bool newvalue)
    {
        *_stat_REG_ptr_side_To_Write_For_array_Of_doubleBuffer_Input = newvalue;
    }
    void OpenAvrilConcurrency::Data_Control::stat_REG_set_Item_side_To_Write_For_array_Of_doubleBuffer_Output(bool newvalue)
    {
        *_Stat_REG_ptr_side_To_Write_For_array_Of_doubleBuffer_Output = newvalue;
    }