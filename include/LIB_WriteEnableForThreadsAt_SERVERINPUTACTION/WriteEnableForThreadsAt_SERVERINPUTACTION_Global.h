#pragma once

namespace OpenAvril
{
    class WriteEnableForThreadsAt_SERVERINPUTACTION_Global
    {
    public:
        WriteEnableForThreadsAt_SERVERINPUTACTION_Global();
        ~WriteEnableForThreadsAt_SERVERINPUTACTION_Global();
        unsigned char get_number_Of_Implemented_Cores();
        std::vector<bool> get_flag_write_IDLE();
        std::vector<bool> get_flag_write_WAIT();
        std::vector<bool> get_flag_write_WRITE();
    };
}

