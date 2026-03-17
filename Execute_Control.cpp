#include "pch.h"

// pointers.
	// classes.
	// registers.
	bool* OpenAvrilConcurrency::Execute_Control::_REG_ptr_flag_is_SystemInitialised = NULL;
	std::array<bool, 4>* OpenAvrilConcurrency::Execute_Control::_REG_ptr_flag_array_ThreadInitialised = { NULL };//NUMBER OF THREADS

// public.
	// constructor.

	// destructor.

	// dynamic.
		// create.
		// get.
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
			// get.
			// set.
		// registers.
			// create.
			// get.
			// set.


// constructor.
	OpenAvrilConcurrency::Execute_Control::Execute_Control(uint8_t number_Implemented_Cores)
	{
		bool* newDEFAULT_Bool = new bool(true);
		while (newDEFAULT_Bool == NULL) {}
		stat_create_flag_is_SystemInitialised(newDEFAULT_Bool);
		stat_create_list_Of_flag_ThreadInitialised(newDEFAULT_Bool);
		delete newDEFAULT_Bool;
	}

// destructor.
	OpenAvrilConcurrency::Execute_Control::~Execute_Control()
	{
		delete _REG_ptr_flag_is_SystemInitialised;
	}

// public.
	// dynamic.
		// get.
	bool OpenAvrilConcurrency::Execute_Control::get_flag_is_SystemInitialised()
	{
		return stat_get_ptr_flag_is_SystemInitialised();
	}
	bool OpenAvrilConcurrency::Execute_Control::get_Item_On_list_Of_flag_ThreadInitialised(uint8_t threadID)
	{
		auto temp = stat_get_ptr_list_Of_flag_ThreadInitialised()->begin();
		std::advance(temp, threadID);
		return *temp;
	}
		// set.
	void OpenAvrilConcurrency::Execute_Control::set_ConditionCode_Of_Thread(uint8_t threadID)
	{
		stat_set_Item_On_list_Of_flag_ThreadInitialised(threadID, new bool(true));
	}

// private.
	// dynamic.
		// get.
		// set.
	// static.
	void OpenAvrilConcurrency::Execute_Control::stat_create_flag_is_SystemInitialised(bool newDEFAULT_Bool)
	{
		bool* _REG_ptr_flag_is_SystemInitialised = new bool(true);
		while (stat_get_ptr_list_Of_flag_ThreadInitialised() == NULL) { }
	}
	void OpenAvrilConcurrency::Execute_Control::stat_create_list_Of_flag_ThreadInitialised(bool newDEFAULT_Bool)
	{
		std::array<bool, 4>* _REG_ptr_list_Of_flag_ThreadInitialised = new std::array<bool, 4>();//NUMBER OF THREADS
		while (stat_get_ptr_list_Of_flag_ThreadInitialised() == NULL) {}
		*_REG_ptr_list_Of_flag_ThreadInitialised = { newDEFAULT_Bool, newDEFAULT_Bool, newDEFAULT_Bool, newDEFAULT_Bool };//NUMBER OF THREADS
	}
		// get.
	bool OpenAvrilConcurrency::Execute_Control::stat_get_ptr_flag_is_SystemInitialised()
	{
		bool temp = false;
		for (uint8_t threadID = 0; threadID < sizeof(*stat_get_ptr_list_Of_flag_ThreadInitialised()); threadID++)
		{
			if (stat_get_Item_On_ptr_list_Of_flag_ThreadInitialised(threadID) == true) temp = true;
		}
		stat_set_flag_is_SystemInitialised(temp);
		return _REG_ptr_flag_is_SystemInitialised;
	}
	bool OpenAvrilConcurrency::Execute_Control::stat_get_Item_On_ptr_list_Of_flag_ThreadInitialised(uint8_t threadID)
	{
		auto temp = stat_get_ptr_list_Of_flag_ThreadInitialised()->begin();
		std::advance(temp, threadID);
		return *temp;
	}
	std::array<bool, 4>* OpenAvrilConcurrency::Execute_Control::stat_get_ptr_list_Of_flag_ThreadInitialised()
	{
		return _REG_ptr_flag_array_ThreadInitialised;
	}
		// set.
	void OpenAvrilConcurrency::Execute_Control::stat_set_flag_is_SystemInitialised(bool newFlag)
	{
		*_REG_ptr_flag_is_SystemInitialised = newFlag;
	}
	void OpenAvrilConcurrency::Execute_Control::stat_set_Item_On_list_Of_flag_ThreadInitialised(uint8_t threadID, bool newFlag)
	{
		auto temp = stat_get_ptr_list_Of_flag_ThreadInitialised()->begin();
		std::advance(temp, threadID);
		*temp = newFlag;
	}