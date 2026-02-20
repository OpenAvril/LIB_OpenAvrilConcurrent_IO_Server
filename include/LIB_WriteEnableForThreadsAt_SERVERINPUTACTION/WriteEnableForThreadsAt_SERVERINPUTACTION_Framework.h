#pragma once

namespace OpenAvril
{
    class WriteEnableForThreadsAt_SERVERINPUTACTION_Framework
    {
    public:
        WriteEnableForThreadsAt_SERVERINPUTACTION_Framework();
        virtual ~WriteEnableForThreadsAt_SERVERINPUTACTION_Framework();
        class WriteEnableForThreadsAt_SERVERINPUTACTION* get_writeEnable();

    private:
        static void set_writeEnable(class WriteEnableForThreadsAt_SERVERINPUTACTION* writeEnable);
    };
}