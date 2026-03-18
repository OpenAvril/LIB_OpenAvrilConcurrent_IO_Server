#include "pch.h"
#include "framework.h"
#include "LIB_Concurrent_IO_Server.h"
static void* _CLASS_ptr_Framework_Server = NULL;
void OpenAvrilConcurrency::CLIBConcurrentServerIO::app_FUNCT_Flip_Input_DoubleBuffer(void* obj)
{
	OpenAvrilConcurrency::Global::stat_CONVERT_ObjPtr_to_Class(obj)->dyn_CLASS_get_ptr_Server()->dyn_CLASS_get_ptr_Data()->dyn_CLASS_get_ptr_Data_Control()->app_FUNCT_Flip_Input_DoubleBuffer();
}
void* OpenAvrilConcurrency::CLIBConcurrentServerIO::app_generate_Program()
{
	std::cout << "entered app_generate_Program()." << std::endl;
	_CLASS_ptr_Framework_Server = new class OpenAvrilConcurrency::Framework_Server();
	while (stat_CLASS_get_ptr_Framework_Server() == NULL) {}
	OpenAvrilConcurrency::Global::stat_CONVERT_ObjPtr_to_Class(stat_CLASS_get_ptr_Framework_Server())->app_initialise_Program(OpenAvrilConcurrency::Global::stat_CONVERT_ObjPtr_to_Class(stat_CLASS_get_ptr_Framework_Server()));
	std::cout << "        ,     \\      /      ," << std::endl;
	std::cout << "       / \\    )\\ __ /(     / \\ " << std::endl;
	std::cout << "      /   \\   (_\\  /_)    /   \\ " << std::endl;
	std::cout << "____ / ____\\__ \\@  @/ ___/_____\\_____" << std::endl;
	std::cout << "|              |\\../|               |" << std::endl;
	std::cout << "|               \\VV/                |" << std::endl;
	std::cout << "|      MIT OpenAvrilConcurrency     |" << std::endl;
	std::cout << "|___________________________________|" << std::endl;
	std::cout << "|    / \\ /        \\\\        \\ /\\    |" << std::endl;
	std::cout << "|  /    V          ))        V   \\  |" << std::endl;
	std::cout << "|/                //               \\| " << std::endl;
	std::cout << "`                 V                 '" << std::endl;
	return (void*)stat_CLASS_get_ptr_Framework_Server();
}
void OpenAvrilConcurrency::CLIBConcurrentServerIO::app_FUNCT_pop_From_Stack_Of_Output(void* obj)
{
	OpenAvrilConcurrency::Global::stat_CONVERT_ObjPtr_to_Class(obj)->dyn_CLASS_get_ptr_Server()->dyn_CLASS_get_ptr_Data()->dyn_CLASS_get_ptr_Data_Control()->app_FUNCT_pop_From_Stack_Of_Output(OpenAvrilConcurrency::Global::stat_CONVERT_ObjPtr_to_Class(obj));
}
void OpenAvrilConcurrency::CLIBConcurrentServerIO::app_FUNCT_push_To_STACK_Of_Input(void* obj)
{
	OpenAvrilConcurrency::Global::stat_CONVERT_ObjPtr_to_Class(obj)->dyn_CLASS_get_ptr_Server()->dyn_CLASS_get_ptr_Data()->dyn_CLASS_get_ptr_Data_Control()->app_FUNCT_push_To_STACK_Of_Input(OpenAvrilConcurrency::Global::stat_CONVERT_ObjPtr_to_Class(obj));
}
void OpenAvrilConcurrency::CLIBConcurrentServerIO::app_select_set_Intput_Subset(void* obj, unsigned char* bytes)
{
	OpenAvrilConcurrency::Global::stat_CONVERT_ObjPtr_to_Class(obj)->dyn_CLASS_get_ptr_Server()->dyn_CLASS_get_ptr_Data()->dyn_REG_get_ptr_Item_array_Of_doubleBuffer_Input_WRITE(OpenAvrilConcurrency::Global::stat_CONVERT_ObjPtr_to_Class(obj))->dyn_CLASS_get_ptr_Input_Control()->select_And_Set_Input_Subset(OpenAvrilConcurrency::Global::stat_CONVERT_ObjPtr_to_Class(obj), OpenAvrilConcurrency::Global::stat_CONVERT_ByteArray_to_uint8_t(bytes));
}
void OpenAvrilConcurrency::CLIBConcurrentServerIO::app_terminate_Program(void* obj)
{
	delete _CLASS_ptr_Framework_Server;
}
bool OpenAvrilConcurrency::CLIBConcurrentServerIO::dyn_REG_get_flag_isStackLoaded_Server_InputAction(void* obj)
{
	return OpenAvrilConcurrency::Global::stat_CONVERT_ObjPtr_to_Class(obj)->dyn_CLASS_get_ptr_Server()->dyn_CLASS_get_ptr_Data()->dyn_CLASS_get_ptr_Data_Control()->dyn_REG_get_Item_flag_isLoaded_Stack_InputAction();
}
bool OpenAvrilConcurrency::CLIBConcurrentServerIO::dyn_REG_get_flag_isLoaded_Stack_OutputSend(void* obj)
{
	return OpenAvrilConcurrency::Global::stat_CONVERT_ObjPtr_to_Class(obj)->dyn_CLASS_get_ptr_Server()->dyn_CLASS_get_ptr_Data()->dyn_CLASS_get_ptr_Data_Control()->dyn_REG_get_Item_flag_isLoaded_Stack_OutputSend();
}
bool OpenAvrilConcurrency::CLIBConcurrentServerIO::dyn_REG_get_flag_IsInitialised_OpenAvrilConcurrency(void* obj)
{
	return OpenAvrilConcurrency::Global::stat_CONVERT_ObjPtr_to_Class(obj)->dyn_CLASS_get_ptr_Server()->dyn_CLASS_get_ptr_Execute()->dyn_CLASS_get_ptr_Execute_Control()->app_REG_get_Flag_is_SystemInitialised();
}
unsigned char* OpenAvrilConcurrency::CLIBConcurrentServerIO::dyn_REG_get_PraiseEventId(void* obj)
{
	return OpenAvrilConcurrency::Global::stat_CONVERT_uint8_t_to_ByteArray(OpenAvrilConcurrency::Global::stat_CONVERT_ObjPtr_to_Class(obj)->dyn_CLASS_get_ptr_Server()->dyn_CLASS_get_ptr_Data()->dyn_REG_get_ptr_Item_array_Of_doubleBuffer_Output_WRITE(OpenAvrilConcurrency::Global::stat_CONVERT_ObjPtr_to_Class(obj))->dyn_REG_get_ptr_in_praiseEventId());
}
unsigned char* OpenAvrilConcurrency::CLIBConcurrentServerIO::dyn_REG_get_ptr_output_Value(void* obj)
{
	return nullptr;
}
void* OpenAvrilConcurrency::CLIBConcurrentServerIO::dyn_PGM_get_program_WriteEnableStack_ServerInputAction(void* obj)
{
	return OpenAvrilConcurrency::Global::stat_CONVERT_ObjPtr_to_Class(obj)->dyn_CLASS_get_ptr_Server()->dyn_CLASS_get_ptr_Execute()->dyn_PGM_get_WriteEnable_ServerInputAction();
}
void* OpenAvrilConcurrency::CLIBConcurrentServerIO::dyn_PGM_get_program_WriteEnableStack_ServerOutputRecieve(void* obj)
{
	return OpenAvrilConcurrency::Global::stat_CONVERT_ObjPtr_to_Class(obj)->dyn_CLASS_get_ptr_Server()->dyn_CLASS_get_ptr_Execute()->dyn_PGM_get_WriteEnable_ServerOutputRecieve();
}
void OpenAvrilConcurrency::CLIBConcurrentServerIO::dyn_REG_set_Item_input_Value_A(void* obj, unsigned char* bytes)
{
	OpenAvrilConcurrency::Praise0_Input* objPraise0_input = (OpenAvrilConcurrency::Praise0_Input*)OpenAvrilConcurrency::Global::stat_CONVERT_ObjPtr_to_Class(obj)->dyn_CLASS_get_ptr_Server()->dyn_CLASS_get_ptr_Data()->dyn_REG_get_ptr_Item_array_Of_doubleBuffer_Input_WRITE(OpenAvrilConcurrency::Global::stat_CONVERT_ObjPtr_to_Class(obj));
	objPraise0_input->dyn_REG_set_Item_input_Value_A(OpenAvrilConcurrency::Global::stat_CONVERT_ByteArray_to_Float(bytes));
}
void OpenAvrilConcurrency::CLIBConcurrentServerIO::dyn_REG_set_Item_input_Value_B(void* obj, unsigned char* bytes)
{
	OpenAvrilConcurrency::Praise0_Input* objPraise0_input = (OpenAvrilConcurrency::Praise0_Input*)OpenAvrilConcurrency::Global::stat_CONVERT_ObjPtr_to_Class(obj)->dyn_CLASS_get_ptr_Server()->dyn_CLASS_get_ptr_Data()->dyn_REG_get_ptr_Item_array_Of_doubleBuffer_Input_WRITE(OpenAvrilConcurrency::Global::stat_CONVERT_ObjPtr_to_Class(obj))->dyn_REG_get_ptr_in_praiseEventId();
	objPraise0_input->dyn_REG_set_Item_input_Value_B(OpenAvrilConcurrency::Global::stat_CONVERT_ByteArray_to_Float(bytes));
}
void OpenAvrilConcurrency::CLIBConcurrentServerIO::dyn_REG_set_PraiseEventId(void* obj, unsigned char* bytes)
{
	OpenAvrilConcurrency::Global::stat_CONVERT_ObjPtr_to_Class(obj)->dyn_CLASS_get_ptr_Server()->dyn_CLASS_get_ptr_Data()->dyn_REG_get_ptr_Item_array_Of_doubleBuffer_Input_WRITE(OpenAvrilConcurrency::Global::stat_CONVERT_ObjPtr_to_Class(OpenAvrilConcurrency::Global::stat_CONVERT_ObjPtr_to_Class(obj)))->dyn_REG_Set_in_praiseEventId(OpenAvrilConcurrency::Global::stat_CONVERT_ByteArray_to_uint8_t(bytes));
}
void* OpenAvrilConcurrency::CLIBConcurrentServerIO::stat_CLASS_get_ptr_Framework_Server()
{
	return _CLASS_ptr_Framework_Server;
}