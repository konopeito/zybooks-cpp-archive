// 4.19.1: LAB: Password modifier
#include <iostream>
#include <string>
using namespace std;

  int main() {
    int count=0;
    int sizeString;
   string userString;
   
   cin >> userString;
   
   sizeString=userString.length()-1;
   
   
   while(count<=sizeString){
   
   if (userString.at(count)=='i')
   userString.at(count)='1';
   
   if (userString.at(count)=='m')
   userString.at(count)='M';
   
   if (userString.at(count)=='a')
    userString.at(count)='@';
   
   if (userString.at(count)=='B')
   userString.at(count)='8';
   
   if (userString.at(count)=='s')
    userString.at(count)='$';
    
   count++;
   }
   userString.append("!");
   cout << userString << endl;
   

   return 0;
}