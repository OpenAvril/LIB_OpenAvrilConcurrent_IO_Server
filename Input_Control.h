#pragma once

namespace OpenAvril
{
    class Input_Control
    {
    public:
        Input_Control();
        virtual ~Input_Control();
        
        void Selectset_Input_Subset(class Framework_Server* obj, __int8 ptr_praiseEventId);

    protected:

    private:

    };
}