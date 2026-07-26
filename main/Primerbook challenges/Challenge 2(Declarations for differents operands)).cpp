#include <iostream>

int main() {
    float number1;
    float number2;

    std::cout <<"Choose 2 numbers:";
    std::cin >> number1 >> number2;

    std::cout << "sum:" << " " << number1 + number2 << " " << "mines:" << " " <<
    number1 - number2 << " " << "multiplier:" << " " << number1 * number2 
    << " " << "division:" << " " << number1 / number2;

    return 0;
}