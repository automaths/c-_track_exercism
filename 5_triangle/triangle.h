#if !defined(TRIANGLE_H)
#define TRIANGLE_H
#include <stdexcept>
namespace triangle {
    enum class flavor {
        equilateral,
        isosceles,
        scalene,
        degenerate
    };
    flavor kind(double const & a, double const & b, double const & c);
    void validate_triangle (double const & a, double const & b, double const & c);
    bool all_sides_are_positive (double const & a, double const & b, double const & c);
    bool asserts_triangle_inequality (double const & a, double const & b, double const & c);
    bool is_equilateral (double const & a, double const & b, double const & c);
    bool is_isosceles (double const & a, double const & b, double const & c);
    bool is_degenerate (double const & a, double const & b, double const & c);
}  // namespace triangle
#endif // TRIANGLE_H