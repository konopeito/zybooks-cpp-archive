// 3.24.1: LAB: Interstate highway numbers
#include <iostream>
using namespace std;

int main() {
 int x;
 cin>>x;
 if ((x>=1)&&(x<=99)){
    if(((x%10)==0)||((x%10)==2)||((x%10)==4)||((x%10)==6)||((x%10)==8)){
       cout <<"I-"<<x<<" is primary, going east/west."<<endl;
    }
    else{
       cout <<"I-"<<x<<" is primary, going north/south."<<endl;
    }
 }
    else if ((x>=101)&&(x<=999)){
       if(((x%10)==0)||((x%10)==2)||((x%10)==4)||((x%10)==6)||((x%10)==8)){
       cout <<"I-"<<x<<" is auxiliary, serving I-"<<(x%100)<<", east/west."<<endl;
       }
    else{
       cout <<"I-"<<x<<" is auxiliary, serving I-"<<(x%100)<<", north/south."<<endl;
    }
    }
    else{
       cout<<x<<" is not a valid interstate highway number."<<endl;
    }

   return 0;
}