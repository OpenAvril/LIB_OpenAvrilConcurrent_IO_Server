#pragma once

namespace OpenAvril
{
    class Framework_Server
    {
// calsses.

// registers.

    public:
// constructor.
        Framework_Server();

// destructor.
        virtual ~Framework_Server();

// public.
        void Initialise_Program(Framework_Server* obj);
    // get.
        class Server* Get_ptr_Server();
    // set.

    private:
// private.
        void Create_ptr_Server();
    // get.
    // set.
        void Set_ptr_Server(Server* server);
    };
}


// calsses.

// registers.

// constructor.

// destructor.

// public.
    // get.
    // set.

// private.
    // get.
    // set.