#ifndef FUNCA_H
#define FUNCA_H

#include <cmath> // For pow and factorial calculation

// Declaration of the FuncA class
class FuncA {
public:
    // Public method to compute the sum of the first n terms
    double calculate(double x, int n) const;

private:
    // Helper method to compute factorial
    double factorial(int num) const;
};

#endif // FUNCA_H


