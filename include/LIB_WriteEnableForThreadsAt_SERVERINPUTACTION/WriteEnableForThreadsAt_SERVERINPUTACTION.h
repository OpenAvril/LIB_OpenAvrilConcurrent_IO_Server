#pragma once
namespace OpenAvrilCLIBWriteEnableForThreadsAtSERVERINPUTACTION
{
    class WriteEnableForThreadsAt_SERVERINPUTACTION
    {
    public:
        WriteEnableForThreadsAt_SERVERINPUTACTION();
        virtual ~WriteEnableForThreadsAt_SERVERINPUTACTION();
        static void stat_boot0_CLASS_DECLAIRE_WriteEnableForThreadsAt_SERVERINPUTACTION();
        static void stat_CLASS_boot1_DEFINE_WriteEnableForThreadsAt_SERVERINPUTACTION();
        static void boot3_CLASS_INITIALISE_WriteEnableForThreadsAt_SERVERINPUTACTION();
        static void boot0_REG_DECLAIRE_WriteEnableForThreadsAt_SERVERINPUTACTION();
        void dyn_REG_boot1_DEFINE_WriteEnableForThreadsAt_SERVERINPUTACTION(class WriteEnableForThreadsAt_SERVERINPUTACTION_Framework* obj);
        void dyn_REG_boot2_SUBSTANTIATE_WriteEnableForThreadsAt_SERVERINPUTACTION(class WriteEnableForThreadsAt_SERVERINPUTACTION_Framework* obj);
        void boot3_REG_INITIALISE_WriteEnableForThreadsAt_SERVERINPUTACTION(class WriteEnableForThreadsAt_SERVERINPUTACTION_Framework* obj);
        void boot4_PGM_INSTANTIATE_WriteEnableForThreadsAt_SERVERINPUTACTION(class WriteEnableForThreadsAt_SERVERINPUTACTION_Framework* obj);
        void dyn_app_FUNCT_write_End(class WriteEnableForThreadsAt_SERVERINPUTACTION_Framework* obj, uint8_t coreId);
        void dyn_app_FUNCT_write_Start(class WriteEnableForThreadsAt_SERVERINPUTACTION_Framework* obj, uint8_t coreId);
        class WriteEnableForThreadsAt_SERVERINPUTACTION_Global* dyn_CLASS_get_ptr_Global();
        class WriteEnableForThreadsAt_SERVERINPUTACTION_Control* dyn_CLASS_get_ptr_WriteEnable_Control();
        static class WriteEnableForThreadsAt_SERVERINPUTACTION_Global* _stat_CLASS_ptr_Global;
        static class WriteEnableForThreadsAt_SERVERINPUTACTION_Control* _stat_CLASS_ptr_WriteEnable_Control;
        static void stat_CLASS_boot1_DEFINE_Global();
        static void stat_CLASS_boot1_DEFINE_WriteEnable_Control();
        static void stat_CLASS_boot3_INITIALISE_Global();
        static void stat_CLASS_boot3_INITIALISE_WriteEnable_Control();
        static class WriteEnableForThreadsAt_SERVERINPUTACTION_Global* stat_CLASS_get_ptr_Global();
        static class WriteEnableForThreadsAt_SERVERINPUTACTION_Control* stat_CLASS_get_ptr_WriteEnable_Control();
    };
}