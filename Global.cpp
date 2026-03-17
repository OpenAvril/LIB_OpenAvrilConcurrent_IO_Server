#include "pch.h"
// enums.
    enum Axis { X, Y, Z };
    enum Praise
    {
        ADDER
    };

// pointers.
    // classes.
    // registers.
    uint8_t* OpenAvrilConcurrency::Global::_stat_REG_ptr_number_Of_Implemented_Cores = NULL;
    uint8_t* OpenAvrilConcurrency::Global::_stat_REG__ptr_number_Of_Praise_Events = NULL;
  
// public.
    // constructor.
    OpenAvrilConcurrency::Global::Global()
    {
        std::cout << "entered CONSTRUCTOR of Global()." << std::endl;
        uint8_t* newDEFAULT_Value = new uint8_t(NULL);
        while (newDEFAULT_Value == NULL) {}
        *newDEFAULT_Value = uint8_t(UINT8_MAX);
        stat_REG_create_number_Of_Implemented_Cores(newDEFAULT_Value);
        stat_REG_create_number_Of_Praise_Events(newDEFAULT_Value);
        delete newDEFAULT_Value;
        std::cout << "exiting CONSTRUCTOR of Global()." << std::endl;
    }

    // destructor.
    OpenAvrilConcurrency::Global::~Global()
    {
        delete _stat_REG_ptr_number_Of_Implemented_Cores;
        delete _stat_REG__ptr_number_Of_Praise_Events;
    }

    // dynamic.
        // create.
        // get.
        // set.
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
            // get.
            // set.

// constructor.


// destructor.


// public.
    // dynamic.
    void OpenAvrilConcurrency::Global::initialise_REG_Item_number_Of_Implemented_Cores(uint8_t* newINITIALISED_Value)
    {
        stat_REG_set_Item_number_Of_Implemented_Cores(newINITIALISED_Value);
    }
    void OpenAvrilConcurrency::Global::initialise_REG_Item_number_Of_Praise_Events(uint8_t* newINITIALISED_Value)
    {
        stat_REG_set_Item_number_Of_Praise_Events(newINITIALISED_Value);
    }
        // get.
    uint8_t OpenAvrilConcurrency::Global::get_REG_Item_number_Of_Implemented_Cores()
    {
        return stat_REG_get_Item_number_Of_Implemented_Cores();
    }
    uint8_t OpenAvrilConcurrency::Global::get_REG_Item_number_Of_Praise_Events()
    {
        return stat_REG_get_Item_number_Of_Praise_Events();
    }
    uint8_t OpenAvrilConcurrency::Global::stat_CONVERT_ByteArray_to_uint8_t(unsigned char* bytes)
    {
        uint8_t cpp_uint8_t_value;
        std::memcpy(&cpp_uint8_t_value, bytes, sizeof(cpp_uint8_t_value));
        return cpp_uint8_t_value;
    }
    // set.
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
    // dynamic.
        // get.
        // set.
    // static.
        // classes.
            // create.
    void OpenAvrilConcurrency::Global::stat_REG_create_number_Of_Implemented_Cores(uint8_t* newDEFAULT_Value)
    {
        std::cout << "entered member function OpenAvrilConcurrency::Global::stat_REG_create_number_Of_Implemented_Cores()." << std::endl;
        static uint8_t* _stat_REG_ptr_number_Of_Implemented_Cores = new uint8_t(NULL);
        std::cout << "alpha." << std::endl;
        while (_stat_REG_ptr_number_Of_Implemented_Cores == NULL) {}
        std::cout << "bravo." << std::endl;
        *_stat_REG_ptr_number_Of_Implemented_Cores = *newDEFAULT_Value;
        std::cout << "exiting member function OpenAvrilConcurrency::Global::stat_REG_create_number_Of_Implemented_Cores()." << std::endl;
    }
    void OpenAvrilConcurrency::Global::stat_REG_create_number_Of_Praise_Events(uint8_t* newDEFAULT_Value)
    {
        std::cout << "entered OpenAvrilConcurrency::Global::stat_REG_create_number_Of_Praise_Events()." << std::endl;
        static uint8_t* _stat_REG__ptr_number_Of_Praise_Events = new uint8_t(NULL);
        std::cout << "alpha." << std::endl;
        while (_stat_REG__ptr_number_Of_Praise_Events == NULL) {}
        std::cout << "bravo." << std::endl;
        *_stat_REG__ptr_number_Of_Praise_Events = *newDEFAULT_Value;
        std::cout << "exiting OpenAvrilConcurrency::Global::stat_REG_create_number_Of_Praise_Events()." << std::endl;
    }
            // get.
    uint8_t OpenAvrilConcurrency::Global::stat_REG_get_Item_number_Of_Implemented_Cores()
    {
        return *_stat_REG_ptr_number_Of_Implemented_Cores;
    }
    uint8_t OpenAvrilConcurrency::Global::stat_REG_get_Item_number_Of_Praise_Events()
    {
        return *_stat_REG__ptr_number_Of_Praise_Events;
    }
            // set.
    void OpenAvrilConcurrency::Global::stat_REG_set_Item_number_Of_Implemented_Cores(uint8_t* newValue)
    {
        *_stat_REG_ptr_number_Of_Implemented_Cores = *newValue;
    }
    void OpenAvrilConcurrency::Global::stat_REG_set_Item_number_Of_Praise_Events(uint8_t* newValue)
    {
        *_stat_REG__ptr_number_Of_Praise_Events = *newValue;
    }
        // registers.
            // create.
            // get.
            // set.