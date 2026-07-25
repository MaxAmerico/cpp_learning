#include <iostream>

// I am still trying to learn this
int main() {
    int sum = 0;
    int value = 50;

    while (value <=100) {
        sum = sum + value;
        ++sum;
    }
    std::cout << "The result is" << value;
    return 0;
}