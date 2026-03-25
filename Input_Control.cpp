#include "pch.h"
// public.
    OpenAvrilConcurrency::Input_Control::Input_Control()
    {
        std::cout << "entered CONSTRUCTOR of Input_Control()." << std::endl;
        stat_CLASS_boot0_DECLAIRE_Input_Control();
        stat_CLASS_boot1_DEFINE_Input_Control();
        stat_CLASS_boot3_INITIALISE_Input_Control();
        stat_REG_boot0_DECLAIRE_Input_Control();
        std::cout << "exiting CONSTRUCTOR of Input_Control()." << std::endl;
    }
    OpenAvrilConcurrency::Input_Control::~Input_Control()
    {

    }
// private.
    void OpenAvrilConcurrency::Input_Control::app_select_And_Set_Input_Subset(OpenAvrilConcurrency::Framework_Server* obj, uint8_t praiseEventId)
    {
        class OpenAvrilConcurrency::User_Input* user_input = obj->dyn_CLASS_get_ptr_Server()->dyn_CLASS_get_ptr_Data()->dyn_CLASS_get_ptr_User_Input();
        class Object* objObject = NULL;
        switch (praiseEventId)
        {
        case 0:
            obj->dyn_CLASS_get_ptr_Server()->dyn_CLASS_get_ptr_Data()->dyn_REG_get_ptr_Item_array_Of_doubleBuffer_Input_WRITE(obj)->dyn_REG_set_PraiseInputSubset_As_Praise0_Input(reinterpret_cast<OpenAvrilConcurrency::Praise0_Input*>(user_input->dyn_CLASS_get_Item_On_List_Of_ptr_PraiseInputSubsets(praiseEventId)));
            break;
        }
        
        delete user_input;
        delete objObject;
    }
    void OpenAvrilConcurrency::Input_Control::dyn_REG_boot1_DEFINE_Input_Control(Framework_Server* obj)
    {
        std::cout << "entered dyn_REG_boot1_DEFINE_Input_Control()" << std::endl;

        std::cout << "exiting dyn_REG_boot1_DEFINE_Input_Control()" << std::endl;
    }
    void OpenAvrilConcurrency::Input_Control::dyn_REG_boot2_SUBSTANTIATE_Input_Control(Framework_Server* obj)
    {
        std::cout << "entered dyn_REG_boot2_SUBSTANTIATE_Input_Control()" << std::endl;

        std::cout << "exiting dyn_REG_boot2_SUBSTANTIATE_Input_Control()" << std::endl;
    }
    void OpenAvrilConcurrency::Input_Control::dyn_REG_boot3_INITIALISE_Input_Control(Framework_Server* obj)
    {
        std::cout << "entered dyn_REG_boot3_INITIALISE_Input_Control()" << std::endl;

        std::cout << "exiting dyn_REG_boot3_INITIALISE_Input_Control()" << std::endl;
    }
    void OpenAvrilConcurrency::Input_Control::dyn_REG_boot4_INSTANTIATE_Input_Control(Framework_Server* obj)
    {
        std::cout << "entered dyn_REG_boot4_INSTANTIATE_Input_Control()" << std::endl;

        std::cout << "exiting dyn_REG_boot4_INSTANTIATE_Input_Control()" << std::endl;
    }
    void OpenAvrilConcurrency::Input_Control::stat_CLASS_boot0_DECLAIRE_Input_Control()
    {
        std::cout << "entered stat_CLASS_boot0_DECLAIRE_Input_Control()" << std::endl;

        std::cout << "exiting stat_CLASS_boot0_DECLAIRE_Input_Control()" << std::endl;
    }
    void OpenAvrilConcurrency::Input_Control::stat_CLASS_boot1_DEFINE_Input_Control()
    {
        std::cout << "entered stat_CLASS_boot1_DEFINE_Input_Control()" << std::endl;

        std::cout << "exiting stat_CLASS_boot1_DEFINE_Input_Control()" << std::endl;
    }
    void OpenAvrilConcurrency::Input_Control::stat_CLASS_boot3_INITIALISE_Input_Control()
    {
        std::cout << "entered stat_CLASS_boot3_INITIALISE_Input_Control()" << std::endl;

        std::cout << "exiting stat_CLASS_boot3_INITIALISE_Input_Control()" << std::endl;
    }
    void OpenAvrilConcurrency::Input_Control::stat_CLASS_boot4_INSTANTIATE_Input_Control()
    {
        std::cout << "entered stat_CLASS_boot4_INSTANTIATE_Input_Control()" << std::endl;

        std::cout << "exiting stat_CLASS_boot4_INSTANTIATE_Input_Control()" << std::endl;
    }
    void OpenAvrilConcurrency::Input_Control::stat_REG_boot0_DECLAIRE_Input_Control()
    {
        std::cout << "entered stat_REG_boot0_DECLAIRE_Input_Control()" << std::endl;

        std::cout << "exiting stat_REG_boot0_DECLAIRE_Input_Control()" << std::endl;
    }
