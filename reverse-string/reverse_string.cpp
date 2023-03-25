#include "reverse_string.h"
#include "string"

namespace reverse_string {

std::string reverse_string(const std::string& str) {
    return std::string{str.rbegin(), str.rend()};
}

std::string simple_reverse_string(std::string str) {
    std::string reversed;
    int length = str.length();

    for (int i = length - 1; i >= 0; i--) {
        reversed += str[i];
    }
    return reversed;

}
}  // namespace reverse_string
