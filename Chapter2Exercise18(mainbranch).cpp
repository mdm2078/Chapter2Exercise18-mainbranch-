// Chapter2Exercise18(mainbranch).cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main() {
	// Constants
	const int TOTAL_CUSTOMERS_SURVEYED = 16500;
	const double PERCENT_PURCHASE_ENERGY_DRINKS = 0.15; 
	const double PERCENT_PREFER_CITRUS = 0.58;

	// Calculations
	int energyDrinkCustomers = TOTAL_CUSTOMERS_SURVEYED * PERCENT_PURCHASE_ENERGY_DRINKS;
	int citrusEnergyDrinkCustomers = energyDrinkCustomers * PERCENT_PREFER_CITRUS;

	// Display the results
	cout << "Approximate number of customers who purchase one or more energy drinks per week:" << energyDrinkCustomers << endl;
	cout << "Approximate number of customers who prefer citrus-flavored energy drinks:" << citrusEnergyDrinkCustomers << endl;

	return 0;
}