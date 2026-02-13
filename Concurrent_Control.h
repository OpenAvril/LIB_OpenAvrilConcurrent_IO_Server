#pragma once

namespace OpenAvril
{
    class Concurrent_Control
    {
    public:
        Concurrent_Control();
        virtual ~Concurrent_Control();

        void SelectSet_Algorithm_Subset(class OpenAvril::Framework_Server* obj, __int8 ptr_praiseEventId, __int8 concurrent_coreId);

    protected:

    private:

    };
}