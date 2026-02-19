#include "pch.h"

// classes.
    class OpenAvril::Data_Control* _ptr_Data_Control = NULL;
    class OpenAvril::GameInstance* _ptr_GameInstance = NULL;
    class OpenAvril::User_I* _ptr_User_I = NULL;
    class OpenAvril::User_O* _ptr_User_O = NULL;

// registers.
    std::list<class OpenAvril::Input*> _list_Of_buffer_Input_ReferenceForThread = { NULL };
    std::list<class OpenAvril::Output*> _list_Of_buffer_Output_ReferenceForThread = { NULL };
    std::list<class OpenAvril::Input*> _list_Of_doubleBuffer_Input = { NULL };
    std::list<class OpenAvril::Output*> _list_Of_doubleBuffer_Output = { NULL };
    std::vector<class OpenAvril::Input*> _vector_Of_stack_Of_InputPraise = { NULL };
    std::vector<class OpenAvril::Output*> _vector_Of_stack_Of_OutputPraise = { NULL };

// pointers.
    std::list<class OpenAvril::Input*>* _ptr_list_Of_buffer_Input_ReferenceForThread = NULL;
    std::list<class OpenAvril::Output*>* _ptr_list_Of_buffer_Output_ReferenceForThread = NULL;
    std::list<class OpenAvril::Input*>* _ptr_list_Of_doubleBuffer_Input = NULL;
    std::list<class OpenAvril::Output*>* _ptr_list_Of_doubleBuffer_Output = NULL;
    std::vector<class OpenAvril::Input*>* _ptr_vector_Of_stack_Of_InputPraise = NULL;
    std::vector<class OpenAvril::Output*>* _ptr_vector_Of_stack_Of_OutputPraise = NULL;

// constructor.
    OpenAvril::Data::Data()
    {
        Create_ptr_GameInstance();
        Create_ptr_User_I();
        Create_ptr_User_O();
        Create_list_Of_buffer_Input_ReferenceForThread();
        Create_list_Of_buffer_Output_ReferenceForThread();
        Create_list_Of_doubleBuffer_Input();
        Create_list_Of_doubleBuffer_Output();
        Create_vector_Of_stack_Of_InputPraise();
        Create_vector_Of_stack_Of_OutputPraise();
    }
    
// destructor.
    OpenAvril::Data::~Data()
    {
        delete _ptr_Data_Control;
        delete _ptr_GameInstance;
        delete _ptr_User_I;
        delete _ptr_User_O;
        delete _ptr_list_Of_buffer_Input_ReferenceForThread;
        delete _ptr_list_Of_buffer_Output_ReferenceForThread;
        delete _ptr_list_Of_doubleBuffer_Input;
        delete _ptr_list_Of_doubleBuffer_Output;
        delete _ptr_vector_Of_stack_Of_InputPraise;
        delete _ptr_vector_Of_stack_Of_OutputPraise;
    }

