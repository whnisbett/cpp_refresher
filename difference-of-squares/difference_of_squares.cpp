#include "difference_of_squares.h"
#include <math.h>

namespace difference_of_squares {

    long square_of_sum(int n) {
        return pow(n * (n + 1) / 2, 2);
    }
    long sum_of_squares(int n) {
        long result {0};
        for (int i = n; i > 0; i--) {
            result += pow(i, 2);
        }
        return result;
    }
    long difference(int n) {
        return square_of_sum(n) - sum_of_squares(n);
    }

}  // namespace difference_of_squares
