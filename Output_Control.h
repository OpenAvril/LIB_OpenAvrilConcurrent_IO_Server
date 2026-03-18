#pragma once
namespace OpenAvrilConcurrency
{
	class Output_Control
	{
	public:
		Output_Control();
		virtual ~Output_Control();
		void select_And_Set_Output_Subset(class Framework_Server* obj, uint8_t ptr_praiseEventId);
	private:
	};
}