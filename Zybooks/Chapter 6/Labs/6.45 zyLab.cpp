// 6.45.1: LAB: Fibonacci sequence
#include <iostream>
using namespace std;

int Fibonacci(int n) {
if (n < 0) return -1; // handle negative input
    if (n == 0) return 0; // base case
    if (n == 1) return 1; // base case
    int a = 0, b = 1, c;
    for (int i = 2; i <= n; i++) {
        c = a + b;
        a = b;
        b = c;
    }
    return b;
}

int main() {
   int startNum;
      
   cin >> startNum;
   cout << "Fibonacci(" << startNum << ") is " << Fibonacci(startNum) << endl;

   return 0;
}