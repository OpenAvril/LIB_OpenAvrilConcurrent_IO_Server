#pragma once

namespace OpenAvrilConcurrency
{
    class Algorithms
    {
    public:
// constructor.
        Algorithms();

// destructor.
        virtual ~Algorithms();

// public.
    // dynamic.
        void initialise_CLASS_Item_On_list_Of_ptr_Concurrent(uint8_t concurrentThreadID, class Concurrent* newINITIALISED_Concurrent);
        // get.
        class Concurrent* get_CLASS_ptr_Item_On_list_Of_ptr_Concurrent(uint8_t concurrentThreadID);
        class User_Algorithm* get_CLASS_ptr_User_Algorithmorithms();
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
        static void stat_create_CLASS_ptr_User_Algorithmorithms();
            // get.
        static class User_Algorithm* stat_get_CLASS_ptr_User_Algorithmorithms();
            // set.
        // registers.
        static void stat_create_CLASS_ptr_list_Of_ptr_Concurrent(class Concurrent* newDEFAULT_Concurrent);
            // get.
        static class Concurrent* stat_get_CLASS_ptr_Item_On_list_Of_ptr_Concurrent(uint8_t concurrentThreadID);
            // set.
        static void stat_set_CLASS_Item_On_list_Of_ptr_Concurrent(uint8_t concurrentThreadID, class Concurrent* newClass);
        // pointers.
        static std::list<class Concurrent*>* _ptr_list_Of_ptr_Concurrent;
            // get.
        static std::list<class Concurrent*>* stat_get_CLASS_ptr_list_Of_ptr_Concurrent();
            // set.
    };
}