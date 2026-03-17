// LIB_Concurrent_IO_Server.cpp : Defines the exported functions for the DLL.
//
#include "pch.h"
#include "framework.h"
#include "LIB_Concurrent_IO_Server.h"

// pointers.
	// programs.
	// classes.
	static void* _CLASS_ptr_Framework_Server = NULL;

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

// destructor.

// public.
	// dynamic.
	void* OpenAvrilConcurrency::CLIBConcurrentServerIO::app_generate_Program()
	{
		std::cout << "entered app_generate_Program()." << std::endl;
		_CLASS_ptr_Framework_Server = new class OpenAvrilConcurrency::Framework_Server();
		while (stat_CLASS_get_ptr_Framework_Server() == NULL) {}
		stat_CLASS_get_ptr_Framework_Server()->initialise_Program(stat_CLASS_get_ptr_Framework_Server());
		std::cout << "        ,     \\      /      ," << std::endl;
		std::cout << "       / \\    )\\ __ /(     / \\ " << std::endl;
		std::cout << "      /   \\   (_\\  /_)    /   \\ " << std::endl;
		std::cout << "____ / ____\\__ \\@  @/ ___/_____\\_____" << std::endl;
		std::cout << "|              |\\../|               |" << std::endl;
		std::cout << "|               \\VV/                |" << std::endl;
		std::cout << "|        MIT Concurrent Server       |" << std::endl;
		std::cout << "|___________________________________|" << std::endl;
		std::cout << "|    / \\ /        \\\\        \\ /\\    |" << std::endl;
		std::cout << "|  /    V          ))        V   \\  |" << std::endl;
		std::cout << "|/                //               \\| " << std::endl;
		std::cout << "`                 V                 '" << std::endl;
		return (void*)stat_CLASS_get_ptr_Framework_Server();//ToDO: uncomment for C#.
		//return stat_CLASS_get_ptr_Framework_Server();//ToDO: uncomment for C++.
	}
	void OpenAvrilConcurrency::CLIBConcurrentServerIO::app_flip_Input_DoubleBuffer(void* obj)
	{
		OpenAvrilConcurrency::Global::stat_CONVERT_ObjPtr_to_Class(obj)->get_CLASS_ptr_Server()->get_CLASS_ptr_Data()->get_CLASS_ptr_Data_Control()->app_flip_Input_DoubleBuffer(OpenAvrilConcurrency::Global::stat_CONVERT_ObjPtr_to_Class(obj)->get_CLASS_ptr_Server()->get_CLASS_ptr_Data());
	}
	void OpenAvrilConcurrency::CLIBConcurrentServerIO::app_pop_From_Stack_Of_Output(void* obj)
	{
		OpenAvrilConcurrency::Global::stat_CONVERT_ObjPtr_to_Class(obj)->get_CLASS_ptr_Server()->get_CLASS_ptr_Data()->get_CLASS_ptr_Data_Control()->app_pop_From_Stack_Of_Output(OpenAvrilConcurrency::Global::stat_CONVERT_ObjPtr_to_Class(obj), OpenAvrilConcurrency::Global::stat_CONVERT_ObjPtr_to_Class(obj)->get_CLASS_ptr_Server()->get_CLASS_ptr_Data());
	}
	void OpenAvrilConcurrency::CLIBConcurrentServerIO::app_push_To_Stack_Of_Input(void* obj)
	{
		OpenAvrilConcurrency::Global::stat_CONVERT_ObjPtr_to_Class(obj)->get_CLASS_ptr_Server()->get_CLASS_ptr_Data()->get_CLASS_ptr_Data_Control()->app_push_To_Stack_Of_Input(OpenAvrilConcurrency::Global::stat_CONVERT_ObjPtr_to_Class(obj), OpenAvrilConcurrency::Global::stat_CONVERT_ObjPtr_to_Class(obj)->get_CLASS_ptr_Server()->get_CLASS_ptr_Data());
	}
	void OpenAvrilConcurrency::CLIBConcurrentServerIO::app_select_set_Intput_Subset(void* obj, unsigned char* bytes)
	{
		OpenAvrilConcurrency::Global::stat_CONVERT_ObjPtr_to_Class(obj)->get_CLASS_ptr_Server()->get_CLASS_ptr_Data()->get_REG_ptr_Item_array_Of_doubleBuffer_Input_WRITE(OpenAvrilConcurrency::Global::stat_CONVERT_ObjPtr_to_Class(obj))->get_CLASS_ptr_Input_Control()->select_And_Set_Input_Subset(OpenAvrilConcurrency::Global::stat_CONVERT_ObjPtr_to_Class(obj), OpenAvrilConcurrency::Global::stat_CONVERT_ByteArray_to_uint8_t(bytes));
	}
		// get.
	bool OpenAvrilConcurrency::CLIBConcurrentServerIO::get_flag_isStackLoaded_Server_InputAction(void* obj)
	{
		return OpenAvrilConcurrency::Global::stat_CONVERT_ObjPtr_to_Class(obj)->get_CLASS_ptr_Server()->get_CLASS_ptr_Data()->get_CLASS_ptr_Data_Control()->get_REG_Item_flag_isLoaded_Stack_InputAction();
	}
	bool OpenAvrilConcurrency::CLIBConcurrentServerIO::get_flag_isLoaded_Stack_OutputSend(void* obj)
	{
		return OpenAvrilConcurrency::Global::stat_CONVERT_ObjPtr_to_Class(obj)->get_CLASS_ptr_Server()->get_CLASS_ptr_Data()->get_CLASS_ptr_Data_Control()->get_REG_Item_flag_isLoaded_Stack_OutputSend();
	}
	bool OpenAvrilConcurrency::CLIBConcurrentServerIO::get_flag_IsInitialised_OpenAvrilConcurrencyConcurrency(void* obj)
	{
		return OpenAvrilConcurrency::Global::stat_CONVERT_ObjPtr_to_Class(obj)->get_CLASS_ptr_Server()->get_CLASS_ptr_Execute()->get_CLASS_ptr_Execute_Control()->get_flag_is_SystemInitialised();
	}
	void* OpenAvrilConcurrency::CLIBConcurrentServerIO::get_program_WriteEnableStack_ServerInputAction(void* obj)
	{
		return OpenAvrilConcurrency::Global::stat_CONVERT_ObjPtr_to_Class(obj)->get_CLASS_ptr_Server()->get_CLASS_ptr_Execute()->get_program_WriteEnable_ServerInputAction();
	}
	void* OpenAvrilConcurrency::CLIBConcurrentServerIO::get_program_WriteEnableStack_ServerOutputRecieve(void* obj)	
	{
		return OpenAvrilConcurrency::Global::stat_CONVERT_ObjPtr_to_Class(obj)->get_CLASS_ptr_Server()->get_CLASS_ptr_Execute()->get_program_WriteEnable_ServerOutputRecieve();
	}
		// set.
