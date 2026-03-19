#include "pch.h"
    OpenAvrilConcurrency::User_Algorithm* OpenAvrilConcurrency::Algorithms::_stat_CLASS_ptr_User_Algorithmorithms = NULL;
    std::list<OpenAvrilConcurrency::Concurrent*>* OpenAvrilConcurrency::Algorithms::_stat_REG_ptr_list_Of_ptr_Concurrent = NULL;
    OpenAvrilConcurrency::Algorithms::Algorithms()
    {
        std::cout << "entered CONSTRUCTOR of Algorithms()" << std::endl;
        stat_CLASS_create_ptr_User_Algorithmorithms();
        class OpenAvrilConcurrency::Concurrent* newDEFAULT_Concurrent = new class OpenAvrilConcurrency::Concurrent();
        while (newDEFAULT_Concurrent == NULL) {}
        stat_REG_create_ptr_list_Of_ptr_Concurrent(newDEFAULT_Concurrent);
        delete newDEFAULT_Concurrent;

        std::cout << "exiting CONSTRUCTOR of Algorithms()" << std::endl;
    }
    OpenAvrilConcurrency::Algorithms::~Algorithms()
    {
        delete _stat_CLASS_ptr_User_Algorithmorithms;
        delete _stat_REG_ptr_list_Of_ptr_Concurrent;
    }
    void OpenAvrilConcurrency::Algorithms::app_CLASS_initialise_Item_On_list_Of_ptr_Concurrent(uint8_t concurrentThreadID, OpenAvrilConcurrency::Concurrent* newINITIALISED_Concurrent)
    {
        stat_REG_set_Item_On_list_Of_ptr_Concurrent(concurrentThreadID, newINITIALISED_Concurrent);
    }
    OpenAvrilConcurrency::Concurrent* OpenAvrilConcurrency::Algorithms::dyn_CLASS_get_Item_On_list_Of_ptr_Concurrent(uint8_t concurrentThreadID)
    {
        auto temp = stat_REG_get_ptr_list_Of_ptr_Concurrent()->begin();
        std::advance(temp, concurrentThreadID);
        return *temp;
    }
    OpenAvrilConcurrency::User_Algorithm* OpenAvrilConcurrency::Algorithms::dyn_CLASS_get_ptr_User_Algorithims()
    {
        return stat_CLASS_get_ptr_User_Algorithims();
    }
    void OpenAvrilConcurrency::Algorithms::stat_CLASS_create_ptr_User_Algorithmorithms()
    {
        _stat_CLASS_ptr_User_Algorithmorithms = new class OpenAvrilConcurrency::User_Algorithm();
        while (stat_CLASS_get_ptr_User_Algorithims() == NULL) {}
    }
    OpenAvrilConcurrency::User_Algorithm* OpenAvrilConcurrency::Algorithms::stat_CLASS_get_ptr_User_Algorithims()
    {
        return _stat_CLASS_ptr_User_Algorithmorithms;
    }
    void OpenAvrilConcurrency::Algorithms::stat_REG_create_ptr_list_Of_ptr_Concurrent(OpenAvrilConcurrency::Concurrent* newDEFAULT_Concurrent)
    {
        _stat_REG_ptr_list_Of_ptr_Concurrent = new std::list<class OpenAvrilConcurrency::Concurrent*>();
        while (stat_REG_get_ptr_list_Of_ptr_Concurrent() == NULL) {}
        *_stat_REG_ptr_list_Of_ptr_Concurrent = { newDEFAULT_Concurrent , newDEFAULT_Concurrent, newDEFAULT_Concurrent };
    }
    std::list<OpenAvrilConcurrency::Concurrent*>* OpenAvrilConcurrency::Algorithms::stat_REG_get_ptr_list_Of_ptr_Concurrent()
    {
        return _stat_REG_ptr_list_Of_ptr_Concurrent;
    }
    void OpenAvrilConcurrency::Algorithms::stat_REG_set_Item_On_list_Of_ptr_Concurrent(uint8_t concurrentThreadID, OpenAvrilConcurrency::Concurrent* objClass)
    {
        auto temp = stat_REG_get_ptr_list_Of_ptr_Concurrent()->begin();
        std::advance(temp, concurrentThreadID);
        *temp = objClass;
    }