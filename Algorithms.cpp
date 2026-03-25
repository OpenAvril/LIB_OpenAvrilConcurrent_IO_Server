#include "pch.h"
    OpenAvrilConcurrency::User_Algorithim* OpenAvrilConcurrency::Algorithms::_stat_CLASS_ptr_User_Algorithim;
    std::list<OpenAvrilConcurrency::Concurrent*>* OpenAvrilConcurrency::Algorithms::_stat_REG_ptr_list_Of_ptr_Concurrent;
// public.
    OpenAvrilConcurrency::Algorithms::Algorithms()
    {
        std::cout << "entered CONSTRUCTOR of Algorithms()" << std::endl;
        stat_CLASS_boot0_DECLAIRE_Algorithim();
        stat_CLASS_boot1_DEFINE_Algorithim();
        stat_CLASS_boot3_INITIALISE_Algorithim();
        stat_REG_boot0_DECLAIRE_Algorithim();
        std::cout << "exiting CONSTRUCTOR of Algorithms()" << std::endl;
    }
    OpenAvrilConcurrency::Algorithms::~Algorithms()
    {
        delete _stat_CLASS_ptr_User_Algorithim;
        delete _stat_REG_ptr_list_Of_ptr_Concurrent;
    }
    OpenAvrilConcurrency::User_Algorithim* OpenAvrilConcurrency::Algorithms::dyn_CLASS_get_ptr_User_Algorithms()
    {
        return stat_CLASS_get_ptr_User_Algorithms();
    }
    OpenAvrilConcurrency::Concurrent* OpenAvrilConcurrency::Algorithms::dyn_CLASS_get_Item_On_list_Of_ptr_Concurrent(uint8_t concurrentThreadId)
    {
        auto temp = stat_REG_get_ptr_list_Of_ptr_Concurrent()->begin();
        std::advance(temp, concurrentThreadId);
        return *temp;
    }
    void OpenAvrilConcurrency::Algorithms::dyn_REG_boot1_DEFINE_Algorithim(Framework_Server* obj)
    {
        std::cout << "entered dyn_REG_boot1_DEFINE_Algorithms()" << std::endl;
        stat_REG_boot1_DEFINE_buffer_list_Of_ptr_Concurrent();
        std::cout << "exiting dyn_REG_boot1_DEFINE_Algorithms()" << std::endl;
    }
    void OpenAvrilConcurrency::Algorithms::dyn_REG_boot2_SUBSTANTIATE_Algorithim(Framework_Server* obj)
    {
        std::cout << "entered dyn_REG_boot2_SUBSTANTIATE_Algorithms()" << std::endl;
        stat_REG_boot2_SUBSTANTIATE_list_Of_ptr_Concurrent(obj);
        std::cout << "exiting dyn_REG_boot2_SUBSTANTIATE_Algorithms()" << std::endl;
    }
    void OpenAvrilConcurrency::Algorithms::dyn_REG_boot3_INITIALISE_Algorithim(Framework_Server* obj)
    {
        std::cout << "entered dyn_REG_boot3_INITIALISE_Algorithim()" << std::endl;
        stat_REG_boot3_INITIALISE_list_Of_ptr_Concurrent(obj);
        std::cout << "exiting dyn_REG_boot3_INITIALISE_Algorithms()" << std::endl;
    }
    void OpenAvrilConcurrency::Algorithms::dyn_REG_boot4_INSTANTIATE_Algorithim(Framework_Server* obj)
    {
        std::cout << "entered dyn_REG_boot4_INSTANTIATE_Algorithms()" << std::endl;

        std::cout << "exiting dyn_REG_boot4_INSTANTIATE_Algorithms()" << std::endl;
    }
    void OpenAvrilConcurrency::Algorithms::stat_CLASS_boot0_DECLAIRE_Algorithim()
    {
        std::cout << "entered stat_CLASS_boot0_DECLAIRE_Algorithms()" << std::endl;

        std::cout << "exiting stat_CLASS_boot0_DECLAIRE_Algorithms()" << std::endl;
    }
    void OpenAvrilConcurrency::Algorithms::stat_CLASS_boot1_DEFINE_Algorithim()
    {
        std::cout << "entered stat_CLASS_boot1_DEFINE_Algorithms()" << std::endl;
        stat_CLASS_boot1_DEFINE_User_Algorithms();
        std::cout << "exiting stat_CLASS_boot1_DEFINE_Algorithms()" << std::endl;
    }
    void OpenAvrilConcurrency::Algorithms::stat_CLASS_boot3_INITIALISE_Algorithim()
    {
        std::cout << "entered stat_CLASS_boot3_INITIALISE_Algorithms()" << std::endl;
        stat_CLASS_boot3_INITIALISE_User_Algorithms();
        std::cout << "exiting stat_CLASS_boot3_INITIALISE_Algorithms()" << std::endl;
    }
    void OpenAvrilConcurrency::Algorithms::stat_CLASS_boot4_INSTANTIATE_Algorithim()
    {
        std::cout << "entered stat_CLASS_boot0_REG_DECLAIRE_Algorithms()" << std::endl;

        std::cout << "exiting stat_CLASS_boot0_REG_DECLAIRE_Algorithms()" << std::endl;
    }
    void OpenAvrilConcurrency::Algorithms::stat_REG_boot0_DECLAIRE_Algorithim()
    {
        std::cout << "entered stat_REG_boot0_DECLAIRE_Algorithim()" << std::endl;

        std::cout << "exiting stat_REG_boot0_DECLAIRE_Algorithim()" << std::endl;
    }
