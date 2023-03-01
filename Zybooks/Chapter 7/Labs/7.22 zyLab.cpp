// 7.22.1: LAB: Car value (classes)

// Main.cpp
#include <iostream>
#include "Car.h"
using namespace std;

int main() {
   int userYear;
   int userPrice;
   int userCurrentYear;
   Car myCar;
      
   cin >> userYear;
   cin >> userPrice;
   cin >> userCurrentYear;
      
   myCar.SetModelYear(userYear);
   myCar.SetPurchasePrice(userPrice);
   myCar.CalcCurrentValue(userCurrentYear);
      
   myCar.PrintInfo();
   
   return 0;
}
// Car.cpp
#include <iostream>
#include <iomanip>
#include <cmath>
#include "Car.h"
using namespace std;

void Car::SetModelYear(int userYear){
modelYear = userYear;
}

int Car::GetModelYear() const {
return modelYear;
}

void Car::SetPurchasePrice(double price) {
purchasePrice = price;
}
double Car::GetPurchasePrice() const {
return purchasePrice;
}

void Car::CalcCurrentValue(int currentYear) {
double depreciationRate = 0.15;
int carAge = currentYear - modelYear;
currentValue = purchasePrice * pow((1 - depreciationRate), carAge);
}
void Car::PrintInfo() const {
cout << "Car's information:" << endl;
cout << "Model year: " << modelYear << endl;
cout << fixed << setprecision(0);
cout << "Purchase price: $" << purchasePrice << endl;
cout << "Current value: $" << currentValue << endl;
}
// Car.h
#ifndef CARH
#define CARH

class Car {
private:
int modelYear;
double purchasePrice;
double currentValue;

public:
void SetModelYear(int userYear);
int GetModelYear() const;
void SetPurchasePrice(double price);
double GetPurchasePrice() const;

void CalcCurrentValue(int currentYear);

void PrintInfo() const;
};

#endif