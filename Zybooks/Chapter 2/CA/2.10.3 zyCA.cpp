// CHALLENGE ACTIVITY
// 2.10.3: Using math functions to calculate the distance between two points.
#include <iostream>
#include <cmath>
using namespace std;

int main() {
   double x1;
   double y1;
   double x2;
   double y2;
   double xDist;
   double yDist;
   double pointsDistance;

   xDist = 0.0;
   yDist = 0.0;
   pointsDistance = 0.0;

   cin >> x1;
   cin >> y1;
   cin >> x2;
   cin >> y2;

   /* Your solution goes here  */
   double item1 = (x2 - x1);
	double item2 = (y2 - y1);
	double item1Pow = pow(item1, 2);
	double item2Pow = pow(item2, 2);
	pointsDistance = sqrt(item1Pow + item2Pow);

   cout << pointsDistance << endl;

   return 0;
}