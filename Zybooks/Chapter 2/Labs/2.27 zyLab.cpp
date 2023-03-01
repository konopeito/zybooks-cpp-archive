// 2.27.1: LAB: Driving costs
#include <iostream>
#include <iomanip> //For setprecision
using namespace std;

int main()
{

	double milesGallon;
	double dollarsGallon;
	double costPerMile;

	cout << fixed << setprecision(2);
	cin >> milesGallon;
	cin >> dollarsGallon;
	costPerMile = dollarsGallon / milesGallon;

	cout << fixed << setprecision(2);
	cout << costPerMile * 20;
	cout << " ";
	cout << costPerMile * 75;
	cout << " ";
	cout << costPerMile * 500 << endl;

	return 0;
}