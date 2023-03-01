// 3.23.1: LAB: Smallest number
#include <iostream>
using namespace std;

int main() {
   int x;
   int y;
   int z;
   cin >> x >> y >> z;
   
   if(x <= y){
      if( x<= z){
         cout << x << endl;
      }
      else{
      cout << z << endl;
      }
   }
else if(y <= x){
      if( y<= z){
         cout << y << endl;
      }
      else{
      cout << z << endl;
      }
}
else {
      cout << z << endl;
}

   return 0;
}