#include <iostream>
#include "FuncA.h"

int main() {
    FuncA func;

<<<<<<< HEAD
    // Example: Calculate sh(x) for x=2.0 (fixed 3 terms)
    double x = 2.0;
    std::cout << "sh(" << x << ") using the first 3 terms: " 
              << func.calculate(x, 5) << std::endl;  // 'n' ignored
=======
    // Example: Calculate sh(x) for x=2.0 using the first 5 terms
    double x = 2.0;
    int n = 5;
    std::cout << "sh(" << x << ") using the first " << n << " terms: " 
              << func.calculate(x, n) << std::endl;
>>>>>>> branchA

    return 0;
}


