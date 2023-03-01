// 4.14 LAB: Convert to reverse binary
#include <iostream>
using namespace std;

int main() {
int x, i;
int a[10];
cin>>x;
for(i=0; x>0; i++){
   a[i]=x%2;
   cout<<a[i];
   x=x/2;
}
cout<<endl;
   return 0;
}
