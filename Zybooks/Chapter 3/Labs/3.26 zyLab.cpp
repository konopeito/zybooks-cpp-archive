// 3.26.1: LAB: Exact change
#include <iostream>
using namespace std;

int main() {

   int c;
   cin>>c;
   if(c<=0){
      cout<<"No change"<<endl;
   }
   if(c>=100){
      if(c<200){
         cout<<c/100<<" Dollar"<<endl;
      }
      if(c>=200){
         cout<<c/100<<" Dollars"<<endl;
      }
   }
   if ((c%100)>=25){
      if(((c%100)/25)==1){
         cout<<"1 Quarter"<<endl;
      }
      if (((c%100)/25)>=2){
      cout<<((c%100)/25)<<" Quarters"<<endl;   
      }
   }
   if(((c%100)%25)>=10){
      if((((c%100)%25)/10)==1){
         cout<<"1 Dime"<<endl;
      }
      if((((c%100)%25)/10)>=2){
        cout<<(((c%100)%25)/10)<<" Dimes"<<endl; 
      }
   }
   if((((c%100)%25)%10)>=5){
      if(((((c%100)%25)%10)/5)==1){
         cout<<"1 Nickel"<<endl;
      }
   }
   if(((((c%100)%25)%10)%5)>=1){
      if((((((c%100)%25)%10)%5)/1)==1){
         cout<<"1 Penny"<<endl;
      }
      if((((((c%100)%25)%10)%5)/1)>=2){
         cout<<(((((c%100)%25)%10)%5)/1)<<" Pennies"<<endl;
      }
   }
   
   return 0;
}