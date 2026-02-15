#include "pch.h"

// calsses.
	class OpenAvril::Server* _ptr_Server = NULL;

// registers.

// constructor.
	OpenAvril::Framework_Server::Framework_Server()
	{
		std::cout << "entered => Framework_Server::Framework_Server()" << std::endl;
		Create_ptr_Server();
		std::cout << "Created => Created Server Assembly()" << std::endl;
	}

// destructor.
	OpenAvril::Framework_Server::~Framework_Server()
	{
		delete _ptr_Server;
	}

// public.
	void OpenAvril::Framework_Server::Initialise_Program(OpenAvril::Framework_Server* obj)
	{
		std::cout << "entered => OpenAvril::Framework_Server::Initialise_Program()" << std::endl;
		obj->Get_ptr_Server()->Get_ptr_Algorithms()->Initialise_list_Of_ptr_Concurrnet(obj->Get_ptr_Server()->Create_ptr_Global()->Get_number_Of_Implemented_Cores());
		std::cout << "INIT Server" << std::endl;
		obj->Get_ptr_Server()->Get_ptr_Data()->Initialise(obj->Get_ptr_Server()->Create_ptr_Global()->Get_number_Of_Implemented_Cores());
		obj->Get_ptr_Server()->Get_ptr_Execute()->Initialise_Libraries();
		std::cout << "INIT Libraries" << std::endl;
		obj->Get_ptr_Server()->Get_ptr_Data()->Initialise_GameInstance();
		std::cout << "ITIT Game Instance" << std::endl;

		obj->Get_ptr_Server()->Get_ptr_Execute()->Initialise_Threads(obj);
		std::cout << "INIT Thread(s)" << std::endl;
	}
	// get.
	class OpenAvril::Server* OpenAvril::Framework_Server::Get_ptr_Server()
	{
		return _ptr_Server;
	}
	// set.

// private.
	void OpenAvril::Framework_Server::Create_ptr_Server()
	{
		Set_ptr_Server(new class OpenAvril::Server());
		while (Get_ptr_Server() == NULL) { }
	}
	// get.
	// set.
	void OpenAvril::Framework_Server::Set_ptr_Server(OpenAvril::Server* server)
	{
		_ptr_Server = server;
	}