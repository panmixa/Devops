#ifndef FUNCA_H
#define FUNCA_H

#include <cmath> // For pow and factorial calculation

/**
 * @class FuncA
 * @brief A class to compute the sum of terms in the series expansion of sh(x).
 */
class FuncA {
public:
    /**
     * @brief Computes the sum of the first `n` terms in the series expansion of sh(x).
     * @param x The input value for which the series is computed.
     * @param n The number of terms to include in the sum.
     * @return The sum of the first `n` terms in the series expansion of sh(x).
     */
    double calculate(double x, int n) const;

private:
    /**
     * @brief Helper method to compute the factorial of a given number.
     * @param num The input number for which the factorial is computed.
     * @return The factorial of the input number.
     */
    double factorial(int num) const;
};

#endif // FUNCA_H
