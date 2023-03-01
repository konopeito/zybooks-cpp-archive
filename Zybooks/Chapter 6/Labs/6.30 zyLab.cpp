// 6.30.1: LAB: Convert to binary - functions
#include <iostream>
using namespace std;

string IntToReverseBinary(int integerValue)
{
    string revBinary = "";

    while (integerValue!=0)
    {
        int rem = integerValue %2;
        char c = (rem+'0');
        integerValue = integerValue / 2;
        revBinary = revBinary + c;
    }
    
    
    return revBinary;
}

//method to reverse the string
string StringReverse(string userString)
{
    string revString = "";
    
    for(int i=userString.length()-1; i>=0; i--)
    {
        revString = revString + userString[i];
    }
    
    
    return revString;
}

int main()
{
    //variable declaration
    int num;
    cin>>num;
    cout<<StringReverse(IntToReverseBinary(num))<<endl;

    return 0;
}
