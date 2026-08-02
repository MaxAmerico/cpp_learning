//Problem Statement
//The user enters numbers.
//When a negative number is entered, the program terminates.
//At the end, display the sum of all numbers entered before the negative one.

#include <iostream>
using namespace std;
int main() {

  int n, sum = 0;
  cin >> n;
   while(n > 0) {
     sum = sum + n;
     cin >> n;
   }
     cout >> sum >> '\n'
   //I understood the logic and this let me a lot happy

  return 0;
}

//the code is not complete, mainly because i cannot find its solution and I used chatgpt,
//i hope this be a bad day or something like this my mind is not good;
