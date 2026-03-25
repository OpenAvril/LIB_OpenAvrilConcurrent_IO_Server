#include "pch.h"
    enum Axis 
    { 
        X,
        Y, 
        Z 
    };
    enum Praise
    {
        ADDER
    };
    uint8_t* OpenAvrilConcurrency::Global::_stat_REG_ptr_number_Of_Implemented_Cores;
    uint8_t* OpenAvrilConcurrency::Global::_stat_REG__ptr_number_Of_Praise_Events;
// public.
    OpenAvrilConcurrency::Global::Global()
    {
        std::cout << "entered CONSTRUCTOR of Global()." << std::endl;
        stat_CLASS_boot0_DECLAIRE_Global();
        stat_CLASS_boot1_DEFINE_Global();
        stat_CLASS_boot3_INITIALISE_Global();
        stat_REG_boot0_DECLAIRE_Global();
        std::cout << "exiting CONSTRUCTOR of Global()." << std::endl;
    }
    OpenAvrilConcurrency::Global::~Global()
    {
        delete _stat_REG_ptr_number_Of_Implemented_Cores;
        delete _stat_REG__ptr_number_Of_Praise_Events;
    }
    void OpenAvrilConcurrency::Global::dyn_REG_boot1_DEFINE_Global()
    {
        std::cout << "entered dyn_REG_boot1_DEFINE_Global()" << std::endl;
        stat_REG_boot1_DEFINE_number_Of_Implemented_Cores();
        stat_REG_boot1_DEFINE_number_Of_Praise_Events();
        std::cout << "exiting dyn_REG_boot1_DEFINE_Global()" << std::endl;
    }
    void OpenAvrilConcurrency::Global::dyn_REG_boot2_SUBSTANTIATE_Global()
    {
        std::cout << "entered dyn_REG_boot2_SUBSTANTIATE_Global()" << std::endl;
        stat_REG_boot2_SUBSTANTIATE_number_Of_Implemented_Cores();
        stat_REG_boot2_SUBSTANTIATE_number_Of_Praise_Events();
        std::cout << "exiting dyn_REG_boot2_SUBSTANTIATE_Global()" << std::endl;
    }
    void OpenAvrilConcurrency::Global::dyn_REG_boot3_INITIALISE_Global()
    {
        std::cout << "entered dyn_REG_boot3_INITIALISE_dyn_REG_boot3_INITIALISE_GlobalGlobal()" << std::endl;
        stat_REG_boot3_INITIALISE_number_Of_Implemented_Cores();
        stat_REG_boot3_INITIALISE_number_Of_Praise_Events();
        std::cout << "exiting dyn_REG_boot3_INITIALISE_Global()" << std::endl;
    }
    void OpenAvrilConcurrency::Global::dyn_REG_boot4_INSTANTIATE_Global()
    {
        std::cout << "entered dyn_REG_boot4_INSTANTIATE_Global()" << std::endl;

        std::cout << "exiting dyn_REG_boot4_INSTANTIATE_Global()" << std::endl;
    }
    uint8_t OpenAvrilConcurrency::Global::dyn_REG_get_Item_number_Of_Implemented_Cores()
    {
        return *stat_REG_get_Ptr_number_Of_Implemented_Cores();
    }
    uint8_t OpenAvrilConcurrency::Global::dyn_REG_get_Item_number_Of_Praise_Events()
    {
        return *stat_REG_get_Ptr_number_Of_Praise_Events();
    }
    void OpenAvrilConcurrency::Global::stat_CLASS_boot0_DECLAIRE_Global()
    {
        std::cout << "entered stat_CLASS_boot0_DECLAIRE_Global()" << std::endl;

        std::cout << "exiting stat_CLASS_boot0_DECLAIRE_Global()" << std::endl;
    }
    void OpenAvrilConcurrency::Global::stat_CLASS_boot1_DEFINE_Global()
    {
        std::cout << "entered stat_CLASS_boot1_DEFINE_Global()" << std::endl;

        std::cout << "exiting stat_CLASS_boot1_DEFINE_Global()" << std::endl;
    }
    void OpenAvrilConcurrency::Global::stat_CLASS_boot3_INITIALISE_Global()
    {
        std::cout << "entered stat_CLASS_boot3_INITIALISE_Global()" << std::endl;

        std::cout << "exiting stat_CLASS_boot3_INITIALISE_Global()" << std::endl;
    }
    void OpenAvrilConcurrency::Global::stat_CLASS_boot4_INSTANTIATE_Global()
    {
        std::cout << "entered stat_CLASS_boot4_INSTANTIATE_Global()" << std::endl;

        std::cout << "exiting stat_CLASS_boot4_INSTANTIATE_Global()" << std::endl;
    }
    void OpenAvrilConcurrency::Global::stat_REG_boot0_DECLAIRE_Global()
    {
        std::cout << "entered stat_REG_boot0_DECLAIRE_Global()" << std::endl;

        std::cout << "exiting stat_REG_boot0_DECLAIRE_Global()" << std::endl;
    }
    uint8_t OpenAvrilConcurrency::Global::stat_CONVERT_Bool_To_Int(bool bufferSide)
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
    uint8_t OpenAvrilConcurrency::Global::stat_CONVERT_ByteArray_to_uint8_t(unsigned char* bytes)
    {
        uint8_t cpp_uint8_t_value;
        std::memcpy(&cpp_uint8_t_value, bytes, sizeof(cpp_uint8_t_value));
        return cpp_uint8_t_value;
    }
    double OpenAvrilConcurrency::Global::stat_CONVERT_ByteArray_to_Double(unsigned char* java_bytes)
    {
        double cpp_double_value;
        std::memcpy(&cpp_double_value, java_bytes, sizeof(cpp_double_value));
        return cpp_double_value;
    }
    float OpenAvrilConcurrency::Global::stat_CONVERT_ByteArray_to_Float(unsigned char* java_bytes)
    {
        float cpp_float_value;
        std::memcpy(&cpp_float_value, java_bytes, sizeof(cpp_float_value));
        return cpp_float_value;
    }
    unsigned char* OpenAvrilConcurrency::Global::stat_CONVERT_Double_to_ByteArray(double doubleValue)
    {
        unsigned char* bytes_array;
        std::memcpy(&bytes_array, &doubleValue, sizeof(doubleValue));
        return bytes_array;
    }
    unsigned char* OpenAvrilConcurrency::Global::stat_CONVERT_Float_to_ByteArray(float floatValue)
    {
        unsigned char* bytes_array;
        std::memcpy(&bytes_array, &floatValue, sizeof(floatValue));
        return bytes_array;
    }
    unsigned char* OpenAvrilConcurrency::Global::stat_CONVERT_uint8_t_to_ByteArray(uint8_t uint8_t_Value)
    {
        unsigned char* bytes_array;
        std::memcpy(&bytes_array, &uint8_t_Value, sizeof(uint8_t_Value));
        return bytes_array;
    }
    OpenAvrilConcurrency::Framework_Server* OpenAvrilConcurrency::Global::stat_CONVERT_ObjPtr_to_Class(void* obj)
    {
        return reinterpret_cast<OpenAvrilConcurrency::Framework_Server*>(obj);
    }
