
#include <iostream>
#include <vector>
#include "Meat.h"

// constructor
Meat::Meat() {
	Food::SetName("Meat");
	SetNames();
} // constructor

string Meat::GetDesc() {
	return desc;
} // GetDesc()

void Meat::SetDesc(string d) {
	desc = d;
} // SetDesc()

void Meat::SetNames() {
	names.push_back("Bacon");
	names.push_back("Steak");
	names.push_back("Chicken");
	names.push_back("Turkey");
	names.push_back("Beef");
}

vector<string> Meat::GetNames() {
	return names;
}

string Meat::GetItem(int idx) {
	return names.at(idx);
}