#pragma once

namespace OpenAvril
{
    class Output_Control
    {
    public:
        Output_Control();
        virtual ~Output_Control();

        void Selectset_Output_Subset(class Framework_Server* obj, __int8 ptr_praiseEventId, __int8 concurrent_coreId);

    protected:

    private:

    };
}