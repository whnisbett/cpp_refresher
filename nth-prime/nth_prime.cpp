#include "nth_prime.h"
#include <vector>
#include <stdexcept>

namespace nth_prime
{

    long nth(int n)
    {
        if (n < 1)
            throw std::domain_error("The nth prime is undefined for n < 1.");

        // begin with 2 so that we can only search odd numbers
        std::vector<long> primes{2};
        long candidate{3};
        while (int(primes.size()) != n)
        {
            // assume the candidate is prime
            bool is_prime{true};
            // check if it is divisible by any of the prime so far
            for (auto &p : primes)
            {
                if (candidate % p == 0)
                {
                    is_prime = false;
                    break;
                }
            }
            if (is_prime)
            {
                primes.push_back(candidate);
            }
            candidate += 2;
        }
        return primes.back();
    }

} // namespace nth_prime
