#include "pch.h"

class OpenAvril::Server* ptr_HostServer = NULL;

OpenAvril::Framework_Server::Framework_Server()
{
	std::cout << "entered => Framework_Server::Framework_Server()" << std::endl;

	Set_Server_Assembly(new class OpenAvril::Server());
	while (Get_Server_Assembly() == NULL) { }
	std::cout << "Created => Created Server Assembly()" << std::endl;

}


OpenAvril::Framework_Server::~Framework_Server()
{
	delete ptr_HostServer;
}

void OpenAvril::Framework_Server::Initialise_Program(OpenAvril::Framework_Server* obj)
{
	std::cout << "entered => OpenAvril::Framework_Server::Initialise_Program()" << std::endl;

	obj->Get_Server_Assembly()->Get_Algorithms()->Initialise(ptr_HostServer->Get_Global()->Get_NumCores());
	std::cout << "Created => INIT Server" << std::endl;

	obj->Get_Server_Assembly()->Get_Data()->Initialise(ptr_HostServer->Get_Global()->Get_NumCores());

	obj->Get_Server_Assembly()->Get_Execute()->Initialise_Libraries();
	std::cout << "Created => INIT Libraries" << std::endl;

	obj->Get_Server_Assembly()->Get_Data()->Initialise_GameInstance();
	std::cout << "Created => Game Instance" << std::endl;

	obj->Get_Server_Assembly()->Get_Execute()->Initialise_Threads(obj);
	std::cout << "Created => Thread(s)" << std::endl;
}

class OpenAvril::Server* OpenAvril::Framework_Server::Get_Server_Assembly()
{
	return ptr_HostServer;
}

void OpenAvril::Framework_Server::Set_Server_Assembly(OpenAvril::Server* server)
{
	ptr_HostServer = server;
}
