#pragma once

namespace OpenAvrilConcurrency
{
    class Server
    {
    public:
// public.
    // constructor.
        Server();

    // destructor.
        virtual ~Server();

    // dynamic.
        // create.
        // get.
        class Algorithms* dyn_CLASS_get_ptr_Algorithms();
        class Data* dyn_CLASS_get_ptr_Data();
        class Execute* dyn_CLASS_get_ptr_Execute();
        class Global* dyn_CLASS_get_ptr_Global();
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
        static class Algorithms* _stat_CLASS_ptr_Algorithms;
        static class Data* _stat_CLASS_ptr_Data;
        static class Execute* _stat_CLASS_ptr_Execute;
        static class Global* _stat_CLASS_ptr_Global;
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