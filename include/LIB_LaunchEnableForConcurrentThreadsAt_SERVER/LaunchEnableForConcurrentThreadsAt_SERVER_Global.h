#pragma once


namespace OpenAvril
{
    class LaunchEnableForConcurrentThreadsAt_SERVER_Global
    {
    public:
        LaunchEnableForConcurrentThreadsAt_SERVER_Global();
        ~LaunchEnableForConcurrentThreadsAt_SERVER_Global();
        bool get_flag_core_ACTIVE();
        bool get_flag_core_IDLE();
        unsigned char get_number_Implemented_Cores();

    private:
        static void set_flag_core_ACTIVE(bool value);
        static void set_flag_core_IDLE(bool value);
        static void set_number_Implemented_Cores(__int8 coreId);
    };
}
