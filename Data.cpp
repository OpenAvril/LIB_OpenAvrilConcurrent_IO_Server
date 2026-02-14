#include "pch.h"

class OpenAvril::Data_Control* ptr_Data_Control = NULL;
class OpenAvril::GameInstance* ptr_GameInstance = NULL;
//buffers
bool state_InBufferToWrite = true;
bool state_OutBufferToWrite = true;

class OpenAvril::Input* ptr_EmptyBuffer_Input = NULL;
class OpenAvril::Output* ptr_EmptyBuffer_Output = NULL;
class OpenAvril::Input* ptr_Buffer_InputDouble[2] = { NULL, NULL };
class OpenAvril::Input* ptr_Buffer_InputReference_ForCore[4] = { NULL, NULL, NULL, NULL };//NUMBER OF CONCURRENT THREADS
class OpenAvril::Output* ptr_Buffer_OutputDouble[2] = { NULL, NULL };
class OpenAvril::Output* ptr_Buffer_OutputReference_ForCore[4] = { NULL, NULL, NULL, NULL };//NUMBER OF CONCURRENT THREADS

//buffer sub sets
class OpenAvril::User_I* ptr_User_I = NULL;
class OpenAvril::User_O* ptr_User_O = NULL;

std::vector<class OpenAvril::Input*>* ptr_Stack_InputPraise = NULL;
std::vector<class OpenAvril::Output*>* ptr_Stack_OutputPraise = NULL;

OpenAvril::Data::Data()
{
    std::cout << "entered => Data()" << std::endl;
    Set_EmptyBuffer_Input(new class OpenAvril::Input());
    while (Get_New_InputBuffer() == NULL) { }
    Get_New_InputBuffer()->Initialise_Control();

    std::cout << "entered => Data() ALPHA" << std::endl;
    Set_EmptyBuffer_Output(new class OpenAvril::Output());
    std::cout << "entered => Data() ALPHA BRAVO" << std::endl;
    while (Get_New_OutputBuffer() == NULL) { }
    std::cout << "entered => Data() ALPHA CHARLIE" << std::endl;
    Get_New_OutputBuffer()->Initialise_Control();

    std::cout << "entered => Data() BRAVO" << std::endl;
    Set_Buffer_InputDouble(GetState_InputBuffer(), Get_New_InputBuffer());
    Set_Buffer_InputDouble(!GetState_InputBuffer(), Get_New_InputBuffer());
    while (GetBuffer_InputFrontDouble() == NULL) {}
    while (GetBuffer_InputBackDouble() == NULL) {}

    std::cout << "entered => Data() CHARLIE" << std::endl;
    Set_Buffer_OututDouble(GetState_OutputBuffer(), Get_New_OutputBuffer());
    Set_Buffer_OututDouble(!GetState_OutputBuffer(), Get_New_OutputBuffer());
    while (GetBuffer_OutputFrontDouble() == NULL) {}
    while (GetBuffer_OutputBackDouble() == NULL) {}
    
    std::cout << "entered => Data() DELTA" << std::endl;
    Set_Stack_InputPraise(new std::vector<class OpenAvril::Input*>);
    while (Get_Stack_InputPraise() == NULL) { }
    Get_Stack_InputPraise()->resize(1);
    Get_Stack_InputPraise()->at(0) = Get_New_InputBuffer();

    std::cout << "entered => Data() ECHO" << std::endl;
    Set_Stack_OutputPraise(new std::vector<class OpenAvril::Output*>);
    while (Get_Stack_OutputPraise() == NULL) { }
    Get_Stack_OutputPraise()->resize(1);
    Get_Stack_OutputPraise()->at(0) = Get_New_OutputBuffer();

    std::cout << "entered => Data() FOXTROT" << std::endl;
    Set_User_I(new User_I());
    while (Get_User_I() == NULL) { }

    std::cout << "entered => Data() GIGA" << std::endl;
    Set_User_O(new User_O());
    while (Get_User_O() == NULL) { }
}

