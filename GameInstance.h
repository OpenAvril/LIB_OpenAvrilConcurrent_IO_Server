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
        class Settings* get_ptr_Settings();
        class OpenAvril::Player* get_Item_On_ptr_vector_Of_player(__int8 playerId);
    // set.

    private:
// private.
        void create_ptr_Settings();
        void create_ptr_vector_Of_player();
        void create_vector_Of_player();
    // get.
        std::vector<class OpenAvril::Player*>* get_ptr_vector_Of_player();
    // set.
        static void set_ptr_Settings(class Settings* settings);
    };
}