#include <iostream>
#include <vector>
#include "Veggie.h"

// constructor
Veggie::Veggie() {
	Food::SetName("Veggie");
	SetNames();
}

string Veggie::GetDesc() {
	return desc;
} // GetDesc()

void Veggie::SetDesc(string d) {
	desc = d;
} // SetDesc()

void Veggie::SetNames() {
	names.push_back("Cabbage");
	names.push_back("Corn");
	names.push_back("Eggplant");
}

vector<string> Veggie::GetNames() {
	return names;
}

string Veggie::GetItem(int idx) {
	return names.at(idx);
}
