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
        class Algorithms* get_CLASS_ptr_Algorithms();
        class Data* get_CLASS_ptr_Data();
        class Execute* get_CLASS_ptr_Execute();
        class Global* get_ptr_CLASS_Global();
        // set.

    private:
// private.
    // dynamic.
        // get.
        // set.
    // static.
        // classes.
            // create.
        static void stat_CLASS_create_ptr_Algorithms();
        static void stat_CLASS_create_ptr_Data();
        static void stat_CLASS_create_ptr_Execute();
        static void stat_CLASS_create_ptr_Global();
            // get.
        static class Algorithms* stat_CLASS_get_ptr_Algorithms();
        static class Data* stat_CLASS_get_ptr_Data();
        static class Execute* stat_CLASS_get_ptr_Execute();
        static class Global* stat_CLASS_get_ptr_Global();
            // set.
        // registers.
            // create.
            // get.
            // set.
    };
}