#pragma once
namespace OpenAvrilCLIBWriteEnableForThreadsAtSERVERINPUTACTION
{
    class WriteEnableForThreadsAt_SERVERINPUTACTION
    {
    public:
        WriteEnableForThreadsAt_SERVERINPUTACTION();
        virtual ~WriteEnableForThreadsAt_SERVERINPUTACTION();
        void app_initialise_Control(class WriteEnableForThreadsAt_SERVERINPUTACTION_Framework* obj);
        void dyn_write_End(class WriteEnableForThreadsAt_SERVERINPUTACTION_Framework* obj, uint8_t coreId);
        void dyn_write_Start(class WriteEnableForThreadsAt_SERVERINPUTACTION_Framework* obj, uint8_t coreId);
        class WriteEnableForThreadsAt_SERVERINPUTACTION_Global* dyn_CLASS_get_ptr_Global();
        class WriteEnableForThreadsAt_SERVERINPUTACTION_Control* dyn_CLASS_get_ptr_WriteEnable_Control();
        static class WriteEnableForThreadsAt_SERVERINPUTACTION_Global* _stat_CLASS_ptr_Global;
        static class WriteEnableForThreadsAt_SERVERINPUTACTION_Control* _stat_CLASS_ptr_WriteEnable_Control;
        static void stat_CLASS_create_ptr_Global();
        static void stat_CLASS_create_ptr_WriteEnable_Control();
        static class WriteEnableForThreadsAt_SERVERINPUTACTION_Global* stat_CLASS_get_ptr_Global();
        static class WriteEnableForThreadsAt_SERVERINPUTACTION_Control* stat_CLASS_get_ptr_WriteEnable_Control();
    };
}