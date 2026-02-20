#pragma once

namespace OpenAvril
{
    class WriteEnableForThreadsAt_SERVEROUTPUTRECIEVE_Control
    {
    public:
        WriteEnableForThreadsAt_SERVEROUTPUTRECIEVE_Control(class WriteEnableForThreadsAt_SERVEROUTPUTRECIEVE_Global* global);
        ~WriteEnableForThreadsAt_SERVEROUTPUTRECIEVE_Control();
        void WriteEnable_Activate(class WriteEnableForThreadsAt_SERVEROUTPUTRECIEVE_Framework* obj, unsigned char coreId);
        void WriteEnable_SortQue(class WriteEnableForThreadsAt_SERVEROUTPUTRECIEVE_Framework* obj);
        void WriteEnable_Request(class WriteEnableForThreadsAt_SERVEROUTPUTRECIEVE_Framework* obj, unsigned char coreId);
        void WriteQue_Update(class WriteEnableForThreadsAt_SERVEROUTPUTRECIEVE_Framework* obj);
        
        int get_count_CoreId_WriteActive(unsigned char coreId);
        std::vector<bool> get_flag_WriteState(unsigned char coreId);
        unsigned char get_new_writeCycle_Try_CoreId_Index();
        
        void set_flag_WriteState(unsigned char coreId, std::vector<bool> flag_WriteState);
        void set_flag_praisingWrite(bool flag_praisingWrite);
        void set_new_writeCycle_Try_CoreId_Index(unsigned char new_writeCycle_Try_CoreId_Index);

    protected:

    private:
        void DynamicStagger(class WriteEnableForThreadsAt_SERVEROUTPUTRECIEVE_Framework* obj, unsigned char coreId);
        void WriteEnable_ShiftQueValues(class WriteEnableForThreadsAt_SERVEROUTPUTRECIEVE_Framework* obj, unsigned char concurrent_CoreId_A, unsigned char concurrent_CoreId_B);

        unsigned char get_writeCycle_Try_CoreId_Index();
        
        int get_count_CoreId_WriteIdle(unsigned char coreId);
        int get_count_CoreId_WriteWait(unsigned char coreId);
        bool get_flag_praisingWrite();
        unsigned char get_que_CoreToWrite(unsigned char coreId);

        void set_writeCycle_Try_CoreId_Index(unsigned char _writeCycle_Try_CoreId_Index);
        void set_count_CoreId_WriteActive(unsigned char coreId, int count_CoreId_WriteActive);
        void set_count_CoreId_WriteIdle(unsigned char coreId, int count_CoreId_WriteIdle);
        void set_count_CoreId_WriteWait(unsigned char coreId, int count_CoreId_WriteWait);
        void set_que_CoreToWrite(unsigned char coreId, unsigned char que_CoreToWrite);
    };
}