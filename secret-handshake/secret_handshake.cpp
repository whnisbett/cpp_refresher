#include "secret_handshake.h"
#include <stdexcept>
#include <iostream>

namespace secret_handshake
{

    void assert_valid_sequence(int sequence)
    {
        if ((sequence < 0) | (sequence > 31))
        {
            throw std::domain_error("Only sequences between 1 and 31 (inclusive on both ends) are allowed.");
        }
    }

    std::vector<std::string> commands(int sequence)
    {
        assert_valid_sequence(sequence);

        std::vector<std::string> command_sequence{};
        if (sequence & 1)
        {
            command_sequence.push_back("wink");
        }
        if (sequence & 2)
        {
            command_sequence.push_back("double blink");
        }
        if (sequence & 4)
        {
            command_sequence.push_back("close your eyes");
        }
        if (sequence & 8)
        {
            command_sequence.push_back("jump");
        }
        if (sequence & 16)
        {
            std::reverse(command_sequence.begin(), command_sequence.end());
        }
        return command_sequence;
    }
} // namespace secret_handshake
