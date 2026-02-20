#pragma once

namespace OpenAvril
{
    class Concurrent
    {
    public:
        Concurrent();
        virtual ~Concurrent();
        void initialise_Control();
        class Concurrent_Control* get_ptr_Item_On_list_Of_ptr_Concurrent_Control();

        static void Thread_Concurrency(class OpenAvril::Framework_Server* obj, __int8 concurrent_coreId);
        void Do_Concurrent_Algorithm_For_PraiseEventId(class OpenAvril::Framework_Server* obj, char playerId, __int8 ptr_praiseEventId, class Object* ptr_Algorithm_Subset, class Object* ptr_Input_Subset, class Object* ptr_Output_Subset);

        class Object* get_Algorithm_Subset();
        
        void set_Algorithm_Subset(class Praise0_Algorithm* praise0_algorithm);
        void set_Algorithm_Subset(class Praise1_Algorithm* praise1_algorithm);
        void set_Algorithm_Subset(class Praise2_Algorithm* praise2_algorithm);

    protected:

    private:
        static void set_Concurrent_Control(class OpenAvril::Concurrent_Control* concurrent_control);
    };
}