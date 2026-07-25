#include <iostream>

// I am still trying to learn this
//wtf i can't understand how my code actually worked
int main() {
    int sum = 50;
    int value = 50;

    while (sum <= 100) {
        value+=sum;
        ++sum;
        std::cout << "The result is" << " " << value << " ";
    }
    return 0;
}