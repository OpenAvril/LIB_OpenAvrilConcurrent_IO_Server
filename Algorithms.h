#pragma once

namespace OpenAvril
{
    class Algorithms
    {
    public:
        Algorithms();
        virtual ~Algorithms();
        void Initialise(__int8 ptr_NumberOfImplementedCores);
        class User_Alg* Get_User_Algorithms();
        static class Concurrent* Get_Concurrent(__int8 index);

    private:
        static class Concurrent* Get_New_Concurrent();
        
        static void Set_Concurrent(class OpenAvril::Concurrent* concurrent, __int8 indexCount);
        static void Set_New_Concurrent(class OpenAvril::Concurrent* concurrent);
        static void Set_User_Algorithms(class OpenAvril::User_Alg* user_Algorithms);
    };
}