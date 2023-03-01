// 3.22 LAB: Remove gray from RGB
#include <iostream>
using namespace std;

int main() {
int r;
int g;
int b;
cin>>r>>g>>b;

if((r==g) && (r>b)){
   cout<<(r-b)<<' '<<(g-b)<<' '<<(b-b)<<endl;
}
else if((r==g) && (r<b)){
   cout<<(r-r)<<' '<<(g-g)<<' '<<(b-g)<<endl;
}
else if((r==g) && (r==b)){
   cout<<(r-r)<<' '<<(g-g)<<' '<<(b-b)<<endl;
}
else if((r<g) && (g==b)){
   cout<<(r-r)<<' '<<(g-r)<<' '<<(b-r)<<endl;
}
else if((r>g) && (g==b)){
   cout<<(r-g)<<' '<<(g-g)<<' '<<(b-b)<<endl;
}
else if((r==b) && (g<r)){
   cout<<(r-g)<<' '<<(g-g)<<' '<<(b-g)<<endl;
}
else if((r==b) && (g>r)){
   cout<<(r-r)<<' '<<(g-r)<<' '<<(b-b)<<endl;
}
else if((r>0) && (g>0)&& (b>0)){
   cout<<(r-r)<<' '<<(g-r)<<' '<<(b-r)<<endl;
}
else {
   cout<<r<<' '<<g<<' '<<b<<endl;
}



   return 0;
}
