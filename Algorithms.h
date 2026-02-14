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
        void Create_ptr_User_Algorithms();
        void Create_list_Of_ptr_Concurrent();
		void Initialise_list_Of_ptr_Concurrnet(__int8 numberOFThreads);
    // get.
        class User_Alg* Get_ptr_User_Algorithms();
		class Concurrent* Get_Item_On_list_Of_ptr_Concurrent(__int8 threadID);
	// set.

    private:
// private.
	// get.
	// set.
        void Set_ptr_User_Algorithms(class User_Alg* user_Algorithms);
		void Set_Item_On_list_Of_ptr_Concurrent(class Concurrent* concurrent, __int8 threadID);
		void Set_list_Of_ptr_Concurrent(class Concurrent* concurrent);
    };
}