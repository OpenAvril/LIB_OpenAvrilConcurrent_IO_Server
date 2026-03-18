#ifdef LIBWRITEENABLEFORTHREADSATSERVEROUTPUTRECIEVE_EXPORTS
#define LIBWRITEENABLEFORTHREADSATSERVEROUTPUTRECIEVE_API __declspec(dllexport)
#else
#define LIBWRITEENABLEFORTHREADSATSERVEROUTPUTRECIEVE_API __declspec(dllimport)
#endif
extern "C"
{
	namespace OpenAvrilCLIBWriteEnableForThreadsAtSERVEROUTPUTRECIEVE
	{
		class LIBWRITEENABLEFORTHREADSATSERVEROUTPUTRECIEVE_API CLIBWriteEnableForThreadsAtSERVEROUTPUTRECIEVE
		{
		public:
			static void* generate_Program();
			static void terminate_Program();
			static void write_End(void*, unsigned char* bytes);
			static void write_Start(void*, unsigned char* bytes);
		private:
			static void stat_create_Framework();
			static class WriteEnableForThreadsAt_SERVEROUTPUTRECIEVE_Framework* stat_get_ptr_Framework();
		};
	}
}