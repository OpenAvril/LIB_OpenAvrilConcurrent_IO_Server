#pragma once
namespace OpenAvrilConcurrency
{
    class Concurrent_Control
    {
	public:
		Concurrent_Control();
		virtual ~Concurrent_Control();
		void selectset_Algorithm_Subset(class Framework_Server* obj, uint8_t ptr_praiseEventId, uint8_t concurrent_threadID);
    };
}