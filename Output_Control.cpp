#include "pch.h"

// pointers.
	// classes.
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
	OpenAvrilConcurrency::Output_Control::Output_Control()
	{
		std::cout << "entered => OpenAvrilConcurrency::Output_Control::Output_Control()" << std::endl;
	}

// destructor.
	OpenAvrilConcurrency::Output_Control::~Output_Control()
	{

	}

// public.
	// dynamic.
		// get.
		// set.
	void OpenAvrilConcurrency::Output_Control::selectset_Output_Subset(OpenAvrilConcurrency::Framework_Server* obj, uint8_t praiseEventId, uint8_t concurrent_threadID)
	{
		switch (praiseEventId)
		{
		case 0:
			obj->dyn_CLASS_get_ptr_Server()->dyn_CLASS_get_ptr_Data()->get_REG_ptr_Item_array_Of_doubleBuffer_Output_WRITE(obj)->set_REG_ptr_Item_PraiseOutputSubset(
				obj->dyn_CLASS_get_ptr_Server()->dyn_CLASS_get_ptr_Data()->get_REG_ptr_Item_array_Of_doubleBuffer_Output_WRITE(obj)->get_REG_out_praiseEventId(), 
				obj->dyn_CLASS_get_ptr_Server()->dyn_CLASS_get_ptr_Data()->get_REG_ptr_Item_array_Of_doubleBuffer_Output_WRITE(obj)->get_REG_ptr_Item_On_List_Of_PraiseOutputSubset(praiseEventId)
			);
			break;
		}
	}
// private.
	// dynamic.
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