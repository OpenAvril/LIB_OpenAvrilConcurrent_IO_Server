// The following ifdef block is the standard way of creating macros which make exporting
// from a DLL simpler. All files within this DLL are compiled with the LIBLAUNCHENABLEFORCONCURRENTTHREADSATSERVER_EXPORTS
// symbol defined on the command line. This symbol should not be defined on any project
// that uses this DLL. This way any other project whose source files include this file see
// LIBLAUNCHENABLEFORCONCURRENTTHREADSATSERVER_API functions as being imported from a DLL, whereas this DLL sees symbols
// defined with this macro as being exported.
#ifdef LIBLAUNCHENABLEFORCONCURRENTTHREADSATSERVER_EXPORTS
#define LIBLAUNCHENABLEFORCONCURRENTTHREADSATSERVER_API __declspec(dllexport)
#else
#define LIBLAUNCHENABLEFORCONCURRENTTHREADSATSERVER_API __declspec(dllimport)
#endif

namespace OpenAvril
{
	// This class is exported from the dll
	class LIBLAUNCHENABLEFORCONCURRENTTHREADSATSERVER_API CLIBLaunchEnableForConcurrentThreadsAtSERVER {
		public:
			CLIBLaunchEnableForConcurrentThreadsAtSERVER(void);
			// TODO: add your methods here.
			static void* initialise_LaunchEnableForConcurrentThreadsAt();

			static void Request_Wait_Launch(class LaunchEnableForConcurrentThreadsAt_SERVER_Framework* obj, unsigned char concurrent_CoreId);
			static void Thread_End(class LaunchEnableForConcurrentThreadsAt_SERVER_Framework*, unsigned char concurrent_CoreId);

			static __int8 get_coreId_To_Launch(class LaunchEnableForConcurrentThreadsAt_SERVER_Framework* obj);
			static bool get_Flag_Active(class LaunchEnableForConcurrentThreadsAt_SERVER_Framework* obj);
			static bool get_Flag_ConcurrentCoreState(class LaunchEnableForConcurrentThreadsAt_SERVER_Framework* obj, unsigned char concurrent_CoreId);
			static bool get_Flag_Idle(class LaunchEnableForConcurrentThreadsAt_SERVER_Framework* obj);
			static bool get_State_LaunchBit(class LaunchEnableForConcurrentThreadsAt_SERVER_Framework* obj);
			static void set_state_ConcurrentCore(class LaunchEnableForConcurrentThreadsAt_SERVER_Framework* obj, unsigned char concurrent_CoreId, bool value);

		private:
			static class LaunchEnableForConcurrentThreadsAt_SERVER_Framework* get_LaunchEnableForConcurrentThreadsAt_SERVER_Framework();
			static void set_LaunchEnableForConcurrentThreadsAt_SERVER_Framework(class LaunchEnableForConcurrentThreadsAt_SERVER_Framework* framework);
	};
}
extern LIBLAUNCHENABLEFORCONCURRENTTHREADSATSERVER_API int nLIBLaunchEnableForConcurrentThreadsAtSERVER;

LIBLAUNCHENABLEFORCONCURRENTTHREADSATSERVER_API int fnLIBLaunchEnableForConcurrentThreadsAtSERVER(void);
