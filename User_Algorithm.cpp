#include "pch.h"
	OpenAvrilConcurrency::Praise0_Algorithim* OpenAvrilConcurrency::User_Algorithim::_stat_CLASS_ptr_Praise0_Algorithim;
	std::list<OpenAvrilConcurrency::Object*>* OpenAvrilConcurrency::User_Algorithim::_REG_ptr_List_Of_List_Of_PraiseAlogrithmSubset;
// public.
	OpenAvrilConcurrency::User_Algorithim::User_Algorithim()
	{
		std::cout << "entered CONSTRUCTOR of User_Algorithim()." << std::endl;
		stat_CLASS_boot0_DECLAIRE_User_Algorithim();
		stat_CLASS_boot1_DEFINE_User_Algorithim();
		stat_CLASS_boot3_INITIALISE_User_Algorithim();
		stat_REG_boot0_DECLAIRE_User_Algorithim();
		std::cout << "exiting CONSTRUCTOR of User_Algorithim()." << std::endl;
	}
	OpenAvrilConcurrency::User_Algorithim::~User_Algorithim()
	{
		delete _stat_CLASS_ptr_Praise0_Algorithim;
		delete _REG_ptr_List_Of_List_Of_PraiseAlogrithmSubset;
	}
	OpenAvrilConcurrency::Object* OpenAvrilConcurrency::User_Algorithim::dyn_CLASS_get_Item_On_List_Of_ptr_PraiseAlgorithmSubsets(uint8_t praiseID)
	{
		auto temp = stat_REG_get_ptr_List_Of_PraiseAlogrithmSubset()->begin();
		std:advance(temp, praiseID);
		return *temp;
	}
	void OpenAvrilConcurrency::User_Algorithim::dyn_REG_boot1_DEFINE_User_Algorithim(OpenAvrilConcurrency::Framework_Server* obj)
	{
		std::cout << "entered dyn_REG_boot1_DEFINE_User_Algorithim()" << std::endl;
		stat_REG_boot1_DEFINE_List_Of_PraiseAlogrithmSubset();
		std::cout << "exiting dyn_REG_boot1_DEFINE_User_Algorithim()" << std::endl;
	}
	void OpenAvrilConcurrency::User_Algorithim::dyn_REG_boot2_SUBSTANTIATE_User_Algorithim(OpenAvrilConcurrency::Framework_Server* obj)
	{
		std::cout << "entered dyn_REG_boot2_SUBSTANTIATE_User_Algorithim()" << std::endl;
		stat_REG_boot2_SUBSTANTIATE_List_Of_PraiseAlogrithmSubset();
		std::cout << "exiting dyn_REG_boot2_SUBSTANTIATE_User_Algorithim()" << std::endl;
	}
	void OpenAvrilConcurrency::User_Algorithim::dyn_REG_boot3_INITIALISE_User_Algorithim(OpenAvrilConcurrency::Framework_Server* obj)
	{
		std::cout << "entered dyn_REG_boot3_INITIALISE_User_Algorithim()" << std::endl;
		stat_REG_boot3_INITIALISE_List_Of_PraiseAlogrithmSubset(obj);
		std::cout << "exiting dyn_REG_boot3_INITIALISE_User_Algorithim()" << std::endl;
	}
	void OpenAvrilConcurrency::User_Algorithim::dyn_REG_boot4_INSTANTIATE_User_Algorithim(OpenAvrilConcurrency::Framework_Server* obj)
	{
		std::cout << "entered dyn_REG_boot4_INSTANTIATE_User_Algorithim()" << std::endl;

		std::cout << "exiting dyn_REG_boot4_INSTANTIATE_User_Algorithim()" << std::endl;
	}
	void OpenAvrilConcurrency::User_Algorithim::stat_CLASS_boot0_DECLAIRE_User_Algorithim()
	{
		std::cout << "entered stat_CLASS_boot0_DECLAIRE_User_Algorithim()" << std::endl;

		std::cout << "exiting stat_CLASS_boot0_DECLAIRE_User_Algorithim()" << std::endl;
	}
	void OpenAvrilConcurrency::User_Algorithim::stat_CLASS_boot1_DEFINE_User_Algorithim()
	{
		std::cout << "entered stat_CLASS_boot1_DEFINE_User_Algorithim()" << std::endl;
		stat_CLASS_boot1_DEFINE_Praise0_Algorithim();
		std::cout << "exiting stat_CLASS_boot1_DEFINE_User_Algorithim()" << std::endl;
	}
	void OpenAvrilConcurrency::User_Algorithim::stat_CLASS_boot3_INITIALISE_User_Algorithim()
	{
		std::cout << "entered stat_CLASS_boot3_INITIALISE_User_Algorithim()" << std::endl;
		stat_CLASS_boot3_INITIALISE_Praise0_Algorithim();
		std::cout << "exiting stat_CLASS_boot3_INITIALISE_User_Algorithim()" << std::endl;
	}
	void OpenAvrilConcurrency::User_Algorithim::stat_CLASS_boot4_INSTANTIATE_User_Algorithim()
	{
		std::cout << "entered stat_CLASS_boot4_INSTANTIATE_User_Algorithim()" << std::endl;

		std::cout << "exiting stat_CLASS_boot4_INSTANTIATE_User_Algorithim()" << std::endl;
	}
	void OpenAvrilConcurrency::User_Algorithim::stat_REG_boot0_DECLAIRE_User_Algorithim()
	{
		std::cout << "entered stat_REG_boot0_DECLAIRE_User_Algorithim()" << std::endl;

		std::cout << "exiting stat_REG_boot0_DECLAIRE_User_Algorithim()" << std::endl;
	}