// Praise Event Id
		// get.
	unsigned char* OpenAvrilConcurrency::CLIBConcurrentServerIO::get_PraiseEventId(void* obj)
	{
		return OpenAvrilConcurrency::Global::stat_CONVERT_uint8_t_to_ByteArray(OpenAvrilConcurrency::Global::stat_CONVERT_ObjPtr_to_Class(obj)->get_CLASS_ptr_Server()->get_CLASS_ptr_Data()->get_REG_ptr_Item_array_Of_doubleBuffer_Output_WRITE(OpenAvrilConcurrency::Global::stat_CONVERT_ObjPtr_to_Class(obj))->get_REG_out_praiseEventId());
	}
		// set.
	void OpenAvrilConcurrency::CLIBConcurrentServerIO::set_PraiseEventId(void* obj, unsigned char* bytes)
	{
		OpenAvrilConcurrency::Global::stat_CONVERT_ObjPtr_to_Class(obj)->get_CLASS_ptr_Server()->get_CLASS_ptr_Data()->get_REG_ptr_Item_array_Of_doubleBuffer_Input_WRITE(OpenAvrilConcurrency::Global::stat_CONVERT_ObjPtr_to_Class(obj))->dyn_REG_set_ptr_in_praiseEventId(OpenAvrilConcurrency::Global::stat_CONVERT_ByteArray_to_uint8_t(bytes));
	}
// Praise 0 Data
		// get.
	double OpenAvrilConcurrency::CLIBConcurrentServerIO::get_REG_ptr_output_Value(class Framework_Server* obj)
	{

	}
		// set.
	void OpenAvrilConcurrency::CLIBConcurrentServerIO::set_Item_input_Value_A(class Framework_Server* obj, double newValue)
	{
		OpenAvrilConcurrency::Praise0_Input* objPraise0_input = (OpenAvrilConcurrency::Praise0_Input*)obj->get_CLASS_ptr_Server()->get_CLASS_ptr_Data()->get_REG_ptr_Item_array_Of_doubleBuffer_Input_WRITE(OpenAvrilConcurrency::Global::stat_CONVERT_ObjPtr_to_Class(obj))->get_REG_ptr_Item_On_List_Of_PraiseInputSubset(0);
		objPraise0_input->set_Item_input_Value_A(newValue);
	}
	void OpenAvrilConcurrency::CLIBConcurrentServerIO::set_Item_input_Value_B(class Framework_Server* obj, double newValue)
	{
		OpenAvrilConcurrency::Praise0_Input* objPraise0_input = (OpenAvrilConcurrency::Praise0_Input*)obj->get_CLASS_ptr_Server()->get_CLASS_ptr_Data()->get_REG_ptr_Item_array_Of_doubleBuffer_Input_WRITE(OpenAvrilConcurrency::Global::stat_CONVERT_ObjPtr_to_Class(obj))->get_REG_ptr_Item_On_List_Of_PraiseInputSubset(0);
		objPraise0_input->set_Item_input_Value_B(newValue);
	}

// private.
	// dynamic.
		// get.
		// set.
	// static.
		// classes.
			// create.
			// get.
	void* OpenAvrilConcurrency::CLIBConcurrentServerIO::stat_CLASS_get_ptr_Framework_Server()
	{
		return _CLASS_ptr_Framework_Server;
	}
			// set.
		// registers.
			// create.
			// get.
			// set.