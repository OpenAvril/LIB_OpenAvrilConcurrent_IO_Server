#include "pch.h"
    OpenAvrilConcurrency::Data_Control* OpenAvrilConcurrency::Data::_stat_CLASS_ptr_Data_Control;
    OpenAvrilConcurrency::User_Input* OpenAvrilConcurrency::Data::_stat_CLASS_ptr_User_Input;
    OpenAvrilConcurrency::User_Output* OpenAvrilConcurrency::Data::_stat_CLASS_ptr_User_Output;
    std::array<OpenAvrilConcurrency::Input*, 3>* OpenAvrilConcurrency::Data::_stat_REG_ptr_array_Of_buffer_Input_ReferenceForThread;//NUMBER OF CONCURRENT THREADS.
    std::array<OpenAvrilConcurrency::Output*, 3>* OpenAvrilConcurrency::Data::_stat_REG_ptr_array_Of_buffer_Output_ReferenceForThread;//NUMBER OF CONCURRENT THREADS.
    std::array<OpenAvrilConcurrency::Input*, 2>* OpenAvrilConcurrency::Data::_stat_REG_ptr_array_Of_doubleBuffer_Input;
    std::array<OpenAvrilConcurrency::Output*, 2>* OpenAvrilConcurrency::Data::_stat_REG_ptr_array_Of_doubleBuffer_Output;
    std::vector<OpenAvrilConcurrency::Input*>* OpenAvrilConcurrency::Data::_stat_REG_ptr_vector_Of_stack_Of_InputPraise;
    std::vector<OpenAvrilConcurrency::Output*>* OpenAvrilConcurrency::Data::_stat_REG_ptr_vector_Of_stack_Of_OutputPraise;
