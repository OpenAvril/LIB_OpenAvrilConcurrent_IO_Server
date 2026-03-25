#include "pch.h"
    OpenAvrilConcurrency::Output_Control* OpenAvrilConcurrency::Output::stat_CLASS_ptr_Output_Control;
    uint8_t* OpenAvrilConcurrency::Output::_REG_ptr_Output_praiseEventId;
    uint8_t* OpenAvrilConcurrency::Output::_REG_ptr_Output_playerId;
    std::list<OpenAvrilConcurrency::Object*>* OpenAvrilConcurrency::Output::_REG_ptr_List_Of_PraiseOutputSubset;
// public.
    OpenAvrilConcurrency::Output::Output()
    {
        std::cout << "entered CONSTRUCTOR of Output()." << std::endl;
        stat_CLASS_boot0_DECLAIRE_Output();
        stat_CLASS_boot1_DEFINE_Output();
        stat_CLASS_boot3_INITIALISE_Output();
        stat_REG_boot0_DECLAIRE_Output();
        std::cout << "exiting CONSTRUCTOR of Output()" << std::endl;
    }
    OpenAvrilConcurrency::Output::~Output()
    {
        delete stat_CLASS_ptr_Output_Control;
        delete _REG_ptr_Output_praiseEventId;
        delete _REG_ptr_Output_playerId;
        delete _REG_ptr_List_Of_PraiseOutputSubset;
    }
    OpenAvrilConcurrency::Output_Control* OpenAvrilConcurrency::Output::dyn_CLASS_get_ptr_Output_Control()
    {
        return stat_CLASS_get_ptr_Output_Control();
    }
    void OpenAvrilConcurrency::Output::dyn_REG_boot1_DEFINE_Output(OpenAvrilConcurrency::Framework_Server* obj)
    {
        std::cout << "entered dyn_REG_boot1_DEFINE_Output()" << std::endl;
        stat_REG_boot1_DEFINE_Output_praiseEventId();
        stat_REG_boot1_DEFINE_Output_praiseEventId();
        stat_REG_boot1_DEFINE_Output_List_Of_PraiseOutputSubset();
        std::cout << "exiting dyn_REG_boot1_DEFINE_Output()" << std::endl;
    }
    void OpenAvrilConcurrency::Output::dyn_REG_boot2_SUBSTANTIATE_Output(OpenAvrilConcurrency::Framework_Server* obj)
    {
        std::cout << "entered dyn_REG_boot2_SUBSTANTIATE_Output()" << std::endl;
        stat_REG_boot2_SUBSTANTIATE_Output_playerId();
        stat_REG_boot2_SUBSTANTIATE_Output_playerId();
        stat_REG_boot2_SUBSTANTIATE_List_Of_PraiseOutputSubset(obj);
        std::cout << "exiting dyn_REG_boot2_SUBSTANTIATE_Output()" << std::endl;
    }
    void OpenAvrilConcurrency::Output::dyn_REG_boot3_INITIALISE_Output(OpenAvrilConcurrency::Framework_Server* obj)
    {
        std::cout << "entered dyn_REG_boot3_INITIALISE_Output()" << std::endl;
        stat_REG_boot3_INITIALISE_Output_praiseEventId();
        stat_REG_boot3_INITIALISE_Output_playerId();
        stat_REG_boot3_INITIALISE_List_Of_PraiseOutputSubset(obj, (uint8_t)(0));
        std::cout << "exiting dyn_REG_boot3_INITIALISE_Output()" << std::endl;
    }
    void OpenAvrilConcurrency::Output::dyn_REG_boot4_INSTANTIATE_Output(OpenAvrilConcurrency::Framework_Server* obj)
    {
        std::cout << "entered dyn_REG_boot4_INSTANTIATE_Output()" << std::endl;

        std::cout << "exiting dyn_REG_boot4_INSTANTIATE_Output()" << std::endl;
    }
    uint8_t OpenAvrilConcurrency::Output::dyn_REG_get_ptr_Output_playerId()
    {
        return *stat_REG_get_ptr_Output_praiseEventId();
    }
    uint8_t OpenAvrilConcurrency::Output::dyn_REG_get_ptr_Output_praiseEventId()
    {
        return *stat_REG_get_ptr_Output_playerId();
    }
    OpenAvrilConcurrency::Object* OpenAvrilConcurrency::Output::dyn_REG_get_Item_On_List_Of_PraiseOutputSubset()
    {
        auto temp = stat_REG_get_ptr_List_Of_PraiseOutputSubset()->begin();
        std::advance(temp, 0);
        return *temp;
    }
    void OpenAvrilConcurrency::Output::dyn_REG_set_Output_praiseEventId(uint8_t newPraiseId)
    {
        stat_REG_set_ptr_Output_playerId(newPraiseId);
    }
    void OpenAvrilConcurrency::Output::dyn_REG_set_ptr_Output_praiseEventId(uint8_t new_uint8_t)
    {
        stat_REG_set_ptr_Output_praiseEventId(new_uint8_t);
    }
    void OpenAvrilConcurrency::Output::dyn_REG_set_PraiseOutputSubset_As_Praise0_Output(OpenAvrilConcurrency::Praise0_Output* objPraise_Output)
    {
        auto temp = stat_REG_get_ptr_List_Of_PraiseOutputSubset()->begin();
        std::advance(temp, 0);
        *temp = reinterpret_cast<class Object*>(objPraise_Output);
    }
    //todo.
    void OpenAvrilConcurrency::Output::stat_CLASS_boot0_DECLAIRE_Output()
    {
        std::cout << "entered stat_CLASS_boot0_DECLAIRE_Output()" << std::endl;

        std::cout << "exiting stat_CLASS_boot0_DECLAIRE_Output()" << std::endl;
    }
    void OpenAvrilConcurrency::Output::stat_CLASS_boot1_DEFINE_Output()
    {
        std::cout << "entered stat_CLASS_boot1_DEFINE_Output()" << std::endl;
        stat_CLASS_boot1_DEFINE_Output_Control();
        std::cout << "exiting stat_CLASS_boot1_DEFINE_Output()" << std::endl;
    }
    void OpenAvrilConcurrency::Output::stat_CLASS_boot3_INITIALISE_Output()
    {
        std::cout << "entered stat_CLASS_boot3_INITIALISE_Output()" << std::endl;
        stat_CLASS_boot3_INITIALISE_Output_Control();
        std::cout << "exiting stat_CLASS_boot3_INITIALISE_Output()" << std::endl;
    }
    void OpenAvrilConcurrency::Output::stat_CLASS_boot4_INSTANTIATE_Output()
    {
        std::cout << "entered stat_CLASS_boot4_INSTANTIATE_Output()" << std::endl;

        std::cout << "exiting stat_CLASS_boot4_INSTANTIATE_Output()" << std::endl;
    }
    void OpenAvrilConcurrency::Output::stat_REG_boot0_DECLAIRE_Output()
    {
        std::cout << "entered stat_REG_boot0_DECLAIRE_Output()" << std::endl;

        std::cout << "exiting stat_REG_boot0_DECLAIRE_Output()" << std::endl;
    }
