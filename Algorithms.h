#pragma once

namespace OpenAvrilConcurrency
{
    class Algorithms
    {
    public:
// public.
    // constructor.
        Algorithms();

    // destructor.
        virtual ~Algorithms();

    // dynamic.
        // create.
        void app_CLASS_initialise_Item_On_list_Of_ptr_Concurrent(uint8_t concurrentThreadID, class Concurrent* newINITIALISED_Concurrent);
        // get.
        class Concurrent* dyn_CLASS_get_Item_On_list_Of_ptr_Concurrent(uint8_t concurrentThreadID);
        class User_Algorithm* dyn_CLASS_get_ptr_User_Algorithims();
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
        static class User_Algorithm* _stat_CLASS_ptr_User_Algorithmorithms;
            // create.
        static void stat_CLASS_create_ptr_User_Algorithmorithms();
            // get.
        static class User_Algorithm* stat_CLASS_get_ptr_User_Algorithims();
            // set.
        // registers.
        static std::list<class Concurrent*>* _stat_REG_ptr_list_Of_ptr_Concurrent;
            // create.
        static void stat_REG_create_ptr_list_Of_ptr_Concurrent(class Concurrent* newDEFAULT_Concurrent);
            // get.
        static std::list<class Concurrent*>* stat_REG_get_ptr_list_Of_ptr_Concurrent();
            // set.
        static void stat_REG_set_Item_On_list_Of_ptr_Concurrent(uint8_t concurrentThreadID, class Concurrent* newClass);
    };
}