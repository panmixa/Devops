#include <iostream>
#include "FuncA.h"

int main() {
    // Create an instance of the FuncA class
    FuncA func;

    // Call the calculate method and print the result
    std::cout << "FuncA result: " << func.calculate() << std::endl;

    return 0;
}