OpenAvril::Data::~Data()
{
    delete ptr_Data_Control;
    delete ptr_GameInstance;
    
    delete ptr_EmptyBuffer_Input;
    delete ptr_EmptyBuffer_Output;
    for (int index = 0; index < 2; index++)
    {
        delete ptr_Buffer_InputDouble[index];
        delete ptr_Buffer_OutputDouble[index];
    }
    for (int index = 0; index < 3; index++)//NUMBER OF CONCURRENT THREADS
    {
        delete ptr_Buffer_InputReference_ForCore[index];
        delete ptr_Buffer_OutputReference_ForCore[index];
    }
    delete ptr_User_I;
    delete ptr_User_O;
    delete ptr_Stack_InputPraise;
    delete ptr_Stack_OutputPraise;

}

void OpenAvril::Data::Initialise(__int8 number_Implemented_Cores)
{
    for (__int8 index = 0; index < number_Implemented_Cores; index++)//Number Of Cores
    {
        Set_Buffer_InputReference_ForCore(index, Get_New_InputBuffer());
        while (Get_InputRefferenceOfCore(index) == NULL) {}
    }
    for (__int8 index = 0; index < number_Implemented_Cores; index++)
    {
        Set_Buffer_OutputReference_ForCore(index, Get_New_OutputBuffer());
        while (Get_OutputRefferenceOfCore(index) == NULL) {}
    }
}

void OpenAvril::Data::Initialise_Control()
{
    Set_Data_Control(new class OpenAvril::Data_Control());
    while (Get_Data_Control() == NULL) { }
}
void OpenAvril::Data::Initialise_GameInstance()
{
    Set_GameInstance(new class OpenAvril::GameInstance());
    while (Get_GameInstance() == NULL) { }
}

__int8 OpenAvril::Data::BoolToInt(bool bufferSide)
{
    __int8 temp = 2;
    if(bufferSide)
    {
        temp = 1;
    }
    else
    {
        temp = 0;
    }
    return temp;
}

void OpenAvril::Data::Flip_Input_DoubleBuffer()
{
    Set_state_InBufferToWrite(!GetState_InputBuffer());
}
void OpenAvril::Data::Flip_Output_DoubleBuffer()
{
    Set_state_OutBufferToWrite(!GetState_OutputBuffer());
}
OpenAvril::Data_Control* OpenAvril::Data::Get_Data_Control()
{
    return ptr_Data_Control;
}
OpenAvril::GameInstance* OpenAvril::Data::Get_GameInstance()
{
    return ptr_GameInstance;
}
OpenAvril::Input* OpenAvril::Data::GetBuffer_InputFrontDouble()
{
    return ptr_Buffer_InputDouble[GetState_InputBuffer()];
}
OpenAvril::Input* OpenAvril::Data::GetBuffer_InputBackDouble()
{
    return ptr_Buffer_InputDouble[!GetState_OutputBuffer()];
}
OpenAvril::Input* OpenAvril::Data::Get_InputRefferenceOfCore(__int8 concurrent_coreId)
{
    return ptr_Buffer_InputReference_ForCore[concurrent_coreId];
}
OpenAvril::Output* OpenAvril::Data::GetBuffer_OutputFrontDouble()
{
    return ptr_Buffer_OutputDouble[BoolToInt(GetState_InputBuffer())];
}
OpenAvril::Output* OpenAvril::Data::GetBuffer_OutputBackDouble()
{
    return ptr_Buffer_OutputDouble[BoolToInt(GetState_OutputBuffer())];
}
OpenAvril::Output* OpenAvril::Data::Get_OutputRefferenceOfCore(__int8 concurrent_coreId)
{
    return ptr_Buffer_OutputReference_ForCore[concurrent_coreId];
}
OpenAvril::Input* OpenAvril::Data::Get_New_InputBuffer()
{
    return ptr_EmptyBuffer_Input;
}
OpenAvril::Output* OpenAvril::Data::Get_New_OutputBuffer()
{
    return ptr_EmptyBuffer_Output;
}
bool OpenAvril::Data::GetState_InputBuffer()
{
    return state_InBufferToWrite;
}
bool OpenAvril::Data::GetState_OutputBuffer()
{
    return state_OutBufferToWrite;
}
std::vector<class OpenAvril::Input*>* OpenAvril::Data::Get_Stack_InputPraise()
{
    return ptr_Stack_InputPraise;
}
std::vector<class OpenAvril::Output*>* OpenAvril::Data::Get_Stack_OutputPraise()
{
    return ptr_Stack_OutputPraise;
}
OpenAvril::User_I* OpenAvril::Data::Get_User_I()
{
    return ptr_User_I;
}
OpenAvril::User_O* OpenAvril::Data::Get_User_O()
{
    return ptr_User_O;
}

