#pragma once

namespace OpenAvril
{
    class LaunchEnableForConcurrentThreadsAt_SERVER
    {
    public:
        LaunchEnableForConcurrentThreadsAt_SERVER();
        virtual ~LaunchEnableForConcurrentThreadsAt_SERVER();
        void initialise_Control();
        void Thread_Start(class LaunchEnableForConcurrentThreadsAt_SERVER_Framework* obj, unsigned char concurrent_CoreId);
        void Thread_End(class LaunchEnableForConcurrentThreadsAt_SERVER_Framework* obj, unsigned char concurrent_CoreId);

        class LaunchEnableForConcurrentThreadsAt_SERVER_Global* get_LaunchConcurrency_Global();
        class LaunchEnableForConcurrentThreadsAt_SERVER_Control* get_Control_Of_LaunchConcurrency();

    private:
        static void create_LaunchEnableForConcurrentThreadsAt_SERVER_Global();
        static void create_Control_Of_LaunchConcurrency();

        static class LaunchEnableForConcurrentThreadsAt_SERVER_Global* get__LaunchConcurrency_Global();
        static class LaunchEnableForConcurrentThreadsAt_SERVER_Control* get__Control_Of_LaunchConcurrency();

        static void set_LaunchConcurrency_Global(class LaunchEnableForConcurrentThreadsAt_SERVER_Global* global);
        static void set_Control_Of_LaunchConcurrency(class LaunchEnableForConcurrentThreadsAt_SERVER_Control* control);
    };
}