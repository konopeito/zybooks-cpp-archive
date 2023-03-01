// 4.15 LAB: Mad Lib - loops
#include <iostream>
#include <string>
using namespace std;

int main() {

   string x;
   int y;
   cin>>x>>y;
   while(x !="quit"){
      cout<<"Eating "<< y <<" "<<x<<" a day keeps you happy and healthy."<<endl;
      cin>>x>>y;
      if(x=="quit"){
      break;
      }
   }