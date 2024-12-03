#include "FuncA.h"

// Compute the sum of the first n terms of the series
double FuncA::calculate(double x, int n) const {
    double sum = 0.0;

    // Loop through the first n terms
    for (int i = 0; i < n; ++i) {
        int power = 2 * i + 1;        // Power of x (odd numbers: 1, 3, 5, ...)
        double term = std::pow(x, power) / factorial(power); // Compute each term
        sum += term;                  // Add the term to the sum
    }

    return sum; // Return the total sum
}

// Helper method to compute factorial of a number
double FuncA::factorial(int num) const {
    double result = 1.0;

    // Compute the factorial using a loop
    for (int i = 1; i <= num; ++i) {
        result *= i;
    }

    return result; // Return the computed factorial
}

