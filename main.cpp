#include <iostream>
#include "FuncA.h"

int main() {
    FuncA func;

    // Example: Calculate sh(x) for x=2.0 using the first 5 terms
    double x = 2.0;
    int n = 5;
    std::cout << "sh(" << x << ") using the first " << n << " terms: " 
              << func.calculate(x, n) << std::endl;

    return 0;
}


