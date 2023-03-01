// 3.25.1: LAB: Seasons
#include <iostream>
#include <string>
using namespace std;

int main(){
   string n;
   int d;
   cin>>n>>d;
   if(((n=="March")&&(d>=20)&&(d<=31))||((n=="April")&&(d>=1)&&(d<=30))||((n=="May")&&(d>=1)&&(d<=31))||((n=="June")&&(d>=1)&&(d<=20)))
{
   cout<<"Spring"<<endl;
}
else if(((n=="June")&&(d>=21)&&(d<=30))||((n=="July")&&(d>=1)&&(d<=31))||((n=="August")&&(d>=1)&&(d<=30))||((n=="September")&&(d>=1)&&(d<=21))){
   cout<<"Summer"<<endl;
}
else if(((n=="September")&&(d>=22)&&(d<=30))||((n=="October")&&(d>=1)&&(d<=31))||((n=="November")&&(d>=1)&&(d<=31))||((n=="December")&&(d>=1)&&(d<=20))){
   cout<<"Autumn"<<endl;
}
else if(((n=="December")&&(d>=21)&&(d<=31))||((n=="January")&&(d>=1)&&(d<=31))||((n=="February")&&(d>=1)&&(d<=28))||((n=="March")&&(d>=1)&&(d<=19))){
   cout<<"Winter"<<endl;
}
else{
   cout<<"Invalid"<<endl;
}
   return 0;
}