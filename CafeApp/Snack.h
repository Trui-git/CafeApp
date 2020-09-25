#pragma once
#include <string>
#include <vector>
using namespace std;

#include "Food.h"

class Snack : public Food {
public:
	Snack();
	void SetDesc(string d);
	string GetDesc();
	void SetNames();
	vector<string> GetNames();
	string GetItem(int idx);
private:
	string desc;
	vector<string> names;
};

