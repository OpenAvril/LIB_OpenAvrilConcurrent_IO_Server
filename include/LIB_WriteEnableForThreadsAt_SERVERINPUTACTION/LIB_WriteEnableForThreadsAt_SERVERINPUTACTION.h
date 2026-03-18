#ifdef LIBWRITEENABLEFORTHREADSATSERVERINPUTACTION_EXPORTS
#define LIBWRITEENABLEFORTHREADSATSERVERINPUTACTION_API __declspec(dllexport)
#else
#define LIBWRITEENABLEFORTHREADSATSERVERINPUTACTION_API __declspec(dllimport)
#endif
extern "C"
{
	namespace OpenAvrilCLIBWriteEnableForThreadsAtSERVERINPUTACTION
	{
		class LIBWRITEENABLEFORTHREADSATSERVERINPUTACTION_API CLIBWriteEnableForThreadsAtSERVERINPUTACTION
		{
		public:
			static void* generate_Program();
			static void terminate_Program();
			static void write_End(void*, unsigned char* bytes);
			static void write_Start(void*, unsigned char* bytes);
		private:
			static void stat_create_Framework();
			static class WriteEnableForThreadsAt_SERVERINPUTACTION_Framework* stat_get_ptr_Framework();
		};
	}
}