#include "pch.h"
float* OpenAvrilConcurrency::Praise0_Input::_stat_REG_ptr_input_Value_A = NULL;
float* OpenAvrilConcurrency::Praise0_Input::_stat_REG_ptr_input_Value_B = NULL;
OpenAvrilConcurrency::Praise0_Input::Praise0_Input()
{
	std::cout << "entered CONSTRUCTOR of Praise0_Input()." << std::endl;

	std::cout << "exiting CONSTRUCTOR of Praise0_Input()." << std::endl;
	float* newDEFAULT_Float = new float(DBL_MAX);
	while(newDEFAULT_Float == NULL) { }
	stat_REG_create_ptr_input_Value_A(newDEFAULT_Float);
	stat_REG_create_ptr_input_Value_B(newDEFAULT_Float);
	delete newDEFAULT_Float;
}
OpenAvrilConcurrency::Praise0_Input::~Praise0_Input()
{
	delete _stat_REG_ptr_input_Value_A;
	delete _stat_REG_ptr_input_Value_B;
}
float OpenAvrilConcurrency::Praise0_Input::get_Item_input_Value_A()
{
	return *stat_REG_get_Item_input_Value_A();
}
float OpenAvrilConcurrency::Praise0_Input::get_Item_input_Value_B()
{
	return *stat_REG_get_Item_input_Value_B();
}
void OpenAvrilConcurrency::Praise0_Input::dyn_REG_set_Item_input_Value_A(float newValue)
{
	stat_REG_dyn_REG_set_Item_input_Value_A(newValue);
}
void OpenAvrilConcurrency::Praise0_Input::dyn_REG_set_Item_input_Value_B(float newValue)
{
	stat_REG_dyn_REG_set_Item_input_Value_B(newValue);
}
void OpenAvrilConcurrency::Praise0_Input::stat_REG_create_ptr_input_Value_A(float* newDEFAULT_Float)
{
	_stat_REG_ptr_input_Value_A = new float(NULL);
	while (stat_REG_get_Item_input_Value_A() == NULL) {}
	stat_REG_dyn_REG_set_Item_input_Value_A(*newDEFAULT_Float);
}
void OpenAvrilConcurrency::Praise0_Input::stat_REG_create_ptr_input_Value_B(float* newDEFAULT_Float)
{
	_stat_REG_ptr_input_Value_B = new float(NULL);
	while (stat_REG_get_Item_input_Value_B() == NULL) {}
	stat_REG_dyn_REG_set_Item_input_Value_B(*newDEFAULT_Float);
}
float* OpenAvrilConcurrency::Praise0_Input::stat_REG_get_Item_input_Value_A()
{
	return _stat_REG_ptr_input_Value_A;
}
float* OpenAvrilConcurrency::Praise0_Input::stat_REG_get_Item_input_Value_B()
{
	return _stat_REG_ptr_input_Value_B;
}
void OpenAvrilConcurrency::Praise0_Input::stat_REG_dyn_REG_set_Item_input_Value_A(float newValue)
{
	*_stat_REG_ptr_input_Value_A = newValue;
}
void OpenAvrilConcurrency::Praise0_Input::stat_REG_dyn_REG_set_Item_input_Value_B(float newValue)
{
	*_stat_REG_ptr_input_Value_B = newValue;
}