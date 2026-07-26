#include <iostream>

int main() {
    int value = 10, sum = 1;
     while(value > 0) {
        value = value - sum;
        std::cout << "The result is" << " " << value << " ";
     }
    return 0;
}
