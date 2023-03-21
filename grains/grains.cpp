#include "grains.h"
#include <cmath>

namespace grains {
    unsigned long long square(int sq) {
        return pow(2, sq-1);
    }

    unsigned long long total() {
        unsigned long long grain_count = 0;
        for (int i = 64; i > 0; i--)
        {
            grain_count += square(i);
        }
        return grain_count;
    }

}  // namespace grains
