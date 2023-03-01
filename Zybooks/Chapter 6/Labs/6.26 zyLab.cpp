// 6.26.1: LAB: Max magnitude
#include <iostream>
#include <cstdlib>
using namespace std;

int MaxMagnitude(int userVal1, int userVal2, int userVal3){
   if(abs(userVal1)>= abs(userVal2))
   {
        if(abs(userVal1)>= abs(userVal3))
        {
            return userVal1;
        }
        else
        {
            return userVal3;
        }
    }
    
    else 
    {
        if(abs(userVal2)>=abs(userVal3))
        {
            return userVal2;
        }
        else{
            return userVal3;
        }
    }
}


int main() {
   int userVal1,userVal2,userVal3;
    cin>>userVal1>>userVal2>>userVal3;
    
    int result;
    result= MaxMagnitude(userVal1,userVal2,userVal3);
    
    cout<<result<<endl;

   return 0;
}
