#pragma once

namespace OpenAvril
{
    class GameInstance
    {
// classes.

// registers.

// pointers.

    public:
// constructor.
        GameInstance();

// destructor.
        virtual ~GameInstance();
        
// public.
    // get.
        class Settings* Get_ptr_Settings();
        class OpenAvril::Player* Get_Item_On_ptr_vector_Of_player(__int8 playerId);
    // set.

    private:
// private.
        void Create_ptr_Settings();
        void Create_ptr_vector_Of_player();
        void Create_vector_Of_player();
    // get.
        std::vector<class OpenAvril::Player*>* Get_ptr_vector_Of_player();
    // set.
        static void Set_ptr_Settings(class Settings* settings);
    };
}