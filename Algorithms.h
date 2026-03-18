#pragma once
namespace OpenAvrilConcurrency
{
    class Algorithms
    {
    public:
        Algorithms();
        virtual ~Algorithms();
        void app_CLASS_initialise_Item_On_list_Of_ptr_Concurrent(uint8_t concurrentThreadID, class Concurrent* newINITIALISED_Concurrent);
        class Concurrent* dyn_CLASS_get_Item_On_list_Of_ptr_Concurrent(uint8_t concurrentThreadID);
        class User_Algorithm* dyn_CLASS_get_ptr_User_Algorithims();
    private:
        static class User_Algorithm* _stat_CLASS_ptr_User_Algorithmorithms;
        static void stat_CLASS_create_ptr_User_Algorithmorithms();
        static class User_Algorithm* stat_CLASS_get_ptr_User_Algorithims();
        static std::list<class Concurrent*>* _stat_REG_ptr_list_Of_ptr_Concurrent;
        static void stat_REG_create_ptr_list_Of_ptr_Concurrent(class Concurrent* newDEFAULT_Concurrent);
        static std::list<class Concurrent*>* stat_REG_get_ptr_list_Of_ptr_Concurrent();
        static void stat_REG_set_Item_On_list_Of_ptr_Concurrent(uint8_t concurrentThreadID, class Concurrent* newClass);
    };
}