// public.
    void OpenAvril::Data::Initialise_Control(OpenAvril::Data* data)
    {
        data->Set_ptr_Data_Control(new class OpenAvril::Data_Control());
        while (data->Get_ptr_Data_Control() == NULL) {}
    }
    // get.
    class OpenAvril::Input* OpenAvril::Data::Get_doubleBuffer_Input_READ()
    {
        auto temp = Get_ptr_list_Of_doubleBuffer_Input()->begin();
        std::advance(temp, !Get_ptr_Data_Control()->Get_STATE_Of_WRITE_For_list_Of_doubleBuffer_Input());
        return *temp;
    }
    class OpenAvril::Input* OpenAvril::Data::Get_doubleBuffer_Input_WRITE()
    {
        auto temp = Get_ptr_list_Of_doubleBuffer_Input()->begin();
        std::advance(temp, Get_ptr_Data_Control()->Get_STATE_Of_WRITE_For_list_Of_doubleBuffer_Input());
        return *temp;
    }
    class OpenAvril::Output* OpenAvril::Data::Get_doubleBuffer_Output_READ()
    {
        auto temp = Get_ptr_list_Of_doubleBuffer_Output()->begin();
        std::advance(temp, !Get_ptr_Data_Control()->Get_STATE_Of_WRITE_For_list_Of_doubleBuffer_Output());
        return *temp;
    }
    class OpenAvril::Output* OpenAvril::Data::Get_doubleBuffer_Output_WRITE()
    {
        auto temp = Get_ptr_list_Of_doubleBuffer_Output()->begin();
        std::advance(temp, Get_ptr_Data_Control()->Get_STATE_Of_WRITE_For_list_Of_doubleBuffer_Output());
        return *temp;
    }
    OpenAvril::Data_Control* OpenAvril::Data::Get_ptr_Data_Control()
    {
        return _ptr_Data_Control;
    }
    class OpenAvril::Input* OpenAvril::Data::Get_ptr_Item_Of_list_Of_buffer_Input_ReferenceForThread(__int8 threadID)
    {
        auto temp = _ptr_list_Of_buffer_Input_ReferenceForThread->begin();
        std::advance(temp, threadID);
        return *temp;
    }
    class OpenAvril::Output* OpenAvril::Data::Get_ptr_Item_Of_list_Of_buffer_Output_ReferenceForThread(__int8 threadID)
    {
        auto temp = _ptr_list_Of_buffer_Output_ReferenceForThread->begin();
        std::advance(temp, threadID);
        return *temp;
    }
    class OpenAvril::Input* OpenAvril::Data::Get_ptr_Item_On_vector_Of_stack_Of_InputPraise(__int8 slot)
    {
        return _vector_Of_stack_Of_InputPraise[slot];
    }
    class OpenAvril::Output* OpenAvril::Data::Get_ptr_Item_On_vector_Of_stack_Of_OutputPraise(__int8 slot)
    {
        return _vector_Of_stack_Of_OutputPraise[slot];
    }
    // set.

