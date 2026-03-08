#include "pch.h"

// pointers.
	// classes.
	// registers.
	double* OpenAvrilConcurrency::Praise0_Input::_stat_REG_ptr_input_Value_A = NULL;
	double* OpenAvrilConcurrency::Praise0_Input::_stat_REG_ptr_input_Value_B = NULL;

// constructor.
	OpenAvrilConcurrency::Praise0_Input::Praise0_Input()
	{
		double* newDEFAULT_Double = new double(DBL_MAX);
		while(newDEFAULT_Double == NULL) { }
		stat_REG_create_ptr_input_Value_A(newDEFAULT_Double);
		stat_REG_create_ptr_input_Value_B(newDEFAULT_Double);
		delete newDEFAULT_Double;
	}

// destructor.
	OpenAvrilConcurrency::Praise0_Input::~Praise0_Input()
	{
		delete _stat_REG_ptr_input_Value_A;
		delete _stat_REG_ptr_input_Value_B;
	}

// public.
	// dynamic.
		// get.
	double OpenAvrilConcurrency::Praise0_Input::get_Item_input_Value_A()
	{
		return stat_REG_get_Item_input_Value_A();
	}
	double OpenAvrilConcurrency::Praise0_Input::get_Item_input_Value_B()
	{
		return stat_REG_get_Item_input_Value_B();
	}
		// set.
	void OpenAvrilConcurrency::Praise0_Input::set_Item_input_Value_A(double newValue)
	{
		stat_REG_set_Item_input_Value_A(newValue);
	}
	void OpenAvrilConcurrency::Praise0_Input::set_Item_input_Value_B(double newValue)
	{
		stat_REG_set_Item_input_Value_B(newValue);
	}

// private.
	// dynamic.
		// get.
		// set.
	// static.
	void OpenAvrilConcurrency::Praise0_Input::stat_REG_create_ptr_input_Value_A(double* newDEFAULT_Double)
	{
		double* _stat_REG_ptr_input_Value_A = new double(NULL);
		while (stat_REG_get_Item_input_Value_A() == NULL) {}
		stat_REG_set_Item_input_Value_A(*newDEFAULT_Double);
	}
	void OpenAvrilConcurrency::Praise0_Input::stat_REG_create_ptr_input_Value_B(double* newDEFAULT_Double)
	{
		double* _stat_REG_ptr_input_Value_B = new double(NULL);
		while (stat_REG_get_Item_input_Value_B() == NULL) {}
		stat_REG_set_Item_input_Value_B(*newDEFAULT_Double);
	}
		// get.
	double OpenAvrilConcurrency::Praise0_Input::stat_REG_get_Item_input_Value_A()
	{
		return *_stat_REG_ptr_input_Value_A;
	}
	double OpenAvrilConcurrency::Praise0_Input::stat_REG_get_Item_input_Value_B()
	{
		return *_stat_REG_ptr_input_Value_B;
	}
		// set.
	void OpenAvrilConcurrency::Praise0_Input::stat_REG_set_Item_input_Value_A(double newValue)
	{
		*_stat_REG_ptr_input_Value_A = newValue;
	}
	void OpenAvrilConcurrency::Praise0_Input::stat_REG_set_Item_input_Value_B(double newValue)
	{
		*_stat_REG_ptr_input_Value_B = newValue;
	}