//Challenge 3– Smart Counting

//Read two integers. If the first is less than the second, print all numbers in ascending order up to the second.
//Otherwise, print them all in descending order down to the second.

#include <iostream>
using namespace std;
int main() {
     int a;
     int b;

     cin >> a >> b;

        if (a <= b) {
            while (a <= b ) {
                cout << a << '\n';

                ++a; 
            }
        }
        else {
            while (a >= b) {
                cout << a << '\n';
                --a;
            }
        }
        return 0;
     }
    
//i finally can WITHOUT chatgpt
