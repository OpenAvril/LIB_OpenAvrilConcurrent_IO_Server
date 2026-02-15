#pragma once

namespace OpenAvril
{
    class Data_Control
    {
    public:
        Data_Control();
        virtual ~Data_Control();

        void Flip_Input_DoubleBuffer();
        void Flip_Output_DoubleBuffer();
        void Pop_Stack_InputPraises(class OpenAvril::Data* obj, __int8 concurrentThreadID);
        void Pop_Stack_Output(class OpenAvril::Data* obj);
        void Push_Stack_InputPraises(class OpenAvril::Data* obj);
        void Push_Stack_Output(class OpenAvril::Data* obj, __int8 concurrentThreadID);
        void Store_Praise_In_Data_To_GameInstance_Data(class OpenAvril::Data* obj, std::vector<class OpenAvril::Input*>* stack);
        void Store_Praise_Out_Data_To_GameInstance_Data(class OpenAvril::Data* obj, std::vector<class OpenAvril::Output*>* stack);

        bool Get_flag_IsStackLoaded_Server_InputAction();
        bool Get_flag_IsStackLoaded_Server_OutputRecieve();
        bool Get_flag_IsNewInputDataReady();
        bool Get_flag_IsNewOutputDataReady();
        __int8 Get_side_To_Write_For_doubleBuffer_Input();
        __int8 Get_side_To_Write_For_doubleBuffer_Output();

        void Set_flag_IsNewInputDataReady(bool value);
        void Set_flag_IsNewOutputDataReady(bool value);

    protected:

    private:
        __int8 BoolToInt(bool bufferSide);
        void Create_side_To_Write_For_doubleBuffer_Input();
        void Create_side_To_Write_For_doubleBuffer_Output();



        void Set_flag_IsStackLoaded_Server_InputAction(bool value);
        void Set_flag_IsStackLoaded_Server_OutputRecieve(bool value);
        void Set_side_To_Write_For_doubleBuffer_Input(bool value);
        void Set_side_To_Write_For_doubleBuffer_Output(bool value);
    };
}