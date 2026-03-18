#include "pch.h"

// pointers.
	// classes.
	OpenAvrilConcurrency::Praise0_Algorithm* OpenAvrilConcurrency::User_Algorithm::_stat_CLASS_ptr_Praise0_Algorithm = NULL;
	std::list<OpenAvrilConcurrency::Object*>* OpenAvrilConcurrency::User_Algorithm::_REG_ptr_List_Of_PraiseAlgorithmSubset = NULL;
	// registers.

// public.
	// constructor.
	OpenAvrilConcurrency::User_Algorithm::User_Algorithm()
	{
		std::cout << "entered CONSTRUCTOR of User_Algorithm()." << std::endl;
		stat_CLASS_create_ptr_Praise0_Algorithm();
		stat_REG_create_ptr_List_Of_PraiseAlgorithmSubset();
		std::cout << "exiting CONSTRUCTOR of User_Algorithm()." << std::endl;
	}

	// destructor.
	OpenAvrilConcurrency::User_Algorithm::~User_Algorithm()
	{
		delete _stat_CLASS_ptr_Praise0_Algorithm;
		delete _REG_ptr_List_Of_PraiseAlgorithmSubset;
	}

	// dynamic.
		// create.
		// get.
	OpenAvrilConcurrency::Object* OpenAvrilConcurrency::User_Algorithm::dyn_CLASS_getr_Item_On_List_Of_ptr_PraiseAlgorithmSubsets(uint8_t praiseID)
	{
		auto temp = stat_REG_get_ptr_List_Of_PraiseAlgorithmSubset()->begin();
		std:advance(temp, praiseID);
		return *temp;
	}
		// set.
	// static.
		// create.
		// get.
		// set.

// private.
	// dynamic.
		// classes.
			// create.
			// get.
			// set.
		// registers.
			// create.
			// get.
			// set.
	// static.
		// classes.
			// create.
	void OpenAvrilConcurrency::User_Algorithm::stat_CLASS_create_ptr_Praise0_Algorithm()
	{
		_stat_CLASS_ptr_Praise0_Algorithm = new class OpenAvrilConcurrency::Praise0_Algorithm();
		while (stat_CLASS_get_ptr_Praise0_Algorithm() == NULL) {}
	}
			// get.
	OpenAvrilConcurrency::Praise0_Algorithm* OpenAvrilConcurrency::User_Algorithm::stat_CLASS_get_ptr_Praise0_Algorithm()
	{
		return _stat_CLASS_ptr_Praise0_Algorithm;
	}
			// set.
		// registers.
			// create.
	void OpenAvrilConcurrency::User_Algorithm::stat_REG_create_ptr_List_Of_PraiseAlgorithmSubset()
	{
		_REG_ptr_List_Of_PraiseAlgorithmSubset = new std::list<OpenAvrilConcurrency::Object*>();
		while (stat_REG_get_ptr_List_Of_PraiseAlgorithmSubset() == NULL) {}
		stat_REG_get_ptr_List_Of_PraiseAlgorithmSubset()->resize(1);
		stat_REG_set_Item_On_list_Of_ptr_PraiseAlgorithmSubset(0, reinterpret_cast<class OpenAvrilConcurrency::Object*>(stat_CLASS_get_ptr_Praise0_Algorithm()));
		//todo: user praise.
	}
			// get.
	std::list<OpenAvrilConcurrency::Object*>* OpenAvrilConcurrency::User_Algorithm::stat_REG_get_ptr_List_Of_PraiseAlgorithmSubset()
	{
		return _REG_ptr_List_Of_PraiseAlgorithmSubset;
	}
			// set.
	void OpenAvrilConcurrency::User_Algorithm::stat_REG_set_Item_On_list_Of_ptr_PraiseAlgorithmSubset(uint8_t praiseID, OpenAvrilConcurrency::Object* objObject)
	{
		auto temp = stat_REG_get_ptr_List_Of_PraiseAlgorithmSubset()->begin();
		std::advance(temp, praiseID);
		*temp = objObject;
	}