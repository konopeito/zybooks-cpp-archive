// 2.26 LAB: Caffeine levels
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
   double caffeineMg;
   
   cin >> caffeineMg;
   cout << fixed << setprecision(2);
   cout << "After 6 hours: " << caffeineMg / 2.0 << " mg" << endl;
   cout << "After 12 hours: " << caffeineMg / 2.0 / 2.0 << " mg" << endl;
   cout << "After 24 hours: " << caffeineMg / 2.0 / 2.0 / 2.0 / 2.0 << " mg" << endl;

   return 0;
}