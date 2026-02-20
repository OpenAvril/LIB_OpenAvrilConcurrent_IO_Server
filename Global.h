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
        __int8 get_number_Of_Implemented_Cores();
        __int8 get_number_Of_Praise_Events();
    // set:

    private:
// private.
        void create_number_Of_Implemented_Cores();
        void create_number_Of_Praise_Events();
    // get.
    // set.
        void set_number_Of_Implemented_Cores(__int8 newValue);
        void set_number_Of_Praise_Events(__int8 newValue);
    };
}
