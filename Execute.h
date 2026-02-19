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
        void Initialise_Control(__int8 number_Implemented_Cores);
        void Initialise_Libraries();
        void Initialise_Threads(class Framework_Server* obj);
    // get.
        std::thread* Get_Item_On_ptr_list_Of_Threads(__int8 threadID);
        class Execute_Control* Get_ptr_Execute_Control();
        class LaunchEnableForConcurrentThreadsAt_SERVER_Framework* Get_program_ConcurrentQue_Server();
        class WriteEnableForThreadsAt_SERVERINPUTACTION_Framework* Get_program_WriteEnable_ServerInputAction();
        class WriteEnableForThreadsAt_SERVEROUTPUTRECIEVE_Framework* Get_program_WriteEnable_ServerOutputRecieve();
    //set.

    private:
// privte.
        void Create_list_Of_Threads();
        void Create_ptr_list_Of_Threads();
    // get.
        std::list<std::thread*> Get_list_Of_Threads();
        std::list<std::thread*>* Get_ptr_list_Of_Threads();
    // set.
        void Set_Item_On_list_Of_Threads(__int8 threadID, std::thread* thread);
        void Set_program_ConcurrentQue_Server(class LaunchEnableForConcurrentThreadsAt_SERVER_Framework* pgmID);
        void Set_program_WriteEnableStack_ServerInputAction(class WriteEnableForThreadsAt_SERVERINPUTACTION_Framework* pgmID);
        void Set_program_WriteEnableStack_ServerOutputRecieve(class WriteEnableForThreadsAt_SERVEROUTPUTRECIEVE_Framework* pgmID);
        void Set_ptr_Execute_Control(class Execute_Control* execute_Control);
        void Set_ptr_list_Of_Threads()
        
    };
}