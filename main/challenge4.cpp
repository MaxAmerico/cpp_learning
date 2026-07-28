#include <iostream>

//In this challenge, i need to find out the factorial of a number and print your result;
int main() {

    int number, sum = 1;
    
      
     std::cout << "Put the number here -->" << " ";
     std::cin >> number;
      int keepval = number;
     while (sum < keepval) {
        number = (number * sum);
        ++sum;
    }
    std::cout << "Final result is:" << " " << number;
    return 0;
}
     
     

     