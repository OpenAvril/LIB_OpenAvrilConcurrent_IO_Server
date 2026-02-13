#include "pch.h"

class OpenAvril::Algorithms* ptr_Algorithms = NULL;
class OpenAvril::Data* ptr_Data = NULL;
class OpenAvril::Execute* ptr_Execute = NULL;
class OpenAvril::Global* ptr_Global = NULL;

OpenAvril::Server::Server()
{
    Set_Global(new class OpenAvril::Global());
    while (Get_Global() == NULL) { }
    std::cout << "Created => OpenAvril::Global()" << std::endl;

    Set_Algorithms(new class OpenAvril::Algorithms());
    while (Get_Algorithms() == NULL) { }
    std::cout << "Created => OpenAvril::Algorithms()" << std::endl;

    Set_Data(new class OpenAvril::Data());
    while (Get_Data() == NULL) { }
    ptr_Data->Initialise_Control();
    std::cout << "Created => OpenAvril::Data()" << std::endl;

    Set_Execute(new class OpenAvril::Execute());
    while (Get_Execute() == NULL) { }
    Get_Execute()->Initialise_Control(Get_Global()->Get_NumCores());
    std::cout << "Created => OpenAvril::Execute()" << std::endl;
}

OpenAvril::Server::~Server()
{
    delete ptr_Global;
    delete ptr_Algorithms;
    delete ptr_Data;
    delete ptr_Execute;
}

OpenAvril::Algorithms* OpenAvril::Server::Get_Algorithms()
{
    return ptr_Algorithms;
}

OpenAvril::Data* OpenAvril::Server::Get_Data()
{
    return ptr_Data;
}

OpenAvril::Execute* OpenAvril::Server::Get_Execute()
{
    return ptr_Execute;
}

OpenAvril::Global* OpenAvril::Server::Get_Global()
{
    return ptr_Global;
}

void OpenAvril::Server::Set_Algorithms(OpenAvril::Algorithms* algorithms)
{
    ptr_Algorithms = algorithms;
}
void OpenAvril::Server::Set_Data(OpenAvril::Data* data)
{
    ptr_Data = data;
}
void OpenAvril::Server::Set_Execute(OpenAvril::Execute* execute)
{
    ptr_Execute = execute;
}
void OpenAvril::Server::Set_Global(OpenAvril::Global* global)
{
    ptr_Global = global;
}
