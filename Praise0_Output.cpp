#include "pch.h"

// pointers.
	// classes.
	// registers.
	static double* _REG_ptr_output_Value = NULL;

// constructor.
	OpenAvrilConcurrency::Praise0_Output::Praise0_Output()
	{
		stat_create_REG_ptr_output_Value();
	}

// destructor.
	OpenAvrilConcurrency::Praise0_Output::~Praise0_Output()
	{

	}

// public.
	// dynamic.
		// get.
	double OpenAvrilConcurrency::Praise0_Output::get_REG_ptr_output_Value()
	{
		return stat_get_REG_ptr_output_Value();
	}
	void OpenAvrilConcurrency::Praise0_Output::set_REG_ptr_output_Value(double newValue)
	{
		stat_set_REG_ptr_output_Value(newValue);
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
	void OpenAvrilConcurrency::Praise0_Output::stat_create_REG_ptr_output_Value()
	{
		double* _REG_ptr_output_Value = new double(NULL);
		stat_set_REG_ptr_output_Value(0.0);
	}
		// get.
	double OpenAvrilConcurrency::Praise0_Output::stat_get_REG_ptr_output_Value()
	{
		return *_REG_ptr_output_Value;
	}
		// set.
	void OpenAvrilConcurrency::Praise0_Output::stat_set_REG_ptr_output_Value(double newValue)
	{
		*_REG_ptr_output_Value = newValue;
	}