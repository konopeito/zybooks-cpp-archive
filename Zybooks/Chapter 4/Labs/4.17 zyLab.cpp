// 4.17 LAB: Count characters
#include <iostream>
#include <string>
using namespace std;

int main() {
char x;
string y;
int c=0;
cin>>x;
getline(cin,y);
for(int i=0; i<y.length();i++){
   if(y[i]==x){
      c++;
   }
}
cout<<c<<" "<<x<<"'s"<<endl;



   return 0;
}