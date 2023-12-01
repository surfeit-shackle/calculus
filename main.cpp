// main.cpp
#include <iostream>
#include "square.h"

int main() {
    int number;
    std::cout << "Enter a number: ";
    std::cin >> number;

    int result = Calculator::square(number);

    std::cout << "Square of " << number << " is: " << result << std::endl;

    return 0;
}
