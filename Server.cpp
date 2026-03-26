#include "pch.h"
    OpenAvrilConcurrency::Algorithms* OpenAvrilConcurrency::Server::_stat_CLASS_ptr_Algorithms;
    OpenAvrilConcurrency::Data* OpenAvrilConcurrency::Server::_stat_CLASS_ptr_Data;
    OpenAvrilConcurrency::Execute* OpenAvrilConcurrency::Server::_stat_CLASS_ptr_Execute;
    OpenAvrilConcurrency::Global* OpenAvrilConcurrency::Server::_stat_CLASS_ptr_Global;
// public.
    OpenAvrilConcurrency::Server::Server()
    {
        std::cout << "entered CONSTRUCTOR of Server()" << std::endl;
        stat_CLASS_boot0_DECLAIRE_Server();
        stat_CLASS_boot1_DEFINE_Server();
        stat_CLASS_boot3_INITIALISE_Server();
        stat_REG_boot0_DECLAIRE_Server();
        std::cout << "exiting CONSTRUCTOR of Server()" << std::endl;
    }
    OpenAvrilConcurrency::Server::~Server()
    {
        delete _stat_CLASS_ptr_Global;
        delete _stat_CLASS_ptr_Algorithms;
        delete _stat_CLASS_ptr_Data;
        delete _stat_CLASS_ptr_Execute;
    }
    OpenAvrilConcurrency::Algorithms* OpenAvrilConcurrency::Server::dyn_CLASS_get_ptr_Algorithms()
    {
        return stat_CLASS_get_ptr_Algorithms();
    }
    OpenAvrilConcurrency::Data* OpenAvrilConcurrency::Server::dyn_CLASS_get_ptr_Data()
    {
        return stat_CLASS_get_ptr_Data();
    }
    OpenAvrilConcurrency::Execute* OpenAvrilConcurrency::Server::dyn_CLASS_get_ptr_Execute()
    {
        return stat_CLASS_get_ptr_Execute();
    }
    OpenAvrilConcurrency::Global* OpenAvrilConcurrency::Server::dyn_CLASS_get_ptr_Global()
    {
        return stat_CLASS_get_ptr_Global();
    }
    void OpenAvrilConcurrency::Server::dyn_REG_boot1_DEFINE_Server(OpenAvrilConcurrency::Framework_Server* obj)
    {
        std::cout << "entered dyn_REG_boot1_DEFINE_Server()" << std::endl;

        std::cout << "exiting dyn_REG_boot1_DEFINE_Server()" << std::endl;
    }
    void OpenAvrilConcurrency::Server::dyn_REG_boot2_SUBSTANTIATE_Server(OpenAvrilConcurrency::Framework_Server* obj)
    {
        std::cout << "entered dyn_REG_boot2_SUBSTANTIATE_Server()" << std::endl;

        std::cout << "exiting dyn_REG_boot2_SUBSTANTIATE_Server()" << std::endl;
    }
    void OpenAvrilConcurrency::Server::dyn_REG_boot3_INITIALISE_Server(OpenAvrilConcurrency::Framework_Server* obj)
    {
        std::cout << "entered dyn_REG_boot3_INITIALISE_dyn_REG_boot3_INITIALISE_ServerServer()" << std::endl;

        std::cout << "exiting dyn_REG_boot3_INITIALISE_Server()" << std::endl;
    }
    void OpenAvrilConcurrency::Server::dyn_REG_boot4_INSTANTIATE_Server(OpenAvrilConcurrency::Framework_Server* obj)
    {
        std::cout << "entered dyn_REG_boot4_INSTANTIATE_Server()" << std::endl;

        std::cout << "exiting dyn_REG_boot4_INSTANTIATE_Server()" << std::endl;
    }
    void OpenAvrilConcurrency::Server::stat_CLASS_boot0_DECLAIRE_Server()
    {
        std::cout << "entered stat_CLASS_boot0_DECLAIRE_Server()" << std::endl;

        std::cout << "exiting stat_CLASS_boot0_DECLAIRE_Server()" << std::endl;
    }
    void OpenAvrilConcurrency::Server::stat_CLASS_boot1_DEFINE_Server()
    {
        std::cout << "entered stat_CLASS_boot1_DEFINE_Server()" << std::endl;
        stat_CLASS_boot1_DEFINE_Global();
        stat_CLASS_boot1_DEFINE_Algorithms();
        stat_CLASS_boot1_DEFINE_Data();
        stat_CLASS_boot1_DEFINE_Execute();
        std::cout << "exiting stat_CLASS_boot1_DEFINE_Server()" << std::endl;
    }
    void OpenAvrilConcurrency::Server::stat_CLASS_boot3_INITIALISE_Server()
    {
        std::cout << "entered stat_CLASS_boot3_INITIALISE_Server()" << std::endl;
        stat_CLASSS_boot3_INITIALISE_Global();
        stat_CLASS_boot3_INITIALISE_Algorithms();
        stat_CLASS_boot3_INITIALISE_Data();
        stat_CLASS_boot3_INITIALISE_Execute();
        std::cout << "exiting stat_CLASS_boot3_INITIALISE_Server()" << std::endl;
    }
    void OpenAvrilConcurrency::Server::stat_CLASS_boot4_INSTANTIATE_Server()
    {
        std::cout << "entered stat_CLASS_boot4_INSTANTIATE_Server()" << std::endl;

        std::cout << "exiting stat_CLASS_boot4_INSTANTIATE_Server()" << std::endl;
    }
    void OpenAvrilConcurrency::Server::stat_REG_boot0_DECLAIRE_Server()
    {
        std::cout << "entered stat_REG_boot0_DECLAIRE_Server()" << std::endl;

        std::cout << "exiting stat_REG_boot0_DECLAIRE_Server()" << std::endl;
    }
