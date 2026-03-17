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
// constructor.
		CLIBConcurrentServerIO(void);

// destructor.

// public.
	// dynamic.
		static void* generate_Program();
		static void flip_Input_DoubleBuffer(void* obj);
		static void pop_From_Stack_Of_Output(void* obj);
		static void push_To_Stack_Of_Input(void* obj);
		static void select_set_Intput_Subset(void* obj, unsigned char* bytes);
		// get.
		static bool get_flag_isStackLoaded_Server_InputAction(void* obj);
		static bool get_flag_isLoaded_Stack_OutputSend(void* obj);
		static bool get_flag_IsInitialised_OpenAvrilConcurrencyConcurrency(void* obj);
		static void* get_program_WriteEnableStack_ServerInputAction(void* obj);
		static void* get_program_WriteEnableStack_ServerOutputRecieve(void* obj);
		// set.
// Praise Event Id
		// get.
		static unsigned char* get_PraiseEventId(void* obj);
		// set.
		static void set_PraiseEventId(void* obj, unsigned char* bytes);
// Praise 0 Data
		// get.
		static unsigned char* get_REG_ptr_output_Value(void* obj);
		// set.
		static void set_Item_input_Value_A(void* obj, unsigned char* bytes);
		static void set_Item_input_Value_B(void* obj, unsigned char* bytes);

	private:
// private.
	// dynamic.
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