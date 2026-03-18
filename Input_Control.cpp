#include "pch.h"

// pointers.
    // classes. 
    // registers.

// public.
    // constructor.

    // destructor.

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
    OpenAvrilConcurrency::Input_Control::Input_Control()
    {

    }

// destructor.
    OpenAvrilConcurrency::Input_Control::~Input_Control()
    {

    }

// public.
    // dynamic.
        // get.
        // set.
    // static.
        // get.
        // set.

// private.
    // dynamic.
    void OpenAvrilConcurrency::Input_Control::select_And_Set_Input_Subset(OpenAvrilConcurrency::Framework_Server* obj, uint8_t praiseEventId)
    {
        switch (praiseEventId)
        {
        case 0:
            obj->dyn_CLASS_get_ptr_Server()->dyn_CLASS_get_ptr_Data()->dyn_REG_get_ptr_Item_array_Of_doubleBuffer_Input_WRITE(obj);
            break;
        }
    }
        // get.
        // set.
    // static.
        // get.
        // set.