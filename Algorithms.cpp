#include "pch.h"

// pointers.
    // classes.
    OpenAvrilConcurrency::User_Algorithm* OpenAvrilConcurrency::Algorithms::_stat_CLASS_ptr_User_Algorithmorithms = NULL;
    // registers.
    std::list<OpenAvrilConcurrency::Concurrent*>* OpenAvrilConcurrency::Algorithms::_stat_REG_ptr_list_Of_ptr_Concurrent = NULL;
    std::list<OpenAvrilConcurrency::Object*>* OpenAvrilConcurrency::Algorithms::_REG_ptr_List_Of_PraiseAlgorithmSubset = NULL;

// public.
    // constructor.
    OpenAvrilConcurrency::Algorithms::Algorithms()
    {
        std::cout << "entered CONSTRUCTOR of Algorithms()" << std::endl;
        stat_CLASS_create_ptr_User_Algorithmorithms();
        class OpenAvrilConcurrency::Concurrent* newDEFAULT_Concurrent = new class OpenAvrilConcurrency::Concurrent();
        while (newDEFAULT_Concurrent == NULL) {}
        stat_REG_create_ptr_list_Of_ptr_Concurrent(newDEFAULT_Concurrent);
        delete newDEFAULT_Concurrent;
        stat_REG_create_ptr_List_Of_PraiseAlgorithmSubset();
        std::cout << "exiting CONSTRUCTOR of Algorithms()" << std::endl;
    }

    // destructor.
    OpenAvrilConcurrency::Algorithms::~Algorithms()
    {
        delete _stat_CLASS_ptr_User_Algorithmorithms;
        delete _stat_REG_ptr_list_Of_ptr_Concurrent;
        delete _REG_ptr_List_Of_PraiseAlgorithmSubset;
    }

    // dynamic.
        // create.
    void OpenAvrilConcurrency::Algorithms::app_CLASS_initialise_Item_On_list_Of_ptr_Concurrent(uint8_t concurrentThreadID, OpenAvrilConcurrency::Concurrent* newINITIALISED_Concurrent)
    {
        stat_REG_set_Item_On_list_Of_ptr_Concurrent(concurrentThreadID, newINITIALISED_Concurrent);
    }
        // get.
    OpenAvrilConcurrency::Concurrent* OpenAvrilConcurrency::Algorithms::dyn_CLASS_get_Item_On_list_Of_ptr_Concurrent(uint8_t concurrentThreadID)
    {
        auto temp = stat_REG_get_ptr_list_Of_ptr_Concurrent()->begin();
        std::advance(temp, concurrentThreadID);
        return *temp;
    }
    OpenAvrilConcurrency::Object* OpenAvrilConcurrency::Algorithms::dyn_CLASS_get_Item_On_list_Of_ptr_PraiseAlgorithmSubset(uint8_t concurrentThreadID)
    {
    auto temp = stat_REG_get_ptr_List_Of_PraiseAlgorithmSubset()->begin();
    std::advance(temp, concurrentThreadID);
    return *temp;
    }
        // set.
    // static.
        // create.
        // get.
        // set.

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
            // create.
    void OpenAvrilConcurrency::Algorithms::stat_CLASS_create_ptr_User_Algorithmorithms()
    {
        _stat_CLASS_ptr_User_Algorithmorithms = new class OpenAvrilConcurrency::User_Algorithm();
        while (stat_CLASS_get_ptr_User_Algorithims() == NULL) {}
    }
            // get.
            // set.
        // registers.
            // create.
    void OpenAvrilConcurrency::Algorithms::stat_REG_create_ptr_list_Of_ptr_Concurrent(OpenAvrilConcurrency::Concurrent* newDEFAULT_Concurrent)
    {
        _stat_REG_ptr_list_Of_ptr_Concurrent = new std::list<class OpenAvrilConcurrency::Concurrent*>();
        while (stat_REG_get_ptr_list_Of_ptr_Concurrent() == NULL) {}
        *_stat_REG_ptr_list_Of_ptr_Concurrent = { newDEFAULT_Concurrent , newDEFAULT_Concurrent, newDEFAULT_Concurrent };
    }
    void OpenAvrilConcurrency::Algorithms::stat_REG_create_ptr_List_Of_PraiseAlgorithmSubset()
    {
        _REG_ptr_List_Of_PraiseAlgorithmSubset = new std::list<OpenAvrilConcurrency::Object*>();
        while (stat_REG_get_ptr_List_Of_PraiseAlgorithmSubset() == NULL) {}
        stat_REG_get_ptr_List_Of_PraiseAlgorithmSubset()->resize(1);
    }
            // get.
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