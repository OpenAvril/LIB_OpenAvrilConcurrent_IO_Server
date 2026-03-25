#include "pch.h"
	OpenAvrilConcurrency::Server* OpenAvrilConcurrency::Framework_Server::_stat_CLASS_ptr_Server;
// public.
	OpenAvrilConcurrency::Framework_Server::Framework_Server()
	{
		std::cout << "entered CONSTRUCTOR of Framework_Server()" << std::endl;
		stat_CLASS_boot0_DECLAIRE_Framework_Server();
		stat_CLASS_boot1_DEFINE_Framework_Server();
		stat_CLASS_boot3_INITIALISE_Framework_Server();
		stat_REG_boot0_DECLAIRE_Framework_Server();
		std::cout << "exiting CONSTRUCTOR of Framework_Server()" << std::endl;
	}
	OpenAvrilConcurrency::Framework_Server::~Framework_Server()
	{
		delete _stat_CLASS_ptr_Server;
	}
	void OpenAvrilConcurrency::Framework_Server::dyn_REG_boot1_DEFINE_Framework_Server(OpenAvrilConcurrency::Framework_Server* obj)
	{
		std::cout << "entered dyn_REG_boot1_DEFINE_Framework_Server()" << std::endl;
		obj->dyn_CLASS_get_ptr_Server()->dyn_REG_boot1_DEFINE_Server(obj);
		obj->dyn_CLASS_get_ptr_Server()->dyn_CLASS_get_ptr_Global()->dyn_REG_boot1_DEFINE_Global();
		obj->dyn_CLASS_get_ptr_Server()->dyn_CLASS_get_ptr_Algorithms()->dyn_REG_boot1_DEFINE_Algorithim(obj);
		obj->dyn_CLASS_get_ptr_Server()->dyn_CLASS_get_ptr_Algorithms()->dyn_CLASS_get_ptr_User_Algorithms()->dyn_REG_boot1_DEFINE_User_Algorithim(obj);
		for (uint8_t concurrentThreadId = 0; concurrentThreadId < (obj->dyn_CLASS_get_ptr_Server()->dyn_CLASS_get_ptr_Global()->dyn_REG_get_Item_number_Of_Implemented_Cores() - 1); concurrentThreadId++)
		{
			obj->dyn_CLASS_get_ptr_Server()->dyn_CLASS_get_ptr_Algorithms()->dyn_CLASS_get_Item_On_list_Of_ptr_Concurrent(concurrentThreadId)->dyn_REG_boot1_DEFINE_Concurrent(obj);
		}
		obj->dyn_CLASS_get_ptr_Server()->dyn_CLASS_get_ptr_Data()->dyn_REG_boot1_DEFINE_Data(obj);
		obj->dyn_CLASS_get_ptr_Server()->dyn_CLASS_get_ptr_Execute()->dyn_REG_boot1_DEFINE_Execute(obj);

		std::cout << "exiting dyn_REG_boot1_DEFINE_Framework_Server()" << std::endl;
	}
	void OpenAvrilConcurrency::Framework_Server::dyn_REG_boot2_SUBSTANTIATE_Framework_Server(OpenAvrilConcurrency::Framework_Server* obj)
	{
		std::cout << "entered dyn_REG_boot2_SUBSTANTIATE_Framework_Server()" << std::endl;
		obj->dyn_CLASS_get_ptr_Server()->dyn_REG_boot2_SUBSTANTIATE_Server(obj);
		obj->dyn_CLASS_get_ptr_Server()->dyn_CLASS_get_ptr_Global()->dyn_REG_boot2_SUBSTANTIATE_Global();
		obj->dyn_CLASS_get_ptr_Server()->dyn_CLASS_get_ptr_Algorithms()->dyn_REG_boot2_SUBSTANTIATE_Algorithim(obj);
		obj->dyn_CLASS_get_ptr_Server()->dyn_CLASS_get_ptr_Data()->dyn_REG_boot2_SUBSTANTIATE_Data(obj);
		obj->dyn_CLASS_get_ptr_Server()->dyn_CLASS_get_ptr_Execute()->dyn_REG_boot2_SUBSTANTIATE_Execute(obj);

		std::cout << "exiting dyn_REG_boot2_SUBSTANTIATE_Framework_Server()" << std::endl;
	}
	void OpenAvrilConcurrency::Framework_Server::dyn_REG_boot3_INITIALISE_Framework_Server(OpenAvrilConcurrency::Framework_Server* obj)
	{
		std::cout << "entered dyn_REG_boot3_INITIALISE_Framework_Server()" << std::endl;
		obj->dyn_CLASS_get_ptr_Server()->dyn_REG_boot3_INITIALISE_Server(obj);
		obj->dyn_CLASS_get_ptr_Server()->dyn_CLASS_get_ptr_Global()->dyn_REG_boot3_INITIALISE_Global();
		obj->dyn_CLASS_get_ptr_Server()->dyn_CLASS_get_ptr_Algorithms()->dyn_REG_boot3_INITIALISE_Algorithim(obj);
		obj->dyn_CLASS_get_ptr_Server()->dyn_CLASS_get_ptr_Data()->dyn_REG_boot3_INITIALISE_Data(obj);
		obj->dyn_CLASS_get_ptr_Server()->dyn_CLASS_get_ptr_Execute()->dyn_REG_boot3_INITIALISE_Execute(obj);

		std::cout << "exiting dyn_REG_boot3_INITIALISE_Framework_Server()" << std::endl;
	}
	void OpenAvrilConcurrency::Framework_Server::dyn_PGM_boot4_INSTANTIATE_Framework_Server(OpenAvrilConcurrency::Framework_Server* obj)
	{
		std::cout << "entered dyn_PGM_boot4_INSTANTIATE_Framework_Server()" << std::endl;
		obj->dyn_CLASS_get_ptr_Server()->dyn_REG_boot4_INSTANTIATE_Server(obj);
		obj->dyn_CLASS_get_ptr_Server()->dyn_CLASS_get_ptr_Global()->stat_CLASS_boot4_INSTANTIATE_Global();
		obj->dyn_CLASS_get_ptr_Server()->dyn_CLASS_get_ptr_Algorithms()->dyn_REG_boot4_INSTANTIATE_Algorithim(obj);
		obj->dyn_CLASS_get_ptr_Server()->dyn_CLASS_get_ptr_Data()->dyn_REG_boot4_INSTANTIATE_Data(obj);
		obj->dyn_CLASS_get_ptr_Server()->dyn_CLASS_get_ptr_Execute()->dyn_REG_boot4_INSTANTIATE_Execute(obj);

		std::cout << "exiting dyn_PGM_boot4_INSTANTIATE_Framework_Server()" << std::endl;
	}
	OpenAvrilConcurrency::Server* OpenAvrilConcurrency::Framework_Server::dyn_CLASS_get_ptr_Server()
	{
		return stat_CLASS_get_ptr_Server();
	}
	void OpenAvrilConcurrency::Framework_Server::stat_CLASS_boot0_DECLAIRE_Framework_Server()
	{
		std::cout << "entered stat_CLASS_boot0_DECLAIRE_Framework_Server()" << std::endl;

		std::cout << "exiting stat_CLASS_boot0_DECLAIRE_Framework_Server()" << std::endl;
	}
	void OpenAvrilConcurrency::Framework_Server::stat_CLASS_boot1_DEFINE_Framework_Server()
	{
		std::cout << "entered stat_CLASS_boot1_DEFINE_Framework_Server" << std::endl;
		stat_CLASS_boot1_DEFINE_Server();
		std::cout << "exiting stat_CLASS_boot1_DEFINE_Framework_Server" << std::endl;
	}
	void OpenAvrilConcurrency::Framework_Server::stat_CLASS_boot3_INITIALISE_Framework_Server()
	{
		std::cout << "entered stat_CLASS_boot3_INITIALISE_Framework_Server()" << std::endl;
		stat_CLASS_boot3_INITIALISE_Server();
		std::cout << "exiting stat_CLASS_boot3_INITIALISE_Framework_Server()" << std::endl;
	}
	void OpenAvrilConcurrency::Framework_Server::stat_CLASS_boot4_INSTANTIATE_Framework_Server()
	{
		std::cout << "entered stat_CLASS_boot4_INSTANTIATE_Framework_Server()" << std::endl;

		std::cout << "exiting stat_CLASS_boot4_INSTANTIATE_Framework_Server()" << std::endl;
	}
	void OpenAvrilConcurrency::Framework_Server::stat_REG_boot0_DECLAIRE_Framework_Server()
	{
		std::cout << "entered stat_REG_boot0_DECLAIRE_Framework_Server()" << std::endl;

		std::cout << "exiting stat_REG_boot0_DECLAIRE_Framework_Server()" << std::endl;
	}
// private.
	void OpenAvrilConcurrency::Framework_Server::stat_CLASS_boot1_DEFINE_Server()
	{
		_stat_CLASS_ptr_Server = NULL;
	}
	void OpenAvrilConcurrency::Framework_Server::stat_CLASS_boot3_INITIALISE_Server()
	{
		_stat_CLASS_ptr_Server = new OpenAvrilConcurrency::Server();
		while (stat_CLASS_get_ptr_Server() == NULL) {}
	}
	OpenAvrilConcurrency::Server* OpenAvrilConcurrency::Framework_Server::stat_CLASS_get_ptr_Server()
	{
		return _stat_CLASS_ptr_Server;
	}