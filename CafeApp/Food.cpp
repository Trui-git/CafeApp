
#include <iostream>
#include "Food.h"

// constructor
Food::Food() {
	// do nothing 
}

string Food::GetName() {
	return name;
}

double Food::GetPrice() {
	return price;
}

void Food::SetName(string n) {
	name = n;
}

void Food::SetPrice(double p) {
	price = p;
}

void Food::PrintMenu(vector<string> items) {
	cout << "Select an item(99 to go back):" << endl;
	for (int i = 1; i <= items.size(); i++) {
		cout << i << ") " << items[i - 1] << endl;
	}
}