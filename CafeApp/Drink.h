
#ifndef DRINK_H
#define DRINK_H

#include <string>
#include <vector>
using namespace std;

#include "Food.h"

class Drink : public Food {
public:
	Drink();
	void SetDesc(string d);
	string GetDesc();
	void SetNames();
	vector<string> GetNames();
	string GetItem(int idx);
	int GetItemCount();
private:
	string desc;
	vector<string> names;
};

#endif // !DRINK_H

