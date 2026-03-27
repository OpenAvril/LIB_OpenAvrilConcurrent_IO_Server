#include "pch.h"
	OpenAvrilConcurrency::Server* OpenAvrilConcurrency::Framework_Server::_stat_CLASS_ptr_Server;
	OpenAvrilConcurrency::Concurrent* OpenAvrilConcurrency::Framework_Server::_stat_STRUCT_Concurrent;
	OpenAvrilConcurrency::Input* OpenAvrilConcurrency::Framework_Server::_stat_STRUCT_Input;
	OpenAvrilConcurrency::Output* OpenAvrilConcurrency::Framework_Server::_stat_STRUCT_Output;
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
		delete _stat_STRUCT_Concurrent;
		delete _stat_STRUCT_Input;
		delete _stat_STRUCT_Output;
	}
	void OpenAvrilConcurrency::Framework_Server::dyn_REG_boot1_DEFINE_Framework_Server(OpenAvrilConcurrency::Framework_Server* obj)
	{
		std::cout << "entered dyn_REG_boot1_DEFINE_Framework_Server()" << std::endl;
		obj->dyn_CLASS_get_ptr_Server()->dyn_REG_boot1_DEFINE_Server(obj);
		obj->dyn_CLASS_get_ptr_Server()->dyn_CLASS_get_ptr_Global()->dyn_REG_boot1_DEFINE_Global();
		obj->dyn_CLASS_get_ptr_Server()->dyn_CLASS_get_ptr_Algorithms()->dyn_REG_boot1_DEFINE_Algorithim(obj);
		obj->dyn_CLASS_get_ptr_Server()->dyn_CLASS_get_ptr_Algorithms()->dyn_CLASS_get_ptr_User_Algorithms()->dyn_REG_boot1_DEFINE_User_Algorithim(obj);
		obj->dyn_CLASS_get_ptr_Server()->dyn_CLASS_get_ptr_Data()->dyn_REG_boot1_DEFINE_Data(obj);
		obj->dyn_CLASS_get_ptr_Server()->dyn_CLASS_get_ptr_Data()->dyn_CLASS_get_ptr_Data_Control()->dyn_REG_boot1_DEFINE_Data_Control(obj);
		obj->dyn_CLASS_get_ptr_Server()->dyn_CLASS_get_ptr_Data()->dyn_CLASS_get_ptr_User_Input()->dyn_REG_boot1_DEFINE_User_Input(obj);
		obj->dyn_CLASS_get_ptr_Server()->dyn_CLASS_get_ptr_Data()->dyn_CLASS_get_ptr_User_Output()->dyn_REG_boot1_DEFINE_User_Output(obj);
		obj->dyn_CLASS_get_ptr_Server()->dyn_CLASS_get_ptr_Execute()->dyn_REG_boot1_DEFINE_Execute(obj);
		obj->dyn_CLASS_get_ptr_Server()->dyn_CLASS_get_ptr_Execute()->dyn_CLASS_get_ptr_Execute_Control()->dyn_REG_boot1_DEFINE_Execute_Control(obj);
		std::cout << "exiting dyn_REG_boot1_DEFINE_Framework_Server()" << std::endl;
	}
	void OpenAvrilConcurrency::Framework_Server::dyn_REG_boot2_SUBSTANTIATE_Framework_Server(OpenAvrilConcurrency::Framework_Server* obj)
	{
		std::cout << "entered dyn_REG_boot2_SUBSTANTIATE_Framework_Server()" << std::endl;
		obj->dyn_CLASS_get_ptr_Server()->dyn_REG_boot2_SUBSTANTIATE_Server(obj);
		obj->dyn_CLASS_get_ptr_Server()->dyn_CLASS_get_ptr_Global()->dyn_REG_boot2_SUBSTANTIATE_Global();
		obj->dyn_CLASS_get_ptr_Server()->dyn_CLASS_get_ptr_Algorithms()->dyn_REG_boot2_SUBSTANTIATE_Algorithim(obj);
		obj->dyn_CLASS_get_ptr_Server()->dyn_CLASS_get_ptr_Algorithms()->dyn_CLASS_get_ptr_User_Algorithms()->dyn_REG_boot2_SUBSTANTIATE_User_Algorithim(obj);
		for (uint8_t concurrentThreadId = 0; concurrentThreadId < uint8_t(3); concurrentThreadId++)//NUMBER OF CONCURRENT THREADS.
		{
			obj->dyn_CLASS_get_ptr_Server()->dyn_CLASS_get_ptr_Algorithms()->dyn_STRUCT_get_Item_On_list_Of_ptr_Concurrent(concurrentThreadId)->dyn_REG_boot2_SUBSTANTIATE_Concurrent(obj);
		}
		obj->dyn_CLASS_get_ptr_Server()->dyn_CLASS_get_ptr_Data()->dyn_CLASS_get_ptr_Data_Control()->dyn_REG_boot2_SUBSTANTIATE_Data_Control(obj);
		obj->dyn_CLASS_get_ptr_Server()->dyn_CLASS_get_ptr_Data()->dyn_CLASS_get_ptr_User_Input()->dyn_REG_boot2_SUBSTANTIATE_User_Input(obj);
		obj->dyn_CLASS_get_ptr_Server()->dyn_CLASS_get_ptr_Data()->dyn_CLASS_get_ptr_User_Output()->dyn_REG_boot2_SUBSTANTIATE_User_Output(obj);
		obj->dyn_CLASS_get_ptr_Server()->dyn_CLASS_get_ptr_Execute()->dyn_REG_boot2_SUBSTANTIATE_Execute(obj);

		obj->dyn_CLASS_get_ptr_Server()->dyn_CLASS_get_ptr_Execute()->dyn_CLASS_get_ptr_Execute_Control()->dyn_REG_boot2_SUBSTANTIATE_Execute_Control(obj);
		std::cout << "exiting dyn_REG_boot2_SUBSTANTIATE_Framework_Server()" << std::endl;
	}
	void OpenAvrilConcurrency::Framework_Server::dyn_REG_boot3_INITIALISE_Framework_Server(OpenAvrilConcurrency::Framework_Server* obj)
	{
		std::cout << "entered dyn_REG_boot3_INITIALISE_Framework_Server()" << std::endl;
		obj->dyn_CLASS_get_ptr_Server()->dyn_REG_boot3_INITIALISE_Server(obj);
		obj->dyn_CLASS_get_ptr_Server()->dyn_CLASS_get_ptr_Global()->dyn_REG_boot3_INITIALISE_Global();
		obj->dyn_CLASS_get_ptr_Server()->dyn_CLASS_get_ptr_Algorithms()->dyn_REG_boot3_INITIALISE_Algorithim(obj, stat_STRUCT_get_Concurrent());
		obj->dyn_CLASS_get_ptr_Server()->dyn_CLASS_get_ptr_Algorithms()->dyn_CLASS_get_ptr_User_Algorithms()->dyn_REG_boot3_INITIALISE_User_Algorithim(obj);
		for (uint8_t concurrentThreadId = 0; concurrentThreadId < uint8_t(3); concurrentThreadId++)//NUMBER OF CONCURRENT THREADS.
		{
			obj->dyn_CLASS_get_ptr_Server()->dyn_CLASS_get_ptr_Algorithms()->dyn_STRUCT_get_Item_On_list_Of_ptr_Concurrent(concurrentThreadId)->dyn_REG_boot3_INITIALISE_Concurrent(obj);
		}
		obj->dyn_CLASS_get_ptr_Server()->dyn_CLASS_get_ptr_Data()->dyn_REG_boot3_INITIALISE_Data(obj, stat_STRUCT_get_Input(), stat_STRUCT_get_Output());
		obj->dyn_CLASS_get_ptr_Server()->dyn_CLASS_get_ptr_Data()->dyn_CLASS_get_ptr_Data_Control()->dyn_REG_boot3_INITIALISE_Data_Control(obj);
		obj->dyn_CLASS_get_ptr_Server()->dyn_CLASS_get_ptr_Data()->dyn_CLASS_get_ptr_User_Input()->dyn_REG_boot3_INITIALISE_User_Input(obj, uint8_t(0));
		obj->dyn_CLASS_get_ptr_Server()->dyn_CLASS_get_ptr_Data()->dyn_CLASS_get_ptr_User_Output()->dyn_REG_boot3_INITIALISE_User_Output(obj, uint8_t(0));
		obj->dyn_CLASS_get_ptr_Server()->dyn_CLASS_get_ptr_Execute()->dyn_REG_boot3_INITIALISE_Execute(obj);
		obj->dyn_CLASS_get_ptr_Server()->dyn_CLASS_get_ptr_Execute()->dyn_CLASS_get_ptr_Execute_Control()->dyn_REG_boot3_INITIALISE_Execute_Control(obj);
		std::cout << "exiting dyn_REG_boot3_INITIALISE_Framework_Server()" << std::endl;
	}
	void OpenAvrilConcurrency::Framework_Server::dyn_PGM_boot4_INSTANTIATE_Framework_Server(OpenAvrilConcurrency::Framework_Server* obj)
	{
		std::cout << "entered dyn_PGM_boot4_INSTANTIATE_Framework_Server()" << std::endl;
		std::cout << "# app booted." << std::endl;
		std::cout << "exiting dyn_PGM_boot4_INSTANTIATE_Framework_Server()" << std::endl;
	}
	OpenAvrilConcurrency::Concurrent* OpenAvrilConcurrency::Framework_Server::dyn_STRUCT_get_Concurrent()
	{
		return stat_STRUCT_get_Concurrent();
	}
	OpenAvrilConcurrency::Input* OpenAvrilConcurrency::Framework_Server::dyn_STRUCT_get_Input()
	{
		return stat_STRUCT_get_Input();
	}
	OpenAvrilConcurrency::Output* OpenAvrilConcurrency::Framework_Server::dyn_STRUCT_get_Output()
	{
		return stat_STRUCT_get_Output();
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
	void OpenAvrilConcurrency::Framework_Server::stat_STRUCT_boot0_DECLAIRE()
	{
		std::cout << "entered stat_STRUCT_boot0_DECLAIRE()." << std::endl;
		stat_STRUCT_boot0_DECLAIRE_Concurrent();
		stat_STRUCT_boot0_DECLAIRE_Input();
		stat_STRUCT_boot0_DECLAIRE_Output();
		std::cout << "exiting stat_STRUCT_boot0_DECLAIRE()." << std::endl;
	}
	void OpenAvrilConcurrency::Framework_Server::stat_STRUCT_boot1_DEFINE()
	{
		std::cout << "entered stat_STRUCT_boot1_DEFINE()." << std::endl;
		stat_STRUCT_boot1_DEFINE_Concurrent();
		stat_STRUCT_boot1_DEFINE_Input();
		stat_STRUCT_boot1_DEFINE_Output();
		std::cout << "exiting stat_STRUCT_boot1_DEFINE()." << std::endl;
	}
	void OpenAvrilConcurrency::Framework_Server::stat_STRUCT_boot3_INITIALISE(OpenAvrilConcurrency::Framework_Server* obj, OpenAvrilConcurrency::Concurrent* objConcurrent, OpenAvrilConcurrency::Input* objInput, OpenAvrilConcurrency::Output* objOutput)
	{
		std::cout << "entered stat_STRUCT_boot3_INITIALISE()." << std::endl;
		stat_STRUCT_boot3_INITIALISE_Concurrent(obj, objConcurrent);
		stat_STRUCT_boot3_INITIALISE_Input(obj, objInput);
		stat_STRUCT_boot3_INITIALISE_Output(obj,  objOutput);
		std::cout << "exiting stat_STRUCT_boot3_INITIALISE()." << std::endl;
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
	void OpenAvrilConcurrency::Framework_Server::stat_STRUCT_boot0_DECLAIRE_Concurrent()
	{
		std::cout << "entered stat_STRUCT_boot0_DECLAIRE_Concurrent()." << std::endl;

		std::cout << "exiting stat_STRUCT_boot0_DECLAIRE_Concurrent()." << std::endl;
	}
	void OpenAvrilConcurrency::Framework_Server::stat_STRUCT_boot0_DECLAIRE_Input()
	{
		std::cout << "entered stat_STRUCT_boot0_DECLAIRE_Input()." << std::endl;

		std::cout << "exiting stat_STRUCT_boot0_DECLAIRE_Input()." << std::endl;
	}
	void OpenAvrilConcurrency::Framework_Server::stat_STRUCT_boot0_DECLAIRE_Output()
	{
		std::cout << "entered stat_STRUCT_boot0_DECLAIRE_Output()." << std::endl;

		std::cout << "exiting stat_STRUCT_boot0_DECLAIRE_Output()." << std::endl;
	}
	void OpenAvrilConcurrency::Framework_Server::stat_STRUCT_boot1_DEFINE_Concurrent()
	{
		std::cout << "entered stat_STRUCT_boot1_DEFINE_Concurrent()" << std::endl;
		_stat_STRUCT_Concurrent = NULL;
		std::cout << "exiting stat_STRUCT_boot1_DEFINE_Concurrent()" << std::endl;
	}
	void OpenAvrilConcurrency::Framework_Server::stat_STRUCT_boot1_DEFINE_Input()
	{
		std::cout << "entered stat_STRUCT_boot1_DEFINE_Input()" << std::endl;
		_stat_STRUCT_Input = NULL;
		std::cout << "exiting stat_STRUCT_boot1_DEFINE_Input()" << std::endl;
	}
	void OpenAvrilConcurrency::Framework_Server::stat_STRUCT_boot1_DEFINE_Output()
	{
		std::cout << "entered stat_STRUCT_boot1_DEFINE_Output()" << std::endl;
		_stat_STRUCT_Output = NULL;
		std::cout << "exiting stat_STRUCT_boot1_DEFINE_Output()" << std::endl;
	}
	void OpenAvrilConcurrency::Framework_Server::stat_STRUCT_boot3_INITIALISE_Concurrent(OpenAvrilConcurrency::Framework_Server* obj, OpenAvrilConcurrency::Concurrent* objConcurrent)
	{
		std::cout << "entered stat_STRUCT_boot3_INITIALISE_Concurrent()" << std::endl;
		_stat_STRUCT_Concurrent = new struct OpenAvrilConcurrency::Concurrent();
		while (stat_STRUCT_get_Concurrent() == NULL) {}
		*_stat_STRUCT_Concurrent = *objConcurrent;
		std::cout << "exiting stat_STRUCT_boot3_INITIALISE_Concurrent()" << std::endl;
	}
	void OpenAvrilConcurrency::Framework_Server::stat_STRUCT_boot3_INITIALISE_Input(OpenAvrilConcurrency::Framework_Server* obj, OpenAvrilConcurrency::Input* objInput)
	{
		std::cout << "entered stat_STRUCT_boot3_INITIALISE_Input()" << std::endl;
		_stat_STRUCT_Input = new struct OpenAvrilConcurrency::Input();
		while (stat_STRUCT_get_Input() == NULL) {}
		*_stat_STRUCT_Input = *objInput;
		std::cout << "exiting stat_STRUCT_boot3_INITIALISE_Input()" << std::endl;
	}
	void OpenAvrilConcurrency::Framework_Server::stat_STRUCT_boot3_INITIALISE_Output(OpenAvrilConcurrency::Framework_Server* obj, OpenAvrilConcurrency::Output* objOutput)
	{
		std::cout << "entered stat_STRUCT_boot3_INITIALISE_Output()" << std::endl;
		_stat_STRUCT_Output = new struct OpenAvrilConcurrency::Output();
		while (stat_STRUCT_get_Output() == NULL) {}
		*_stat_STRUCT_Output = *objOutput;
		std::cout << "exiting stat_STRUCT_boot3_INITIALISE_Output()" << std::endl;
	}
	OpenAvrilConcurrency::Concurrent* OpenAvrilConcurrency::Framework_Server::stat_STRUCT_get_Concurrent()
	{
		return _stat_STRUCT_Concurrent;
	}
	OpenAvrilConcurrency::Input* OpenAvrilConcurrency::Framework_Server::stat_STRUCT_get_Input()
	{
		return _stat_STRUCT_Input;
	}
	OpenAvrilConcurrency::Output* OpenAvrilConcurrency::Framework_Server::stat_STRUCT_get_Output()
	{
		return _stat_STRUCT_Output;
	}
