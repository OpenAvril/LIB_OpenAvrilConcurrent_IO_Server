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
    // get.
		class Concurrent* Get_ptr_Item_On_list_Of_ptr_Concurrent(__int8 threadID);
        std::list<class Concurrent*>* Get_ptr_list_Of_ptr_Concurrent();
        class User_Alg* Get_ptr_User_Algorithms();
    // set.

    private:
// private.
        void Create_ptr_list_Of_ptr_Concurrent();
        void Create_ptr_User_Algorithms();
        void Create_ptr_list_Of_ptr_Concurrent();
	// get.
        std::list<class OpenAvril::Concurrent*> Get_list_Of_ptr_Concurrent();
	// set.
        void Set_ptr_list_Of_ptr_Concurrent(std::list<class Concurrent*>* newList);
        void Set_ptr_User_Algorithms(class User_Alg* user_Algorithms);
    };
}