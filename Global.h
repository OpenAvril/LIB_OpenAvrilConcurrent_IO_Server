#pragma once

namespace OpenAvrilConcurrency
{
    class Global
    {
    public:
// public.
    // constructor.
        Global();

    // destructor.
        virtual ~Global();

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
        //create.
        void initialise_REG_Item_number_Of_Implemented_Cores(uint8_t* newINITIALISED_Value);
        void initialise_REG_Item_number_Of_Praise_Events(uint8_t* newINITIALISED_Value);
        // get.
        uint8_t get_REG_Item_number_Of_Implemented_Cores();
        uint8_t get_REG_Item_number_Of_Praise_Events();
        // set.
    // static.
        static uint8_t stat_CONVERT_ByteArray_to_uint8_t(unsigned char* bytes);
        static double stat_CONVERT_ByteArray_to_Double(unsigned char* bytes);
        static float stat_CONVERT_ByteArray_to_Float(unsigned char* bytes);
        static unsigned char* stat_CONVERT_Double_to_ByteArray(double double_Value);
        static unsigned char* stat_CONVERT_Float_to_ByteArray(float float_Value);
        static unsigned char* stat_CONVERT_uint8_t_to_ByteArray(uint8_t uint8_t_Value);

        static class Framework_Server* stat_CONVERT_ObjPtr_to_Class(void* obj);
        // create.
        // get.
        // set.
        
    private:
// private.
    // dynamic.
        // get.
        // set.
    // static.
        // classes.
            // create.
            // get.
            // set.
        // registers.
        static uint8_t* _stat_REG_ptr_number_Of_Implemented_Cores;
        static uint8_t* _stat_REG__ptr_number_Of_Praise_Events;
            // create.
        static void stat_REG_create_number_Of_Implemented_Cores(uint8_t* newDEFAULT_Value);
        static void stat_REG_create_number_Of_Praise_Events(uint8_t* newDEFAULT_Value);
            // get.
        static uint8_t stat_REG_get_Item_number_Of_Implemented_Cores();
        static uint8_t stat_REG_get_Item_number_Of_Praise_Events();
            // set.
        static void stat_REG_set_Item_number_Of_Implemented_Cores(uint8_t* newValue);
        static void stat_REG_set_Item_number_Of_Praise_Events(uint8_t* newValue);
    };
}
