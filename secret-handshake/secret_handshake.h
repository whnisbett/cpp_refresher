#if !defined(SECRET_HANDSHAKE_H)
#define SECRET_HANDSHAKE_H
#include <vector>
#include <string>

namespace secret_handshake {

    std::vector<std::string> commands(int sequence);
    void assert_valid_sequence(int sequence);

}  // namespace secret_handshake

#endif // SECRET_HANDSHAKE_H
