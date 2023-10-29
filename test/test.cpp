#include <iostream>
#include <iomanip>

int main() {
    // Header
    std::cout << std::left << std::setw(10) << "x" << std::setw(10) << "f(x)" << std::endl;

    // Data
    double x = 10.0;
    double fx = 1000.0;

    // Print data in the table
    std::cout << std::left << std::setw(10) << x << std::setw(10) << fx << std::endl;

    return 0;
}
