#include "sum_of_multiples.h"
#include <unordered_set>
#include <numeric>

namespace sum_of_multiples {

    int to(std::vector<int> factors, int max_n)
    {
        std::unordered_set<int> multiples {};
        for (auto& f : factors)
            for (int i{f}; i < max_n; i+=f)
                multiples.insert(i);
        return std::accumulate(multiples.begin(), multiples.end(), 0);
    }

}  // namespace sum_of_multiples
