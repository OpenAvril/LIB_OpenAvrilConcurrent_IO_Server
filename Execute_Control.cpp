#include "pch.h"

// pointers.
	// classes.
	// registers.
	bool* OpenAvrilConcurrency::Execute_Control::_stat_REG_ptr_Flag_isSystemInitialised = NULL;
	std::array<bool, 4>* OpenAvrilConcurrency::Execute_Control::_stat_REG_ptr_Flag_array_ThreadInitialised = { NULL };//NUMBER OF THREADS

// public.
	// constructor.
	OpenAvrilConcurrency::Execute_Control::Execute_Control()
	{
		std::cout << "entered CONSTRUCTOR of Execute_Control()." << std::endl;
		bool* newDEFAULT_Bool = new bool(true);
		stat_REG_create_Flag_is_SystemInitialised(newDEFAULT_Bool);
		stat_REG_create_Array_Of_Flag_ThreadInitialised(newDEFAULT_Bool);
		delete newDEFAULT_Bool;
		std::cout << "exiting CONSTRUCTOR of Execute_Control()." << std::endl;
	}

	// destructor.
	OpenAvrilConcurrency::Execute_Control::~Execute_Control()
	{
		delete _stat_REG_ptr_Flag_isSystemInitialised;
		delete _stat_REG_ptr_Flag_array_ThreadInitialised;
	}

	// dynamic.
		// create.
		// get.
	bool OpenAvrilConcurrency::Execute_Control::app_REG_get_Flag_is_SystemInitialised()
	{
		return stat_REG_get_ptr_Flag_is_SystemInitialised();
	}
	bool OpenAvrilConcurrency::Execute_Control::app_REG_get_Item_On_List_Of_Flag_ThreadInitialised(uint8_t threadID)
	{
		auto temp = stat_get_ptr_list_Of_flag_ThreadInitialised()->begin();
		std::advance(temp, threadID);
		return *temp;
	}
		// set.
	void OpenAvrilConcurrency::Execute_Control::dyn_REG_set_ConditionCode_Of_Thread(uint8_t threadID)
	{
		stat_REG_set_Item_On_List_Of_Flag_ThreadInitialised(threadID, new bool(true));
	}
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
			// get.
			// set.
		// registers.
			// create.
	void OpenAvrilConcurrency::Execute_Control::stat_REG_create_Flag_is_SystemInitialised(bool newDEFAULT_Bool)
	{
		_stat_REG_ptr_Flag_isSystemInitialised = new bool(NULL);
		while (stat_REG_get_ptr_Flag_is_SystemInitialised() == NULL) {}
		*_stat_REG_ptr_Flag_isSystemInitialised = newDEFAULT_Bool;
	}
	void OpenAvrilConcurrency::Execute_Control::stat_REG_create_Array_Of_Flag_ThreadInitialised(bool newDEFAULT_Bool)
	{
		_stat_REG_ptr_Flag_array_ThreadInitialised = new std::array<bool, 4>();//NUMBER OF THREADS
		while (stat_get_ptr_list_Of_flag_ThreadInitialised() == NULL) {}
		*_stat_REG_ptr_Flag_array_ThreadInitialised = { newDEFAULT_Bool, newDEFAULT_Bool, newDEFAULT_Bool, newDEFAULT_Bool };//NUMBER OF THREADS
	}
			// get.
	bool* OpenAvrilConcurrency::Execute_Control::stat_REG_get_ptr_Flag_is_SystemInitialised()
	{
		bool temp = false;
		for (uint8_t threadID = 0; threadID < sizeof(*stat_get_ptr_list_Of_flag_ThreadInitialised()); threadID++)
		{
			auto temp = stat_get_ptr_list_Of_flag_ThreadInitialised()->begin();
			std::advance(temp, threadID);
			if (*temp == true) *temp = true;
		}
		stat_REG_set_Flag_is_SystemInitialised(temp);
		return stat_REG_get_ptr_Flag_is_SystemInitialised();
	}
	std::array<bool, 4>* OpenAvrilConcurrency::Execute_Control::stat_get_ptr_list_Of_flag_ThreadInitialised()
	{
		return _stat_REG_ptr_Flag_array_ThreadInitialised;
	}
			// set.
	void OpenAvrilConcurrency::Execute_Control::stat_REG_set_Flag_is_SystemInitialised(bool newFlag)
	{
		*_stat_REG_ptr_Flag_isSystemInitialised = newFlag;
	}
	void OpenAvrilConcurrency::Execute_Control::stat_REG_set_Item_On_List_Of_Flag_ThreadInitialised(uint8_t threadID, bool newFlag)
	{
		auto temp = stat_get_ptr_list_Of_flag_ThreadInitialised()->begin();
		std::advance(temp, threadID);
		*temp = newFlag;
	}