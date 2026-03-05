#include "pch.h"

// pointers.
    // classes.
    // registers.
    static bool* _stat_REG_ptr_flag_isLoaded_Stack_InputAction = NULL;
    static bool* _stat_REG_ptr_flag_isLoaded_Stack_OutputSend = NULL;
    static bool* _stat_REG_ptr_side_To_Write_For_array_Of_doubleBuffer_Input = NULL;
    static bool* _Stat_REG_ptr_side_To_Write_For_array_Of_doubleBuffer_Output = NULL;
        
// constructor.
    OpenAvrilConcurrency::Data_Control::Data_Control()
    {
        bool* newDEFAULT_Bool = new bool(true);
        stat_REG_create_ptr_flag_isLoaded_Stack_InputAction(newDEFAULT_Bool);
        stat_REG_create_ptr_flag_isLoaded_Stack_OutputSend(newDEFAULT_Bool);
        stat_REG_create_ptr_side_To_Write_For_array_Of_doubleBuffer_Input(newDEFAULT_Bool);
        stat_REG_create_ptr_side_To_Write_For_array_Of_doubleBuffer_Output(newDEFAULT_Bool);
        delete newDEFAULT_Bool;
    }

// destructor.
    OpenAvrilConcurrency::Data_Control::~Data_Control()
    {
        delete _stat_REG_ptr_flag_isLoaded_Stack_InputAction;
        delete _stat_REG_ptr_flag_isLoaded_Stack_OutputSend;
        delete _stat_REG_ptr_side_To_Write_For_array_Of_doubleBuffer_Input;
        delete _Stat_REG_ptr_side_To_Write_For_array_Of_doubleBuffer_Output;
    }

