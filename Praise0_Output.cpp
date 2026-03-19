#include "pch.h"
	double* OpenAvrilConcurrency::Praise0_Output::_REG_ptr_output_Value = NULL;
	OpenAvrilConcurrency::Praise0_Output::Praise0_Output()
	{
		std::cout << "entered CONSTRUCTOR of Praise0_Output()." << std::endl;
		stat_REG_create_ptr_output_Value();
		std::cout << "exiting CONSTRUCTOR of Praise0_Output()." << std::endl;
	}
	OpenAvrilConcurrency::Praise0_Output::~Praise0_Output()
	{

	}
	double OpenAvrilConcurrency::Praise0_Output::dyn_REG_get_output_Value()
	{
		return *stat_REG_get_ptr_output_Value();
	}
	void OpenAvrilConcurrency::Praise0_Output::dyn_REG_set_output_Value(double newValue)
	{
		stat_REG_set_Item_output_Value(newValue);
	}
	void OpenAvrilConcurrency::Praise0_Output::stat_REG_create_ptr_output_Value()
	{
		_REG_ptr_output_Value = new double(NULL);
		while (stat_REG_get_ptr_output_Value() == NULL) {}
		stat_REG_set_Item_output_Value((double)(0.0));
	}
	double* OpenAvrilConcurrency::Praise0_Output::stat_REG_get_ptr_output_Value()
	{
		return _REG_ptr_output_Value;
	}
	void OpenAvrilConcurrency::Praise0_Output::stat_REG_set_Item_output_Value(double newValue)
	{
		*_REG_ptr_output_Value = newValue;
	}