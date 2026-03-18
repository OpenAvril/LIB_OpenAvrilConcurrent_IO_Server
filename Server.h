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
    private:
        static class Algorithms* _stat_CLASS_ptr_Algorithms;
        static class Data* _stat_CLASS_ptr_Data;
        static class Execute* _stat_CLASS_ptr_Execute;
        static class Global* _stat_CLASS_ptr_Global;
        static void stat_CLASS_create_ptr_Algorithms();
        static void stat_CLASS_create_ptr_Data();
        static void stat_CLASS_create_ptr_Execute();
        static void stat_CLASS_create_ptr_Global();
        static class Algorithms* stat_CLASS_get_ptr_Algorithms();
        static class Data* stat_CLASS_get_ptr_Data();
        static class Execute* stat_CLASS_get_ptr_Execute();
        static class Global* stat_CLASS_get_ptr_Global();
    };
}