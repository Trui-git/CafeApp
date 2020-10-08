
#ifndef MEAT_H
#define MEAT_H

#include<string>
#include<vector>

using namespace std;

#include "Food.h"

class Meat : public Food {
	public:
		Meat();
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

#endif // !MEAT_H