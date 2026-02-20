#pragma once

namespace OpenAvril
{
    class WriteEnableForThreadsAt_SERVEROUTPUTRECIEVE
    {
    public:
        WriteEnableForThreadsAt_SERVEROUTPUTRECIEVE();
        virtual ~WriteEnableForThreadsAt_SERVEROUTPUTRECIEVE();
        void initialise_Control();

        void Write_End(class WriteEnableForThreadsAt_SERVEROUTPUTRECIEVE_Framework* obj, unsigned char coreId);
        void Write_Start(class WriteEnableForThreadsAt_SERVEROUTPUTRECIEVE_Framework* obj, unsigned char coreId);

        class WriteEnableForThreadsAt_SERVEROUTPUTRECIEVE_Global* get_global();
        class WriteEnableForThreadsAt_SERVEROUTPUTRECIEVE_Control* get_writeEnable_Control();

    private:
        static void set_global(class WriteEnableForThreadsAt_SERVEROUTPUTRECIEVE_Global* global);
        static void set_writeEnable_Control(class WriteEnableForThreadsAt_SERVEROUTPUTRECIEVE_Control* writeEnableControl);
    };
}
