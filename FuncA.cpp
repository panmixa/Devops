#include "FuncA.h"

// Compute the sum of the first 3 terms of the series
double FuncA::calculate(double x, int /*n*/) const {
    double sum = 0.0;

    for (int i = 0; i < 3; ++i) {  // Limit to 3 terms
        int power = 2 * i + 1;     // Power of x (odd numbers)
        double term = std::pow(x, power) / factorial(power);
        sum += term;               // Add the term to the sum
    }

    return sum;
}

// Helper method to compute factorial of a number
double FuncA::factorial(int num) const {
    double result = 1.0;

    for (int i = 1; i <= num; ++i) {
        result *= i;
    }

    return result;
}

