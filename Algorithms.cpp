#include "pch.h"

class OpenAvril::Concurrent* ptr_Concurrent[4] = { NULL, NULL, NULL, NULL };//NUMBER OF CONCURRENT CORES
class OpenAvril::Concurrent* ptr_New_Concurrent = NULL;
class OpenAvril::User_Alg* ptr_User_Algorithms = NULL;

OpenAvril::Algorithms::Algorithms()
{
    std::cout << "entered => Algorithms()" << std::endl;
    Set_User_Algorithms(new class OpenAvril::User_Alg());
    std::cout << "exiting => Algorithms()" << std::endl;
}

OpenAvril::Algorithms::~Algorithms()
{
    for (__int8 index = 0; index < 4; index++)//NUMBER OF CONCURRENT CORES
    {
        delete ptr_Concurrent[index];
    }
    delete ptr_User_Algorithms;;
}

void OpenAvril::Algorithms::Initialise(__int8 number_Implemented_Cores)
{
    std::cout << "entered => OpenAvril::Algorithms::Initialise()" << std::endl;
    Set_New_Concurrent(new class OpenAvril::Concurrent());
    std::cout << "entered => OpenAvril::Algorithms::Initialise() ALPHA" << std::endl;
    while(Get_New_Concurrent() == NULL) { }
    std::cout << "entered => OpenAvril::Algorithms::Initialise() BRAVO" << std::endl;
    Get_New_Concurrent()->Initialise_Control();
    std::cout << "entered => OpenAvril::Algorithms::Initialise() CHARLIE" << std::endl;
    for (__int8 index = 0; index < (number_Implemented_Cores); index++)
    {
        Set_Concurrent(Get_New_Concurrent(), index);
    }
    std::cout << "entered => OpenAvril::Algorithms::Initialise() ECHO" << std::endl;
    delete ptr_New_Concurrent;
}

OpenAvril::Concurrent* OpenAvril::Algorithms::Get_Concurrent(__int8 index)
{
    return ptr_Concurrent[index];
}
OpenAvril::Concurrent* OpenAvril::Algorithms::Get_New_Concurrent()
{
    return ptr_New_Concurrent;
}
OpenAvril::User_Alg* OpenAvril::Algorithms::Get_User_Algorithms()
{
    return ptr_User_Algorithms;
}
void OpenAvril::Algorithms::Set_Concurrent(OpenAvril::Concurrent* concurrent, __int8 indexCount)
{
	ptr_Concurrent[indexCount] = concurrent;
}
void OpenAvril::Algorithms::Set_New_Concurrent(OpenAvril::Concurrent* concurrent)
{
	ptr_New_Concurrent = concurrent;
}
void OpenAvril::Algorithms::Set_User_Algorithms(OpenAvril::User_Alg* user_Algorithms)
{
	ptr_User_Algorithms = user_Algorithms;
}