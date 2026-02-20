#pragma once

namespace OpenAvril
{
    class Concurrent
    {
// calsses.

// registers.

    public:
// constructor.
        Concurrent();

// destructor.
        virtual ~Concurrent();

// public.
        void do_Concurrent_Algorithm_For_PraiseEventId(class Framework_Server* obj, char playerId, __int8 ptr_praiseEventId, class Object* ptr_Algorithm_Subset, class Object* ptr_Input_Subset, class Object* ptr_Output_Subset);
        void initialise_Control();
        void thread_Concurrency(class Framework_Server* obj, __int8 concurrent_coreId);
    // get.
        class Concurrent_Control* get_ptr_Concurrent_Control();
        Object* get_ptr_Item_On_list_Of_ptr_Algorithms_Subset(__int8 praiseID);
    // set.

    private:
// private.
        void create_ptr_Concurrent_Control();
        void create_list_Of_ptr_Algorithms_Subset();
    // get.
        std::list<Object*>* get_ptr_list_Of_ptr_Algorithms_Subset();
    // set.
        void set_ptr_Concurrent_Control(class Concurrent_Control* newClass);
        void set_Algorithm_Subset(class Praise0_Algorithm* praise0_algorithm);
    };
}