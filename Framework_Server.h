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
        static void stat_STRUCT_create_All();
    private:
        static class Server* _stat_CLASS_ptr_Server;
        static class Concurrent* _stat_STRUCT_Concurrent;
        static class Input* _stat_STRUCT_Input;
        static class Output* _stat_STRUCT_Output;
        static void stat_CLASS_boot1_DEFINE_Server();
        static void stat_CLASS_boot3_INITIALISE_Server();
        static class Server* stat_CLASS_get_ptr_Server();
        static void stat_STRUCT_Create_Concurrent(class Framework_Server* obj);
        static void stat_STRUCT_Create_Input(class Framework_Server* obj);
        static void stat_STRUCT_Create_Output(class Framework_Server* obj);
        static class Concurrent* stat_STRUCT_get_Concurrent();
        static class Input* stat_STRUCT_get_Input();
        static class Output* stat_STRUCT_get_Output();
    };
}