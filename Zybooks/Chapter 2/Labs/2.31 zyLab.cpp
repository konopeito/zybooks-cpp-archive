// 2.31 LAB: Simple statistics
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
   int num1;
   int num2;
   int num3;
   int num4;

  cin>>num1>>num2>>num3>>num4;
   
int prod;
int avg;

prod= num1*num2*num3*num4;
avg=(num1+num2+num3+num4)/4;

cout << prod <<" "<<avg;




cout<<fixed<<setprecision(3);
cout<< endl;
   return 0;
}
