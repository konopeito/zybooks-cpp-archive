// 2.29.1: LAB: Using math functions
#include <iostream>
#include <cmath>
using namespace std;

int main() {
   double x;
   double y;
   double z;
   
   cin >> x >> y >> z;
   
   cout << pow(x , z)<< " " << pow (x,pow(y,z))  << " " << abs(y) << " " << sqrt(pow(x*y,z)) << endl;
   

   return 0;
}