// 7.24.1: LAB: Nutritional information (classes/constructors)
// Main.cpp
#include "FoodItem.h"
#include <iostream>
#include <iomanip> 

using namespace std;

int main() {
   string itemName;
   double amountFat, amountCarbs, amountProtein;
   double numServings;
   cout << fixed << setprecision(2);
   
   cin >> itemName;

   if(itemName == "Water" || itemName == "water") {
      FoodItem foodItem;
      foodItem.PrintInfo();
      cout << fixed << setprecision(2);
      cout << "Number of calories for " << 1.0 << " serving(s): " << foodItem.GetCalories(1.0) << endl;
   }
   
   else {
      cin >> amountFat;
      cin >> amountCarbs;
      cin >> amountProtein;
      cin >> numServings;
      
      FoodItem foodItem = FoodItem(itemName, amountFat, amountCarbs, amountProtein);
      foodItem.PrintInfo();
      cout << "Number of calories for " << 1.0 << " serving(s): " 
           << foodItem.GetCalories(1.0) << endl;
      cout << "Number of calories for " << numServings << " serving(s): " 
           << foodItem.GetCalories(numServings) << endl;
   }

   return 0;
}
// FoodItem.cpp
#include "FoodItem.h"
#include <iostream>
#include <iomanip> 

using namespace std;

// Define default constructor
FoodItem::FoodItem() {
	name = "Water";
	fat = 0.0;
	carbs = 0.0;
	protein = 0.0;
}

// Define second constructor with parameters
// to initialize private data members
FoodItem ::FoodItem(string name, double fat, double carbs, double protein){
	this->name = name;
	this->fat = fat;
	this->carbs = carbs;
	this->protein = protein;
}

string FoodItem::GetName() {
   return name;
}

double FoodItem::GetFat() {
   return fat;
}

double FoodItem::GetCarbs() {
   return carbs;
}

double FoodItem::GetProtein() {
   return protein;
}

double FoodItem::GetCalories(double numServings) {
   // Calorie formula
   double calories = ((fat * 9) + (carbs * 4) + (protein * 4)) * numServings;
   return calories;
}

void FoodItem::PrintInfo() {
   cout << fixed << setprecision(2);
   cout << "Nutritional information per serving of " << name  << ":" << endl;
   cout << "  Fat: " << fat << " g" << endl;
   cout << "  Carbohydrates: " << carbs << " g" << endl;
   cout << "  Protein: " << protein << " g" << endl;
}
// FoodItem.h
class FoodItem {
private:

	string name;
	double fat;
	double carbs;
	double protein;
public:
	FoodItem();
	FoodItem(string, double, double, double);
	string GetName();
	double GetFat();
	double GetCarbs();
	double GetProtein();
	double GetCalories(double numServings);
	void PrintInfo();
};
#endif