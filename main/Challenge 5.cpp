#include <iostream>

int main() {
    int number = 1;
    int sum = 0;
     while(sum <= 10) {
        sum = number + sum;
        ++number;
        std::cout << sum;
     }
}