// private.
    void OpenAvrilConcurrency::Output::stat_CLASS_boot1_DEFINE_Output_Control()
    {
        stat_CLASS_ptr_Output_Control = NULL;
    }
    void OpenAvrilConcurrency::Output::stat_CLASS_boot3_INITIALISE_Output_Control()
    {
        stat_CLASS_ptr_Output_Control = new class OpenAvrilConcurrency::Output_Control();
        while (stat_CLASS_get_ptr_Output_Control() == NULL) {}
    }
    OpenAvrilConcurrency::Output_Control* OpenAvrilConcurrency::Output::stat_CLASS_get_ptr_Output_Control()
    {
        return stat_CLASS_ptr_Output_Control;
    }
    void OpenAvrilConcurrency::Output::stat_REG_boot1_DEFINE_Output_praiseEventId()
    {
        _REG_ptr_Output_praiseEventId = NULL;
    }
    void OpenAvrilConcurrency::Output::stat_REG_boot1_DEFINE_Output_playerId()
    {
        _REG_ptr_Output_playerId = NULL;
    }
    void OpenAvrilConcurrency::Output::stat_REG_boot1_DEFINE_Output_List_Of_PraiseOutputSubset()
    {
        _REG_ptr_List_Of_PraiseOutputSubset = NULL;
    }
    void OpenAvrilConcurrency::Output::stat_REG_boot2_SUBSTANTIATE_Output_praiseEventId()
    {
        _REG_ptr_Output_praiseEventId = new uint8_t();
        *_REG_ptr_Output_praiseEventId = (uint8_t)(UINT8_MAX);
    }
    void OpenAvrilConcurrency::Output::stat_REG_boot2_SUBSTANTIATE_Output_playerId()
    {
        _REG_ptr_Output_playerId = new uint8_t();
        *_REG_ptr_Output_playerId = (uint8_t)(UINT8_MAX);
    }
    void OpenAvrilConcurrency::Output::stat_REG_boot2_SUBSTANTIATE_List_Of_PraiseOutputSubset(OpenAvrilConcurrency::Framework_Server* obj)
    {
        _REG_ptr_List_Of_PraiseOutputSubset = new std::list<OpenAvrilConcurrency::Object*>();
        while (stat_REG_get_ptr_List_Of_PraiseOutputSubset() == NULL) {}
        stat_REG_get_ptr_List_Of_PraiseOutputSubset()->resize(1);
    }
    void OpenAvrilConcurrency::Output::stat_REG_boot3_INITIALISE_Output_praiseEventId()
    {
        *_REG_ptr_Output_praiseEventId = (uint8_t)(0);
    }
    void OpenAvrilConcurrency::Output::stat_REG_boot3_INITIALISE_Output_playerId()
    {
        *_REG_ptr_Output_playerId = (uint8_t)(0);
    }
    void OpenAvrilConcurrency::Output::stat_REG_boot3_INITIALISE_List_Of_PraiseOutputSubset(OpenAvrilConcurrency::Framework_Server* obj, uint8_t praiseId)
    {
        stat_CLASS_get_ptr_Output_Control()->app_select_And_Set_Output_Subset(obj, praiseId);
    }
    uint8_t* OpenAvrilConcurrency::Output::stat_REG_get_ptr_Output_praiseEventId()
    {
        return _REG_ptr_Output_praiseEventId;
    }
    uint8_t* OpenAvrilConcurrency::Output::stat_REG_get_ptr_Output_playerId()
    {
        return _REG_ptr_Output_playerId;
    }
    std::list<OpenAvrilConcurrency::Object*>* OpenAvrilConcurrency::Output::stat_REG_get_ptr_List_Of_PraiseOutputSubset()
    {
        return _REG_ptr_List_Of_PraiseOutputSubset;
    }
    void OpenAvrilConcurrency::Output::stat_REG_set_ptr_Output_playerId(uint8_t new_uint8_t)
    {
        *_REG_ptr_Output_praiseEventId = new_uint8_t;
    }
    void OpenAvrilConcurrency::Output::stat_REG_set_ptr_Output_praiseEventId(uint8_t new_uint8_t)
    {
        *_REG_ptr_Output_playerId = new_uint8_t;
    }