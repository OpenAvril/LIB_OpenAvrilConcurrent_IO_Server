#include "pch.h"
// public.
OpenAvrilConcurrency::Output_Control::Output_Control()
{
    std::cout << "entered CONSTRUCTOR of Output_Control()." << std::endl;
    stat_CLASS_boot0_DECLAIRE_Output_Control();
    stat_CLASS_boot1_DEFINE_Output_Control();
    stat_CLASS_boot3_INITIALISE_Output_Control();
    stat_REG_boot0_DECLAIRE_Output_Control();
    std::cout << "exiting CONSTRUCTOR of Output_Control()." << std::endl;
}
OpenAvrilConcurrency::Output_Control::~Output_Control()
{

}
// private.
void OpenAvrilConcurrency::Output_Control::app_select_And_Set_Output_Subset(OpenAvrilConcurrency::Framework_Server* obj, uint8_t praiseEventId)
{
    class OpenAvrilConcurrency::User_Output* user_Output = obj->dyn_CLASS_get_ptr_Server()->dyn_CLASS_get_ptr_Data()->dyn_CLASS_get_ptr_User_Output();
    class Object* objObject = NULL;
    switch (praiseEventId)
    {
    case 0:
        obj->dyn_CLASS_get_ptr_Server()->dyn_CLASS_get_ptr_Data()->dyn_REG_get_ptr_Item_array_Of_doubleBuffer_Output_WRITE(obj)->dyn_REG_set_PraiseOutputSubset_As_Praise0_Output(reinterpret_cast<OpenAvrilConcurrency::Praise0_Output*>(user_Output->dyn_CLASS_get_Item_On_List_Of_ptr_PraiseOutputSubsets(praiseEventId)));
        break;
    }
    delete user_Output;
    delete objObject;
}
void OpenAvrilConcurrency::Output_Control::dyn_REG_boot1_DEFINE_Output_Control(Framework_Server* obj)
{
    std::cout << "entered dyn_REG_boot1_DEFINE_Output_Control()" << std::endl;

    std::cout << "exiting dyn_REG_boot1_DEFINE_Output_Control()" << std::endl;
}
void OpenAvrilConcurrency::Output_Control::dyn_REG_boot2_SUBSTANTIATE_Output_Control(Framework_Server* obj)
{
    std::cout << "entered dyn_REG_boot2_SUBSTANTIATE_Output_Control()" << std::endl;

    std::cout << "exiting dyn_REG_boot2_SUBSTANTIATE_Output_Control()" << std::endl;
}
void OpenAvrilConcurrency::Output_Control::dyn_REG_boot3_INITIALISE_Output_Control(Framework_Server* obj)
{
    std::cout << "entered dyn_REG_boot3_INITIALISE_Output_Control()" << std::endl;

    std::cout << "exiting dyn_REG_boot3_INITIALISE_Output_Control()" << std::endl;
}
void OpenAvrilConcurrency::Output_Control::dyn_REG_boot4_INSTANTIATE_Output_Control(Framework_Server* obj)
{
    std::cout << "entered dyn_REG_boot4_INSTANTIATE_Output_Control()" << std::endl;

    std::cout << "exiting dyn_REG_boot4_INSTANTIATE_Output_Control()" << std::endl;
}
void OpenAvrilConcurrency::Output_Control::stat_CLASS_boot0_DECLAIRE_Output_Control()
{
    std::cout << "entered stat_CLASS_boot0_DECLAIRE_Output_Control()" << std::endl;

    std::cout << "exiting stat_CLASS_boot0_DECLAIRE_Output_Control()" << std::endl;
}
void OpenAvrilConcurrency::Output_Control::stat_CLASS_boot1_DEFINE_Output_Control()
{
    std::cout << "entered stat_CLASS_boot1_DEFINE_Output_Control()" << std::endl;

    std::cout << "exiting stat_CLASS_boot1_DEFINE_Output_Control()" << std::endl;
}
void OpenAvrilConcurrency::Output_Control::stat_CLASS_boot3_INITIALISE_Output_Control()
{
    std::cout << "entered stat_CLASS_boot3_INITIALISE_Output_Control()" << std::endl;

    std::cout << "exiting stat_CLASS_boot3_INITIALISE_Output_Control()" << std::endl;
}
void OpenAvrilConcurrency::Output_Control::stat_CLASS_boot4_INSTANTIATE_Output_Control()
{
    std::cout << "entered stat_CLASS_boot4_INSTANTIATE_Output_Control()" << std::endl;

    std::cout << "exiting stat_CLASS_boot4_INSTANTIATE_Output_Control()" << std::endl;
}
void OpenAvrilConcurrency::Output_Control::stat_REG_boot0_DECLAIRE_Output_Control()
{
    std::cout << "entered stat_REG_boot0_DECLAIRE_Output_Control()" << std::endl;

    std::cout << "exiting stat_REG_boot0_DECLAIRE_Output_Control()" << std::endl;
}
