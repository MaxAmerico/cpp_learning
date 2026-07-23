#include <iostream>

int main() {
    int numero1;
    int numero2;
    std::cout << "Por favor, escolha 2 numeros:";
    std::cin >> numero1 >> numero2;

    std::cout << "o resultado é:" << numero1 * numero2;

    return 0;
}