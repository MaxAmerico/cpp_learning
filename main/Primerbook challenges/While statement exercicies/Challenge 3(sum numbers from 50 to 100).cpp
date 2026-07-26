#include <iostream>


int main() {
    int sum = 50;
    int value = 50;

    while (sum <= 100) {
        value+=sum;
        ++sum;
    }
     std::cout << "The result is" << " " << value << " ";
     return 0;
}