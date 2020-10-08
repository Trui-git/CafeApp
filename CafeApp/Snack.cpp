#include <iostream>
#include <vector>
#include "Snack.h"

// constructor
Snack::Snack() {
	Food::SetName("Snack");
	SetNames();
}

string Snack::GetDesc() {
	return desc;
} // GetDesc()

void Snack::SetDesc(string d) {
	desc = d;
} // SetDesc()

void Snack::SetNames() {
	names.push_back("Chips");
	names.push_back("Chocolate");
	names.push_back("coconut");
}

vector<string> Snack::GetNames() {
	return names;
}

string Snack::GetItem(int idx) {
	return names.at(idx);
}

int Snack::GetItemCount() {
	return names.size();
}