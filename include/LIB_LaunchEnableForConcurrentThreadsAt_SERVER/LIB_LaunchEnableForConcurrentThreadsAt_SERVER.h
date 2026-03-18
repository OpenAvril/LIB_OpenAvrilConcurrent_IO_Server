#ifdef LAUNCHENABLEFORCONCURRENTTHREADSATSERVER_EXPORTS
#define LAUNCHENABLEFORCONCURRENTTHREADSATSERVER_API __declspec(dllexport)
#else
#define LAUNCHENABLEFORCONCURRENTTHREADSATSERVER_API __declspec(dllimport)
#endif
extern "C"
{
	namespace OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtSERVER
	{
		class LAUNCHENABLEFORCONCURRENTTHREADSATSERVER_API CLIBLaunchEnableForConcurrentThreadsAtSERVER
		{
		public:
			static void* generate_Program();
			static void terminate_Progaram();
			static void request_Wait_launch(void* obj, unsigned char* bytes);
			static void thread_End(void* obj, unsigned char* bytes);
			static unsigned char* get_coreId_To_launch(void* obj);
			static bool get_Flag_Active(void* obj);
			static bool get_Flag_ConcurrentCoreState(void* obj, unsigned char* bytes);
			static bool get_Flag_Idle(void* obj);
			static bool get_State_launchBit(void* obj);
			static void set_Flag_ConcurrentCoreState(void* obj, unsigned char* bytes, bool newValue);

		private:
			static void stat_CLASS_create_ptr_Framework();
			static class LaunchEnableForConcurrentThreadsAt_SERVER_Framework* stat_CLASS_get_ptr_Framework();
		};
	}
}