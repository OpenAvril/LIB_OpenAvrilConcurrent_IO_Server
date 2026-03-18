#include "pch.h"
	double* OpenAvrilConcurrency::Praise0_Output::_REG_ptr_output_Value = NULL;
	OpenAvrilConcurrency::Praise0_Output::Praise0_Output()
	{
		stat_create_REG_ptr_output_Value();
	}
	OpenAvrilConcurrency::Praise0_Output::~Praise0_Output()
	{

	}
	double OpenAvrilConcurrency::Praise0_Output::dyn_REG_get_ptr_output_Value()
	{
		return stat_dyn_REG_get_ptr_output_Value();
	}
	void OpenAvrilConcurrency::Praise0_Output::set_REG_ptr_output_Value(double newValue)
	{
		stat_set_REG_ptr_output_Value(newValue);
	}
	void OpenAvrilConcurrency::Praise0_Output::stat_create_REG_ptr_output_Value()
	{
		double* _REG_ptr_output_Value = new double(NULL);
		stat_set_REG_ptr_output_Value(0.0);
	}
	double OpenAvrilConcurrency::Praise0_Output::stat_dyn_REG_get_ptr_output_Value()
	{
		return *_REG_ptr_output_Value;
	}
	void OpenAvrilConcurrency::Praise0_Output::stat_set_REG_ptr_output_Value(double newValue)
	{
		*_REG_ptr_output_Value = newValue;
	}