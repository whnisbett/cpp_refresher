#include "reverse_string.h"
#include "string"

namespace reverse_string {

std::string reverse_string(const std::string& str) {
    return std::string{str.rbegin(), str.rend()};
}

}  // namespace reverse_string
