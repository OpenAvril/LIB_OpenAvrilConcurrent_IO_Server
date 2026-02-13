#pragma once

namespace OpenAvril
{
    class Data_Control
    {
    public:
        Data_Control();
        virtual ~Data_Control();
        void Pop_Stack_InputPraises(class OpenAvril::Framework_Server* obj, __int8 concurrentCoreId);
        void Pop_Stack_Output(class OpenAvril::Framework_Server* obj);
        void Push_Stack_InputPraises(class OpenAvril::Framework_Server* obj);
        void Push_Stack_Output(class OpenAvril::Framework_Server* obj, __int8 concurrentCoreId);
        void Store_Praise_In_Data_To_GameInstance_Data(class OpenAvril::Framework_Server* obj, std::vector<class OpenAvril::Input*>* stack);
        void Store_Praise_Out_Data_To_GameInstance_Data(class OpenAvril::Framework_Server* obj, std::vector<class OpenAvril::Output*>* stack);

        bool Get_flag_IsStackLoaded_Server_InputAction();
        bool Get_flag_IsStackLoaded_Server_OutputRecieve();
        bool Get_flag_IsNewInputDataReady();
        bool Get_flag_IsNewOutputDataReady();

        void Set_flag_IsNewInputDataReady(bool value);
        void Set_flag_IsNewOutputDataReady(bool value);

    protected:

    private:
        void Set_flag_IsStackLoaded_Server_InputAction(bool value);
        void Set_flag_IsStackLoaded_Server_OutputRecieve(bool value);
    };
}