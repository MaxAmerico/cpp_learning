//Exercise 1.11: Write a program that prompts the user for two integers.
//Print each number in the range specified by those two integers.

#include <iostream>

int main() {
    int number1, number2, sum = 0;

     std::cout << "Number 1 and Number 2:";
     std::cin >> number1 >> number2;
      
     std::cout << "The range between " << number1 << " " << "and" << " ";
     std::cout << number2 << " " << "is" << " " << number1 << " ";
      while(number2 > number1 ) {
        number1 = number1 + 1;
        std::cout <<  number1 << " ";
      }
        
      return 0;
} 