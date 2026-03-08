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
        class Server* get_CLASS_ptr_Server();
        // set.

    private:
// private.
    // dynamic.
        // get.
        // set.
    // static.
        // classes.
            // create.
        static void stat_CLASS_create_ptr_Server();
            // get.
        static class Server* stat_CLASS_get_ptr_Server();
            // set.
        // registers.
            // create.
            // get.
            // set.
    };
}