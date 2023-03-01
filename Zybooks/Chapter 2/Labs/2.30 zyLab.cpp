// 2.30 LAB: Phone number breakdown
#include <iostream>
using namespace std;

int main()
{
  long long phoneNumber;

  cin >> phoneNumber;

  long digits1_3 = phoneNumber / 10000000;
  long digits4_10 = phoneNumber - (phoneNumber / 10000000) * 10000000;
  long digits4_6 = digits4_10 / 10000;
  long digits6_10 = digits4_10 - (digits4_10 / 10000) * 10000;
  cout << '(' << digits1_3 << ')' << ' ' << digits4_6 << '-' << digits6_10 << endl;

  return 0;
}
