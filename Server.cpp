#include "pch.h"
OpenAvrilConcurrency::Algorithms* OpenAvrilConcurrency::Server::_stat_CLASS_ptr_Algorithms = NULL;
OpenAvrilConcurrency::Data* OpenAvrilConcurrency::Server::_stat_CLASS_ptr_Data = NULL;
OpenAvrilConcurrency::Execute* OpenAvrilConcurrency::Server::_stat_CLASS_ptr_Execute = NULL;
OpenAvrilConcurrency::Global* OpenAvrilConcurrency::Server::_stat_CLASS_ptr_Global = NULL;
OpenAvrilConcurrency::Server::Server()
{
    std::cout << "entered CONSTRUCTOR of Server()" << std::endl;
    stat_CLASS_create_ptr_Global();
    while (stat_CLASS_get_ptr_Global() == NULL) {}
    std::cout << "alpha." << std::endl;
    stat_CLASS_create_ptr_Algorithms();
    while (stat_CLASS_get_ptr_Algorithms() == NULL) {}
    std::cout << "bravo." << std::endl;
    stat_CLASS_create_ptr_Data();
    while (stat_CLASS_get_ptr_Data() == NULL) {}
    std::cout << "charlie." << std::endl;
    stat_CLASS_get_ptr_Data()->app_FUNCT_initialise_ptr_Input_Control();
    std::cout << "delta." << std::endl;
    stat_CLASS_create_ptr_Execute();
    while (stat_CLASS_get_ptr_Execute() == NULL) {}
    std::cout << "echo." << std::endl;
    stat_CLASS_get_ptr_Execute()->app_FUNCT_initialise_ptr_Input_Control(stat_CLASS_get_ptr_Global()->dyn_REG_get_Item_number_Of_Implemented_Cores());
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
void OpenAvrilConcurrency::Server::stat_CLASS_create_ptr_Algorithms()
{
    _stat_CLASS_ptr_Algorithms = new class OpenAvrilConcurrency::Algorithms();
    while (stat_CLASS_get_ptr_Algorithms() == NULL) {}
}
void OpenAvrilConcurrency::Server::stat_CLASS_create_ptr_Data()
{
    _stat_CLASS_ptr_Data = new class OpenAvrilConcurrency::Data();
    while (stat_CLASS_get_ptr_Data() == NULL) {}
}
void OpenAvrilConcurrency::Server::stat_CLASS_create_ptr_Execute()
{
    _stat_CLASS_ptr_Execute = new class OpenAvrilConcurrency::Execute();
    while (stat_CLASS_get_ptr_Execute() == NULL) {}
}
void OpenAvrilConcurrency::Server::stat_CLASS_create_ptr_Global()
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