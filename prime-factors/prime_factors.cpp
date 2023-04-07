#include "prime_factors.h"

namespace prime_factors
{

    std::vector<int> of(unsigned int n)
    {
    }

    bool is_prime(unsigned int n)
    {
        if (n % 2 == 0)
            return false;

        int range{std::floor(std::sqrt(n))};
        int i{3};
        while (i <= range)
        {
            if (n % i == 0)
                return false;
            i += 2;
        }
        return true;
    }
} // namespace prime_factors
