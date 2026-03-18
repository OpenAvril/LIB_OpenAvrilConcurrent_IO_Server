#pragma once

namespace OpenAvrilConcurrency
{
    class Framework_Server
    {
    public:
// public.
    // constructor.
        Framework_Server();

    // destructor.
        virtual ~Framework_Server();

    // dynamic.
        // create.
        void app_initialise_Program(class Framework_Server* obj);
        // get.
        class Server* dyn_CLASS_get_ptr_Server();
        // set.
    // static.
        // create.
        // get.
        // set.
    private:
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
        static class Server* _stat_CLASS_ptr_Server;
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