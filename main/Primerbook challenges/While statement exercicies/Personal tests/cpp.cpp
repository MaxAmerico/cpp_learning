#include <iostream>

int main() {
    int value = 20, sub = 1;
     std::cout << "The range between 20 and 10 is:" << " " << value << " ";
     while (value > 10) {
        value = value - sub;
        std::cout << value << " ";
     }
     return 0;
}