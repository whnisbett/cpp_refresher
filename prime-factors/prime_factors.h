#if !defined(PRIME_FACTORS_H)
#define PRIME_FACTORS_H
#include <vector>

namespace prime_factors {

    std::vector<int> of(unsigned int n);
    bool is_prime(unsigned int n);

}  // namespace prime_factors

#endif // PRIME_FACTORS_H