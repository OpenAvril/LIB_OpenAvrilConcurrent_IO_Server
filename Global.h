#pragma once

namespace OpenAvril
{
    class Global
    {
// classes.

// registers.

    public:
// constructor.
        Global();

// destructor.
        ~Global();

// public.
    // get.
        __int8 Get_number_Of_Implemented_Cores();
        __int8 Get_number_Of_Praise_Events();
    // set:

    private:
// private.
        void Create_number_Of_Implemented_Cores();
        void Create_number_Of_Praise_Events();
    // get.
    // set.
        void Set_number_Of_Implemented_Cores(__int8 newValue);
        void Set_number_Of_Praise_Events(__int8 newValue);
    };
}
