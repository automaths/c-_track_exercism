#include "triangle.h"
namespace triangle {
    flavor kind(double const & a, double const & b, double const & c) {
        validate_triangle(a, b, c);
        if (is_equilateral(a, b, c)) {
            return flavor::equilateral;
        } else if (is_isosceles(a, b, c)) {
            return flavor::isosceles;
        } else if (is_degenerate(a, b, c)) {
            return flavor::degenerate;
        } else {
            return flavor::scalene;
        }
    }
    bool is_equilateral (double const & a, double const & b, double const & c) {
        return a == b && b == c;
    }
    bool is_isosceles (double const & a, double const & b, double const & c) {
        return a == b || b == c || a == c;
    }
    bool is_degenerate (double const & a, double const & b, double const & c) {
        return a + b == c || b + c == a || a + c == b;
    }
    bool asserts_triangle_inequality (double const & a, double const & b, double const & c) {
        return a + b >= c && b + c >= a && a + c >= b;
    }
    bool all_sides_are_positive (double const & a, double const & b, double const & c) {
        return  a > 0 && b > 0 && c > 0;
    }
    void validate_triangle (double const & a, double const & b, double const & c) {
        if (!asserts_triangle_inequality(a, b, c) || !all_sides_are_positive(a, b, c))
            throw std::domain_error("Invalid Triangle");
    }
}  // namespace triangle
