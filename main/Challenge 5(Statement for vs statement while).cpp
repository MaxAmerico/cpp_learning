#include <iostream>

int main() {
    int number = 1;
    int sum = 0;
     while(sum <= 10) {
        sum = number + sum;
        ++number;
        std::cout << sum;
     }
     int sum2 = 0;

     for (int value = 1; value <= 10; ++value )
      sum2 = sum2 + value;

     std::cout << "The result is:" << " " << value;
     return 0;
     
}