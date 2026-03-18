#pragma once
namespace OpenAvrilCLIBWriteEnableForThreadsAtSERVEROUTPUTRECIEVE
{
    class WriteEnableForThreadsAt_SERVEROUTPUTRECIEVE_Global
    {
    public:
        WriteEnableForThreadsAt_SERVEROUTPUTRECIEVE_Global();
        ~WriteEnableForThreadsAt_SERVEROUTPUTRECIEVE_Global();
        void app_REG_initialise_Item_Of_ptr_3STATE_flag_IDLE(std::array<bool, 2>*newINITIALISED_FlagBits);
        void app_REG_initialise_Item_Of_ptr_3STATE_flag_WAIT(std::array<bool, 2>* newINITIALISED_FlagBits);
        void app_REG_initialise_Item_Of_ptr_3STATE_flag_WRITE(std::array<bool, 2>* newINITIALISED_FlagBits);
        void app_REG_initialise_Ptr_number_Of_Implemented_Threads(uint8_t* newValue);
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
        static void stat_REG_create_3STATE_flag_IDLE(std::array<bool, 2>* newDEAFULT_FlagSet);
        static void stat_REG_create_3STATE_flag_WAIT(std::array<bool, 2>* newDEAFULT_FlagSet);
        static void stat_REG_create_3STATE_flag_WRITE(std::array<bool, 2>* newDEAFULT_FlagSet);
        static void stat_REG_create_number_Of_Implemented_Threads(uint8_t* newDEFAULT_Value);
        static std::array<bool, 2>* stat_REG_get_ptr_3STATE_flag_IDLE();
        static std::array<bool, 2>* stat_REG_get_ptr_3STATE_flag_WAIT();
        static std::array<bool, 2>* stat_REG_get_ptr_3STATE_flag_WRITE();
        static uint8_t* stat_REG_get_ptr_number_Of_Implemented_Threads();
        static void stat_REG_set_3STATE_flag_IDLE(std::array<bool, 2> new_FlagBitSet);
        static void stat_REG_set_3STATE_flag_WAIT(std::array<bool, 2> new_FlagBitSet);
        static void stat_REG_set_3STATE_flag_WRITE(std::array<bool, 2> new_FlagBitSet);
        static void stat_REG_set_number_Of_Implemented_Threads(uint8_t newValue);
    };
}