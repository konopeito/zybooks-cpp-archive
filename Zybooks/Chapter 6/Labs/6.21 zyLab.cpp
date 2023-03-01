// 6.21 LAB: Track laps to miles
#include <iostream>
#include <iomanip>                 // For setprecision
using namespace std;

double LapsToMiles(double userLaps){
   return userLaps *0.25;
}

int main() {
   /* Type your code here. Your code must call the function.  */
   double laps;
   cin >> laps;
   
   cout << fixed << setprecision(2); // set the output format to two decimal places
   cout << LapsToMiles(laps) << endl;


   return 0;
}
