#include "pch.h"

// pointers.
    // classes. 
    // registers.

// public.
    // constructor.
    OpenAvrilConcurrency::Input_Control::Input_Control()
    {
        std::cout << "entered CONSTRUCTOR of Input_Control()." << std::endl;
        std::cout << "exiting CONSTRUCTOR of Input_Control()." << std::endl;
    }

    // destructor.
    OpenAvrilConcurrency::Input_Control::~Input_Control()
    {

    }

    // dynamic.
        // create.
        // get.
        // set.
    void OpenAvrilConcurrency::Input_Control::select_And_Set_Input_Subset(OpenAvrilConcurrency::Framework_Server* obj, uint8_t praiseEventId)
    {
        switch (praiseEventId)
        {
        case 0:
            obj->dyn_CLASS_get_ptr_Server()->dyn_CLASS_get_ptr_Data()->dyn_REG_get_ptr_Item_array_Of_doubleBuffer_Input_WRITE(obj);
            break;
        }
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
            // get.
            // set.