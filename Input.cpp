#include "pch.h"
    OpenAvrilConcurrency::Input_Control* OpenAvrilConcurrency::Input::stat_CLASS_ptr_Input_Control;
    uint8_t* OpenAvrilConcurrency::Input::_REG_ptr_Input_praiseEventId;
    uint8_t* OpenAvrilConcurrency::Input::_REG_ptr_Input_playerId;
    std::list<OpenAvrilConcurrency::Object*>* OpenAvrilConcurrency::Input::_REG_ptr_List_Of_PraiseInputSubset;
// public.
    OpenAvrilConcurrency::Input::Input()
    {
        std::cout << "entered CONSTRUCTOR of Input()." << std::endl;
        stat_CLASS_boot0_DECLAIRE_Input();
        stat_CLASS_boot1_DEFINE_Input();
        stat_CLASS_boot3_INITIALISE_Input();
        stat_REG_boot0_DECLAIRE_Input();
        std::cout << "exiting CONSTRUCTOR of Input()" << std::endl;
    }
    OpenAvrilConcurrency::Input::~Input()
    {
        delete stat_CLASS_ptr_Input_Control;
        delete _REG_ptr_Input_praiseEventId;
        delete _REG_ptr_Input_playerId;
        delete _REG_ptr_List_Of_PraiseInputSubset;
    }
    OpenAvrilConcurrency::Input_Control* OpenAvrilConcurrency::Input::dyn_CLASS_get_ptr_Input_Control()
    {
        return stat_CLASS_get_ptr_Input_Control();
    }
    void OpenAvrilConcurrency::Input::dyn_REG_boot1_DEFINE_Input(OpenAvrilConcurrency::Framework_Server* obj)
    {
        std::cout << "entered dyn_REG_boot1_DEFINE_Input()" << std::endl;
        stat_REG_boot1_DEFINE_Input_praiseEventId();
        stat_REG_boot1_DEFINE_Input_praiseEventId();
        stat_REG_boot1_DEFINE_Input_List_Of_PraiseInputSubset();
        std::cout << "exiting dyn_REG_boot1_DEFINE_Input()" << std::endl;
    }
    void OpenAvrilConcurrency::Input::dyn_REG_boot2_SUBSTANTIATE_Input(OpenAvrilConcurrency::Framework_Server* obj)
    {
        std::cout << "entered dyn_REG_boot2_SUBSTANTIATE_Input()" << std::endl;
        stat_REG_boot2_SUBSTANTIATE_Input_playerId();
        stat_REG_boot2_SUBSTANTIATE_Input_playerId();
        stat_REG_boot2_SUBSTANTIATE_List_Of_PraiseInputSubset(obj);
        std::cout << "exiting dyn_REG_boot2_SUBSTANTIATE_Input()" << std::endl;
    }
    void OpenAvrilConcurrency::Input::dyn_REG_boot3_INITIALISE_Input(OpenAvrilConcurrency::Framework_Server* obj)
    {
        std::cout << "entered dyn_REG_boot3_INITIALISE_Input()" << std::endl;
        stat_REG_boot3_INITIALISE_Input_praiseEventId();
        stat_REG_boot3_INITIALISE_Input_playerId();
        stat_REG_boot3_INITIALISE_List_Of_PraiseInputSubset(obj, (uint8_t)(0));
        std::cout << "exiting dyn_REG_boot3_INITIALISE_Input()" << std::endl;
    }
    void OpenAvrilConcurrency::Input::dyn_REG_boot4_INSTANTIATE_Input(OpenAvrilConcurrency::Framework_Server* obj)
    {
        std::cout << "entered dyn_REG_boot4_INSTANTIATE_Input()" << std::endl;

        std::cout << "exiting dyn_REG_boot4_INSTANTIATE_Input()" << std::endl;
    }
    uint8_t OpenAvrilConcurrency::Input::dyn_REG_get_ptr_Input_playerId()
    {
        return *stat_REG_get_ptr_Input_praiseEventId();
    }
    uint8_t OpenAvrilConcurrency::Input::dyn_REG_get_ptr_Input_praiseEventId()
    {
        return *stat_REG_get_ptr_Input_playerId();
    }
    OpenAvrilConcurrency::Object* OpenAvrilConcurrency::Input::dyn_REG_get_Item_On_List_Of_PraiseInputSubset()
    {
        auto temp = stat_REG_get_ptr_Item0_PraiseInputSubset()->begin();
        std::advance(temp, 0);
        return *temp;
    }
    void OpenAvrilConcurrency::Input::dyn_REG_set_Input_praiseEventId(uint8_t newPraiseId)
    {
        stat_REG_set_ptr_Input_playerId(newPraiseId);
    }
    void OpenAvrilConcurrency::Input::dyn_REG_set_ptr_Input_praiseEventId(uint8_t new_uint8_t)
    {
        stat_REG_set_ptr_Input_praiseEventId(new_uint8_t);
    }
    void OpenAvrilConcurrency::Input::dyn_REG_set_Item0_PraiseInputSubset(OpenAvrilConcurrency::Praise0_Input* objPraiseSubset)
    {
        auto temp = stat_REG_get_ptr_Item0_PraiseInputSubset()->begin();
        std::advance(temp, 0);
        *temp = reinterpret_cast<OpenAvrilConcurrency::Object*>(objPraiseSubset);
    }
    //todo.
    void OpenAvrilConcurrency::Input::stat_CLASS_boot0_DECLAIRE_Input()
    {
        std::cout << "entered stat_CLASS_boot0_DECLAIRE_Input()" << std::endl;

        std::cout << "exiting stat_CLASS_boot0_DECLAIRE_Input()" << std::endl;
    }
    void OpenAvrilConcurrency::Input::stat_CLASS_boot1_DEFINE_Input()
    {
        std::cout << "entered stat_CLASS_boot1_DEFINE_Input()" << std::endl;
        stat_CLASS_boot1_DEFINE_Input_Control();
        std::cout << "exiting stat_CLASS_boot1_DEFINE_Input()" << std::endl;
    }
    void OpenAvrilConcurrency::Input::stat_CLASS_boot3_INITIALISE_Input()
    {
        std::cout << "entered stat_CLASS_boot3_INITIALISE_Input()" << std::endl;
        stat_CLASS_boot3_INITIALISE_Input_Control();
        std::cout << "exiting stat_CLASS_boot3_INITIALISE_Input()" << std::endl;
    }
    void OpenAvrilConcurrency::Input::stat_CLASS_boot4_INSTANTIATE_Input()
    {
        std::cout << "entered stat_CLASS_boot4_INSTANTIATE_Input()" << std::endl;

        std::cout << "exiting stat_CLASS_boot4_INSTANTIATE_Input()" << std::endl;
    }
    void OpenAvrilConcurrency::Input::stat_REG_boot0_DECLAIRE_Input()
    {
        std::cout << "entered stat_REG_boot0_DECLAIRE_Input()" << std::endl;

        std::cout << "exiting stat_REG_boot0_DECLAIRE_Input()" << std::endl;
    }
