#ifdef LIBSERVERIOCONCURRNECY_EXPORTS
#define LIBSERVERIOCONCURRNECY_API __declspec(dllexport)
#else
#define LIBSERVERIOCONCURRNECY_API __declspec(dllimport)
#endif

namespace OpenAvrilConcurrency
{
	class LIBSERVERIOCONCURRNECY_API CLIBConcurrentServerIO 
	{
	public:
// public.
	// constructor.

	// destructor.

	// dynamic.
		static void app_flip_Input_DoubleBuffer(void* obj);
		static void* app_generate_Program();
		static void app_pop_From_Stack_Of_Output(void* obj);
		static void app_push_To_Stack_Of_Input(void* obj);
		static void app_select_set_Intput_Subset(void* obj, unsigned char* bytes);
		// create.
		// get.
		static bool dyn_REG_get_flag_isStackLoaded_Server_InputAction(void* obj);
		static bool dyn_REG_get_flag_isLoaded_Stack_OutputSend(void* obj);
		static bool dyn_REG_get_flag_IsInitialised_OpenAvrilConcurrencyConcurrency(void* obj);
		static unsigned char* dyn_REG_get_PraiseEventId(void* obj);
		static unsigned char* dyn_REG_get_ptr_output_Value(void* obj);
		static void* dyn_PGM_get_program_WriteEnableStack_ServerInputAction(void* obj);
		static void* dyn_PGM_get_program_WriteEnableStack_ServerOutputRecieve(void* obj);
		// set.
		static void dyn_REG_set_Item_input_Value_A(void* obj, unsigned char* bytes);
		static void dyn_REG_set_Item_input_Value_B(void* obj, unsigned char* bytes);
		static void dyn_REG_set_PraiseEventId(void* obj, unsigned char* bytes);
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
		static void* stat_CLASS_get_ptr_Framework_Server();
			// set.
		// registers.
			// create.
			// get.
			// set.
	};
}
