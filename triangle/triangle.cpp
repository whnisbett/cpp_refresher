#include "triangle.h"
#include <stdexcept>

namespace {

bool is_equilateral(double a, double b, double c) {
    return (a == b) && (b == c);
}

bool is_isosceles(double a, double b, double c) {
    return ((a == b) != (b == c)) != (c == a);
}

bool is_valid_triangle (double a, double b, double c) {
    bool has_positive_sides = (a > 0) && (b > 0) && (c > 0);
    bool satisfies_inequality = (a + b >= c) && (b + c >= a) && (c + a >= b);
    return has_positive_sides && satisfies_inequality;
}
}

triangle::flavor triangle::kind(double a, double b, double c) {
    if (!is_valid_triangle(a,b,c))
        throw std::domain_error("invalid triangle");
    
    if (is_equilateral(a,b,c))
        return flavor::equilateral;
    else if (is_isosceles(a,b,c))
        return flavor::isosceles;
    else
        return flavor::scalene;
}
 // namespace triangle
