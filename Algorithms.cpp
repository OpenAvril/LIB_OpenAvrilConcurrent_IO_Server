#include "pch.h"

// classes.
    class OpenAvril::User_Alg* _ptr_User_Algorithms = NULL;

// registers.
    class OpenAvril::Concurrent* _list_Of_ptr_Concurrent[4] = { NULL, NULL, NULL, NULL };//NUMBER OF CONCURRENT THREADS
    class OpenAvril::Concurrent** _ptr_list_Of_ptr_Concurrent = NULL;
    
// constructor.
    OpenAvril::Algorithms::Algorithms()
    {
        std::cout << "entered => Algorithms()" << std::endl;
		Create_ptr_User_Algorithms();
        Create_list_Of_ptr_Concurrent();
        std::cout << "exiting => Algorithms()" << std::endl;
    }

// destructor.
    OpenAvril::Algorithms::~Algorithms()
    {
        for (__int8 threadID = 0; threadID < 4; threadID++)//NUMBER OF CONCURRENT THREADS
        {
            delete _list_Of_ptr_Concurrent[threadID];
        }
        delete _ptr_User_Algorithms;;
    }

// public.
    void OpenAvril::Algorithms::Initialise_list_Of_ptr_Concurrnet(__int8 numberOFThreads)
    {
        for (__int8 threadID = 0; threadID < numberOFThreads; threadID++)//NUMBER OF CONCURRENT THREADS
        {
            Set_Item_On_list_Of_ptr_Concurrent(new class OpenAvril::Concurrent(), threadID);
			while (Get_ptr_list_Of_ptr_Concurrent() == NULL) {}
        }
    }
    // get.
    OpenAvril::Concurrent* OpenAvril::Algorithms::Get_Item_On_list_Of_ptr_Concurrent(__int8 threadID)
    {
        return _list_Of_ptr_Concurrent[threadID];
    }
    OpenAvril::Concurrent** OpenAvril::Algorithms::Get_ptr_list_Of_ptr_Concurrent()
    {
        return _ptr_list_Of_ptr_Concurrent;
    }
    OpenAvril::User_Alg* OpenAvril::Algorithms::Get_ptr_User_Algorithms()
    {
        return _ptr_User_Algorithms;
    }
    // set.

// private.
    void OpenAvril::Algorithms::Create_list_Of_ptr_Concurrent()
    {
        Set_list_Of_ptr_Concurrent(new class OpenAvril::Concurrent[4]);
        for (__int8 threadID = 0; threadID < 4; threadID++)//NUMBER OF CONCURRENT THREADS
        {
            Set_Item_On_list_Of_ptr_Concurrent(NULL, threadID);
        }
    }
    void OpenAvril::Algorithms::Create_ptr_User_Algorithms()
    {
        Set_ptr_User_Algorithms(new class OpenAvril::User_Alg());
        while (Get_ptr_User_Algorithms() == NULL) {}
    }
    void OpenAvril::Algorithms::Create_ptr_list_Of_ptr_Concurrent()
    {
        Set_ptr_list_Of_ptr_Concurrent(_list_Of_ptr_Concurrent);
    }
    // get.
    // set.
    void OpenAvril::Algorithms::Set_Item_On_list_Of_ptr_Concurrent(Concurrent* concurrent, __int8 threadID)
    {
        _list_Of_ptr_Concurrent[threadID] = concurrent;
    }
    void OpenAvril::Algorithms::Set_ptr_list_Of_ptr_Concurrent(Concurrent** ptr_List)
    {
        _ptr_list_Of_ptr_Concurrent = ptr_List;
    }
    void OpenAvril::Algorithms::Set_ptr_User_Algorithms(User_Alg* user_Algorithms)
    {
        _ptr_User_Algorithms = user_Algorithms;
    }