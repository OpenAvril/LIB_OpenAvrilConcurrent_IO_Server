#pragma once

namespace OpenAvril
{
    class Algorithms
    {
// calsses.

// registers.

    public:
// constructor.
        Algorithms();

// destructor.
        virtual ~Algorithms();

// public.
		void Initialise_list_Of_ptr_Concurrnet(__int8 numberOFThreads);
    // get.
		class Concurrent* Get_Item_On_list_Of_ptr_Concurrent(__int8 threadID);
        class Concurrent** Get_ptr_list_Of_ptr_Concurrent();
        class User_Alg* Get_ptr_User_Algorithms();
	// set.

    private:
// private.
        void Create_list_Of_ptr_Concurrent();
        void Create_ptr_User_Algorithms();
        void Create_ptr_list_Of_ptr_Concurrent();
	// get.
	// set.
		void Set_Item_On_list_Of_ptr_Concurrent(class Concurrent* concurrent, __int8 threadID);
        void Set_ptr_User_Algorithms(class User_Alg* user_Algorithms);
        void Set_ptr_list_Of_ptr_Concurrent(class Concurrent** ptr_List);
    };
}