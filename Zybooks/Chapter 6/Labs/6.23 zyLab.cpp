// 6.23.1: LAB: A jiffy
#include <iostream>
#include <iomanip>
using namespace std;

double JiffiesToSeconds(double userJiffies){
   return userJiffies/100;
}

int main() {
   double jiffies;
   cin>>jiffies;
   cout << fixed << setprecision(3); 
  cout << JiffiesToSeconds(jiffies) << endl; 

   return 0;
}