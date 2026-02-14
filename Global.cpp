#include "pch.h"

// classes.

// registers.
    __int8 _number_Of_Implemented_Cores = NULL;
    __int8 _number_Of_Praise_Events = NULL;

// constructor.
    OpenAvril::Global::Global()
    {
        Create_number_Of_Implemented_Cores();
        Create_number_Of_Praise_Events();
    }

// destructor.
    OpenAvril::Global::~Global()
{
        
}

// public.
    // get.
    __int8 OpenAvril::Global::Get_number_Of_Implemented_Cores()
    {
        return _number_Of_Implemented_Cores;
    }
    __int8 OpenAvril::Global::Get_number_Of_Praise_Events()
    {
        return 0;
    }
    // set.

// private.
    void OpenAvril::Global::Create_number_Of_Implemented_Cores()
    {
        Set_number_Of_Implemented_Cores(__int8(4));//NUMBER OF CONCURRENT THREADS
    }
    void OpenAvril::Global::Create_number_Of_Praise_Events()
    {
        Set_number_Of_Praise_Events(__int8(3));//NUMBER OF PRAISES
    }
    // get.
    // set.
    void OpenAvril::Global::Set_number_Of_Implemented_Cores(__int8 newValue)
{
    _number_Of_Implemented_Cores = newValue;
}
    void OpenAvril::Global::Set_number_Of_Praise_Events(__int8 newValue)
{
    _number_Of_Praise_Events = newValue;
}