// private.
    void OpenAvrilConcurrency::Global::stat_REG_boot1_DEFINE_number_Of_Implemented_Cores()
    {
        _stat_REG_ptr_number_Of_Implemented_Cores = NULL;
    }
    void OpenAvrilConcurrency::Global::stat_REG_boot1_DEFINE_number_Of_Praise_Events()
    {
        _stat_REG__ptr_number_Of_Praise_Events = NULL;
    }
    void OpenAvrilConcurrency::Global::stat_REG_boot2_SUBSTANTIATE_number_Of_Implemented_Cores()
    {
        _stat_REG_ptr_number_Of_Implemented_Cores = new uint8_t();
        *_stat_REG_ptr_number_Of_Implemented_Cores = uint8_t(UINT8_MAX);
    }
    void OpenAvrilConcurrency::Global::stat_REG_boot2_SUBSTANTIATE_number_Of_Praise_Events()
    {
        _stat_REG__ptr_number_Of_Praise_Events = new uint8_t();
        *_stat_REG__ptr_number_Of_Praise_Events = uint8_t(UINT8_MAX);
    }
    void OpenAvrilConcurrency::Global::stat_REG_boot3_INITIALISE_number_Of_Implemented_Cores()
    {
        *_stat_REG_ptr_number_Of_Implemented_Cores = uint8_t(4);
    }
    void OpenAvrilConcurrency::Global::stat_REG_boot3_INITIALISE_number_Of_Praise_Events()
    {
        *_stat_REG__ptr_number_Of_Praise_Events = uint8_t(1);
    }
    uint8_t* OpenAvrilConcurrency::Global::stat_REG_get_Ptr_number_Of_Implemented_Cores()
    {
        return _stat_REG_ptr_number_Of_Implemented_Cores;
    }
    uint8_t* OpenAvrilConcurrency::Global::stat_REG_get_Ptr_number_Of_Praise_Events()
    {
        return _stat_REG__ptr_number_Of_Praise_Events;
    }