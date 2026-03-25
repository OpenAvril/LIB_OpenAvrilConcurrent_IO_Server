#include "pch.h"
	float* OpenAvrilConcurrency::Praise0_Input::_stat_REG_ptr_input_Value_A;
	float* OpenAvrilConcurrency::Praise0_Input::_stat_REG_ptr_input_Value_B;
// public.
	OpenAvrilConcurrency::Praise0_Input::Praise0_Input()
{
	std::cout << "entered CONSTRUCTOR of Praise0_Input()." << std::endl;
	stat_CLASS_boot0_DECLAIRE_Praise0_Input();
	stat_CLASS_boot1_DEFINE_Praise0_Input();
	stat_CLASS_boot3_INITIALISE_Praise0_Input();
	stat_REG_boot0_DECLAIRE_Praise0_Input();
	std::cout << "exiting CONSTRUCTOR of Praise0_Input()." << std::endl;
}
	OpenAvrilConcurrency::Praise0_Input::~Praise0_Input()
	{
		delete _stat_REG_ptr_input_Value_A;
		delete _stat_REG_ptr_input_Value_B;
	}
	void OpenAvrilConcurrency::Praise0_Input::dyn_REG_boot1_DEFINE_Praise0_Input(Framework_Server* obj)
	{
		std::cout << "entered dyn_REG_boot1_DEFINE_Praise0_Input()" << std::endl;
		stat_REG_boot1_DEFINE_Input_Value_A();
		stat_REG_boot1_DEFINE_Input_Value_B();
		std::cout << "exiting dyn_REG_boot1_DEFINE_Praise0_Input()" << std::endl;
	}
	void OpenAvrilConcurrency::Praise0_Input::dyn_REG_boot2_SUBSTANTIATE_Praise0_Input(Framework_Server* obj)
	{
		std::cout << "entered dyn_REG_boot2_SUBSTANTIATE_Praise0_Input()" << std::endl;
		stat_REG_boot2_SUBSTANTIATE_Iinput_Value_A();
		stat_REG_boot2_SUBSTANTIATE_Input_Value_B();
		std::cout << "exiting dyn_REG_boot2_SUBSTANTIATE_Praise0_Input()" << std::endl;
	}
	void OpenAvrilConcurrency::Praise0_Input::dyn_REG_boot3_INITIALISE_Praise0_Input(Framework_Server* obj)
	{
		std::cout << "entered dyn_REG_boot3_INITIALISE_Praise0_Input()" << std::endl;
		stat_REG_boot3_INITIALISE_Input_Value_A();
		stat_REG_boot3_INITIALISE_input_Value_B();
		std::cout << "exiting dyn_REG_boot3_INITIALISE_Praise0_Input()" << std::endl;
	}
	void OpenAvrilConcurrency::Praise0_Input::dyn_REG_boot4_INSTANTIATE_Praise0_Input(Framework_Server* obj)
	{
		std::cout << "entered dyn_REG_boot4_INSTANTIATE_Praise0_Input()" << std::endl;

		std::cout << "exiting dyn_REG_boot4_INSTANTIATE_Praise0_Input()" << std::endl;
	}
	float OpenAvrilConcurrency::Praise0_Input::dyn_REG_get_Item_input_Value_A()
	{
		return *stat_REG_get_ptr_Input_Value_A();
	}
	float OpenAvrilConcurrency::Praise0_Input::dyn_REG_get_Item_input_Value_B()
	{
		return *stat_REG_get_ptr_Input_Value_B();
	}
	void OpenAvrilConcurrency::Praise0_Input::dyn_REG_set_Item_input_Value_A(float newValue)
	{
		stat_REG_dyn_REG_set_Item_input_Value_A(newValue);
	}
	void OpenAvrilConcurrency::Praise0_Input::dyn_REG_set_Item_input_Value_B(float newValue)
	{
		stat_REG_dyn_REG_set_Item_input_Value_B(newValue);
	}
	void OpenAvrilConcurrency::Praise0_Input::stat_CLASS_boot0_DECLAIRE_Praise0_Input()
	{
		std::cout << "entered stat_CLASS_boot0_DECLAIRE_Praise0_Input()" << std::endl;

		std::cout << "exiting stat_CLASS_boot0_DECLAIRE_Praise0_Input()" << std::endl;
	}
	void OpenAvrilConcurrency::Praise0_Input::stat_CLASS_boot1_DEFINE_Praise0_Input()
	{
		std::cout << "entered stat_CLASS_boot1_DEFINE_Praise0_Input()" << std::endl;

		std::cout << "exiting stat_CLASS_boot1_DEFINE_Praise0_Input()" << std::endl;
	}
	void OpenAvrilConcurrency::Praise0_Input::stat_CLASS_boot3_INITIALISE_Praise0_Input()
	{
		std::cout << "entered stat_CLASS_boot3_INITIALISE_Praise0_Input()" << std::endl;

		std::cout << "exiting stat_CLASS_boot3_INITIALISE_Praise0_Input()" << std::endl;
	}
	void OpenAvrilConcurrency::Praise0_Input::stat_CLASS_boot4_INSTANTIATE_Praise0_Input()
	{
		std::cout << "entered stat_CLASS_boot4_INSTANTIATE_Praise0_Input()" << std::endl;

		std::cout << "exiting stat_CLASS_boot4_INSTANTIATE_Praise0_Input()" << std::endl;
	}
	void OpenAvrilConcurrency::Praise0_Input::stat_REG_boot0_DECLAIRE_Praise0_Input()
	{
		std::cout << "entered stat_REG_boot0_DECLAIRE_Praise0_Input()" << std::endl;

		std::cout << "exiting stat_REG_boot0_DECLAIRE_Praise0_Input()" << std::endl;
	}
// private.
	void OpenAvrilConcurrency::Praise0_Input::stat_REG_boot1_DEFINE_Input_Value_A()
	{
		_stat_REG_ptr_input_Value_A = NULL;
	}
	void OpenAvrilConcurrency::Praise0_Input::stat_REG_boot1_DEFINE_Input_Value_B()
	{
		_stat_REG_ptr_input_Value_B = NULL;
	}
	void OpenAvrilConcurrency::Praise0_Input::stat_REG_boot2_SUBSTANTIATE_Iinput_Value_A()
	{
		_stat_REG_ptr_input_Value_A = new float();
		*_stat_REG_ptr_input_Value_A = (float)(FLT_MAX);
	}
	void OpenAvrilConcurrency::Praise0_Input::stat_REG_boot2_SUBSTANTIATE_Input_Value_B()
	{
		_stat_REG_ptr_input_Value_B = new float();
		*_stat_REG_ptr_input_Value_B = (float)(FLT_MAX);
	}
	void OpenAvrilConcurrency::Praise0_Input::stat_REG_boot3_INITIALISE_Input_Value_A()
	{
		*_stat_REG_ptr_input_Value_A = (float)(0.0);
	}
	void OpenAvrilConcurrency::Praise0_Input::stat_REG_boot3_INITIALISE_input_Value_B()
	{
		*_stat_REG_ptr_input_Value_B = (float)(0.0);
	}
	float* OpenAvrilConcurrency::Praise0_Input::stat_REG_get_ptr_Input_Value_A()
	{
		return _stat_REG_ptr_input_Value_A;
	}
	float* OpenAvrilConcurrency::Praise0_Input::stat_REG_get_ptr_Input_Value_B()
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