// public.
    OpenAvrilConcurrency::Data::Data()
    {
        std::cout << "entered CONSTRUCTOR of Data()" << std::endl;
        stat_CLASS_boot0_DECLAIRE_Data();
        stat_CLASS_boot1_DEFINE_Data();
        stat_CLASS_boot3_INITIALISE_Data();
        stat_REG_boot0_DECLAIRE_Data();
        std::cout << "exiting CONSTRUCTOR of Data()" << std::endl;
    }
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
    void OpenAvrilConcurrency::Data::dyn_REG_boot1_DEFINE_Data(OpenAvrilConcurrency::Framework_Server* obj)
    {
        std::cout << "entered dyn_REG_boot1_DEFINE_Data()" << std::endl;
        stat_REG_boot1_DEFINE_buffer_Input_ReferenceForThread();
        stat_REG_boot1_DEFINE_buffer_Output_ReferenceForThread();
        stat_REG_boot1_DEFINE_buffer_doubleBuffer_Input();
        stat_REG_boot1_DEFINE_buffer_doubleBuffer_Output();
        stat_REG_boot1_DEFINE_buffer_stack_Of_InputPraise();
        stat_REG_boot1_DEFINE_buffer_stack_Of_OutputPraise();
        std::cout << "exiting dyn_REG_boot1_DEFINE_Data()" << std::endl;
    }
    void OpenAvrilConcurrency::Data::dyn_REG_boot3_INITIALISE_Data(OpenAvrilConcurrency::Framework_Server* obj, OpenAvrilConcurrency::Input* objInput, OpenAvrilConcurrency::Output* objOutput)
    {
        std::cout << "entered dyn_REG_boot3_INITIALISE_Data()" << std::endl;
        stat_REG_boot3_INITIALISE_buffer_Input_ReferenceForThread(objInput);
        stat_REG_boot3_INITIALISE_buffer_Output_ReferenceForThread(objOutput);
        stat_REG_boot3_INITIALISE_doubleBuffer_Input(objInput);
        stat_REG_boot3_INITIALISE_doubleBuffer_Output(objOutput);
        stat_REG_boot3_INITIALISE_stack_Of_InputPraise(objInput);
        stat_REG_boot3_INITIALISE_stack_Of_OutputPraise(objOutput);
        std::cout << "exiting dyn_REG_boot3_INITIALISE_Data()" << std::endl;
    }
    void OpenAvrilConcurrency::Data::dyn_REG_boot4_INSTANTIATE_Data(OpenAvrilConcurrency::Framework_Server* obj)
    {
    std::cout << "entered dyn_REG_boot4_INSTANTIATE_Data()" << std::endl;

    std::cout << "exiting dyn_REG_boot4_INSTANTIATE_Data()" << std::endl;
    }
    OpenAvrilConcurrency::Input* OpenAvrilConcurrency::Data::dyn_REG_get_ptr_Item_array_Of_doubleBuffer_Input_READ(OpenAvrilConcurrency::Framework_Server* obj)
    {
    auto temp = stat_get_REG_ptr_array_Of_doubleBuffer_Input()->begin();
    std::advance(temp, OpenAvrilConcurrency::Global::stat_CONVERT_Bool_To_Int(!obj->dyn_CLASS_get_ptr_Server()->dyn_CLASS_get_ptr_Data()->dyn_CLASS_get_ptr_Data_Control()->dyn_REG_get_Item_side_To_Write_For_array_Of_doubleBuffer_Input()));
    return *temp;
    }
    OpenAvrilConcurrency::Input* OpenAvrilConcurrency::Data::dyn_REG_get_ptr_Item_array_Of_doubleBuffer_Input_WRITE(OpenAvrilConcurrency::Framework_Server* obj)
    {
    auto temp = stat_get_REG_ptr_array_Of_doubleBuffer_Input()->begin();
    std::advance(temp, OpenAvrilConcurrency::Global::stat_CONVERT_Bool_To_Int(obj->dyn_CLASS_get_ptr_Server()->dyn_CLASS_get_ptr_Data()->dyn_CLASS_get_ptr_Data_Control()->dyn_REG_get_Item_side_To_Write_For_array_Of_doubleBuffer_Input()));
    return *temp;
    }
    OpenAvrilConcurrency::Output* OpenAvrilConcurrency::Data::dyn_REG_get_ptr_Item_array_Of_doubleBuffer_Output_READ(OpenAvrilConcurrency::Framework_Server* obj)
    {
    auto temp = stat_get_REG_ptr_array_Of_doubleBuffer_Output()->begin();
    std::advance(temp, OpenAvrilConcurrency::Global::stat_CONVERT_Bool_To_Int(!obj->dyn_CLASS_get_ptr_Server()->dyn_CLASS_get_ptr_Data()->dyn_CLASS_get_ptr_Data_Control()->dyn_REG_get_Item_side_To_Write_For_array_Of_doubleBuffer_Output()));
    return *temp;
    }
    OpenAvrilConcurrency::Output* OpenAvrilConcurrency::Data::dyn_REG_get_ptr_Item_array_Of_doubleBuffer_Output_WRITE(OpenAvrilConcurrency::Framework_Server* obj)
    {
    auto temp = stat_get_REG_ptr_array_Of_doubleBuffer_Output()->begin();
    std::advance(temp, OpenAvrilConcurrency::Global::stat_CONVERT_Bool_To_Int(obj->dyn_CLASS_get_ptr_Server()->dyn_CLASS_get_ptr_Data()->dyn_CLASS_get_ptr_Data_Control()->dyn_REG_get_Item_side_To_Write_For_array_Of_doubleBuffer_Output()));
    return *temp;
    }
    OpenAvrilConcurrency::Input* OpenAvrilConcurrency::Data::dyn_REG_get_ptr_Item_Of_list_Of_ptr_array_Of_buffer_Input_ReferenceForThread(uint8_t concurrentThreadID)
    {
    auto temp = stat_REG_get_ptr_Array_Of_buffer_Input_ReferenceForThread()->begin();
    std::advance(temp, concurrentThreadID);
    return *temp;
    }
    OpenAvrilConcurrency::Output* OpenAvrilConcurrency::Data::dyn_REG_get_ptr_Item_Of_list_Of_ptr_array_Of_buffer_Output_ReferenceForThread(uint8_t concurrentThreadID)
    {
    auto temp = stat_REG_get_ptr_array_Of_buffer_Output_ReferenceForThread()->begin();
    std::advance(temp, concurrentThreadID);
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
    std::vector<OpenAvrilConcurrency::Input*>* OpenAvrilConcurrency::Data::dyn_REG_get_ptr_vector_Of_stack_Of_InputPraise()
    {
        return stat_REG_get_ptr_vector_Of_stack_Of_InputPraise();
    }
    std::vector<OpenAvrilConcurrency::Output*>* OpenAvrilConcurrency::Data::dyn_REG_get_ptr_vector_Of_stack_Of_OutputPraise()
    {
        return stat_REG_get_ptr_vector_Of_stack_Of_OutputPraise();
    }
    void OpenAvrilConcurrency::Data::dyn_REG_set_Item_On_Array_Of_doubleBuffer_Input_READ(OpenAvrilConcurrency::Framework_Server* obj, OpenAvrilConcurrency::Input* newClass)
    {
    stat_REG_set_Item_On_Array_Of_doubleBuffer_Input_READ(obj, newClass);
    }
    void OpenAvrilConcurrency::Data::dyn_REG_set_Item_On_Array_Of_doubleBuffer_Input_WRITE(OpenAvrilConcurrency::Framework_Server* obj, OpenAvrilConcurrency::Input* newClass)
    {
    stat_REG_set_Item_On_Array_Of_doubleBuffer_Input_WRITE(obj, newClass);
    }
    void OpenAvrilConcurrency::Data::dyn_REG_set_Item_On_Array_Of_doubleBuffer_Output_READ(OpenAvrilConcurrency::Framework_Server* obj, OpenAvrilConcurrency::Output* newClass)
    {
    stat_REG_set_Item_On_Array_Of_doubleBuffer_Output_READ(obj, newClass);
    }
    void OpenAvrilConcurrency::Data::dyn_REG_set_Item_On_Array_Of_doubleBuffer_Output_WRITE(OpenAvrilConcurrency::Framework_Server* obj, OpenAvrilConcurrency::Output* newClass)
    {
    stat_REG_set_Item_On_Array_Of_doubleBuffer_Output_WRITE(obj, newClass);
    }
    void OpenAvrilConcurrency::Data::dyn_REG_set_Item_On_Array_Of_buffer_Input_ReferenceForThread(uint8_t concurrentThreadID, Input* newClass)
    {
    stat_REG_set_Item_On_Array_Of_buffer_Input_ReferenceForThread(concurrentThreadID, newClass);
    }
    void OpenAvrilConcurrency::Data::dyn_REG_set_Item_On_Array_Of_buffer_Output_ReferenceForThread(uint8_t concurrentThreadID, Output* newClass)
    {
    stat_REG_set_Item_On_Array_Of_buffer_Output_ReferenceForThread(concurrentThreadID, newClass);
    }
    void OpenAvrilConcurrency::Data::dyn_REG_set_Item_On_Vector_Of_stack_Of_InputPraise(uint8_t slot, Input* newClass)
    {
    stat_REG_set_Item_On_Vector_Of_stack_Of_InputPraise(slot, newClass);
    }
    void OpenAvrilConcurrency::Data::dyn_REG_set_Item_On_Vector_Of_stack_Of_OutputPraise(uint8_t slot, Output* newClass)
    {
    stat_REG_set_Item_On_Vector_Of_stack_Of_OutputPraise(slot, newClass);
    }
    void OpenAvrilConcurrency::Data::stat_CLASS_boot0_DECLAIRE_Data()
    {
    std::cout << "entered stat_CLASS_boot0_DECLAIRE_Data()" << std::endl;

    std::cout << "exiting stat_CLASS_boot0_DECLAIRE_Data()" << std::endl;
    }
    void OpenAvrilConcurrency::Data::stat_CLASS_boot1_DEFINE_Data()
    {
    std::cout << "entered stat_CLASS_boot1_DEFINE_Data()" << std::endl;
    stat_CLASS_boot1_DEFINE_Data_Control();
    stat_CLASS_boot1_DEFINE_User_Input();
    stat_CLASS_boot1_DEFINE_User_Output();
    std::cout << "exiting stat_CLASS_boot1_DEFINE_Data()" << std::endl;
    }
    void OpenAvrilConcurrency::Data::stat_CLASS_boot3_INITIALISE_Data()
    {
    std::cout << "entered stat_CLASS_boot3_INITIALISE_Data()" << std::endl;
    stat_CLASS_boot3_INITIALISE_Data_Control();
    stat_CLASS_boot3_INITIALISE_User_Input();
    stat_CLASS_boot3_INITIALISE_User_Output();
    std::cout << "exiting stat_CLASS_boot3_INITIALISE_Data()" << std::endl;
    }
    void OpenAvrilConcurrency::Data::stat_CLASS_boot4_INSTANTIATE_Data()
    {
        std::cout << "entered stat_CLASS_boot4_INSTANTIATE_Data()" << std::endl;

        std::cout << "exiting stat_CLASS_boot4_INSTANTIATE_Data()" << std::endl;
    }
    void OpenAvrilConcurrency::Data::stat_REG_boot0_DECLAIRE_Data()
    {
        std::cout << "entered stat_REG_boot0_DECLAIRE_Data()" << std::endl;

        std::cout << "exiting stat_REG_boot0_DECLAIRE_Data()" << std::endl;
    }
// private.
    void OpenAvrilConcurrency::Data::stat_CLASS_boot1_DEFINE_Data_Control()
    {
        _stat_CLASS_ptr_Data_Control = NULL;
    }
    void OpenAvrilConcurrency::Data::stat_CLASS_boot1_DEFINE_User_Input()
    {
        _stat_CLASS_ptr_User_Input = NULL;
    }
    void OpenAvrilConcurrency::Data::stat_CLASS_boot1_DEFINE_User_Output()
    {
        _stat_CLASS_ptr_User_Output = NULL;
    }
    void OpenAvrilConcurrency::Data::stat_CLASS_boot3_INITIALISE_Data_Control()
    {
        _stat_CLASS_ptr_Data_Control = new class OpenAvrilConcurrency::Data_Control();
        while (stat_CLASS_get_ptr_Data_Control() == NULL) {}
    }
    void OpenAvrilConcurrency::Data::stat_CLASS_boot3_INITIALISE_User_Input()
    {
        _stat_CLASS_ptr_User_Input = new class OpenAvrilConcurrency::User_Input();
        while (stat_CLASS_get_ptr_User_Input() == NULL) {}
    }
    void OpenAvrilConcurrency::Data::stat_CLASS_boot3_INITIALISE_User_Output()
    {
        _stat_CLASS_ptr_User_Output = new class OpenAvrilConcurrency::User_Output();
        while (stat_CLASS_get_ptr_User_Output() == NULL) {}
    }
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
    void OpenAvrilConcurrency::Data::stat_REG_boot1_DEFINE_buffer_Input_ReferenceForThread()
    {
        _stat_REG_ptr_array_Of_buffer_Input_ReferenceForThread = NULL;
    }
    void OpenAvrilConcurrency::Data::stat_REG_boot1_DEFINE_buffer_Output_ReferenceForThread()
    {
        _stat_REG_ptr_array_Of_buffer_Output_ReferenceForThread = NULL;
    }
    void OpenAvrilConcurrency::Data::stat_REG_boot1_DEFINE_buffer_doubleBuffer_Input()
    {
        _stat_REG_ptr_array_Of_doubleBuffer_Input = NULL;
    }
    void OpenAvrilConcurrency::Data::stat_REG_boot1_DEFINE_buffer_doubleBuffer_Output()
    {
        _stat_REG_ptr_array_Of_doubleBuffer_Output = NULL;
    }
    void OpenAvrilConcurrency::Data::stat_REG_boot1_DEFINE_buffer_stack_Of_InputPraise()
    {
        _stat_REG_ptr_vector_Of_stack_Of_InputPraise = NULL;
    }
    void OpenAvrilConcurrency::Data::stat_REG_boot1_DEFINE_buffer_stack_Of_OutputPraise()
    {
        _stat_REG_ptr_vector_Of_stack_Of_OutputPraise = NULL;
    }
    void OpenAvrilConcurrency::Data::stat_REG_boot3_INITIALISE_buffer_Input_ReferenceForThread(OpenAvrilConcurrency::Input* objInput)
    {
        std::cout << "entered stat_REG_boot1_DEFINE_buffer_stack_Of_OutputPraise()" << std::endl;
        _stat_REG_ptr_array_Of_buffer_Input_ReferenceForThread = new std::array<OpenAvrilConcurrency::Input*, 3>();
        *_stat_REG_ptr_array_Of_buffer_Input_ReferenceForThread = { objInput, objInput, objInput };
        std::cout << "exiting stat_REG_boot1_DEFINE_buffer_stack_Of_OutputPraise()" << std::endl;
    }
    void OpenAvrilConcurrency::Data::stat_REG_boot3_INITIALISE_buffer_Output_ReferenceForThread(OpenAvrilConcurrency::Output* objOutput)
    {
        std::cout << "entered stat_REG_boot3_INITIALISE_buffer_Output_ReferenceForThread()" << std::endl;
        _stat_REG_ptr_array_Of_buffer_Output_ReferenceForThread = new std::array<OpenAvrilConcurrency::Output*, 3>();
        *_stat_REG_ptr_array_Of_buffer_Output_ReferenceForThread = { objOutput, objOutput, objOutput };
        std::cout << "exiting stat_REG_boot3_INITIALISE_buffer_Output_ReferenceForThread()" << std::endl;
    }
    void OpenAvrilConcurrency::Data::stat_REG_boot3_INITIALISE_doubleBuffer_Input(OpenAvrilConcurrency::Input* objInput)
    {
        std::cout << "entered stat_REG_boot3_INITIALISE_doubleBuffer_Input()" << std::endl;
        _stat_REG_ptr_array_Of_doubleBuffer_Input = new std::array<OpenAvrilConcurrency::Input*, 2>();
        *_stat_REG_ptr_array_Of_doubleBuffer_Input = { objInput, objInput };
        std::cout << "exiting stat_REG_boot3_INITIALISE_doubleBuffer_Input()" << std::endl;
    }
    void OpenAvrilConcurrency::Data::stat_REG_boot3_INITIALISE_doubleBuffer_Output(OpenAvrilConcurrency::Output* objOutput)
    {
        std::cout << "entered stat_REG_boot3_INITIALISE_doubleBuffer_Output()" << std::endl;
        _stat_REG_ptr_array_Of_doubleBuffer_Output = new std::array<OpenAvrilConcurrency::Output*, 2>();
        *_stat_REG_ptr_array_Of_doubleBuffer_Output = { objOutput, objOutput };
        std::cout << "exiting stat_REG_boot3_INITIALISE_doubleBuffer_Output()" << std::endl;
    }
    void OpenAvrilConcurrency::Data::stat_REG_boot3_INITIALISE_stack_Of_InputPraise(OpenAvrilConcurrency::Input* objInput)
    {
        std::cout << "entered stat_REG_boot3_INITIALISE_stack_Of_InputPraise()" << std::endl;
        _stat_REG_ptr_vector_Of_stack_Of_InputPraise = new std::vector<Input*>();
        *_stat_REG_ptr_vector_Of_stack_Of_InputPraise = { objInput };
        std::cout << "exiting stat_REG_boot3_INITIALISE_stack_Of_InputPraise()" << std::endl;
    }
    void OpenAvrilConcurrency::Data::stat_REG_boot3_INITIALISE_stack_Of_OutputPraise(OpenAvrilConcurrency::Output* objOutput)
    {
        std::cout << "entered stat_REG_boot3_INITIALISE_stack_Of_OutputPraise()" << std::endl;
        _stat_REG_ptr_vector_Of_stack_Of_OutputPraise = new std::vector<Output*>();
        *_stat_REG_ptr_vector_Of_stack_Of_OutputPraise = { objOutput };
        std::cout << "exiting stat_REG_boot3_INITIALISE_stack_Of_OutputPraise()" << std::endl;
    }
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
        std::advance(temp, OpenAvrilConcurrency::Global::stat_CONVERT_Bool_To_Int(!obj->dyn_CLASS_get_ptr_Server()->dyn_CLASS_get_ptr_Data()->dyn_CLASS_get_ptr_Data_Control()->dyn_REG_get_Item_side_To_Write_For_array_Of_doubleBuffer_Output()));
        *temp = newClass;
    }
    void OpenAvrilConcurrency::Data::stat_REG_set_Item_On_Array_Of_doubleBuffer_Input_WRITE(OpenAvrilConcurrency::Framework_Server* obj, OpenAvrilConcurrency::Input* newClass)
    {
        auto temp = stat_get_REG_ptr_array_Of_doubleBuffer_Input()->begin();
        std::advance(temp, OpenAvrilConcurrency::Global::stat_CONVERT_Bool_To_Int(obj->dyn_CLASS_get_ptr_Server()->dyn_CLASS_get_ptr_Data()->dyn_CLASS_get_ptr_Data_Control()->dyn_REG_get_Item_side_To_Write_For_array_Of_doubleBuffer_Input()));
        *temp = newClass;
    }
    void OpenAvrilConcurrency::Data::stat_REG_set_Item_On_Array_Of_doubleBuffer_Output_READ(OpenAvrilConcurrency::Framework_Server* obj, OpenAvrilConcurrency::Output* newClass)
    {
        auto temp = stat_REG_get_ptr_vector_Of_stack_Of_OutputPraise()->begin();
        std::advance(temp, OpenAvrilConcurrency::Global::stat_CONVERT_Bool_To_Int(!obj->dyn_CLASS_get_ptr_Server()->dyn_CLASS_get_ptr_Data()->dyn_CLASS_get_ptr_Data_Control()->dyn_REG_get_Item_side_To_Write_For_array_Of_doubleBuffer_Output()));
        *temp = newClass;
    }
    void OpenAvrilConcurrency::Data::stat_REG_set_Item_On_Array_Of_doubleBuffer_Output_WRITE(OpenAvrilConcurrency::Framework_Server* obj, OpenAvrilConcurrency::Output* newClass)
    {
        auto temp = stat_REG_get_ptr_vector_Of_stack_Of_OutputPraise()->begin();
        std::advance(temp, OpenAvrilConcurrency::Global::stat_CONVERT_Bool_To_Int(obj->dyn_CLASS_get_ptr_Server()->dyn_CLASS_get_ptr_Data()->dyn_CLASS_get_ptr_Data_Control()->dyn_REG_get_Item_side_To_Write_For_array_Of_doubleBuffer_Output()));
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