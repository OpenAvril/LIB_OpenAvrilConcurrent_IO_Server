#pragma once


namespace OpenAvril
{
    class LaunchEnableForConcurrentThreadsAt_SERVER_Control
    {
    public:
        LaunchEnableForConcurrentThreadsAt_SERVER_Control(class LaunchEnableForConcurrentThreadsAt_SERVER_Global* global, unsigned char number_Implemented_Cores);
        virtual ~LaunchEnableForConcurrentThreadsAt_SERVER_Control();

        void LaunchEnable_Activate(class LaunchEnableForConcurrentThreadsAt_SERVER_Framework* obj);
        void LaunchEnable_Request(class LaunchEnableForConcurrentThreadsAt_SERVER_Framework* obj, unsigned char concurrent_CoreId);
        void LaunchEnable_SortQue(class LaunchEnableForConcurrentThreadsAt_SERVER_Framework* obj, unsigned char number_Implemented_Cores);
        void LaunchQue_Update(class LaunchEnableForConcurrentThreadsAt_SERVER_Framework* obj, unsigned char number_Implemented_Cores);

        unsigned char get_concurrentCycle_Try_CoreId_Index();
        unsigned char get_flag_CoreId_Of_CoreToLaunch();
        bool get_flag_praisingLaunch();
        unsigned char get_new_concurrentCycle_Try_CoreId_Index();
        bool get_state_ConcurrentCore(unsigned char concurrent_CoreId);
        unsigned char get_que_CoreToLaunch(unsigned char index);

        void set_concurrentCycle_Try_CoreId_Index(unsigned char concurrentCycle_Try_CoreId_Index);
        void set_flag_praisingLaunch(bool flag_praisingLaunch);
        void set_new_concurrentCycle_Try_CoreId_Index(unsigned char new_concurrentCycle_Try_CoreId_Index);
        void set_state_ConcurrentCore(bool state_ConcurrentCore, unsigned char concurrent_CoreId);

    protected:

    private:
        void DynamicStagger(class LaunchEnableForConcurrentThreadsAt_SERVER_Framework* obj, unsigned char coreId);
        void LaunchEnable_ShiftQueValues(class LaunchEnableForConcurrentThreadsAt_SERVER_Framework* obj, unsigned char concurrent_CoreId_A, unsigned char concurrent_CoreId_B);
        
        int get_count_LaunchActive_For(unsigned char concurrent_CoreId);
        int get_count_LaunchIdle_For(unsigned char concurrent_CoreId);
        std::vector<unsigned char>* get_stack_PriseEventId();
        
        void set_count_LaunchActive_For(int count_LaunchActive_For, unsigned char concurrent_CoreId);
        void set_count_LaunchIdle_For(int count_LaunchIdle_For, unsigned char concurrent_CoreId);
        void set_stack_PriseEventId(std::vector<unsigned char>* stack_PriseEventId);
        void set_que_CoreToLaunch(unsigned char que_CoreToLaunch, unsigned char index);
    };
}