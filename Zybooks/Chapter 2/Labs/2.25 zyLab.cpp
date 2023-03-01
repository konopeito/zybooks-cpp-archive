// 2.25 LAB: Divide by x
#include <iostream>
using namespace std;

int main() {

   int userNum;
   int x;
   
   cin >> userNum;
   cin >> x;
   
   cout << userNum / x << " ";
   cout << userNum / (x*x) << " ";
   cout << userNum / (x*x*x) << endl;

   return 0;
}
