#include "pch.h"
OpenAvrilConcurrency::Concurrent_Control::Concurrent_Control()
{
	std::cout << "entered CONSTRUCTOR Concurrent()" << std::endl;
	std::cout << "exiting CONSTRUCTOR Concurrent()" << std::endl;
}
OpenAvrilConcurrency::Concurrent_Control::~Concurrent_Control()
{

}
void OpenAvrilConcurrency::Concurrent_Control::selectset_Algorithm_Subset(OpenAvrilConcurrency::Framework_Server* obj, uint8_t praiseEventId, uint8_t concurrent_threadID)
{
	switch (praiseEventId)
	{
	case 0:
		obj->dyn_CLASS_get_ptr_Server()->dyn_CLASS_get_ptr_Algorithms()->dyn_CLASS_get_Item_On_list_Of_ptr_Concurrent(concurrent_threadID)->get_CLASS_ptr_Concurrent_Control()->selectset_Algorithm_Subset(obj, praiseEventId, concurrent_threadID);
		break;
	}
}	