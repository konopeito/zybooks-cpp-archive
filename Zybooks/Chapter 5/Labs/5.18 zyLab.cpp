// 5.18 LAB: Output numbers in reverse
#include <iostream>
#include <vector>   // Must include vector library to use vectors
using namespace std;

int main() {
   vector<int> userInts;
   int totalValues;
   int temp;
   int i;
   int j;
   
   cin>>totalValues;
   
   for(i=0; i< totalValues; i++){
      cin>>temp;
      userInts.push_back(temp);
   }
   for(j=userInts.size()-1; j>=0; j--){
      cout<<userInts.at(j)<<",";
   }
   cout<<endl;
   

   return 0;
}
