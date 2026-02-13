#include "pch.h"

__int8 OpenAvril::Global::number_Implemented_Cores = NULL;
__int8 OpenAvril::Global::number_Praise_Events = NULL;

OpenAvril::Global::Global()
{
    number_Implemented_Cores = __int8(4);//NUMBER OF CORES
    number_Praise_Events = __int8(2);
}

OpenAvril::Global::~Global()
{
        
}

__int8 OpenAvril::Global::Get_NumCores()
{
    return number_Implemented_Cores;
}
__int8 OpenAvril::Global::Get_NumPraiseEvetns()
{
    return number_Praise_Events;
}
