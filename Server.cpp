#include "pch.h"

// pointers.
    // classes.
    class OpenAvrilConcurrency::Algorithms* OpenAvrilConcurrency::Server::_stat_CLASS_ptr_Algorithms = NULL;
    class OpenAvrilConcurrency::Data* OpenAvrilConcurrency::Server::_stat_CLASS_ptr_Data = NULL;
    class OpenAvrilConcurrency::Execute* OpenAvrilConcurrency::Server::_stat_CLASS_ptr_Execute = NULL;
    class OpenAvrilConcurrency::Global* OpenAvrilConcurrency::Server::_stat_CLASS_ptr_Global = NULL;
    // registers.

// public.
    // constructor.

    // destructor.

    // dynamic.
        // create.
        // get.
        // set.
    // static.
        // create.
        // get.
        // set.

// private.
    // dynamic.
        // classes.
            // create.
            // get.
            // set.
        // registers.
            // create.
            // get.
            // set.
    // static.
        // classes.
            // create.
            // get.
            // set.
        // registers.
            // create.
            // get.
            // set.

// constructor.
    OpenAvrilConcurrency::Server::Server()
    {
        std::cout << "entered constructor of OpenAvrilConcurrency::Server::Server()" << std::endl;
        stat_CLASS_create_ptr_Global();
        while (stat_CLASS_get_ptr_Global() == NULL) {}
        std::cout << "alpha." << std::endl;
        stat_CLASS_create_ptr_Algorithms();
        while (stat_CLASS_get_ptr_Algorithms() == NULL) {}
        std::cout << "bravo." << std::endl;
        stat_CLASS_create_ptr_Data();
        while (stat_CLASS_get_ptr_Data() == NULL) {}
        std::cout << "charlie." << std::endl;
        stat_CLASS_get_ptr_Data()->initialise_CLASS_Control();
        std::cout << "delta." << std::endl;
        stat_CLASS_create_ptr_Execute();
        while (stat_CLASS_get_ptr_Execute() == NULL) {}
        std::cout << "echo." << std::endl;
        stat_CLASS_get_ptr_Execute()->initialise_CLASS_Control(stat_CLASS_get_ptr_Global()->get_REG_Item_number_Of_Implemented_Cores());
        std::cout << "exiting constructor of OpenAvrilConcurrency::Server::Server()" << std::endl;
    }

// destructor.
    OpenAvrilConcurrency::Server::~Server()
    {
        delete _stat_CLASS_ptr_Global;
        delete _stat_CLASS_ptr_Algorithms;
        delete _stat_CLASS_ptr_Data;
        delete _stat_CLASS_ptr_Execute;
    }

// public.
    // dynamic.
        // get.
        OpenAvrilConcurrency::Algorithms* OpenAvrilConcurrency::Server::get_CLASS_ptr_Algorithms()
        {
            return stat_CLASS_get_ptr_Algorithms();
        }
        OpenAvrilConcurrency::Data* OpenAvrilConcurrency::Server::get_CLASS_ptr_Data()
        {
            return stat_CLASS_get_ptr_Data();
        }
        OpenAvrilConcurrency::Execute* OpenAvrilConcurrency::Server::get_CLASS_ptr_Execute()
        {
            return stat_CLASS_get_ptr_Execute();
        }
        OpenAvrilConcurrency::Global* OpenAvrilConcurrency::Server::get_ptr_CLASS_Global()
        {
            return stat_CLASS_get_ptr_Global();
        }
        // set.

// private.
    // dynamic.
        // get.
        // set.
    // static.
        // classes.
            // create.
        void OpenAvrilConcurrency::Server::stat_CLASS_create_ptr_Algorithms()
        {
            static class OpenAvrilConcurrency::Algorithms* _CLASS_ptr_Algorithms = new class OpenAvrilConcurrency::Algorithms();
            while (stat_CLASS_get_ptr_Algorithms() == NULL) {}
        }
        void OpenAvrilConcurrency::Server::stat_CLASS_create_ptr_Data()
        {
            static class OpenAvrilConcurrency::Data* _CLASS_ptr_Data = new class OpenAvrilConcurrency::Data();
            while (stat_CLASS_get_ptr_Data() == NULL) {}
        }
        void OpenAvrilConcurrency::Server::stat_CLASS_create_ptr_Execute()
        {
            static class OpenAvrilConcurrency::Execute* _CLASS_ptr_Execute = new class OpenAvrilConcurrency::Execute();
            while (stat_CLASS_get_ptr_Execute() == NULL) {}
        }
        void OpenAvrilConcurrency::Server::stat_CLASS_create_ptr_Global()
        {
            static class OpenAvrilConcurrency::Global* _CLASS_ptr_Global = new class OpenAvrilConcurrency::Global();
            while (stat_CLASS_get_ptr_Global() == NULL) {}
        }
            // get.
        OpenAvrilConcurrency::Algorithms* OpenAvrilConcurrency::Server::stat_CLASS_get_ptr_Algorithms()
        {
            return _stat_CLASS_ptr_Algorithms;
        }
        OpenAvrilConcurrency::Data* OpenAvrilConcurrency::Server::stat_CLASS_get_ptr_Data()
        {
            return _stat_CLASS_ptr_Data;
        }
        OpenAvrilConcurrency::Execute* OpenAvrilConcurrency::Server::stat_CLASS_get_ptr_Execute()
        {
            return _stat_CLASS_ptr_Execute;
        }
        OpenAvrilConcurrency::Global* OpenAvrilConcurrency::Server::stat_CLASS_get_ptr_Global()
        {
            return _stat_CLASS_ptr_Global;
        }
            // set.
        // registers.
            // create.
            // get.
            // set.