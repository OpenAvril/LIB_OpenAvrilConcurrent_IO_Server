#pragma once

namespace OpenAvrilConcurrency
{
    class Global
    {
    public:
// constructor.
        Global();

// destructor.
        virtual ~Global();

// public.
    // dynamic.
        void initialise_REG_Item_number_Of_Implemented_Cores(uint8_t* newINITIALISED_Value);
        void initialise_REG_Item_number_Of_Praise_Events(uint8_t* newINITIALISED_Value);
        // get.
        uint8_t get_REG_Item_number_Of_Implemented_Cores();
        uint8_t get_REG_Item_number_Of_Praise_Events();
        // set.
    // static.
        // get.
        // set.

    private:
// private.
    // dynamic.
        // get.
        // set.
    // static.
        // classes.
            // get.
            // set.
        // registers.
        static void stat_create_REG_number_Of_Implemented_Cores(uint8_t* newDEFAULT_Value);
        static void stat_create_REG_number_Of_Praise_Events(uint8_t* newDEFAULT_Value);
            // get.
        static uint8_t stat_get_REG_Item_number_Of_Implemented_Cores();
        static uint8_t statget_REG_Item_number_Of_Praise_Events();
            // set.
        static void stat_set_REG_Item_number_Of_Implemented_Cores(uint8_t* newValue);
        static void stat_set_REG_Item_number_Of_Praise_Events(uint8_t* newValue);
        // pointers.
        static uint8_t* _ptr_number_Of_Implemented_Cores;
        static uint8_t* _ptr_number_Of_Praise_Events;
            // get.
            // set.
    };
}
