#pragma once
namespace OpenAvrilConcurrency
{
    class Input_Control
    {
	public:
		Input_Control();
		virtual ~Input_Control();
		void select_And_Set_Input_Subset(class Framework_Server* obj, uint8_t ptr_praiseEventId);
	private:
    };
}