// private.
    void OpenAvrilConcurrency::Server::stat_CLASS_boot1_DEFINE_Algorithms()
    {
        _stat_CLASS_ptr_Algorithms = NULL;
    }
    void OpenAvrilConcurrency::Server::stat_CLASS_boot1_DEFINE_Data()
    {
        _stat_CLASS_ptr_Data = NULL;
    }
    void OpenAvrilConcurrency::Server::stat_CLASS_boot1_DEFINE_Execute()
    {
        _stat_CLASS_ptr_Execute = NULL;
    }
    void OpenAvrilConcurrency::Server::stat_CLASS_boot1_DEFINE_Global()
    {
        _stat_CLASS_ptr_Global = NULL;
    }
    void OpenAvrilConcurrency::Server::stat_CLASS_boot3_INITIALISE_Algorithms()
    {
        _stat_CLASS_ptr_Algorithms = new class OpenAvrilConcurrency::Algorithms();
        while (stat_CLASS_get_ptr_Algorithms() == NULL) {}
    }
    void OpenAvrilConcurrency::Server::stat_CLASS_boot3_INITIALISE_Data()
    {
        _stat_CLASS_ptr_Data = new class OpenAvrilConcurrency::Data();
        while (stat_CLASS_get_ptr_Data() == NULL) {}
    }
    void OpenAvrilConcurrency::Server::stat_CLASS_boot3_INITIALISE_Execute()
    {
        _stat_CLASS_ptr_Execute = new class OpenAvrilConcurrency::Execute();
        while (stat_CLASS_get_ptr_Execute() == NULL) {}
    }
    void OpenAvrilConcurrency::Server::stat_CLASSS_boot3_INITIALISE_Global()
    {
        _stat_CLASS_ptr_Global = new class OpenAvrilConcurrency::Global();
        while (stat_CLASS_get_ptr_Global() == NULL) {}

    }
    OpenAvrilConcurrency::Algorithms* OpenAvrilConcurrency::Server::stat_CLASS_get_ptr_Algorithms()
    {
        return _stat_CLASS_ptr_Algorithms;
    }
    OpenAvrilConcurrency::Data* OpenAvrilConcurrency::Server::stat_CLASS_get_ptr_Data()
    {
        return _stat_CLASS_ptr_Data;
    }
    OpenAvrilConcurrency::Execute* OpenAvrilConcurrency::Server::stat_CLASS_get_ptr_Execute()
    {
        return _stat_CLASS_ptr_Execute;
    }
    OpenAvrilConcurrency::Global* OpenAvrilConcurrency::Server::stat_CLASS_get_ptr_Global()
    {
        return _stat_CLASS_ptr_Global;
    }