void OpenAvril::Data::Set_Data_Control(OpenAvril::Data_Control* data_Control)
{
    ptr_Data_Control = data_Control;
}
void OpenAvril::Data::Set_GameInstance(OpenAvril::GameInstance* gameInstance)
{
    ptr_GameInstance = gameInstance;
}
void OpenAvril::Data::Set_EmptyBuffer_Input(OpenAvril::Input* emptyBuffer_Input)
{
    ptr_EmptyBuffer_Input = emptyBuffer_Input;
}
void OpenAvril::Data::Set_EmptyBuffer_Output(OpenAvril::Output* emptyBuffer_Output)
{
    std::cout << "entered => Data() Set_EmptyBuffer_Output()" << std::endl;
    ptr_EmptyBuffer_Output = emptyBuffer_Output;
}
void OpenAvril::Data::Set_Buffer_InputDouble(bool state, OpenAvril::Input* buffer_InputDouble)
{
    ptr_Buffer_InputDouble[BoolToInt(state)] = buffer_InputDouble;
}
void OpenAvril::Data::Set_Buffer_InputReference_ForCore(__int8 index, OpenAvril::Input* buffer_InputReference_ForCore)
{
    ptr_Buffer_InputReference_ForCore[index] = buffer_InputReference_ForCore;
}
void OpenAvril::Data::Set_Buffer_OututDouble(bool state, OpenAvril::Output* buffer_OututDouble)
{
    ptr_Buffer_OutputDouble[BoolToInt(state)] = buffer_OututDouble;
}
void OpenAvril::Data::Set_Buffer_OutputReference_ForCore(__int8 index, OpenAvril::Output* buffer_OutputReference_ForCore)
{
    ptr_Buffer_OutputReference_ForCore[index] = buffer_OutputReference_ForCore;
}
void OpenAvril::Data::Set_Stack_InputPraise(std::vector<class OpenAvril::Input*>* stack_InputPraise)
{
    ptr_Stack_InputPraise = stack_InputPraise;
}
void OpenAvril::Data::Set_Stack_OutputPraise(std::vector<class OpenAvril::Output*>* stack_OutputPraise)
{
    ptr_Stack_OutputPraise = stack_OutputPraise;
}

void OpenAvril::Data::Set_User_I(OpenAvril::User_I* user_Input)
{
    ptr_User_I = user_Input;
}
void OpenAvril::Data::Set_User_O(OpenAvril::User_O* user_Output)
{
    ptr_User_O = user_Output;
}

void OpenAvril::Data::Set_InputRefferenceOfCore(__int8 concurrent_coreId, OpenAvril::Input* value_Input)
{
    ptr_Buffer_InputReference_ForCore[concurrent_coreId] = value_Input;
}

void OpenAvril::Data::Set_OutputRefferenceOfCore(__int8 concurrent_coreId, OpenAvril::Output* value_Output)
{
    ptr_Buffer_OutputReference_ForCore[concurrent_coreId] = value_Output;
}

void OpenAvril::Data::Set_state_InBufferToWrite(bool value)
{
    state_InBufferToWrite = value;
}
void OpenAvril::Data::Set_state_OutBufferToWrite(bool value)
{
    state_OutBufferToWrite = value;
}