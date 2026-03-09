#include "pch.h"

// pointers.
    // classes.
    class OpenAvrilConcurrency::User_Algorithm* OpenAvrilConcurrency::Algorithms::_stat_CLASS_ptr_User_Algorithmorithms = NULL;
    // registers.
    std::list<OpenAvrilConcurrency::Concurrent*>* OpenAvrilConcurrency::Algorithms::_stat_REG_ptr_list_Of_ptr_Concurrent = NULL;
    std::list<OpenAvrilConcurrency::Object*>* OpenAvrilConcurrency::Algorithms::_REG_ptr_List_Of_PraiseAlgorithmSubset = NULL;

// constructor.
    OpenAvrilConcurrency::Algorithms::Algorithms()
    {
        std::cout << "entered constructor of OpenAvrilConcurrency::Algorithms::Algorithms()" << std::endl;
        stat_CLASS_create_ptr_User_Algorithmorithms();
        class OpenAvrilConcurrency::Concurrent* newDEFAULT_Concurrent = new class OpenAvrilConcurrency::Concurrent();
        while (newDEFAULT_Concurrent == NULL) {}
        stat_REG_create_ptr_list_Of_ptr_Concurrent(newDEFAULT_Concurrent);
        delete newDEFAULT_Concurrent;
        stat_REG_create_ptr_List_Of_PraiseAlgorithmSubset();
        std::cout << "exiting constructor of OpenAvrilConcurrency::Algorithms::Algorithms()" << std::endl;
    }

// destructor.
    OpenAvrilConcurrency::Algorithms::~Algorithms()
    {
        delete _stat_CLASS_ptr_User_Algorithmorithms;
        delete _stat_REG_ptr_list_Of_ptr_Concurrent;
        delete _REG_ptr_List_Of_PraiseAlgorithmSubset;
    }

// public.
    // dynamic.
    void OpenAvrilConcurrency::Algorithms::initialise_CLASS_Item_On_list_Of_ptr_Concurrent(uint8_t concurrentThreadID, OpenAvrilConcurrency::Concurrent* newINITIALISED_Concurrent)
    {
        stat_REG_set_Item_On_list_Of_ptr_Concurrent(concurrentThreadID, newINITIALISED_Concurrent);
    }
    OpenAvrilConcurrency::Concurrent* OpenAvrilConcurrency::Algorithms::get_CLASS_ptr_Item_On_list_Of_ptr_Concurrent(uint8_t concurrentThreadID)
    {
        return stat_REG_get_ptr_Item_On_List_ptr_Concurrent(concurrentThreadID);
    }
    OpenAvrilConcurrency::User_Algorithm* OpenAvrilConcurrency::Algorithms::get_CLASS_ptr_User_Algorithms()
    {
        return stat_CLASS_get_ptr_User_Algorithims();
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
        while (stat_CLASS_get_ptr_User_Algorithims() == NULL) {}
    }
    OpenAvrilConcurrency::User_Algorithm* OpenAvrilConcurrency::Algorithms::stat_CLASS_get_ptr_User_Algorithims()
    {
        return stat_CLASS_get_ptr_User_Algorithims();
    }
            // get.
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
    void OpenAvrilConcurrency::Algorithms::stat_REG_create_ptr_PraiseAlgorithimSubsets()
    {
        std::list<OpenAvrilConcurrency::Object*>* _REG_ptr_List_Of_PraiseAlgorithmSubset = new std::list<OpenAvrilConcurrency::Object*>();
        while (stat_REG_get_ptr_List_Of_PraiseAlgorithmSubset() == NULL) {}
        stat_REG_get_ptr_List_Of_PraiseAlgorithmSubset()->resize(1);
    }
    void OpenAvrilConcurrency::Algorithms::stat_REG_create_ptr_List_Of_PraiseAlgorithmSubset()
    {
        std::list<OpenAvrilConcurrency::Object*>* _REG_ptr_List_Of_PraiseAlgorithmSubset = new std::list<OpenAvrilConcurrency::Object*>();
        while (stat_REG_get_ptr_List_Of_PraiseAlgorithmSubset() == NULL) {}
        stat_REG_get_ptr_List_Of_PraiseAlgorithmSubset()->resize(1);
    }

            // get.
    OpenAvrilConcurrency::Concurrent* OpenAvrilConcurrency::Algorithms::stat_REG_get_ptr_Item_On_List_ptr_Concurrent(uint8_t concurrentThreadID)
    {
        auto temp = stat_REG_get_ptr_list_Of_ptr_Concurrent()->begin();
        std::advance(temp, concurrentThreadID);
        return *temp;
    }
    OpenAvrilConcurrency::Object* OpenAvrilConcurrency::Algorithms::stat_REG_get_ptr_Item_On_List_ptr_PraiseAlgorithmSubset(uint8_t concurrentThreadID)
    {
        auto temp = stat_REG_get_ptr_List_Of_PraiseAlgorithmSubset()->begin();
        std::advance(temp, concurrentThreadID);
        return *temp;
    }
    std::list<OpenAvrilConcurrency::Concurrent*>* OpenAvrilConcurrency::Algorithms::stat_REG_get_ptr_list_Of_ptr_Concurrent()
    {
        return _stat_REG_ptr_list_Of_ptr_Concurrent;
    }
    std::list<OpenAvrilConcurrency::Object*>* OpenAvrilConcurrency::Algorithms::stat_REG_get_ptr_List_Of_PraiseAlgorithmSubset()
    {
        return _REG_ptr_List_Of_PraiseAlgorithmSubset;
    }
            // set.
    void OpenAvrilConcurrency::Algorithms::stat_REG_set_Item_On_list_Of_ptr_Concurrent(uint8_t concurrentThreadID, OpenAvrilConcurrency::Concurrent* objClass)
    {
        auto temp = stat_REG_get_ptr_list_Of_ptr_Concurrent()->begin();
        std::advance(temp, concurrentThreadID);
        *temp = objClass;
    }
    void OpenAvrilConcurrency::Algorithms::stat_REG_set_Item_On_list_Of_ptr_PraiseAlgorithmSubset(uint8_t praiseID, OpenAvrilConcurrency::Object* objObject)
    {
        auto temp = stat_REG_get_ptr_List_Of_PraiseAlgorithmSubset()->begin();
        std::advance(temp, praiseID);
        *temp = objObject;
    }
