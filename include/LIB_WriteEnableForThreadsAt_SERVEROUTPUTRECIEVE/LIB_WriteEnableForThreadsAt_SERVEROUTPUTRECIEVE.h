#ifdef LIBWRITEENABLEFORTHREADSATSERVEROUTPUTRECIEVE_EXPORTS
#define LIBWRITEENABLEFORTHREADSATSERVEROUTPUTRECIEVE_API __declspec(dllexport)
#else
#define LIBWRITEENABLEFORTHREADSATSERVEROUTPUTRECIEVE_API __declspec(dllimport)
#endif

namespace OpenAvril
{
	class LIBWRITEENABLEFORTHREADSATSERVEROUTPUTRECIEVE_API Library_WriteEnableForThreadsAt_SERVEROUTPUTRECIEVE {
	public:
		Library_WriteEnableForThreadsAt_SERVEROUTPUTRECIEVE();
		static void* initialise_WriteEnable();
		static void Write_End(class WriteEnableForThreadsAt_SERVEROUTPUTRECIEVE_Framework* obj, unsigned char coreId);
		static void Write_Start(class WriteEnableForThreadsAt_SERVEROUTPUTRECIEVE_Framework* obj, unsigned char coreId);

	private:
		static class WriteEnableForThreadsAt_SERVEROUTPUTRECIEVE_Framework* get_Framework_WriteEnable();
		static void set_writeEnable(class WriteEnableForThreadsAt_SERVEROUTPUTRECIEVE_Framework* writeEnable);
	};
}