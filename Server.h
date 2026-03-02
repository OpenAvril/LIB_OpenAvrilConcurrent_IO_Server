#pragma once

namespace OpenAvrilConcurrency
{
    class Server
    {
    public:
// constructor.
        Server();

// destructor.
        virtual ~Server();

// public.
    // dynamic.
        // get.
        class Algorithms* get_ptr_CLASS_Algorithms();
        class Data* get_ptr_CLASS_Data();
        class Execute* get_ptr_CLASS_Execute();
        class Global* get_ptr_CLASS_Global();
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
            // create.
            // get.
            // set.
        // registers.
            // create.
            // get.
            // set.
// private.
    // dynamic.
        // get.
        // set.
    // static.
        // classes.
        static void stat_create_CLASS_Algorithms();
        static void stat_create_CLASS_Data();
        static void stat_create_CLASS_Execute();
        static void stat_create_CLASS_Global();
            // get.
            // set.
        // registers.
            // get.
            // set.
        // pointers.
            // get.
        static class Algorithms* stat_get_ptr_CLASS_Algorithms();
        static class Data* stat_get_ptr_CLASS_Data();
        static class Execute* stat_get_ptr_CLASS_Execute();
        static class Global* stat_get_ptr_CLASS_Global();
            // set.
    };
}