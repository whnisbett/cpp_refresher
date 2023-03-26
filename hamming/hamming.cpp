#include "hamming.h"
#include <stdexcept>
namespace hamming {

    int compute(std::string strand1, std::string strand2) {
        if (strand1.length() != strand2.length())
            throw std::domain_error("Strands must be of equal length to compute a hamming distance.");
        int hamming_distance {0};
        for (int i {0}; i < int(strand1.length()); i++)
            if (strand1[i] != strand2[i])
                hamming_distance++;
        return hamming_distance;
    }

}  // namespace hamming