// private.
    void OpenAvrilConcurrency::Input::stat_CLASS_boot1_DEFINE_Input_Control()
    {
        stat_CLASS_ptr_Input_Control = NULL;
    }
    void OpenAvrilConcurrency::Input::stat_CLASS_boot3_INITIALISE_Input_Control()
    {
        stat_CLASS_ptr_Input_Control = new class OpenAvrilConcurrency::Input_Control();
        while(stat_CLASS_get_ptr_Input_Control() == NULL) { }
    }
    OpenAvrilConcurrency::Input_Control* OpenAvrilConcurrency::Input::stat_CLASS_get_ptr_Input_Control()
    {
        return stat_CLASS_ptr_Input_Control;
    }
    void OpenAvrilConcurrency::Input::stat_REG_boot1_DEFINE_Input_praiseEventId()
    {
        _REG_ptr_Input_praiseEventId = NULL;
    }
    void OpenAvrilConcurrency::Input::stat_REG_boot1_DEFINE_Input_playerId()
    {
        _REG_ptr_Input_playerId = NULL;
    }
    void OpenAvrilConcurrency::Input::stat_REG_boot1_DEFINE_Input_List_Of_PraiseInputSubset()
    {
        _REG_ptr_List_Of_PraiseInputSubset = NULL;
    }
    void OpenAvrilConcurrency::Input::stat_REG_boot2_SUBSTANTIATE_Input_praiseEventId()
    {
        _REG_ptr_Input_praiseEventId = new uint8_t();
        *_REG_ptr_Input_praiseEventId = (uint8_t)(UINT8_MAX);
    }
    void OpenAvrilConcurrency::Input::stat_REG_boot2_SUBSTANTIATE_Input_playerId()
    {
        _REG_ptr_Input_playerId = new uint8_t();
        *_REG_ptr_Input_playerId = (uint8_t)(UINT8_MAX);
    }
    void OpenAvrilConcurrency::Input::stat_REG_boot2_SUBSTANTIATE_List_Of_PraiseInputSubset(OpenAvrilConcurrency::Framework_Server* obj)
    {
        _REG_ptr_List_Of_PraiseInputSubset = new std::list<class OpenAvrilConcurrency::Object*>();
        while (stat_REG_get_ptr_Item0_PraiseInputSubset() == NULL) { }
        stat_REG_get_ptr_Item0_PraiseInputSubset()->resize(uint8_t(1));
        auto temp = stat_REG_get_ptr_Item0_PraiseInputSubset()->begin();
        std::advance(temp, uint8_t(0));
        *temp = NULL;
    }
    void OpenAvrilConcurrency::Input::stat_REG_boot3_INITIALISE_Input_praiseEventId()
    {
        *_REG_ptr_Input_praiseEventId = (uint8_t)(0);
    }
    void OpenAvrilConcurrency::Input::stat_REG_boot3_INITIALISE_Input_playerId()
    {
        *_REG_ptr_Input_playerId = (uint8_t)(0);
    }
    void OpenAvrilConcurrency::Input::stat_REG_boot3_INITIALISE_List_Of_PraiseInputSubset(OpenAvrilConcurrency::Framework_Server* obj, uint8_t praiseId)
    {
        stat_CLASS_get_ptr_Input_Control()->app_select_And_Set_Input_Subset(obj, praiseId);
    }
    uint8_t* OpenAvrilConcurrency::Input::stat_REG_get_ptr_Input_praiseEventId()
{
    return _REG_ptr_Input_praiseEventId;
}
    uint8_t* OpenAvrilConcurrency::Input::stat_REG_get_ptr_Input_playerId()
    {
        return _REG_ptr_Input_playerId;
    }
    std::list<OpenAvrilConcurrency::Object*>* OpenAvrilConcurrency::Input::stat_REG_get_ptr_Item0_PraiseInputSubset()
    {
        return _REG_ptr_List_Of_PraiseInputSubset;
    }
    void OpenAvrilConcurrency::Input::stat_REG_set_ptr_Input_playerId(uint8_t new_uint8_t)
    {
        *_REG_ptr_Input_praiseEventId = new_uint8_t;
    }
    void OpenAvrilConcurrency::Input::stat_REG_set_ptr_Input_praiseEventId(uint8_t new_uint8_t)
    {
        *_REG_ptr_Input_playerId = new_uint8_t;
    }
