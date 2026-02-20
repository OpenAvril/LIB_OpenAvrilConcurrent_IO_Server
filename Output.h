#pragma once

namespace OpenAvril
{
    class Output
    {
// calsses.

// registers.

    public:
// constructor.
        Output();

// destructor.
        virtual ~Output();

// public.
        void initialise_Control();
    // get.
        __int8 get_out_praiseEventId();
        __int8 get_out_playerId();
        class Output_Control* get_ptr_Output_Control();
        class Object* get_ptr_Item_On_list_Of_Praise_Out_Subsets(__int8 praiseID);
    // set.

// private.
        void create_ptr_Output_Control();
        void create_out_praiseEventId();
        void create_out_playerId();
        void create_list_Of_Praise_Out_Subsets();
        void create_ptr_list_Of_Praise_Out_Subsets();
    // get.
        __int8 get_lenght_Of_list_Of_Praise_Out_Subsets();
    // set.
        void set_out_praiseEventId(__int8 praiseEventId);
        void set_out_playerId(__int8 praiseEventId);
        void set_ptr_Output_Control(class Output_Control* newClass);
        void set_Subset_OutputBuffer(class Praise0_Output* value);
    };
}