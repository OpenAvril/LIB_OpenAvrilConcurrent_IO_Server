#include "pch.h"
	OpenAvrilConcurrency::Praise0_Input* OpenAvrilConcurrency::User_Input::_stat_CLASS_ptr_Praise0_Input;
	std::list<OpenAvrilConcurrency::Object*>* OpenAvrilConcurrency::User_Input::_REG_ptr_List_Of_List_Of_PraiseInputSubset;
// public.
	OpenAvrilConcurrency::User_Input::User_Input()
	{
		std::cout << "entered CONSTRUCTOR of User_Input()." << std::endl;
		stat_CLASS_boot0_DECLAIRE_User_Input();
		stat_CLASS_boot1_DEFINE_User_Input();
		stat_CLASS_boot3_INITIALISE_User_Input();
		stat_REG_boot0_DECLAIRE_User_Input();
		std::cout << "exiting CONSTRUCTOR of User_Input()." << std::endl;
	}
	OpenAvrilConcurrency::User_Input::~User_Input()
	{
		delete _stat_CLASS_ptr_Praise0_Input;
		delete _REG_ptr_List_Of_List_Of_PraiseInputSubset;
	}
	OpenAvrilConcurrency::Object* OpenAvrilConcurrency::User_Input::dyn_CLASS_get_Item_On_List_Of_ptr_PraiseInputSubsets(uint8_t praiseID)
	{
		auto temp = stat_REG_get_ptr_List_Of_PraiseInputSubset()->begin();
		std:advance(temp, praiseID);
		return *temp;
	}
	void OpenAvrilConcurrency::User_Input::dyn_REG_boot1_DEFINE_User_Input(OpenAvrilConcurrency::Framework_Server* obj)
	{
		std::cout << "entered dyn_REG_boot1_DEFINE_User_Input()" << std::endl;
		stat_REG_boot1_DEFINE_List_Of_PraiseInputSubset();
		std::cout << "exiting dyn_REG_boot1_DEFINE_User_Input()" << std::endl;
	}
	void OpenAvrilConcurrency::User_Input::dyn_REG_boot2_SUBSTANTIATE_User_Input(OpenAvrilConcurrency::Framework_Server* obj)
	{
		std::cout << "entered dyn_REG_boot2_SUBSTANTIATE_User_Input()" << std::endl;
		stat_REG_boot2_SUBSTANTIATE_List_Of_PraiseInputSubset();
		std::cout << "exiting dyn_REG_boot2_SUBSTANTIATE_User_Input()" << std::endl;
	}
	void OpenAvrilConcurrency::User_Input::dyn_REG_boot3_INITIALISE_User_Input(OpenAvrilConcurrency::Framework_Server* obj, uint8_t praiseId)
	{
		std::cout << "entered dyn_REG_boot3_INITIALISE_User_Input()" << std::endl;
		stat_REG_boot3_INITIALISE_List_Of_PraiseInputSubset(obj, praiseId);
		std::cout << "exiting dyn_REG_boot3_INITIALISE_User_Input()" << std::endl;
	}
	void OpenAvrilConcurrency::User_Input::dyn_REG_boot4_INSTANTIATE_User_Input(OpenAvrilConcurrency::Framework_Server* obj)
	{
		std::cout << "entered dyn_REG_boot4_INSTANTIATE_User_Input()" << std::endl;

		std::cout << "exiting dyn_REG_boot4_INSTANTIATE_User_Input()" << std::endl;
	}
	void OpenAvrilConcurrency::User_Input::stat_CLASS_boot0_DECLAIRE_User_Input()
	{
		std::cout << "entered stat_CLASS_boot0_DECLAIRE_User_Input()" << std::endl;

		std::cout << "exiting stat_CLASS_boot0_DECLAIRE_User_Input()" << std::endl;
	}
	void OpenAvrilConcurrency::User_Input::stat_CLASS_boot1_DEFINE_User_Input()
	{
		std::cout << "entered stat_CLASS_boot1_DEFINE_User_Input()" << std::endl;
		stat_CLASS_boot1_DEFINE_Praise0_Input();
		std::cout << "exiting stat_CLASS_boot1_DEFINE_User_Input()" << std::endl;
	}
	void OpenAvrilConcurrency::User_Input::stat_CLASS_boot3_INITIALISE_User_Input()
	{
		std::cout << "entered stat_CLASS_boot3_INITIALISE_User_Input()" << std::endl;
		stat_CLASS_boot3_INITIALISE_Praise0_Input();
		std::cout << "exiting stat_CLASS_boot3_INITIALISE_User_Input()" << std::endl;
	}
	void OpenAvrilConcurrency::User_Input::stat_CLASS_boot4_INSTANTIATE_User_Input()
	{
		std::cout << "entered stat_CLASS_boot4_INSTANTIATE_User_Input()" << std::endl;

		std::cout << "exiting stat_CLASS_boot4_INSTANTIATE_User_Input()" << std::endl;
	}
	void OpenAvrilConcurrency::User_Input::stat_REG_boot0_DECLAIRE_User_Input()
	{
		std::cout << "entered stat_REG_boot0_DECLAIRE_User_Input()" << std::endl;

		std::cout << "exiting stat_REG_boot0_DECLAIRE_User_Input()" << std::endl;
	}
