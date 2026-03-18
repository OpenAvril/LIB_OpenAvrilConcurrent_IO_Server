#pragma once
namespace OpenAvrilConcurrency
{
    class Framework_Server
    {
    public:
        Framework_Server();
        virtual ~Framework_Server();
        void app_initialise_Program(class Framework_Server* obj);
        class Server* dyn_CLASS_get_ptr_Server();
    private:
        static class Server* _stat_CLASS_ptr_Server;
        static void stat_CLASS_create_ptr_Server();
        static class Server* stat_CLASS_get_ptr_Server();
    };
}