// 4.18 LAB: Checker for integer string
#include <iostream>
#include <string>
using namespace std;

int main() {
   string str;
   int i;
   int count=0;
   cin>>str;
   for(i=0; i<str.length(); i++){
      if(isdigit(str.at(i))){
         count++;
         continue;
      }
      else{
         cout<<"No"<<endl;
         break;
      }
   }
   if(count==str.length()){
      cout<<"Yes"<<endl;
   }


   return 0;
}