// private.
	void OpenAvrilConcurrency::User_Algorithim::stat_CLASS_boot1_DEFINE_Praise0_Algorithim()
	{
		_stat_CLASS_ptr_Praise0_Algorithim = NULL;
	}
	void OpenAvrilConcurrency::User_Algorithim::stat_CLASS_boot3_INITIALISE_Praise0_Algorithim()
	{
		_stat_CLASS_ptr_Praise0_Algorithim = new class OpenAvrilConcurrency::Praise0_Algorithim();
		while (stat_CLASS_get_ptr_Praise0_Algorithim() == NULL) {}
	}
	OpenAvrilConcurrency::Praise0_Algorithim* OpenAvrilConcurrency::User_Algorithim::stat_CLASS_get_ptr_Praise0_Algorithim()
	{
		return _stat_CLASS_ptr_Praise0_Algorithim;
	}
	void OpenAvrilConcurrency::User_Algorithim::stat_REG_boot1_DEFINE_List_Of_PraiseAlogrithmSubset()
	{
		_REG_ptr_List_Of_List_Of_PraiseAlogrithmSubset = NULL;
	}
	void OpenAvrilConcurrency::User_Algorithim::stat_REG_boot2_SUBSTANTIATE_List_Of_PraiseAlogrithmSubset()
	{
		_REG_ptr_List_Of_List_Of_PraiseAlogrithmSubset = new std::list<OpenAvrilConcurrency::Object*>();
		while (stat_REG_get_ptr_List_Of_PraiseAlogrithmSubset() == NULL) {}
		stat_REG_get_ptr_List_Of_PraiseAlogrithmSubset()->resize(1);
		auto temp = stat_REG_get_ptr_List_Of_PraiseAlogrithmSubset()->begin();
		std::advance(temp, 0);
		*temp = NULL;
	}
	void OpenAvrilConcurrency::User_Algorithim::stat_REG_boot3_INITIALISE_List_Of_PraiseAlogrithmSubset(OpenAvrilConcurrency::Framework_Server* obj)
	{
		stat_REG_get_ptr_List_Of_PraiseAlogrithmSubset()->resize(obj->dyn_CLASS_get_ptr_Server()->dyn_CLASS_get_ptr_Global()->dyn_REG_get_Item_number_Of_Praise_Events());
		for (uint8_t praiseId = 0; praiseId < obj->dyn_CLASS_get_ptr_Server()->dyn_CLASS_get_ptr_Global()->dyn_REG_get_Item_number_Of_Praise_Events(); praiseId++)
		{
			auto temp = stat_REG_get_ptr_List_Of_PraiseAlogrithmSubset()->begin();
			std::advance(temp, praiseId);
			*temp = obj->dyn_CLASS_get_ptr_Server()->dyn_CLASS_get_ptr_Algorithms()->dyn_CLASS_get_ptr_User_Algorithms()->dyn_CLASS_get_Item_On_List_Of_ptr_PraiseAlgorithmSubsets(praiseId);
		}
	}
	std::list<OpenAvrilConcurrency::Object*>* OpenAvrilConcurrency::User_Algorithim::stat_REG_get_ptr_List_Of_PraiseAlogrithmSubset()
	{
		return _REG_ptr_List_Of_List_Of_PraiseAlogrithmSubset;
	}