// private.
    void OpenAvril::Data::Create_ptr_Data_Control()
    {
        Set_ptr_Data_Control(new class OpenAvril::Data_Control());
        while (Get_ptr_Data_Control() == NULL) {}
    }
    void OpenAvril::Data::Create_ptr_GameInstance()
    {
        Set_ptr_GameInstance(new class OpenAvril::GameInstance());
        while (Get_ptr_GameInstance() == NULL) {}
    }
    void OpenAvril::Data::Create_ptr_User_I()
    {
        Set_ptr_User_I(new class OpenAvril::User_I());
        while (Get_ptr_User_I() == NULL) { }
    }
    void OpenAvril::Data::Create_ptr_User_O()
    {
        Set_ptr_User_O(new class OpenAvril::User_O());
        while (Get_ptr_User_O() == NULL) {}
    }
    void OpenAvril::Data::Create_list_Of_buffer_Input_ReferenceForThread()
    {
        OpenAvril::Input* newTemp = new class OpenAvril::Input();
        while (newTemp == NULL) { }
        std::list<class OpenAvril::Input*> _list_Of_buffer_Input_ReferenceForThread = { newTemp, newTemp, newTemp, newTemp };//NUMBER OF CONCURRENT THREADS
        Create_ptr_list_Of_buffer_Input_ReferenceForThread();
        for (__int8 threadID = 0; sizeof(Get_ptr_list_Of_buffer_Input_ReferenceForThread()); threadID++)
        {
            while (Get_ptr_Item_Of_list_Of_buffer_Input_ReferenceForThread(threadID) == NULL) {}
        }
        delete newTemp;
    }
    void OpenAvril::Data::Create_list_Of_buffer_Output_ReferenceForThread()
    {
        OpenAvril::Output* newTemp = new class OpenAvril::Output();
        while (newTemp == NULL) {}
        std::list<class OpenAvril::Output*> _list_Of_buffer_Output_ReferenceForThread = { newTemp, newTemp, newTemp, newTemp };//NUMBER OF CONCURRENT THREADS
        Create_ptr_list_Of_buffer_Output_ReferenceForThread();
        for (__int8 threadID = 0; sizeof(Get_ptr_list_Of_buffer_Output_ReferenceForThread()); threadID++)
        {
            while (Get_ptr_Item_Of_list_Of_buffer_Output_ReferenceForThread(threadID) == NULL) {}
        }
        delete newTemp;
    }
    void OpenAvril::Data::Create_list_Of_doubleBuffer_Input()
    {
        OpenAvril::Input* newTemp = new class OpenAvril::Input();
        while (newTemp == NULL) { }
        std::list<class OpenAvril::Input*> _list_Of_doubleBuffer_Input = { newTemp, newTemp };
        Create_ptr_list_Of_doubleBuffer_Input();
        while (Get_doubleBuffer_Input_READ() == NULL) {}
        while (Get_doubleBuffer_Input_WRITE() == NULL) {}
        delete newTemp;
    }
    void OpenAvril::Data::Create_list_Of_doubleBuffer_Output()
    {
        OpenAvril::Output* newTemp = new class OpenAvril::Output();
        while (newTemp == NULL) { }
        std::list<class OpenAvril::Output*> _list_Of_doubleBuffer_Output = { newTemp, newTemp };
        Create_ptr_list_Of_doubleBuffer_Output();
        while (Get_doubleBuffer_Output_READ() == NULL) {}
        while (Get_doubleBuffer_Output_WRITE() == NULL) {}
        delete newTemp;
    }
    void OpenAvril::Data::Create_vector_Of_stack_Of_InputPraise()
    {
        OpenAvril::Input* newTemp = new class OpenAvril::Input();
        while (newTemp == NULL) {}
        std::vector<class OpenAvril::Input*> _vector_Of_stack_Of_InputPraise = { newTemp };
        Create_ptr_vector_Of_stack_Of_InputPraise();
        for (__int8 threadID = 0; threadID < sizeof(Get_ptr_vector_Of_stack_Of_InputPraise()); threadID++)
        {
            while (Get_ptr_Item_On_vector_Of_stack_Of_InputPraise(threadID) == NULL) {}
        }
        delete newTemp;
    }
    void OpenAvril::Data::Create_vector_Of_stack_Of_OutputPraise()
    {
        OpenAvril::Output* newTemp = new class OpenAvril::Output();
        while (newTemp == NULL) {}
        std::vector<class OpenAvril::Output*> _vector_Of_stack_Of_OutputPraise = { newTemp };
        Create_ptr_vector_Of_stack_Of_OutputPraise();
        for (__int8 threadID = 0; threadID < sizeof(Get_ptr_vector_Of_stack_Of_OutputPraise()); threadID++)
        {
            while (Get_ptr_Item_On_vector_Of_stack_Of_OutputPraise(threadID) == NULL) {}
        }
        delete newTemp;
    }
    void OpenAvril::Data::Create_ptr_list_Of_buffer_Input_ReferenceForThread()
    {
        std::list<class OpenAvril::Input*>* _ptr_list_Of_buffer_Input_ReferenceForThread = new std::list<class OpenAvril::Input*>();
        while (Get_ptr_list_Of_buffer_Input_ReferenceForThread() == NULL) {}
        Set_ptr_list_Of_buffer_Input_ReferenceForThread(&_list_Of_buffer_Input_ReferenceForThread);
    }
    void OpenAvril::Data::Create_ptr_list_Of_buffer_Output_ReferenceForThread()
    {
        std::list<class OpenAvril::Output*>* _ptr_list_Of_buffer_Output_ReferenceForThread = new std::list<class OpenAvril::Output*>();
        while (Get_ptr_list_Of_buffer_Output_ReferenceForThread() == NULL) {}
        Set_ptr_list_Of_buffer_Output_ReferenceForThread(&_list_Of_buffer_Output_ReferenceForThread);
    }
    void OpenAvril::Data::Create_ptr_list_Of_doubleBuffer_Input()
    {
        std::list<class OpenAvril::Input*>* _ptr_list_Of_doubleBuffer_Input = new std::list<class OpenAvril::Input*>();
        while (Get_ptr_list_Of_doubleBuffer_Input() == NULL) {}
        Set_ptr_list_Of_doubleBuffer_Input(&_list_Of_doubleBuffer_Input);
    }
    void OpenAvril::Data::Create_ptr_list_Of_doubleBuffer_Output()
    {
        std::list<class OpenAvril::Output*>* _ptr_list_Of_doubleBuffer_Output = new std::list<class OpenAvril::Output*>();
        while (Get_ptr_list_Of_doubleBuffer_Output() == NULL) {}
        Set_ptr_list_Of_doubleBuffer_Output(&_list_Of_doubleBuffer_Output);
    }
    void OpenAvril::Data::Create_ptr_vector_Of_stack_Of_InputPraise()
    {
        std::vector<class OpenAvril::Input*>* _ptr_vector_Of_stack_Of_InputPraise = new std::vector<class OpenAvril::Input*>();
        while (Get_ptr_vector_Of_stack_Of_InputPraise() == NULL) {}
        Set_ptr_vector_Of_stack_Of_InputPraise(&_vector_Of_stack_Of_InputPraise);
    }
    void OpenAvril::Data::Create_ptr_vector_Of_stack_Of_OutputPraise()
    {
        std::list<class OpenAvril::Output*>* _ptr_vector_Of_stack_Of_OutputPraise = new std::list<class OpenAvril::Output*>();
        while (Get_ptr_vector_Of_stack_Of_OutputPraise() == NULL) {}
        Set_ptr_vector_Of_stack_Of_OutputPraise(&_vector_Of_stack_Of_OutputPraise);
    }
    // get.
    OpenAvril::GameInstance* OpenAvril::Data::Get_ptr_GameInstance()
    {
        return _ptr_GameInstance;
    }
    std::list<class OpenAvril::Input*>* OpenAvril::Data::Get_ptr_list_Of_buffer_Input_ReferenceForThread()
    {
        return _ptr_list_Of_buffer_Input_ReferenceForThread;
    }
    std::list<class OpenAvril::Output*>* OpenAvril::Data::Get_ptr_list_Of_buffer_Output_ReferenceForThread()
    {
        return _ptr_list_Of_buffer_Output_ReferenceForThread;
    }
    std::list<class OpenAvril::Input*>* OpenAvril::Data::Get_ptr_list_Of_doubleBuffer_Input()
    {
        return _ptr_list_Of_doubleBuffer_Input;
    }
    std::list<class OpenAvril::Output*>* OpenAvril::Data::Get_ptr_list_Of_doubleBuffer_Output()
    {
        return _ptr_list_Of_doubleBuffer_Output;
    }
    OpenAvril::User_I* OpenAvril::Data::Get_ptr_User_I()
    {
        return _ptr_User_I;
    }
    OpenAvril::User_O* OpenAvril::Data::Get_ptr_User_O()
    {
        return _ptr_User_O;
    }
    std::vector<class OpenAvril::Input*>* OpenAvril::Data::Get_ptr_vector_Of_stack_Of_InputPraise()
    {
        return _ptr_vector_Of_stack_Of_InputPraise;
    }
    std::vector<class OpenAvril::Output*>* OpenAvril::Data::Get_ptr_vector_Of_stack_Of_OutputPraise()
    {
        return _ptr_vector_Of_stack_Of_OutputPraise;
    }
    // set.
    void OpenAvril::Data::Set_ptr_Data_Control(OpenAvril::Data_Control* newClass)
    {
        _ptr_Data_Control = newClass;
    }
    void OpenAvril::Data::Set_ptr_GameInstance(OpenAvril::GameInstance* newClass)
    {
        _ptr_GameInstance = newClass;
    }
    void OpenAvril::Data::Set_ptr_list_Of_buffer_Input_ReferenceForThread(std::list<class Input*>* newListPtr)
    {
        _ptr_list_Of_buffer_Input_ReferenceForThread = newListPtr;
    }
    void OpenAvril::Data::Set_ptr_list_Of_buffer_Output_ReferenceForThread(std::list<class Output*>* newListPtr)
    {
        _ptr_list_Of_buffer_Output_ReferenceForThread = newListPtr;
    }
    void OpenAvril::Data::Set_ptr_list_Of_doubleBuffer_Input(std::list<class Input*>* newListPtr)
    {
        _ptr_list_Of_doubleBuffer_Input = newListPtr;
    }
    void OpenAvril::Data::Set_ptr_list_Of_doubleBuffer_Output(std::list<class Output*>* newListPtr)
    {
        _ptr_list_Of_doubleBuffer_Output = newListPtr;
    }
    void OpenAvril::Data::Set_ptr_User_I(OpenAvril::User_I* newClass)
    {
        _ptr_User_I = newClass;
    }
    void OpenAvril::Data::Set_ptr_User_O(OpenAvril::User_O* newClass)
    {
        _ptr_User_O = newClass;
    }
    void OpenAvril::Data::Set_ptr_vector_Of_stack_Of_InputPraise(std::vector<OpenAvril::Input*>* newStackPtr)
    {
        _ptr_vector_Of_stack_Of_InputPraise = newStackPtr;
    }
    void OpenAvril::Data::Set_ptr_vector_Of_stack_Of_OutputPraise(std::vector<OpenAvril::Output*>* newStackPtr)
    {
        _ptr_vector_Of_stack_Of_OutputPraise = newStackPtr;
    }