#pragma once

namespace OpenAvril
{
    class LaunchEnableForConcurrentThreadsAt_SERVER_Framework
    {
    public:
        LaunchEnableForConcurrentThreadsAt_SERVER_Framework();
        virtual ~LaunchEnableForConcurrentThreadsAt_SERVER_Framework();
        class LaunchEnableForConcurrentThreadsAt_SERVER* get_LaunchEnableForConcurrentThread();

    private:
        static void create_LaunchEnableForConcurrentThreadsAt();
        static class LaunchEnableForConcurrentThreadsAt_SERVER* get__LaunchEnableForConcurrentThreadsAt();
        static void set_LaunchEnableForConcurrentThreadsAt(class LaunchEnableForConcurrentThreadsAt_SERVER* concurrentQue);
    };
}