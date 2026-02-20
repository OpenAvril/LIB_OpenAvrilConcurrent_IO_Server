#pragma once

namespace OpenAvril
{
    class Execute
    {
// classes.

// registers.

// pointers

    public:
// constructor.
        Execute();

// destructor.
        virtual ~Execute();

// public.
        void initialise_Control(__int8 number_Implemented_Cores);
        void initialise_Libraries();
        void initialise_Threads(class Framework_Server* obj);
    // get.
        std::thread* get_Item_On_ptr_list_Of_Threads(__int8 threadID);
        class Execute_Control* get_ptr_Execute_Control();
        class LaunchEnableForConcurrentThreadsAt_SERVER_Framework* get_program_ConcurrentQue_Server();
        class WriteEnableForThreadsAt_SERVERINPUTACTION_Framework* get_program_WriteEnable_ServerInputAction();
        class WriteEnableForThreadsAt_SERVEROUTPUTRECIEVE_Framework* get_program_WriteEnable_ServerOutputRecieve();
    //set.

    private:
// privte.
        void create_list_Of_Threads();
        void create_ptr_list_Of_Threads();
    // get.
        std::list<std::thread*> get_list_Of_Threads();
        std::list<std::thread*>* get_ptr_list_Of_Threads();
    // set.
        void set_Item_On_list_Of_Threads(__int8 threadID, std::thread* thread);
        void set_program_ConcurrentQue_Server(class LaunchEnableForConcurrentThreadsAt_SERVER_Framework* pgmID);
        void set_program_WriteEnableStack_ServerInputAction(class WriteEnableForThreadsAt_SERVERINPUTACTION_Framework* pgmID);
        void set_program_WriteEnableStack_ServerOutputRecieve(class WriteEnableForThreadsAt_SERVEROUTPUTRECIEVE_Framework* pgmID);
        void set_ptr_Execute_Control(class Execute_Control* execute_Control);
        void set_ptr_list_Of_Threads()
        
    };
}