// private.
    void OpenAvrilConcurrency::Algorithms::stat_CLASS_boot1_DEFINE_User_Algorithms()
    {
        _stat_CLASS_ptr_User_Algorithim = NULL;
    }
    void OpenAvrilConcurrency::Algorithms::stat_CLASS_boot3_INITIALISE_User_Algorithms()
    {
        _stat_CLASS_ptr_User_Algorithim = new class OpenAvrilConcurrency::User_Algorithim();
        while (stat_CLASS_get_ptr_User_Algorithms() == NULL) {}
    }
    OpenAvrilConcurrency::User_Algorithim* OpenAvrilConcurrency::Algorithms::stat_CLASS_get_ptr_User_Algorithms()
    {
        return _stat_CLASS_ptr_User_Algorithim;
    }
    void OpenAvrilConcurrency::Algorithms::stat_REG_boot1_DEFINE_buffer_list_Of_ptr_Concurrent()
    {
        _stat_REG_ptr_list_Of_ptr_Concurrent = NULL;
    }
    void OpenAvrilConcurrency::Algorithms::stat_REG_boot2_SUBSTANTIATE_list_Of_ptr_Concurrent(OpenAvrilConcurrency::Framework_Server* obj)
    {
        _stat_REG_ptr_list_Of_ptr_Concurrent = new std::list<class Concurrent*>();
        while (stat_REG_get_ptr_list_Of_ptr_Concurrent() == NULL) {}
        stat_REG_get_ptr_list_Of_ptr_Concurrent()->resize(obj->dyn_CLASS_get_ptr_Server()->dyn_CLASS_get_ptr_Global()->dyn_REG_get_Item_number_Of_Implemented_Cores());
        for (uint8_t threadId = 0; threadId < obj->dyn_CLASS_get_ptr_Server()->dyn_CLASS_get_ptr_Global()->dyn_REG_get_Item_number_Of_Implemented_Cores(); threadId++)
        {
            auto temp = stat_REG_get_ptr_list_Of_ptr_Concurrent()->begin();
            std::advance(temp, threadId);
            *temp = NULL;
        }
    }
    void OpenAvrilConcurrency::Algorithms::stat_REG_boot3_INITIALISE_list_Of_ptr_Concurrent(OpenAvrilConcurrency::Framework_Server* obj)
    {
        class OpenAvrilConcurrency::Concurrent* objConcurrent = new class OpenAvrilConcurrency::Concurrent();
        while (objConcurrent == NULL) {}
        for (uint8_t concurrentThreadId = 0; concurrentThreadId < obj->dyn_CLASS_get_ptr_Server()->dyn_CLASS_get_ptr_Global()->dyn_REG_get_Item_number_Of_Implemented_Cores(); concurrentThreadId++)
        {
            auto temp = stat_REG_get_ptr_list_Of_ptr_Concurrent()->begin();
            std::advance(temp, concurrentThreadId);
            *temp = objConcurrent;
            while (obj->dyn_CLASS_get_ptr_Server()->dyn_CLASS_get_ptr_Algorithms()->dyn_CLASS_get_ptr_User_Algorithms()->dyn_CLASS_get_Item_On_List_Of_ptr_PraiseAlgorithmSubsets(concurrentThreadId) == NULL) { }
        }
        delete objConcurrent;
    }
    std::list<OpenAvrilConcurrency::Concurrent*>* OpenAvrilConcurrency::Algorithms::stat_REG_get_ptr_list_Of_ptr_Concurrent()
        {
            return _stat_REG_ptr_list_Of_ptr_Concurrent;
        }