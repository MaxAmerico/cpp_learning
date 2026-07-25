#include <iostream>

// I am still trying to learn this
int main() {
    int sum = 1;
    int value = 50;

    while (sum <= 50) {
        value = sum + value;
        ++sum;
        std::cout << "The result is" << " " << value << " ";
    }
    return 0;
}