#pragma once
namespace OpenAvrilConcurrency
{
    class Algorithms
    {
    public:
        Algorithms();
        virtual ~Algorithms();
        class User_Algorithim* dyn_CLASS_get_ptr_User_Algorithms();
        class Concurrent* dyn_CLASS_get_Item_On_list_Of_ptr_Concurrent(uint8_t concurrentThreadId);
        void dyn_REG_boot1_DEFINE_Algorithim(class Framework_Server* obj);
        void dyn_REG_boot2_SUBSTANTIATE_Algorithim(class Framework_Server* obj);
        void dyn_REG_boot3_INITIALISE_Algorithim(class Framework_Server* obj, class Concurrent* objConcurrent);
        void dyn_REG_boot4_INSTANTIATE_Algorithim(class Framework_Server* obj);
        static void stat_CLASS_boot0_DECLAIRE_Algorithim();
        static void stat_CLASS_boot1_DEFINE_Algorithim();
        static void stat_CLASS_boot3_INITIALISE_Algorithim();
        static void stat_CLASS_boot4_INSTANTIATE_Algorithim();
        static void stat_REG_boot0_DECLAIRE_Algorithim();
    private:
        static class User_Algorithim* _stat_CLASS_ptr_User_Algorithim;
        static std::list<class Concurrent*>* _stat_REG_ptr_list_Of_ptr_Concurrent;
        static void stat_CLASS_boot1_DEFINE_User_Algorithms();
        static void stat_CLASS_boot3_INITIALISE_User_Algorithms();
        static class User_Algorithim* stat_CLASS_get_ptr_User_Algorithms();
        static void stat_REG_boot1_DEFINE_List_Of_ptr_Concurrent();
        static void stat_REG_boot2_SUBSTANTIATE_list_Of_ptr_Concurrent(class Framework_Server* obj);
        static void stat_REG_boot3_INITIALISE_list_Of_ptr_Concurrent(class Framework_Server* obj, class Concurrent* objConcurrent);
        static std::list<class Concurrent*>* stat_REG_get_ptr_list_Of_ptr_Concurrent();
    };
}