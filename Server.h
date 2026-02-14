#pragma once

namespace OpenAvril
{
    class Server
    {
// calsses.

// registers.

    public:
// constructor.
        Server();

// destructor.
        virtual ~Server();

// public.
		void Create_ptr_Algorithms();
		void Create_ptr_Data();
		void Create_ptr_Execute();
		void Create_ptr_Global();
    // get.
        class Algorithms* Get_ptr_Algorithms();
        class Data* Get_ptr_Data();
        class Execute* Get_ptr_Execute();
        class Global* Get_ptr_Global();
    // set.

    private:
// private.
    // get.
    // set.
        void Set_ptr_Algorithms(class Algorithms* algorithms);
        void Set_ptr_Data(class Data* data);
        void Set_ptr_Execute(class Execute* execute);
        void Set_ptr_Global(class Global* global);
    };
}