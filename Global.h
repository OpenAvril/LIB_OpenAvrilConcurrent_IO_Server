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
