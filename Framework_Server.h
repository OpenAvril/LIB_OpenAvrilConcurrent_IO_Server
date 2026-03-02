#pragma once

namespace OpenAvrilConcurrency
{
    class Framework_Server
    {
    public:
// constructor.
        Framework_Server();

// destructor.
        virtual ~Framework_Server();

// public.
    // dynamic.
        void initialise_Program(class Framework_Server* obj);
        // get.
        class Server* get_ptr_Server();
        // set.
    // static.
        // get.
        // set.

    private:
// private.
    // dynamic.
        // get.
        // set.
    // static.
        // classes.
        static void stat_create_CLASS_Server();
            // get.
            // set.
        // registers.
            // get.
            // set.
        // pointers.
            // get.
        static class Server* stat_get_ptr_CLASS_Server();
            // set.
    };
}