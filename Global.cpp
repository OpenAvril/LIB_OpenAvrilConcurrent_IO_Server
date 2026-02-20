#include "pch.h"
// enums.
    public enum Axis { X, Y, Z };

// classes.

// registers.
    __int8 _number_Of_Implemented_Cores = NULL;
    __int8 _number_Of_Praise_Events = NULL;

// constructor.
    OpenAvril::Global::Global()
    {
        create_number_Of_Implemented_Cores();
        create_number_Of_Praise_Events();
    }

// destructor.
    OpenAvril::Global::~Global()
{
        
}

// public.
    // get.
    __int8 OpenAvril::Global::get_number_Of_Implemented_Cores()
    {
        return _number_Of_Implemented_Cores;
    }
    __int8 OpenAvril::Global::get_number_Of_Praise_Events()
    {
        return 0;
    }
    // set.

// private.
    void OpenAvril::Global::create_number_Of_Implemented_Cores()
    {
        set_number_Of_Implemented_Cores(__int8(4));//NUMBER OF CONCURRENT THREADS
    }
    void OpenAvril::Global::create_number_Of_Praise_Events()
    {
        set_number_Of_Praise_Events(__int8(3));//NUMBER OF PRAISES
    }
    // get.
    // set.
    void OpenAvril::Global::set_number_Of_Implemented_Cores(__int8 newValue)
{
    _number_Of_Implemented_Cores = newValue;
}
    void OpenAvril::Global::set_number_Of_Praise_Events(__int8 newValue)
{
    _number_Of_Praise_Events = newValue;
}
