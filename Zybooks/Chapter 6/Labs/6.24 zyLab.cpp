// 6.24.1: LAB: Driving cost - functions
#include <iostream>
#include <iomanip>               // For setprecision
using namespace std;

double DrivingCost(double milesPerGallon, double dollarsPerGallon,
    double milesDriven){
       
    double dollarCost=milesDriven/milesPerGallon*dollarsPerGallon;
    return dollarCost;}
    
    int main(){
    double milesPerGallon=20.0, dollarsPerGallon=3.1599;
    double cost=DrivingCost(milesPerGallon,dollarsPerGallon,10);
    
    cout << fixed << setprecision(2) << cost << " ";
    cost=DrivingCost(milesPerGallon,dollarsPerGallon,50.0);
    
    cout << fixed << setprecision(2) << cost << " ";
    cost=DrivingCost(milesPerGallon,dollarsPerGallon,400);
    
    cout << fixed << setprecision(2) << cost <<endl;

   return 0;
}
