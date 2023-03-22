#include "pangram.h"
#include <unordered_set>
#include <iostream>
    
namespace pangram {

    bool is_pangram(std::string str) {
        std::unordered_set<char> chars_set;
        for (const auto& c : str)
            if (std::isalpha(c))
                chars_set.insert(std::tolower(c));
        return chars_set.size() == 26;
    }

}  // namespace pangram