// private.
	void OpenAvrilConcurrency::User_Input::stat_CLASS_boot1_DEFINE_Praise0_Input()
	{
		_stat_CLASS_ptr_Praise0_Input = NULL;
	}
	void OpenAvrilConcurrency::User_Input::stat_CLASS_boot3_INITIALISE_Praise0_Input()
	{
		_stat_CLASS_ptr_Praise0_Input = new class OpenAvrilConcurrency::Praise0_Input();
		while(stat_CLASS_get_ptr_Praise0_Input() == NULL) { }
	}
	OpenAvrilConcurrency::Praise0_Input* OpenAvrilConcurrency::User_Input::stat_CLASS_get_ptr_Praise0_Input()
	{
		return _stat_CLASS_ptr_Praise0_Input;
	}
	void OpenAvrilConcurrency::User_Input::stat_REG_boot1_DEFINE_List_Of_PraiseInputSubset()
	{
		_REG_ptr_List_Of_List_Of_PraiseInputSubset = NULL;
	}
	void OpenAvrilConcurrency::User_Input::stat_REG_boot2_SUBSTANTIATE_List_Of_PraiseInputSubset()
	{
		_REG_ptr_List_Of_List_Of_PraiseInputSubset = new std::list<OpenAvrilConcurrency::Object*>();
		while (stat_REG_get_ptr_List_Of_PraiseInputSubset() == NULL) {}
		stat_REG_get_ptr_List_Of_PraiseInputSubset()->resize(1);
		auto temp = stat_REG_get_ptr_List_Of_PraiseInputSubset()->begin();
		std::advance(temp, uint8_t(0));
		*temp = NULL;
	}
	void OpenAvrilConcurrency::User_Input::stat_REG_boot3_INITIALISE_List_Of_PraiseInputSubset(OpenAvrilConcurrency::Framework_Server* obj, uint8_t praiseId)
	{
		auto temp = stat_REG_get_ptr_List_Of_PraiseInputSubset()->begin();
		std::advance(temp, uint8_t(0));
		*temp = obj->dyn_CLASS_get_ptr_Server()->dyn_CLASS_get_ptr_Data()->dyn_CLASS_get_ptr_User_Input()->dyn_CLASS_get_Item_On_List_Of_ptr_PraiseInputSubsets(praiseId);
	}
	std::list<OpenAvrilConcurrency::Object*>* OpenAvrilConcurrency::User_Input::stat_REG_get_ptr_List_Of_PraiseInputSubset()
	{
		return _REG_ptr_List_Of_List_Of_PraiseInputSubset;
	}