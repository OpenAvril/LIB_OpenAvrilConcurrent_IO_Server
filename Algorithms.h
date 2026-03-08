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

    private:
// private.
    // dynamic.
        // get.
        // set.
    // static.
        // classes.
        static class User_Algorithm* _stat_CLASS_ptr_User_Algorithmorithms;
            // create.
        static void stat_CLASS_create_ptr_User_Algorithmorithms();
            // get.
        static class User_Algorithm* stat_CLASS_get_ptr_User_Algorithmorithms();
            // set.
        // registers.
        static std::list<class Concurrent*>* _stat_REG_ptr_list_Of_ptr_Concurrent;
            // create.
        static void stat_REG_create_ptr_list_Of_ptr_Concurrent(class Concurrent* newDEFAULT_Concurrent);
            // get.
        static class Concurrent* stat_REG_get_ptr_Item_On_List_ptr_Concurrent(uint8_t concurrentThreadID);
        static std::list<class Concurrent*>* stat_REG_get_ptr_list_Of_ptr_Concurrent();
            // set.
        static void stat_REG_set_Item_On_list_Of_ptr_Concurrent(uint8_t concurrentThreadID, class Concurrent* newClass);
    };
}