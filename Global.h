#pragma once
namespace OpenAvrilConcurrency
{
    class Global
    {
    public:
        Global();
        virtual ~Global();
        void dyn_REG_boot1_DEFINE_Global();
        void dyn_REG_boot2_SUBSTANTIATE_Global();
        void dyn_REG_boot3_INITIALISE_Global();
        void dyn_REG_boot4_INSTANTIATE_Global();
        uint8_t dyn_REG_get_Item_number_Of_Implemented_Cores();
        uint8_t dyn_REG_get_Item_number_Of_Praise_Events();
        static void stat_CLASS_boot0_DECLAIRE_Global();
        static void stat_CLASS_boot1_DEFINE_Global();
        static void stat_CLASS_boot3_INITIALISE_Global();
        static void stat_CLASS_boot4_INSTANTIATE_Global();
        static void stat_REG_boot0_DECLAIRE_Global();
        static uint8_t stat_CONVERT_Bool_To_Int(bool bufferSide);
        static double stat_CONVERT_ByteArray_to_Double(unsigned char* bytes);
        static float stat_CONVERT_ByteArray_to_Float(unsigned char* bytes);
        static uint8_t stat_CONVERT_ByteArray_to_uint8_t(unsigned char* bytes);
        static unsigned char* stat_CONVERT_Double_to_ByteArray(double double_Value);
        static unsigned char* stat_CONVERT_Float_to_ByteArray(float float_Value);
        static unsigned char* stat_CONVERT_uint8_t_to_ByteArray(uint8_t uint8_t_Value);
        static class Framework_Server* stat_CONVERT_ObjPtr_to_Class(void* obj);
    private:
        static uint8_t* _stat_REG_ptr_number_Of_Implemented_Cores;
        static uint8_t* _stat_REG__ptr_number_Of_Praise_Events;
        static void stat_REG_boot1_DEFINE_number_Of_Implemented_Cores();
        static void stat_REG_boot1_DEFINE_number_Of_Praise_Events();
        static void stat_REG_boot2_SUBSTANTIATE_number_Of_Implemented_Cores();
        static void stat_REG_boot2_SUBSTANTIATE_number_Of_Praise_Events();
        static void stat_REG_boot3_INITIALISE_number_Of_Implemented_Cores();
        static void stat_REG_boot3_INITIALISE_number_Of_Praise_Events();
        static uint8_t* stat_REG_get_Ptr_number_Of_Implemented_Cores();
        static uint8_t* stat_REG_get_Ptr_number_Of_Praise_Events();
    };
}