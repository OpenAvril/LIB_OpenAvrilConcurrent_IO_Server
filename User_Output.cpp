#include "pch.h"
	OpenAvrilConcurrency::Praise0_Output* OpenAvrilConcurrency::User_Output::_stat_CLASS_ptr_Praise0_Output;
	std::list<OpenAvrilConcurrency::Object*>* OpenAvrilConcurrency::User_Output::_REG_ptr_List_Of_List_Of_PraiseOutputSubset;
// public.
	OpenAvrilConcurrency::User_Output::User_Output()
	{
		std::cout << "entered CONSTRUCTOR of User_Output()." << std::endl;
		stat_CLASS_boot0_DECLAIRE_User_Output();
		stat_CLASS_boot1_DEFINE_User_Output();
		stat_CLASS_boot3_INITIALISE_User_Output();
		stat_REG_boot0_DECLAIRE_User_Output();
		std::cout << "exiting CONSTRUCTOR of User_Output()." << std::endl;
	}
	OpenAvrilConcurrency::User_Output::~User_Output()
	{
		delete _stat_CLASS_ptr_Praise0_Output;
		delete _REG_ptr_List_Of_List_Of_PraiseOutputSubset;
	}
	OpenAvrilConcurrency::Object* OpenAvrilConcurrency::User_Output::dyn_CLASS_get_Item_On_List_Of_ptr_PraiseOutputSubsets(uint8_t praiseID)
	{
		auto temp = stat_REG_get_ptr_List_Of_PraiseOutputSubset()->begin();
		std:advance(temp, praiseID);
		return *temp;
	}
	void OpenAvrilConcurrency::User_Output::dyn_REG_boot1_DEFINE_User_Output(OpenAvrilConcurrency::Framework_Server* obj)
	{
		std::cout << "entered dyn_REG_boot1_DEFINE_User_Output()" << std::endl;
		stat_REG_boot1_DEFINE_List_Of_PraiseOutputSubset();
		std::cout << "exiting dyn_REG_boot1_DEFINE_User_Output()" << std::endl;
	}
	void OpenAvrilConcurrency::User_Output::dyn_REG_boot2_SUBSTANTIATE_User_Output(OpenAvrilConcurrency::Framework_Server* obj)
	{
		std::cout << "entered dyn_REG_boot2_SUBSTANTIATE_User_Output()" << std::endl;
		stat_REG_boot2_SUBSTANTIATE_List_Of_PraiseOutputSubset();
		std::cout << "exiting dyn_REG_boot2_SUBSTANTIATE_User_Output()" << std::endl;
	}
	void OpenAvrilConcurrency::User_Output::dyn_REG_boot3_INITIALISE_User_Output(OpenAvrilConcurrency::Framework_Server* obj, uint8_t praiseId)
	{
		std::cout << "entered dyn_REG_boot3_INITIALISE_User_Output()" << std::endl;
		stat_REG_boot3_INITIALISE_List_Of_PraiseOutputSubset(obj, praiseId);
		std::cout << "exiting dyn_REG_boot3_INITIALISE_User_Output()" << std::endl;
	}
	void OpenAvrilConcurrency::User_Output::dyn_REG_boot4_INSTANTIATE_User_Output(OpenAvrilConcurrency::Framework_Server* obj)
	{
		std::cout << "entered dyn_REG_boot4_INSTANTIATE_User_Output()" << std::endl;

		std::cout << "exiting dyn_REG_boot4_INSTANTIATE_User_Output()" << std::endl;
	}
	void OpenAvrilConcurrency::User_Output::stat_CLASS_boot0_DECLAIRE_User_Output()
	{
		std::cout << "entered stat_CLASS_boot0_DECLAIRE_User_Output()" << std::endl;

		std::cout << "exiting stat_CLASS_boot0_DECLAIRE_User_Output()" << std::endl;
	}
	void OpenAvrilConcurrency::User_Output::stat_CLASS_boot1_DEFINE_User_Output()
	{
		std::cout << "entered stat_CLASS_boot1_DEFINE_User_Output()" << std::endl;
		stat_CLASS_boot1_DEFINE_Praise0_Output();
		std::cout << "exiting stat_CLASS_boot1_DEFINE_User_Output()" << std::endl;
	}
	void OpenAvrilConcurrency::User_Output::stat_CLASS_boot3_INITIALISE_User_Output()
	{
		std::cout << "entered stat_CLASS_boot3_INITIALISE_User_Output()" << std::endl;
		stat_CLASS_boot3_INITIALISE_Praise0_Output();
		std::cout << "exiting stat_CLASS_boot3_INITIALISE_User_Output()" << std::endl;
	}
	void OpenAvrilConcurrency::User_Output::stat_CLASS_boot4_INSTANTIATE_User_Output()
	{
		std::cout << "entered stat_CLASS_boot4_INSTANTIATE_User_Output()" << std::endl;

		std::cout << "exiting stat_CLASS_boot4_INSTANTIATE_User_Output()" << std::endl;
	}
	void OpenAvrilConcurrency::User_Output::stat_REG_boot0_DECLAIRE_User_Output()
	{
		std::cout << "entered stat_REG_boot0_DECLAIRE_User_Output()" << std::endl;

		std::cout << "exiting stat_REG_boot0_DECLAIRE_User_Output()" << std::endl;
	}
