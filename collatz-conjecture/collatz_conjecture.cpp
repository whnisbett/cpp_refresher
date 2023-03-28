#include "collatz_conjecture.h"
#include <stdexcept>

namespace collatz_conjecture {

    int steps(int n) {
        if (n <= 0)
            throw std::domain_error("n must be a positive integer.");
        int intermediate {n};
        int n_steps {0};
        while (intermediate > 1)
        {
            if (intermediate % 2 == 0)
                intermediate /= 2;
            else
                intermediate = 3 * intermediate + 1;
            ++n_steps;
        }
        return n_steps;
    }

}  // namespace collatz_conjecture
