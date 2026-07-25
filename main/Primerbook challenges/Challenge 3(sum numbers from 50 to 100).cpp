#include <iostream>

// I am still trying to learn this
//wtf i can't understand how my code actually worked
int main() {
    int sum = 50;
    int value = 50;

    while (sum <= 100) {
        value = value + sum;
        ++sum;
        std::cout << "The result is" << " " << value << " ";
    }
    return 0;
}
//WOW now i can get it, it happens that sum the value plus the sum and then, it gets sum + 1,
//I gonna try to explain, the sum = 50, and the statement while needs to go until the sum = 100,
//the first round starts off 50(value) = 50(value)+ 50(sum), getting 50 = 100, afterwards on second round, 100 = 100(value) + 51(sum)
//i.e 100 = 151; on third round, 151 = 151(value) + 52(sum) = 203, until sum = 100, finishing with 3875
