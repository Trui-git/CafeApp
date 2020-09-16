
#include <iostream>
#include <vector>
#include "Drink.h"

// constructor
Drink::Drink() {
	Food::SetName("Drink");
	SetNames();
}

string Drink::GetDesc() {
	return desc;
} // GetDesc()

void Drink::SetDesc(string d) {
	desc = d;
} // SetDesc()

void Drink::SetNames() {
	names.push_back("Rum");
	names.push_back("Rye");
	names.push_back("Coke");
}

vector<string> Drink::GetNames() {
	return names;
}

string Drink::GetItem(int idx) {
	return names.at(idx);
}
