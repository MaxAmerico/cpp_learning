#include <iostream>
int main() {
    int sum = 0;
    for (int n = 10; n >= 1; --n) {
      sum = n - sum;
      ++sum;
    }
    return 0;
}
//CHALLENGE BEATED UP