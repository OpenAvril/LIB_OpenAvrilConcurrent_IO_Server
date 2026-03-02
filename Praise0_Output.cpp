#include "pch.h"

// pointers.
	// classes.
	// registers.
	static double* _ptr_output_Value = NULL;

// constructor.
	OpenAvrilConcurrency::Praise0_Output::Praise0_Output()
	{
		stat_create_ptr_output_Value();
	}

// destructor.
	OpenAvrilConcurrency::Praise0_Output::~Praise0_Output()
	{

	}

// public.
	// dynamic.
		// get.
	double OpenAvrilConcurrency::Praise0_Output::get_Item_output_Value()
	{
		return *stat_get_ptr_output_Value();
	}
	void OpenAvrilConcurrency::Praise0_Output::set_Item_output_Value(double* newValue)
	{
		stat_set_Item_output_Value(*newValue);
	}
		// set.
	// static.
		// get.
		// set.

// private.
	// dynamic.
		// get.
		// set.
	// static.
	void OpenAvrilConcurrency::Praise0_Output::stat_create_ptr_output_Value()
	{

	}
		// get.
	double* OpenAvrilConcurrency::Praise0_Output::stat_get_ptr_output_Value()
	{
		return _ptr_output_Value;
	}
		// set.
	void OpenAvrilConcurrency::Praise0_Output::stat_set_Item_output_Value(double newValue)
	{
		*_ptr_output_Value = newValue;
	}