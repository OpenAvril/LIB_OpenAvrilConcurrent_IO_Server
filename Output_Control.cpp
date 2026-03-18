#include "pch.h"

// pointers.
    // classes. 
    // registers.

// public.
    // constructor.
OpenAvrilConcurrency::Output_Control::Output_Control()
{
    std::cout << "entered CONSTRUCTOR of Output_Control()." << std::endl;
    std::cout << "exiting CONSTRUCTOR of Output_Control()." << std::endl;
}

// destructor.
OpenAvrilConcurrency::Output_Control::~Output_Control()
{

}

// dynamic.
    // create.
    // get.
    // set.
void OpenAvrilConcurrency::Output_Control::select_And_Set_Output_Subset(OpenAvrilConcurrency::Framework_Server* obj, uint8_t praiseEventId)
{
    switch (praiseEventId)
    {
    case 0:
        obj->dyn_CLASS_get_ptr_Server()->dyn_CLASS_get_ptr_Data()->dyn_REG_get_ptr_Item_array_Of_doubleBuffer_Output_WRITE(obj);
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