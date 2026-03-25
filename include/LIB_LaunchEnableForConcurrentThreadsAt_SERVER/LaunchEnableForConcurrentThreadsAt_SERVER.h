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
        static void stat_boot0_CLASS_DECLAIRE_LaunchEnableForConcurrentThreadsAt_SERVER();
        static void stat_CLASS_boot1_DEFINE_LaunchEnableForConcurrentThreadsAt_SERVER();
        static void boot3_CLASS_INITIALISE_LaunchEnableForConcurrentThreadsAt_SERVER();
        static void boot0_REG_DECLAIRE_LaunchEnableForConcurrentThreadsAt_SERVER();
        void dyn_REG_boot1_DEFINE_LaunchEnableForConcurrentThreadsAt_SERVER();
        void dyn_REG_boot2_SUBSTANTIATE_LaunchEnableForConcurrentThreadsAt_SERVER();
        void boot3_REG_INITIALISE_LaunchEnableForConcurrentThreadsAt_SERVER();
        void boot4_PGM_INSTANTIATE_LaunchEnableForConcurrentThreadsAt_SERVER();
        class LaunchEnableForConcurrentThreadsAt_SERVER_Global* dyn_CLASS_get_ptr_Global();
        class LaunchEnableForConcurrentThreadsAt_SERVER_Control* dyn_CLASS_get_ptr_LaunchConcurrency_Control();
    private:
        static class LaunchEnableForConcurrentThreadsAt_SERVER_Global* _stat_CLASS_ptr_Global;
        static class LaunchEnableForConcurrentThreadsAt_SERVER_Control* _stat_CLASS_ptr_LaunchConcurrency_Control;
        static void stat_CLASS_boot1_DEFINE_Global();
        static void stat_CLASS_boot1_DEFINE_WriteEnable_Control();
        static void stat_CLASS_boot3_INITIALISE_Global();
        static void stat_CLASS_boot3_INITIALISE_LaunchConcurrency_Control();
        static class LaunchEnableForConcurrentThreadsAt_SERVER_Global* stat_CLASS_get_ptr_Global();
        static class LaunchEnableForConcurrentThreadsAt_SERVER_Control* stat_CLASS_get_ptr_LaunchConcurrency_Control();
    };
}