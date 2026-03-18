#pragma once
namespace OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtSERVER
{
    class LaunchEnableForConcurrentThreadsAt_SERVER_Framework
    {
    public:
        LaunchEnableForConcurrentThreadsAt_SERVER_Framework();
        virtual ~LaunchEnableForConcurrentThreadsAt_SERVER_Framework();
        void app_initialise(class LaunchEnableForConcurrentThreadsAt_SERVER_Framework* obj);
        class LaunchEnableForConcurrentThreadsAt_SERVER* dyn_CLASS_get_ptr_LaunchConcurrency();
        static class LaunchEnableForConcurrentThreadsAt_SERVER* stat_CLASS_get_ptr_LaunchConcurrency();
    private:
        static class LaunchEnableForConcurrentThreadsAt_SERVER* _stat_CLASS_ptr_LaunchConcurrency;
        static void stat_CLASS_create_ptr_LaunchConcurrency();
    };
}