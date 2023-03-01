// 6.22.1: LAB: Step counter
#include <iostream>
#include <iomanip>
using namespace std;

int FeetToSteps(double userFeet){
   return userFeet/2.5;
}

int main() {
   double feet;
   cin>>feet;
   cout << fixed << setprecision(2); // set the output format to two decimal places
  cout << FeetToSteps(feet) << endl;

   return 0;
}
