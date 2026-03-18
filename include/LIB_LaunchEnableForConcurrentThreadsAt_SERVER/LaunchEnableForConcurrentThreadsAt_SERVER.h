#pragma once
namespace OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtSERVER
{
    class LaunchEnableForConcurrentThreadsAt_SERVER
    {
    public:
        LaunchEnableForConcurrentThreadsAt_SERVER();
        virtual ~LaunchEnableForConcurrentThreadsAt_SERVER();
        void app_thread_Start(class LaunchEnableForConcurrentThreadsAt_SERVER_Framework* obj, uint8_t concurrentThreadID);
        void app_thread_End(class LaunchEnableForConcurrentThreadsAt_SERVER_Framework* obj, uint8_t concurrentThreadID);
        void app_initialise_Control();
        class LaunchEnableForConcurrentThreadsAt_SERVER_Global* dyn_CLASS_get_ptr_Global();
        class LaunchEnableForConcurrentThreadsAt_SERVER_Control* dyn_CLASS_get_ptr_LaunchConcurrency_Control();
    private:
        static class LaunchEnableForConcurrentThreadsAt_SERVER_Global* _stat_CLASS_ptr_Global;
        static class LaunchEnableForConcurrentThreadsAt_SERVER_Control* _stat_CLASS_ptr_LaunchConcurrency_Control;
        static void stat_CLASS_create_ptr_Global();
        static void stat_CLASS_create_ptr_LaunchConcurrency_Control();
        static class LaunchEnableForConcurrentThreadsAt_SERVER_Global* stat_CLASS_get_ptr_Global();
        static class LaunchEnableForConcurrentThreadsAt_SERVER_Control* stat_CLASS_get_ptr_LaunchConcurrency_Control();
    };
}