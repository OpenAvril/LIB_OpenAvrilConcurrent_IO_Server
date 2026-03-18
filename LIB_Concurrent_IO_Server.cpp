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
	void OpenAvrilConcurrency::CLIBConcurrentServerIO::app_FUNCT_Flip_Input_DoubleBuffer(void* obj)
	{
		OpenAvrilConcurrency::Global::stat_CONVERT_ObjPtr_to_Class(obj)->dyn_CLASS_get_ptr_Server()->dyn_CLASS_get_ptr_Data()->dyn_CLASS_get_ptr_Data_Control()->app_FUNCT_Flip_Input_DoubleBuffer(OpenAvrilConcurrency::Global::stat_CONVERT_ObjPtr_to_Class(obj)->dyn_CLASS_get_ptr_Server()->dyn_CLASS_get_ptr_Data());
	}
	void* OpenAvrilConcurrency::CLIBConcurrentServerIO::app_generate_Program()
	{
		std::cout << "entered app_generate_Program()." << std::endl;
		_CLASS_ptr_Framework_Server = new class OpenAvrilConcurrency::Framework_Server();
		while (stat_CLASS_get_ptr_Framework_Server() == NULL) {}
		stat_CLASS_get_ptr_Framework_Server()->app_initialise_Program(stat_CLASS_get_ptr_Framework_Server());
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
		return (void*)stat_CLASS_get_ptr_Framework_Server();
	}
	void OpenAvrilConcurrency::CLIBConcurrentServerIO::app_FUNCT_pop_From_Stack_Of_Output(void* obj)
	{
		OpenAvrilConcurrency::Global::stat_CONVERT_ObjPtr_to_Class(obj)->dyn_CLASS_get_ptr_Server()->dyn_CLASS_get_ptr_Data()->dyn_CLASS_get_ptr_Data_Control()->app_FUNCT_pop_From_Stack_Of_Output(OpenAvrilConcurrency::Global::stat_CONVERT_ObjPtr_to_Class(obj), OpenAvrilConcurrency::Global::stat_CONVERT_ObjPtr_to_Class(obj)->dyn_CLASS_get_ptr_Server()->dyn_CLASS_get_ptr_Data());
	}
	void OpenAvrilConcurrency::CLIBConcurrentServerIO::app_FUNCT_push_To_STACK_Of_Input(void* obj)
	{
		OpenAvrilConcurrency::Global::stat_CONVERT_ObjPtr_to_Class(obj)->dyn_CLASS_get_ptr_Server()->dyn_CLASS_get_ptr_Data()->dyn_CLASS_get_ptr_Data_Control()->app_FUNCT_push_To_STACK_Of_Input(OpenAvrilConcurrency::Global::stat_CONVERT_ObjPtr_to_Class(obj), OpenAvrilConcurrency::Global::stat_CONVERT_ObjPtr_to_Class(obj)->dyn_CLASS_get_ptr_Server()->dyn_CLASS_get_ptr_Data());
	}
	void OpenAvrilConcurrency::CLIBConcurrentServerIO::app_select_set_Intput_Subset(void* obj, unsigned char* bytes)
	{
		OpenAvrilConcurrency::Global::stat_CONVERT_ObjPtr_to_Class(obj)->dyn_CLASS_get_ptr_Server()->dyn_CLASS_get_ptr_Data()->dyn_REG_get_ptr_Item_array_Of_doubleBuffer_Input_WRITE(OpenAvrilConcurrency::Global::stat_CONVERT_ObjPtr_to_Class(obj))->get_CLASS_ptr_Input_Control()->select_And_Set_Input_Subset(OpenAvrilConcurrency::Global::stat_CONVERT_ObjPtr_to_Class(obj), OpenAvrilConcurrency::Global::stat_CONVERT_ByteArray_to_uint8_t(bytes));
	}
	void OpenAvrilConcurrency::CLIBConcurrentServerIO::app_terminate_Program(void* obj)
	{
		delete _CLASS_ptr_Framework_Server;
	}
		// create.
		// get.
	bool OpenAvrilConcurrency::CLIBConcurrentServerIO::dyn_REG_get_flag_isStackLoaded_Server_InputAction(void* obj)
	{
		return OpenAvrilConcurrency::Global::stat_CONVERT_ObjPtr_to_Class(obj)->dyn_CLASS_get_ptr_Server()->dyn_CLASS_get_ptr_Data()->dyn_CLASS_get_ptr_Data_Control()->dyn_REG_get_Item_flag_isLoaded_Stack_InputAction();
	}
	bool OpenAvrilConcurrency::CLIBConcurrentServerIO::dyn_REG_get_flag_isLoaded_Stack_OutputSend(void* obj)
	{
		return OpenAvrilConcurrency::Global::stat_CONVERT_ObjPtr_to_Class(obj)->dyn_CLASS_get_ptr_Server()->dyn_CLASS_get_ptr_Data()->dyn_CLASS_get_ptr_Data_Control()->dyn_REG_get_Item_flag_isLoaded_Stack_OutputSend();
	}
	bool OpenAvrilConcurrency::CLIBConcurrentServerIO::dyn_REG_get_flag_IsInitialised_OpenAvrilConcurrencyConcurrency(void* obj)
	{
		return OpenAvrilConcurrency::Global::stat_CONVERT_ObjPtr_to_Class(obj)->dyn_CLASS_get_ptr_Server()->dyn_CLASS_get_ptr_Execute()->dyn_CLASS_get_ptr_Execute_Control()->get_flag_is_SystemInitialised();
	}
	unsigned char* OpenAvrilConcurrency::CLIBConcurrentServerIO::dyn_REG_get_PraiseEventId(void* obj)
	{
		return OpenAvrilConcurrency::Global::stat_CONVERT_uint8_t_to_ByteArray(OpenAvrilConcurrency::Global::stat_CONVERT_ObjPtr_to_Class(obj)->dyn_CLASS_get_ptr_Server()->dyn_CLASS_get_ptr_Data()->dyn_REG_get_ptr_Item_array_Of_doubleBuffer_Output_WRITE(OpenAvrilConcurrency::Global::stat_CONVERT_ObjPtr_to_Class(obj))->get_REG_out_praiseEventId());
	}
	unsigned char* OpenAvrilConcurrency::CLIBConcurrentServerIO::dyn_REG_get_ptr_output_Value(void* obj)
	{
		return nullptr;
	}
	void* OpenAvrilConcurrency::CLIBConcurrentServerIO::dyn_PGM_get_program_WriteEnableStack_ServerInputAction(void* obj)
	{
		return OpenAvrilConcurrency::Global::stat_CONVERT_ObjPtr_to_Class(obj)->dyn_CLASS_get_ptr_Server()->dyn_CLASS_get_ptr_Execute()->get_program_WriteEnable_ServerInputAction();
	}
	void* OpenAvrilConcurrency::CLIBConcurrentServerIO::dyn_PGM_get_program_WriteEnableStack_ServerOutputRecieve(void* obj)
	{
		return OpenAvrilConcurrency::Global::stat_CONVERT_ObjPtr_to_Class(obj)->dyn_CLASS_get_ptr_Server()->dyn_CLASS_get_ptr_Execute()->get_program_WriteEnable_ServerOutputRecieve();
	}
		// set.
	void OpenAvrilConcurrency::CLIBConcurrentServerIO::dyn_REG_set_Item_input_Value_A(void* obj, unsigned char* bytes)
	{
		OpenAvrilConcurrency::Praise0_Input* objPraise0_input = (OpenAvrilConcurrency::Praise0_Input*)OpenAvrilConcurrency::Global::stat_CONVERT_ObjPtr_to_Class(obj)->dyn_CLASS_get_ptr_Server()->dyn_CLASS_get_ptr_Data()->dyn_REG_get_ptr_Item_array_Of_doubleBuffer_Input_WRITE(OpenAvrilConcurrency::Global::stat_CONVERT_ObjPtr_to_Class(obj))->get_REG_ptr_Item_On_List_Of_PraiseInputSubset(0);
		objPraise0_input->dyn_REG_set_Item_input_Value_A(OpenAvrilConcurrency::Global::stat_CONVERT_ByteArray_to_Float(bytes));
	}
	void OpenAvrilConcurrency::CLIBConcurrentServerIO::dyn_REG_set_Item_input_Value_B(void* obj, unsigned char* bytes)
	{
		OpenAvrilConcurrency::Praise0_Input* objPraise0_input = (OpenAvrilConcurrency::Praise0_Input*)OpenAvrilConcurrency::Global::stat_CONVERT_ObjPtr_to_Class(obj)->dyn_CLASS_get_ptr_Server()->dyn_CLASS_get_ptr_Data()->dyn_REG_get_ptr_Item_array_Of_doubleBuffer_Input_WRITE(OpenAvrilConcurrency::Global::stat_CONVERT_ObjPtr_to_Class(obj))->get_REG_ptr_Item_On_List_Of_PraiseInputSubset(0);
		objPraise0_input->dyn_REG_set_Item_input_Value_B(OpenAvrilConcurrency::Global::stat_CONVERT_ByteArray_to_Float(bytes));
	}
	void OpenAvrilConcurrency::CLIBConcurrentServerIO::dyn_REG_set_PraiseEventId(void* obj, unsigned char* bytes)
	{
		OpenAvrilConcurrency::Global::stat_CONVERT_ObjPtr_to_Class(obj)->dyn_CLASS_get_ptr_Server()->dyn_CLASS_get_ptr_Data()->dyn_REG_get_ptr_Item_array_Of_doubleBuffer_Input_WRITE(OpenAvrilConcurrency::Global::stat_CONVERT_ObjPtr_to_Class(obj))->dyn_REG_set_ptr_in_praiseEventId(OpenAvrilConcurrency::Global::stat_CONVERT_ByteArray_to_uint8_t(bytes));
	}
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
	void* OpenAvrilConcurrency::CLIBConcurrentServerIO::stat_CLASS_get_ptr_Framework_Server()
	{
		return _CLASS_ptr_Framework_Server;
	}
			// set.
		// registers.
			// create.
			// get.
			// set.