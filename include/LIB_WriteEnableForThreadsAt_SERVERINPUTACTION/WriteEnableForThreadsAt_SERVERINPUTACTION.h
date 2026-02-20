#pragma once

namespace OpenAvril
{
    class WriteEnableForThreadsAt_SERVERINPUTACTION
    {
    public:
        WriteEnableForThreadsAt_SERVERINPUTACTION();
        virtual ~WriteEnableForThreadsAt_SERVERINPUTACTION();
        void initialise_Control();

        void Write_End(class WriteEnableForThreadsAt_SERVERINPUTACTION_Framework* obj, unsigned char coreId);
        void Write_Start(class WriteEnableForThreadsAt_SERVERINPUTACTION_Framework* obj, unsigned char coreId);

        class WriteEnableForThreadsAt_SERVERINPUTACTION_Global* get_global();
        class WriteEnableForThreadsAt_SERVERINPUTACTION_Control* get_writeEnable_Control();

    private:
        static void set_global(class WriteEnableForThreadsAt_SERVERINPUTACTION_Global* global);
        static void set_writeEnable_Control(class WriteEnableForThreadsAt_SERVERINPUTACTION_Control* writeEnableControl);
    };
}
