#include "pch.h"

// pointers.
    // classes.
    class OpenAvrilConcurrency::User_Algorithm* OpenAvrilConcurrency::Algorithms::_stat_CLASS_ptr_User_Algorithmorithms = NULL;
    // registers.
    std::list<class OpenAvrilConcurrency::Concurrent*>* OpenAvrilConcurrency::Algorithms::_stat_REG_ptr_list_Of_ptr_Concurrent = NULL;

// constructor.
    OpenAvrilConcurrency::Algorithms::Algorithms()
    {
        std::cout << "entered constructor of OpenAvrilConcurrency::Algorithms::Algorithms()" << std::endl;
        stat_CLASS_create_ptr_User_Algorithmorithms();
        class OpenAvrilConcurrency::Concurrent* newDEFAULT_Concurrent = new class OpenAvrilConcurrency::Concurrent();
        while (newDEFAULT_Concurrent == NULL) {}
        stat_REG_create_ptr_list_Of_ptr_Concurrent(newDEFAULT_Concurrent);
        delete newDEFAULT_Concurrent;
        std::cout << "exiting constructor of OpenAvrilConcurrency::Algorithms::Algorithms()" << std::endl;
    }

// destructor.
    OpenAvrilConcurrency::Algorithms::~Algorithms()
    {
        delete _stat_CLASS_ptr_User_Algorithmorithms;
        delete _stat_REG_ptr_list_Of_ptr_Concurrent;
    }

// public.
    // dynamic.
    void OpenAvrilConcurrency::Algorithms::initialise_CLASS_Item_On_list_Of_ptr_Concurrent(uint8_t concurrentThreadID, OpenAvrilConcurrency::Concurrent* newINITIALISED_Concurrent)
    {
        stat_REG_set_Item_On_list_Of_ptr_Concurrent(concurrentThreadID, newINITIALISED_Concurrent);
    }
        // get.
    OpenAvrilConcurrency::Concurrent* OpenAvrilConcurrency::Algorithms::get_CLASS_ptr_Item_On_list_Of_ptr_Concurrent(uint8_t concurrentThreadID)
    {
        return stat_REG_get_ptr_Item_On_List_ptr_Concurrent(concurrentThreadID);
    }
    OpenAvrilConcurrency::User_Algorithm* OpenAvrilConcurrency::Algorithms::get_CLASS_ptr_User_Algorithmorithms()
    {
        return stat_CLASS_get_ptr_User_Algorithmorithms();
    }
        // set.
    // static.
        // get.
        // set.

// private.
    // dynamic.
        // get.
        // set.
    // static.
        // classes.
            // create.
    void OpenAvrilConcurrency::Algorithms::stat_CLASS_create_ptr_User_Algorithmorithms()
    {
        static class OpenAvrilConcurrency::User_Algorithm* _stat_CLASS_ptr_User_Algorithmorithms = new class OpenAvrilConcurrency::User_Algorithm();
        while (stat_CLASS_get_ptr_User_Algorithmorithms() == NULL) {}
    }
            // get.
    OpenAvrilConcurrency::User_Algorithm* OpenAvrilConcurrency::Algorithms::stat_CLASS_get_ptr_User_Algorithmorithms()
    {
        return _stat_CLASS_ptr_User_Algorithmorithms;
    }
            // set.
        // registers.
            // create.
    void OpenAvrilConcurrency::Algorithms::stat_REG_create_ptr_list_Of_ptr_Concurrent(OpenAvrilConcurrency::Concurrent* newDEFAULT_Concurrent)
    {
        static std::list<class OpenAvrilConcurrency::Concurrent*>* _list_Of_ptr_Concurrent = new std::list<class OpenAvrilConcurrency::Concurrent*>();
        while (stat_REG_get_ptr_list_Of_ptr_Concurrent() == NULL) {}
        *_list_Of_ptr_Concurrent = { newDEFAULT_Concurrent , newDEFAULT_Concurrent, newDEFAULT_Concurrent };
        for (uint8_t concurrentThreadID = 0; concurrentThreadID < sizeof(*stat_REG_get_ptr_list_Of_ptr_Concurrent()); concurrentThreadID++)
        {
            while (stat_REG_get_ptr_Item_On_List_ptr_Concurrent(concurrentThreadID) == NULL) {}
        }
    }
            // get.
    OpenAvrilConcurrency::Concurrent* OpenAvrilConcurrency::Algorithms::stat_REG_get_ptr_Item_On_List_ptr_Concurrent(uint8_t concurrentThreadID)
    {
        auto temp = stat_REG_get_ptr_list_Of_ptr_Concurrent()->begin();
        std::advance(temp, concurrentThreadID);
        return *temp;
    }
    std::list<OpenAvrilConcurrency::Concurrent*>* OpenAvrilConcurrency::Algorithms::stat_REG_get_ptr_list_Of_ptr_Concurrent()
    {
        return _stat_REG_ptr_list_Of_ptr_Concurrent;
    }
            // set.
    void OpenAvrilConcurrency::Algorithms::stat_REG_set_Item_On_list_Of_ptr_Concurrent(uint8_t concurrentThreadID, class OpenAvrilConcurrency::Concurrent* newClass)
    {
        auto temp = stat_REG_get_ptr_list_Of_ptr_Concurrent()->begin();
        std::advance(temp, concurrentThreadID);
        *temp = newClass;
    }