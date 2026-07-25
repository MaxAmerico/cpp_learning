#include <iostream>

// I am still trying to learn this
int main() {
    int sum = 0;
    int value = 50;

    while (sum <= value) {
        sum = sum + value;
        ++sum;
    }
    std::cout << "The result is" << " " << sum;
    return 0;
}