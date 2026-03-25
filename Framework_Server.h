#pragma once
namespace OpenAvrilConcurrency
{
    class Framework_Server
    {
    public:
        Framework_Server();
        virtual ~Framework_Server();
        class Server* dyn_CLASS_get_ptr_Server();
        void dyn_REG_boot1_DEFINE_Framework_Server(class Framework_Server* obj);
        void dyn_REG_boot2_SUBSTANTIATE_Framework_Server(class Framework_Server* obj);
        void dyn_REG_boot3_INITIALISE_Framework_Server(class Framework_Server* obj);
        void dyn_PGM_boot4_INSTANTIATE_Framework_Server(class Framework_Server* obj);
        static void stat_CLASS_boot0_DECLAIRE_Framework_Server();
        static void stat_CLASS_boot1_DEFINE_Framework_Server();
        static void stat_CLASS_boot3_INITIALISE_Framework_Server();
        static void stat_CLASS_boot4_INSTANTIATE_Framework_Server();
        static void stat_REG_boot0_DECLAIRE_Framework_Server();
    private:
        static class Server* _stat_CLASS_ptr_Server;
        static void stat_CLASS_boot1_DEFINE_Server();
        static void stat_CLASS_boot3_INITIALISE_Server();
        static class Server* stat_CLASS_get_ptr_Server();
    };
}