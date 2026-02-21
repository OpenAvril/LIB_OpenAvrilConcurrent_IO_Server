#include "pch.h"create_out_praiseEventId

// calsses.
    OpenAvril::Output_Control* _ptr_Output_Control = NULL;

// registers.
    __int8 _out_praiseEventId = NULL;
    __int8 _out_playerId = NULL;
    std::list<OpenAvril::Object*> _list_Of_Praise_Out_Subsets = { NULL };

// pointers.
    std::list<OpenAvril::Object*>* _ptr_list_Of_Praise_Out_Subsets = NULL;

    // constructor.
    OpenAvril::Output::Output()
    {
        create_ptr_Output_Control();
        create_out_praiseEventId();
        create_out_playerId();
        create_list_Of_Praise_Out_Subsets();
    }

    // destructor.
    OpenAvril::Output::~Output()
    {
        delete _ptr_Output_Control;
        delete _ptr_list_Of_Praise_Out_Subsets;
    }

    // public.
    void OpenAvril::Output::initialise_Control()
    {
        set_ptr_Output_Control(new class OpenAvril::Output_Control());
        while (get_ptr_Output_Control() == NULL) {}
    }
    // get.
    __int8 OpenAvril::Output::get_out_praiseEventId()
    {
        return _out_praiseEventId;
    }
    __int8 OpenAvril::Output::get_out_playerId()
    {
        return _out_playerId;
    }
    class OpenAvril::Output_Control* OpenAvril::Output::get_ptr_Output_Control()
    {
        return _ptr_Output_Control;
    }
    // set.

// private.
    void OpenAvril::Output::create_ptr_Output_Control()
    {
        set_ptr_Output_Control(new class OpenAvril::Output_Control());
        while (get_ptr_Output_Control() == NULL) {}
    }
    void OpenAvril::Output::create_out_praiseEventId()
    {
        set_out_praiseEventId(INT_MAX);
    }
    void OpenAvril::Output::create_out_playerId()
    {
        set_out_playerId(INT_MAX);
    }
    void OpenAvril::Output::create_list_Of_Praise_Out_Subsets()
    {
        std::list<OpenAvril::Object*> _list_Of_Praise_Out_Subsets = { NULL, NULL, NULL };
        std::list<OpenAvril::Object*>* _ptr_list_Of_Praise_Out_Subsets = new std::list<class OpenAvril::Object*>(3);//NUMBER OF PRAISES.
        while (_ptr_list_Of_Praise_Out_Subsets == NULL) {}
        for (__int8 praiseID = 0; praiseID < sizeof(_list_Of_Praise_Out_Subsets); praiseID++)
        {
            while (get_ptr_Item_On_list_Of_Praise_Out_Subsets(praiseID) == NULL) {}
            auto temp1 = _ptr_list_Of_Praise_Out_Subsets->begin();
            std::advance(temp1, praiseID);
            auto temp2 = _list_Of_Praise_Out_Subsets.begin();
            std::advance(temp2, praiseID);
            temp2 = temp1;
        }
        create_ptr_list_Of_Praise_Out_Subsets();
        set_Subset_OutputBuffer(new class OpenAvril::Praise0_Output());
        set_Subset_OutputBuffer(new class OpenAvril::Praise1_Output());
        set_Subset_OutputBuffer(new class OpenAvril::Praise2_Output());
    }
    void OpenAvril::Output::create_ptr_list_Of_Praise_Out_Subsets()
    {
        _ptr_list_Of_Praise_Out_Subsets = &_list_Of_Praise_Out_Subsets;
    }
    // get.
    __int8 OpenAvril::Output::get_lenght_Of_list_Of_Praise_Out_Subsets()
    {
        return sizeof(_list_Of_Praise_Out_Subsets);
    }
    class OpenAvril::Object* OpenAvril::Output::get_ptr_Item_On_list_Of_Praise_Out_Subsets(__int8 praiseID)
    {
        auto temp = _ptr_list_Of_Praise_Out_Subsets->begin();
        std::advance(temp, praiseID);
        return *temp;
    }
    // set.
    void OpenAvril::Output::set_out_praiseEventId(__int8 value)
    {
        _out_praiseEventId = value;
    }
    void OpenAvril::Output::set_out_playerId(__int8 value)
    {
        _out_playerId = value;
    }
    void OpenAvril::Output::set_ptr_Output_Control(Output_Control* newClass)
    {
        _ptr_Output_Control = newClass;
    }
    void OpenAvril::Output::set_Subset_OutputBuffer(OpenAvril::Praise0_Output* praise0_value)
    {
        auto temp = _ptr_list_Of_Praise_Out_Subsets->begin();
        std::advance(temp, 0);
        *temp = reinterpret_cast<OpenAvril::Object*>(praise0_value);
        while (*temp == NULL) {}
    }
    void OpenAvril::Output::set_Subset_OutputBuffer(OpenAvril::Praise1_Output* praise1_value)
    {
        auto temp = _ptr_list_Of_Praise_Out_Subsets->begin();
        std::advance(temp, 1);
        *temp = reinterpret_cast<OpenAvril::Object*>(praise1_value);
        while (*temp == NULL) {}
    }
    void OpenAvril::Output::set_Subset_OutputBuffer(OpenAvril::Praise2_Output* praise2_value)
    {
        auto temp = _ptr_list_Of_Praise_Out_Subsets->begin();
        std::advance(temp, 2);
        *temp = reinterpret_cast<OpenAvril::Object*>(praise2_value);
        while (*temp == NULL) {}
    }