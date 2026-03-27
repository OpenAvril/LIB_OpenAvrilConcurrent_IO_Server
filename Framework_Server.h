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
        static struct Concurrent* dyn_STRUCT_get_Concurrent();
        static struct Input* dyn_STRUCT_get_Input();
        static struct Output* dyn_STRUCT_get_Output();
        static void stat_CLASS_boot0_DECLAIRE_Framework_Server();
        static void stat_CLASS_boot1_DEFINE_Framework_Server();
        static void stat_CLASS_boot3_INITIALISE_Framework_Server();
        static void stat_CLASS_boot4_INSTANTIATE_Framework_Server();
        static void stat_REG_boot0_DECLAIRE_Framework_Server();
        static void stat_STRUCT_boot0_DECLAIRE();
        static void stat_STRUCT_boot1_DEFINE();
        static void stat_STRUCT_boot2_SUBSTANTIATE(class Framework_Server* obj, struct Concurrent* objConcurrent, struct Input* objInput, struct Output* objOutput);
        static void stat_STRUCT_boot3_INITIALISE(class Framework_Server* obj, struct Concurrent* objConcurrent, struct Input* objInput, struct Output* objOutput);
    private:
        static class Server* _stat_CLASS_ptr_Server;
        static struct Concurrent* _stat_STRUCT_Concurrent;
        static struct Input* _stat_STRUCT_Input;
        static struct Output* _stat_STRUCT_Output;
        static void stat_CLASS_boot1_DEFINE_Server();
        static void stat_CLASS_boot3_INITIALISE_Server();
        static class Server* stat_CLASS_get_ptr_Server();
        static void stat_STRUCT_boot0_DECLAIRE_Concurrent();
        static void stat_STRUCT_boot0_DECLAIRE_Input();
        static void stat_STRUCT_boot0_DECLAIRE_Output();
        static void stat_STRUCT_boot1_DEFINE_Concurrent();
        static void stat_STRUCT_boot1_DEFINE_Input();
        static void stat_STRUCT_boot1_DEFINE_Output();
        static void stat_STRUCT_boot2_SUBSTANTIATE_Concurrent(class Framework_Server* obj, struct Concurrent* objConcurrent);
        static void stat_STRUCT_boot2_SUBSTANTIATE_Input(class Framework_Server* obj, struct Input* objInput);
        static void stat_STRUCT_boot2_SUBSTANTIATE_Output(class Framework_Server* obj, struct Output* objOutput);
        static void stat_STRUCT_boot3_INITIALISE_Concurrent(class Framework_Server* obj, struct Concurrent* objConcurrent);
        static void stat_STRUCT_boot3_INITIALISE_Input(class Framework_Server* obj, struct Input* objInput);
        static void stat_STRUCT_boot3_INITIALISE_Output(class Framework_Server* obj, struct Output* objOutput);
        static struct Concurrent* stat_STRUCT_get_Concurrent();
        static struct Input* stat_STRUCT_get_Input();
        static struct Output* stat_STRUCT_get_Output();
    };
}