// private.
	void OpenAvrilConcurrency::User_Output::stat_CLASS_boot1_DEFINE_Praise0_Output()
	{
		_stat_CLASS_ptr_Praise0_Output = NULL;
	}
	void OpenAvrilConcurrency::User_Output::stat_CLASS_boot3_INITIALISE_Praise0_Output()
	{
		_stat_CLASS_ptr_Praise0_Output = new class OpenAvrilConcurrency::Praise0_Output();
		while (stat_CLASS_get_ptr_Praise0_Output() == NULL) {}
	}
	OpenAvrilConcurrency::Praise0_Output* OpenAvrilConcurrency::User_Output::stat_CLASS_get_ptr_Praise0_Output()
	{
		return _stat_CLASS_ptr_Praise0_Output;
	}
	void OpenAvrilConcurrency::User_Output::stat_REG_boot1_DEFINE_List_Of_PraiseOutputSubset()
	{
		_REG_ptr_List_Of_List_Of_PraiseOutputSubset = NULL;
	}
	void OpenAvrilConcurrency::User_Output::stat_REG_boot2_SUBSTANTIATE_List_Of_PraiseOutputSubset()
	{
		_REG_ptr_List_Of_List_Of_PraiseOutputSubset = new std::list<class Object*>();
		while (stat_REG_get_ptr_List_Of_PraiseOutputSubset() == NULL) {}
		stat_REG_get_ptr_List_Of_PraiseOutputSubset()->resize(1);
		auto temp = stat_REG_get_ptr_List_Of_PraiseOutputSubset()->begin();
		std::advance(temp, uint8_t(0));
		*temp = NULL;
	}
	void OpenAvrilConcurrency::User_Output::stat_REG_boot3_INITIALISE_List_Of_PraiseOutputSubset(OpenAvrilConcurrency::Framework_Server* obj, uint8_t praiseId)
	{
		auto temp = stat_REG_get_ptr_List_Of_PraiseOutputSubset()->begin();
		std::advance(temp, uint8_t(0));
		*temp = obj->dyn_CLASS_get_ptr_Server()->dyn_CLASS_get_ptr_Data()->dyn_CLASS_get_ptr_User_Output()->dyn_CLASS_get_Item_On_List_Of_ptr_PraiseOutputSubsets(praiseId);

	}
	std::list<OpenAvrilConcurrency::Object*>* OpenAvrilConcurrency::User_Output::stat_REG_get_ptr_List_Of_PraiseOutputSubset()
{
	return _REG_ptr_List_Of_List_Of_PraiseOutputSubset;
}