// public.
    // dynamic.
    uint8_t OpenAvrilConcurrency::Data_Control::boolToInt(bool bufferSide)
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
    void OpenAvrilConcurrency::Data_Control::flip_Input_DoubleBuffer(OpenAvrilConcurrency::Data* data)
    {
        set_REG_ptr_flag_isLoaded_Stack_InputAction(!get_REG_Item_flag_isLoaded_Stack_InputAction());
    }
    void OpenAvrilConcurrency::Data_Control::flip_Output_DoubleBuffer(OpenAvrilConcurrency::Data* data)
    {
        set_REG_ptr_flag_isLoaded_Stack_OutputSend(!get_REG_Item_flag_isLoaded_Stack_OutputSend());
    }
    void OpenAvrilConcurrency::Data_Control::initialise_REG_ptr_flag_isLoaded_Stack_InputAction(bool* newINITIALISED_Bool)
    {
        stat_REG_set_Item_flag_isLoaded_Stack_InputAction(newINITIALISED_Bool);
    }
    void OpenAvrilConcurrency::Data_Control::initialise_REG_ptr_flag_isLoaded_Stack_OutputSend(bool* newINITIALISED_Bool)
    {
        set_REG_ptr_flag_isLoaded_Stack_OutputSend(newINITIALISED_Bool);
    }
    void OpenAvrilConcurrency::Data_Control::initialise_REG_ptr_side_To_Write_For_array_Of_doubleBuffer_Input(uint8_t side, bool* newINITIALISED_Bool)
    {
        set_REG_ptr_side_To_Write_For_array_Of_doubleBuffer_Input(side, newINITIALISED_Bool);
    }
    void OpenAvrilConcurrency::Data_Control::initialise_REG_ptr_side_To_Write_For_array_Of_doubleBuffer_Output(uint8_t side, bool* newINITIALISED_Bool)
    {
        set_REG_ptr_side_To_Write_For_array_Of_doubleBuffer_Input(side, newINITIALISED_Bool);
    }
    void OpenAvrilConcurrency::Data_Control::pop_From_Stack_Of_Input(OpenAvrilConcurrency::Data* data, uint8_t concurrentThreadID)
    {
        class OpenAvrilConcurrency::Input* referenceForCore = data->get_REG_ptr_Item_Of_list_Of_ptr_array_Of_buffer_Input_ReferenceForThread(concurrentThreadID);
        class OpenAvrilConcurrency::Input* inputSlot = data->get_REG_ptr_Item_On_vector_Of_stack_Of_InputPraise(1);
        referenceForCore = inputSlot;
        data->get_REG_ptr_vector_Of_stack_Of_InputPraise()->erase(data->get_REG_ptr_vector_Of_stack_Of_InputPraise()->begin() + 1);
        if (sizeof(data->get_REG_ptr_vector_Of_stack_Of_InputPraise()) < 2)
        {
            stat_REG_set_Item_flag_isLoaded_Stack_InputAction(new bool(false));
        }
        else
        {
            stat_REG_set_Item_flag_isLoaded_Stack_InputAction(new bool(true));
        }
    }
    void OpenAvrilConcurrency::Data_Control::pop_From_Stack_Of_Output(OpenAvrilConcurrency::Framework_Server* obj, OpenAvrilConcurrency::Data* data)
    {
        class OpenAvrilConcurrency::Output* distributeBuffer = data->get_REG_ptr_Item_array_Of_doubleBuffer_Output_WRITE(obj);
        class OpenAvrilConcurrency::Output* outputSlot = data->get_REG_ptr_Item_On_vector_Of_stack_Of_OutputPraise(1);
        distributeBuffer = outputSlot;
        data->get_REG_ptr_vector_Of_stack_Of_OutputPraise()->erase(data->get_REG_ptr_vector_Of_stack_Of_OutputPraise()->begin() + 1);
        if (sizeof(data->get_REG_ptr_vector_Of_stack_Of_OutputPraise()) < 2)
        {
            stat_REG_set_Item_flag_isLoaded_Stack_OutputSend(new bool(false));
        }
        else
        {
            stat_REG_set_Item_flag_isLoaded_Stack_OutputSend(new bool(true));
        }
    }
    void OpenAvrilConcurrency::Data_Control::push_To_Stack_Of_Input(OpenAvrilConcurrency::Framework_Server* obj, OpenAvrilConcurrency::Data* data)
    {
        class OpenAvrilConcurrency::Input* inputBuffer = data->get_REG_ptr_Item_array_Of_doubleBuffer_Input_READ(obj);
        std::vector<class OpenAvrilConcurrency::Input*>* inputStackt = data->get_REG_ptr_vector_Of_stack_Of_InputPraise();
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
    void OpenAvrilConcurrency::Data_Control::push_To_Stack_Of_Output(OpenAvrilConcurrency::Data* data, uint8_t concurrentThreadID)
    {
        class OpenAvrilConcurrency::Output* referenceForCore = data->get_REG_ptr_Item_Of_list_Of_ptr_array_Of_buffer_Output_ReferenceForThread(concurrentThreadID);
        std::vector<class OpenAvrilConcurrency::Output*>* outputStack = data->get_REG_ptr_vector_Of_stack_Of_OutputPraise();
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
        // get.
    bool OpenAvrilConcurrency::Data_Control::get_REG_Item_flag_isLoaded_Stack_InputAction()
    {
        return _stat_REG_ptr_flag_isLoaded_Stack_InputAction;
    }
    bool OpenAvrilConcurrency::Data_Control::get_REG_Item_flag_isLoaded_Stack_OutputSend()
    {
        return _stat_REG_ptr_flag_isLoaded_Stack_OutputSend;
    }
    bool OpenAvrilConcurrency::Data_Control::get_REG_Item_side_To_Write_For_array_Of_doubleBuffer_Input()
    {
        return _stat_REG_ptr_side_To_Write_For_array_Of_doubleBuffer_Input;
    }
    bool OpenAvrilConcurrency::Data_Control::get_REG_Item_side_To_Write_For_array_Of_doubleBuffer_Output()
    {
        return _Stat_REG_ptr_side_To_Write_For_array_Of_doubleBuffer_Output;
    }
        // set.
    void OpenAvrilConcurrency::Data_Control::set_REG_ptr_flag_isLoaded_Stack_InputAction(bool value)
    {
        _stat_REG_ptr_flag_isLoaded_Stack_InputAction;
    }
    void OpenAvrilConcurrency::Data_Control::set_REG_ptr_flag_isLoaded_Stack_OutputSend(bool value)
    {
        _stat_REG_ptr_flag_isLoaded_Stack_OutputSend;
    }
    void OpenAvrilConcurrency::Data_Control::set_REG_ptr_side_To_Write_For_array_Of_doubleBuffer_Input(uint8_t side, bool* newINITIALISED_Bool)
    {
        _stat_REG_ptr_side_To_Write_For_array_Of_doubleBuffer_Input[side] = newINITIALISED_Bool;
    }
    void OpenAvrilConcurrency::Data_Control::set_REG_ptr_side_To_Write_For_array_Of_doubleBuffer_Output(uint8_t side, bool* new_Bool)
    {
        _Stat_REG_ptr_side_To_Write_For_array_Of_doubleBuffer_Output[side] = new_Bool;
    }
    // static.
        // get.
        // set.

// private.
    // dynamic.
        // get.
        // set.
    // static.
        // classes.
            // create.
    void OpenAvrilConcurrency::Data_Control::stat_REG_create_ptr_flag_isLoaded_Stack_InputAction(bool* newDEFAULT_Bool)
    {
        bool* _stat_REG_ptr_flag_isLoaded_Stack_InputAction = new bool(true);
        while (stat_REG_get_ptr_flag_isLoaded_Stack_InputAction() == NULL) {}
        *_stat_REG_ptr_flag_isLoaded_Stack_InputAction = *newDEFAULT_Bool;
    }
    void OpenAvrilConcurrency::Data_Control::stat_REG_create_ptr_flag_isLoaded_Stack_OutputSend(bool* newDEFAULT_Bool)
    {
        bool* _stat_REG_ptr_flag_isLoaded_Stack_OutputSend = new bool(true);
        while (stat_REG_get_ptr_flag_isLoaded_Stack_OutputSend() == NULL) {}
        *_stat_REG_ptr_flag_isLoaded_Stack_OutputSend = *newDEFAULT_Bool;
    }
    void OpenAvrilConcurrency::Data_Control::stat_REG_create_ptr_side_To_Write_For_array_Of_doubleBuffer_Input(bool* newDEFAULT_Bool)
    {
        bool* _stat_REG_ptr_side_To_Write_For_array_Of_doubleBuffer_Input = new bool(true);
        while (stat_REG_get_ptr_side_To_Write_For_array_Of_doubleBuffer_Input() == NULL) {}
        *_stat_REG_ptr_side_To_Write_For_array_Of_doubleBuffer_Input = *newDEFAULT_Bool;
    }
    void OpenAvrilConcurrency::Data_Control::stat_REG_create_ptr_side_To_Write_For_array_Of_doubleBuffer_Output(bool* newDEFAULT_Bool)
    {
        bool* _Stat_REG_ptr_side_To_Write_For_array_Of_doubleBuffer_Output = new bool(true);
        while (stat_REG_get_ptr_side_To_Write_For_array_Of_doubleBuffer_Output() == NULL) {}
        *_Stat_REG_ptr_side_To_Write_For_array_Of_doubleBuffer_Output = *newDEFAULT_Bool;
    }
            // get.
    bool OpenAvrilConcurrency::Data_Control::stat_REG_get_Item_flag_isLoaded_Stack_InputAction()
    {
        return *_stat_REG_ptr_flag_isLoaded_Stack_InputAction;
    }
    bool OpenAvrilConcurrency::Data_Control::stat_REG_get_Item_flag_isLoaded_Stack_OutputSend()
    {
        return *_stat_REG_ptr_flag_isLoaded_Stack_OutputSend;
    }
    bool OpenAvrilConcurrency::Data_Control::stat_REG_get_Item_side_To_Write_For_array_Of_doubleBuffer_Input()
    {
        return *_stat_REG_ptr_side_To_Write_For_array_Of_doubleBuffer_Input;
    }
    bool OpenAvrilConcurrency::Data_Control::stat_REG_get_Item_side_To_Write_For_array_Of_doubleBuffer_Output()
    {
        return *_Stat_REG_ptr_side_To_Write_For_array_Of_doubleBuffer_Output;
    }
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
        // registers.
            // create.
            // get.
            // set.
    void OpenAvrilConcurrency::Data_Control::stat_REG_set_Item_flag_isLoaded_Stack_InputAction(bool* newPtr)
    {
        *_stat_REG_ptr_flag_isLoaded_Stack_InputAction = *newPtr;
    }
    void OpenAvrilConcurrency::Data_Control::stat_REG_set_Item_flag_isLoaded_Stack_OutputSend(bool* newPtr)
    {
        *_stat_REG_ptr_flag_isLoaded_Stack_OutputSend = *newPtr;
    }
    void OpenAvrilConcurrency::Data_Control::stat_REG_set_Item_side_To_Write_For_array_Of_doubleBuffer_Input(bool* newvalue)
    {
        *_stat_REG_ptr_side_To_Write_For_array_Of_doubleBuffer_Input = *newvalue;
    }
    void OpenAvrilConcurrency::Data_Control::stat_REG_set_Item_side_To_Write_For_array_Of_doubleBuffer_Output(bool* newvalue)
    {
        *_Stat_REG_ptr_side_To_Write_For_array_Of_doubleBuffer_Output = *newvalue;
    }