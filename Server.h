#pragma once
namespace OpenAvrilConcurrency
{
    class Server
    {
    public:
        Server();
        virtual ~Server();
        class Algorithms* dyn_CLASS_get_ptr_Algorithms();
        class Data* dyn_CLASS_get_ptr_Data();
        class Execute* dyn_CLASS_get_ptr_Execute();
        class Global* dyn_CLASS_get_ptr_Global();
        void dyn_REG_boot1_DEFINE_Server(class Framework_Server* obj);
        void dyn_REG_boot2_SUBSTANTIATE_Server(class Framework_Server* obj);
        void dyn_REG_boot3_INITIALISE_Server(class Framework_Server* obj);
        void dyn_REG_boot4_INSTANTIATE_Server(class Framework_Server* obj);
        static void stat_CLASS_boot0_DECLAIRE_Server();
        static void stat_CLASS_boot1_DEFINE_Server();
        static void stat_CLASS_boot3_INITIALISE_Server();
        static void stat_CLASS_boot4_INSTANTIATE_Server();
        static void stat_REG_boot0_DECLAIRE_Server();
    private:
        static class Algorithms* _stat_CLASS_ptr_Algorithms;
        static class Data* _stat_CLASS_ptr_Data;
        static class Execute* _stat_CLASS_ptr_Execute;
        static class Global* _stat_CLASS_ptr_Global;
        static void stat_CLASS_boot1_DEFINE_Algorithms();
        static void stat_CLASS_boot1_DEFINE_Data();
        static void stat_CLASS_boot1_DEFINE_Execute();
        static void stat_CLASS_boot1_DEFINE_Global();
        static void stat_CLASS_boot3_INITIALISE_Algorithms();
        static void stat_CLASS_boot3_INITIALISE_Data();
        static void stat_CLASS_boot3_INITIALISE_Execute();
        static void stat_CLASSS_boot3_INITIALISE_Global();
        static class Algorithms* stat_CLASS_get_ptr_Algorithms();
        static class Data* stat_CLASS_get_ptr_Data();
        static class Execute* stat_CLASS_get_ptr_Execute();
        static class Global* stat_CLASS_get_ptr_Global();
    };
}