#include "pch.h"

// pointers.
    // classes. 
    // registers.

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
            obj->get_CLASS_ptr_Server()->get_CLASS_ptr_Data()->get_REG_ptr_Item_array_Of_doubleBuffer_Input_WRITE(obj);
            break;
        }
    }
        // get.
        // set.
    // static.
        // get.
        // set.