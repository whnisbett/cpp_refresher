#include "prime_factors.h"
#include <iostream>

namespace prime_factors
{

    std::vector<int> of(int n)
    {
        std::vector<int> factors{};
        int quotient{n};

        // make quotient odd so we only have to search odd numbers
        while (quotient % 2 == 0)
        {
            factors.push_back(2);
            quotient /= 2;
        }

        int f{3};
        // a prime factor will always exist on the interval [2, sqrt(quotient)]
        // except when quotient itself is prime
        while (f <= int(std::floor(std::sqrt(quotient))))
        {
            // if we find a prime factor, add it and restart the walk
            if (is_prime(f) && (quotient % f == 0))
            {
                factors.push_back(f);
                quotient /= f;
                f = 3;
            }
            else
                f += 2;
        }
        // if we make it past sqrt(quotient) without finding a factor
        // the quotient itself must be prime, so add it to the factors
        if (quotient != 1)
            factors.push_back(quotient);
        return factors;
    }

    bool is_prime(int n)
    {
        if (n % 2 == 0)
            return false;

        int range{int(std::floor(std::sqrt(n)))};
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
