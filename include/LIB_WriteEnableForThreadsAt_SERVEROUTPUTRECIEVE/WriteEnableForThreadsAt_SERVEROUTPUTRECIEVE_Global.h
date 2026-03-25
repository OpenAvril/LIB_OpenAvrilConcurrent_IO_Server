#pragma once
namespace OpenAvrilCLIBWriteEnableForThreadsAtSERVEROUTPUTRECIEVE
{
    class WriteEnableForThreadsAt_SERVEROUTPUTRECIEVE_Global
    {
    public:
        WriteEnableForThreadsAt_SERVEROUTPUTRECIEVE_Global();
        ~WriteEnableForThreadsAt_SERVEROUTPUTRECIEVE_Global();
        static void stat_boot0_CLASS_DECLAIRE_WriteEnableForThreadsAt_SERVEROUTPUTRECIEVE_Global();
        static void stat_CLASS_boot1_DEFINE_WriteEnableForThreadsAt_SERVEROUTPUTRECIEVE_Global();
        static void boot3_CLASS_INITIALISE_WriteEnableForThreadsAt_SERVEROUTPUTRECIEVE_Global();
        static void boot0_REG_DECLAIRE_WriteEnableForThreadsAt_SERVEROUTPUTRECIEVE_Global();
        void dyn_REG_boot1_DEFINE_WriteEnableForThreadsAt_SERVEROUTPUTRECIEVE_Global(class WriteEnableForThreadsAt_SERVEROUTPUTRECIEVE_Framework* obj);
        void dyn_REG_boot2_SUBSTANTIATE_WriteEnableForThreadsAt_SERVEROUTPUTRECIEVE_Global(class WriteEnableForThreadsAt_SERVEROUTPUTRECIEVE_Framework* obj);
        void boot3_REG_INITIALISE_WriteEnableForThreadsAt_SERVEROUTPUTRECIEVE_Global(class WriteEnableForThreadsAt_SERVEROUTPUTRECIEVE_Framework* obj);
        void boot4_PGM_INSTANTIATE_WriteEnableForThreadsAt_SERVEROUTPUTRECIEVE_Global(class WriteEnableForThreadsAt_SERVEROUTPUTRECIEVE_Framework* obj);
        std::array<bool, 2> dyn_REG_get_3STATE_flag_IDLE();
        std::array<bool, 2> dyn_REG_get_3STATE_flag_WAIT();
        std::array<bool, 2> dyn_REG_get_3STATE_flag_WRITE();
        uint8_t dyn_REG_get_number_Of_Implemented_Threads();
        static uint8_t stat_CONVERT_ByteArray_to_uint8_t(unsigned char* bytes);
        static class WriteEnableForThreadsAt_SERVEROUTPUTRECIEVE_Framework* stat_CONVERT_ObjPtr_to_Class(void* obj);
        static unsigned char* stat_CONVERT_uint8_t_to_ByteArray(uint8_t uint8_t_Value);
    private:
        static std::array<bool, 2>* _REG_ptr_3STATE_flag_IDLE;
        static std::array<bool, 2>* _REG_ptr_3STATE_flag_WAIT;
        static std::array<bool, 2>* _REG_ptr_3STATE_flag_WRITE;
        static uint8_t* _REG_ptr_number_Of_Implemented_Threads;
        static void stat_REG_boot1_DEFINE_ptr_3STATE_flag_IDLE();
        static void stat_REG_boot1_DEFINE_ptr_3STATE_flag_WAIT();
        static void stat_REG_boot1_DEFINE_ptr_3STATE_flag_WRITE();
        static void stat_REG_boot1_DEFINE_ptr_number_Of_Implemented_Threads();
        static void stat_REG_boot2_SUBSTANTIATE_ptr_3STATE_flag_IDLE();
        static void stat_REG_boot2_SUBSTANTIATE_ptr_3STATE_flag_WAIT();
        static void stat_REG_boot2_SUBSTANTIATE_ptr_3STATE_flag_WRITE();
        static void stat_REG_boot2_SUBSTANTIATE_ptr_number_Of_Implemented_Threads();
        static void stat_REG_boot3_INITIALISE_ptr_3STATE_flag_IDLE();
        static void stat_REG_boot3_INITIALISE_ptr_3STATE_flag_WAIT();
        static void stat_REG_boot3_INITIALISE_ptr_3STATE_flag_WRITE();
        static void stat_REG_boot3_INITIALISE_ptr_number_Of_Implemented_Threads();
        static std::array<bool, 2>* stat_REG_get_ptr_3STATE_flag_IDLE();
        static std::array<bool, 2>* stat_REG_get_ptr_3STATE_flag_WAIT();
        static std::array<bool, 2>* stat_REG_get_ptr_3STATE_flag_WRITE();
        static uint8_t* stat_REG_get_ptr_number_Of_Implemented_Threads();    
    };
}