#pragma once

namespace OpenAvril
{
    class WriteEnableForThreadsAt_SERVEROUTPUTRECIEVE_Framework
    {
    public:
        WriteEnableForThreadsAt_SERVEROUTPUTRECIEVE_Framework();
        virtual ~WriteEnableForThreadsAt_SERVEROUTPUTRECIEVE_Framework();
        class WriteEnableForThreadsAt_SERVEROUTPUTRECIEVE* get_writeEnable();

    private:
        static void set_writeEnable(class WriteEnableForThreadsAt_SERVEROUTPUTRECIEVE* writeEnable);
    };
}