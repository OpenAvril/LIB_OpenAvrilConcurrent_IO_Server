#include "pch.h"
	double* OpenAvrilConcurrency::Praise0_Output::_REG_ptr_output_Value = NULL;
// public.
	OpenAvrilConcurrency::Praise0_Output::Praise0_Output()
	{
		std::cout << "entered CONSTRUCTOR of Praise0_Output()." << std::endl;
		stat_CLASS_boot0_DECLAIRE_Praise0_Output();
		stat_CLASS_boot1_DEFINE_Praise0_Output();
		stat_CLASS_boot3_INITIALISE_Praise0_Output();
		stat_REG_boot0_DECLAIRE_Praise0_Output();
		std::cout << "exiting CONSTRUCTOR of Praise0_Output()." << std::endl;
	}
	OpenAvrilConcurrency::Praise0_Output::~Praise0_Output()
	{
		delete _REG_ptr_output_Value;
	}
	void OpenAvrilConcurrency::Praise0_Output::dyn_REG_boot1_DEFINE_Praise0_Output(OpenAvrilConcurrency::Framework_Server* obj)
	{
		std::cout << "entered dyn_REG_boot1_DEFINE_Praise0_Output()" << std::endl;
		stat_REG_boot1_DEFINE_output_Value();
		std::cout << "exiting dyn_REG_boot1_DEFINE_Praise0_Output()" << std::endl;
	}
	void OpenAvrilConcurrency::Praise0_Output::dyn_REG_boot2_SUBSTANTIATE_Praise0_Output(OpenAvrilConcurrency::Framework_Server* obj)
	{
		std::cout << "entered dyn_REG_boot2_SUBSTANTIATE_Praise0_Output()" << std::endl;
		stat_REG_boot2_SUBSTANTIATE_output_Value();
		std::cout << "exiting dyn_REG_boot2_SUBSTANTIATE_Praise0_Output()" << std::endl;
	}
	void OpenAvrilConcurrency::Praise0_Output::dyn_REG_boot3_INITIALISE_Praise0_Output(OpenAvrilConcurrency::Framework_Server* obj)
	{
		std::cout << "entered dyn_REG_boot3_INITIALISE_Praise0_Output()" << std::endl;
		stat_REG_boot3_INITIALISE_output_Value();
		std::cout << "exiting dyn_REG_boot3_INITIALISE_Praise0_Output()" << std::endl;
	}
	void OpenAvrilConcurrency::Praise0_Output::dyn_REG_boot4_INSTANTIATE_Praise0_Output(OpenAvrilConcurrency::Framework_Server* obj)
	{
		std::cout << "entered dyn_REG_boot4_INSTANTIATE_Praise0_Output()" << std::endl;

		std::cout << "exiting dyn_REG_boot4_INSTANTIATE_Praise0_Output()" << std::endl;
	}
	double OpenAvrilConcurrency::Praise0_Output::dyn_REG_get_output_Value()
	{
		return *stat_REG_get_ptr_output_Value();
	}
	void OpenAvrilConcurrency::Praise0_Output::dyn_REG_set_output_Value(double newValue)
	{
		stat_REG_set_Item_output_Value(newValue);
	}
	void OpenAvrilConcurrency::Praise0_Output::stat_CLASS_boot0_DECLAIRE_Praise0_Output()
	{
		std::cout << "entered stat_CLASS_boot0_DECLAIRE_Praise0_Output()" << std::endl;

		std::cout << "exiting stat_CLASS_boot0_DECLAIRE_Praise0_Output()" << std::endl;
	}
	void OpenAvrilConcurrency::Praise0_Output::stat_CLASS_boot1_DEFINE_Praise0_Output()
	{
		std::cout << "entered stat_CLASS_boot1_DEFINE_Praise0_Output()" << std::endl;

		std::cout << "exiting stat_CLASS_boot1_DEFINE_Praise0_Output()" << std::endl;
	}
	void OpenAvrilConcurrency::Praise0_Output::stat_CLASS_boot3_INITIALISE_Praise0_Output()
	{
		std::cout << "entered stat_CLASS_boot3_INITIALISE_Praise0_Output()" << std::endl;

		std::cout << "exiting stat_CLASS_boot3_INITIALISE_Praise0_Output()" << std::endl;
	}
	void OpenAvrilConcurrency::Praise0_Output::stat_CLASS_boot4_INSTANTIATE_Praise0_Output()
	{
		std::cout << "entered stat_CLASS_boot4_INSTANTIATE_Praise0_Output()" << std::endl;

		std::cout << "exiting stat_CLASS_boot4_INSTANTIATE_Praise0_Output()" << std::endl;
	}
	void OpenAvrilConcurrency::Praise0_Output::stat_REG_boot0_DECLAIRE_Praise0_Output()
	{
		std::cout << "entered stat_REG_boot0_DECLAIRE_Praise0_Output()" << std::endl;

		std::cout << "exiting stat_REG_boot0_DECLAIRE_Praise0_Output()" << std::endl;
	}
// private.
	void OpenAvrilConcurrency::Praise0_Output::stat_REG_boot1_DEFINE_output_Value()
	{
		_REG_ptr_output_Value = NULL;
	}
	void OpenAvrilConcurrency::Praise0_Output::stat_REG_boot2_SUBSTANTIATE_output_Value()
	{
		_REG_ptr_output_Value = new double();
		*_REG_ptr_output_Value = (double)(DBL_MAX);
	}
	void OpenAvrilConcurrency::Praise0_Output::stat_REG_boot3_INITIALISE_output_Value()
	{
		*_REG_ptr_output_Value = (double)(0.0);
	}
	double* OpenAvrilConcurrency::Praise0_Output::stat_REG_get_ptr_output_Value()
	{
		return _REG_ptr_output_Value;
	}
	void OpenAvrilConcurrency::Praise0_Output::stat_REG_set_Item_output_Value(double newValue)
	{
		*_REG_ptr_output_Value = newValue;
	}