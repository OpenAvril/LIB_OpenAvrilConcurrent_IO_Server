#include "pch.h"
class OpenAvrilConcurrency::Server* OpenAvrilConcurrency::Framework_Server::_stat_CLASS_ptr_Server = NULL;
OpenAvrilConcurrency::Framework_Server::Framework_Server()
{
	std::cout << "entered CONSTRUCTOR of Framework_Server()" << std::endl;
	stat_CLASS_create_ptr_Server();
	std::cout << "exiting CONSTRUCTOR of Framework_Server()" << std::endl;
}
OpenAvrilConcurrency::Framework_Server::~Framework_Server()
{
	delete _stat_CLASS_ptr_Server;
}
void OpenAvrilConcurrency::Framework_Server::app_initialise_Program(OpenAvrilConcurrency::Framework_Server* obj)
{
	std::cout << "entered => OpenAvrilConcurrency::Framework_Server::app_initialise_Program()" << std::endl;
	uint8_t* newINITIALISED_Value = new uint8_t(UINT8_MAX);
	while (newINITIALISED_Value) {}
	*newINITIALISED_Value = uint8_t(4);
	obj->dyn_CLASS_get_ptr_Server()->dyn_CLASS_get_ptr_Global()->app_REG_initialise_Item_number_Of_Implemented_Cores(newINITIALISED_Value);
	*newINITIALISED_Value = uint8_t(1);
	obj->dyn_CLASS_get_ptr_Server()->dyn_CLASS_get_ptr_Global()->app_REG_initialise_Item_number_Of_Praise_Events(newINITIALISED_Value);
	delete newINITIALISED_Value;
	OpenAvrilConcurrency::Concurrent* newINITIALISED_Concurrent = new class OpenAvrilConcurrency::Concurrent();
	while (newINITIALISED_Concurrent == NULL) {}
	newINITIALISED_Concurrent->app_FUNCT_initialise_ptr_Input_Control();
	for (uint8_t concurrentThreadID = 0; concurrentThreadID < sizeof((obj->dyn_CLASS_get_ptr_Server()->dyn_CLASS_get_ptr_Global()->dyn_REG_get_Item_number_Of_Implemented_Cores() - 1)); concurrentThreadID++)
	{
		obj->dyn_CLASS_get_ptr_Server()->dyn_CLASS_get_ptr_Algorithms()->app_CLASS_initialise_Item_On_list_Of_ptr_Concurrent(concurrentThreadID, newINITIALISED_Concurrent);
	}
	delete newINITIALISED_Concurrent;
	OpenAvrilConcurrency::Input* newINITIALISED_Input = new class OpenAvrilConcurrency::Input();
	while (newINITIALISED_Input == NULL) {}
	newINITIALISED_Input->app_FUNCT_create_ptr_Input_Control();
	for (uint8_t concurrentThreadID = 0; concurrentThreadID < (obj->dyn_CLASS_get_ptr_Server()->dyn_CLASS_get_ptr_Global()->dyn_REG_get_Item_number_Of_Implemented_Cores() - 1); concurrentThreadID++)
	{
		obj->dyn_CLASS_get_ptr_Server()->dyn_CLASS_get_ptr_Data()->app_initialise_REG_Item_On_array_Of_ptr_array_Of_buffer_Input_ReferenceForThread(concurrentThreadID, newINITIALISED_Input);
	}
	for (uint8_t sideID = 0; sideID < uint8_t(2); sideID++)
	{
		obj->dyn_CLASS_get_ptr_Server()->dyn_CLASS_get_ptr_Data()->app_initialise_REG_Item_On_array_Of_doubleBuffer_Input(obj, newINITIALISED_Input);
	}
	for (uint8_t slotID = 0; slotID < obj->dyn_CLASS_get_ptr_Server()->dyn_CLASS_get_ptr_Global()->dyn_REG_get_Item_number_Of_Praise_Events(); slotID++)
	{
		obj->dyn_CLASS_get_ptr_Server()->dyn_CLASS_get_ptr_Data()->app_initialise_REG_Item_On_vector_Of_stack_Of_InputPraise(slotID, newINITIALISED_Input);
	}
	delete newINITIALISED_Input;
	OpenAvrilConcurrency::Output* newINITIALISED_Output = new class OpenAvrilConcurrency::Output();
	while (newINITIALISED_Output == NULL) {}
	newINITIALISED_Output->app_FUNCT_create_ptr_Output_Control();
	for (uint8_t concurrentThreadID = 0; concurrentThreadID < (obj->dyn_CLASS_get_ptr_Server()->dyn_CLASS_get_ptr_Global()->dyn_REG_get_Item_number_Of_Implemented_Cores() - 1); concurrentThreadID++)
	{
		obj->dyn_CLASS_get_ptr_Server()->dyn_CLASS_get_ptr_Data()->app_initialise_REG_Item_On_array_Of_ptr_array_Of_buffer_Output_ReferenceForThread(concurrentThreadID, newINITIALISED_Output);
	}
	for (uint8_t sideID = 0; sideID < uint8_t(2); sideID++)
	{
		obj->dyn_CLASS_get_ptr_Server()->dyn_CLASS_get_ptr_Data()->app_initialise_REG_Item_On_array_Of_doubleBuffer_Output(obj, newINITIALISED_Output);
	}
	for (uint8_t slotID = 0; slotID < obj->dyn_CLASS_get_ptr_Server()->dyn_CLASS_get_ptr_Global()->dyn_REG_get_Item_number_Of_Praise_Events(); slotID++)
	{
		obj->dyn_CLASS_get_ptr_Server()->dyn_CLASS_get_ptr_Data()->app_initialise_REG_Item_On_vector_Of_stack_Of_OutputPraise(slotID, newINITIALISED_Output);
	}
	delete newINITIALISED_Output;
	for (uint8_t concurrentThreadID = 0; concurrentThreadID < (obj->dyn_CLASS_get_ptr_Server()->dyn_CLASS_get_ptr_Global()->dyn_REG_get_Item_number_Of_Implemented_Cores() - 1); concurrentThreadID++)
	{
		obj->dyn_CLASS_get_ptr_Server()->dyn_CLASS_get_ptr_Execute()->app_FUNCT_Initialise_ptr_array_Of_ptr_list_Of_Threads(obj, concurrentThreadID);
	}
	obj->dyn_CLASS_get_ptr_Server()->dyn_CLASS_get_ptr_Execute()->app_FUNCT_initialise_Libraries();
	std::cout << "INIT Libraries" << std::endl;

	obj->dyn_CLASS_get_ptr_Server()->dyn_CLASS_get_ptr_Execute()->app_FUNCT_initialise_Threads(obj);
	std::cout << "INIT Thread(s)" << std::endl;

	std::cout << "exiting => OpenAvrilConcurrency::Framework_Server::app_initialise_Program()" << std::endl;
}
OpenAvrilConcurrency::Server* OpenAvrilConcurrency::Framework_Server::dyn_CLASS_get_ptr_Server()
{
	return stat_CLASS_get_ptr_Server();
}
void OpenAvrilConcurrency::Framework_Server::stat_CLASS_create_ptr_Server()
{
	static class OpenAvrilConcurrency::Server* _stat_CLASS_ptr_Server = new class OpenAvrilConcurrency::Server();
	while (stat_CLASS_get_ptr_Server() == NULL) {}
}
OpenAvrilConcurrency::Server* OpenAvrilConcurrency::Framework_Server::stat_CLASS_get_ptr_Server()
{
	return _stat_CLASS_ptr_Server;
}