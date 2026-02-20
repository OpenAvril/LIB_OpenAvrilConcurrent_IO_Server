#pragma once

namespace OpenAvril
{
    class Output
    {
    public:
        Output();
        virtual ~Output();
        void initialise_Control();

        class Output_Control* get_control_Of_Output();
        class Object* get_praiseOutputBuffer_Subset();
        __int8 get_out_praiseEventId();
        __int8 get_out_playerId();

        void set_praiseEventId(__int8 value);
        void set_out_playerId(__int8 value);
        void set_OutputBuffer_Subset(class Praise0_Output* praise0_value);
        void set_OutputBuffer_Subset(class Praise1_Output* praise0_value);
        void set_OutputBuffer_Subset(class Praise2_Output* praise0_value);
// user implementation - ABCDE        

    protected:

    private:
        static void set_control_Of_Output(class Output_Control* output_Control);
    };
}