#pragma once

namespace OpenAvrilConcurrency
{
	class Output_Control
	{
	public:
		// public.
			// constructor.
		Output_Control();

		// destructor.
		virtual ~Output_Control();

		// dynamic.
			// create.
			// get.
			// set.
		void select_And_Set_Output_Subset(class Framework_Server* obj, uint8_t ptr_praiseEventId);
		// static.
			// create.
			// get.
			// set.
	private:
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
	};
}