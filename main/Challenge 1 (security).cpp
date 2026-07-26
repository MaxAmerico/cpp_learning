#include <iostream>

int main() {
    int idade;
    std::cout << "Welcomet at facebook adult page";
    std::cout << "How old are you?";
    std::cin >> idade;
    
     if (idade < 18) {
        std::cout << "Please, get out";
     }
     else {
        std::cout << "You're welcome";
     }
     return 0;
}