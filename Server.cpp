#include "pch.h"

// classes.
    class OpenAvril::Algorithms* _ptr_Algorithms = NULL;
    class OpenAvril::Data* _ptr_Data = NULL;
    class OpenAvril::Execute* _ptr_Execute = NULL;
    class OpenAvril::Global* _ptr_Global = NULL;

// registers.

// constructor.
    OpenAvril::Server::Server()
    {
		Create_ptr_Global();
		Create_ptr_Algorithms();
		Create_ptr_Data();
        Get_ptr_Data()->Initialise_Control(Get_ptr_Data());
		Create_ptr_Execute();
        Get_ptr_Execute()->Initialise_Control(Get_ptr_Global()->Get_number_Of_Implemented_Cores());
    }

// destructor.
    OpenAvril::Server::~Server()
    {
        delete _ptr_Global;
        delete _ptr_Algorithms;
        delete _ptr_Data;
        delete _ptr_Execute;
    }

// public.
    void OpenAvril::Server::Create_ptr_Algorithms()
    {
		Set_ptr_Algorithms(new class OpenAvril::Algorithms());
        while (Get_ptr_Algorithms() == NULL) { }
    }
    void OpenAvril::Server::Create_ptr_Data()
    {
		Set_ptr_Data(new class OpenAvril::Data());
		while (Get_ptr_Data() == NULL) {}
    }
    void OpenAvril::Server::Create_ptr_Execute()
    {
		Set_ptr_Execute(new class OpenAvril::Execute());
		while (Get_ptr_Execute() == NULL) {}
    }
    void OpenAvril::Server::Create_ptr_Global()
    {
		Set_ptr_Global(new class OpenAvril::Global());
		while (Get_ptr_Global() == NULL) {}
    }
    // get.
    OpenAvril::Algorithms* OpenAvril::Server::Get_ptr_Algorithms()
    {
        return _ptr_Algorithms;
    }
    OpenAvril::Data* OpenAvril::Server::Get_ptr_Data()
    {
        return _ptr_Data;
    }
    OpenAvril::Execute* OpenAvril::Server::Get_ptr_Execute()
    {
        return _ptr_Execute;
    }
    OpenAvril::Global* OpenAvril::Server::Get_ptr_Global()
    {
        return _ptr_Global;
    }
    // set.

// private.
    // get.
    // set.
    void OpenAvril::Server::Set_ptr_Algorithms(OpenAvril::Algorithms* algorithms)
    {
        _ptr_Algorithms = algorithms;
    }
    void OpenAvril::Server::Set_ptr_Data(OpenAvril::Data* data)
    {
        _ptr_Data = data;
    }
    void OpenAvril::Server::Set_ptr_Execute(OpenAvril::Execute* execute)
    {
        _ptr_Execute = execute;
    }
    void OpenAvril::Server::Set_ptr_Global(OpenAvril::Global* global)
    {
        _ptr_Global = global;
    }