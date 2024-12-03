#include <iostream>
#include "FuncA.h"

int main() {
    FuncA func;

    // Example: Calculate sh(x) for x=2.0 (fixed 3 terms)
    double x = 2.0;
    std::cout << "sh(" << x << ") using the first 3 terms: " 
              << func.calculate(x, 5) << std::endl;  // 'n' ignored

    return 0;
}

