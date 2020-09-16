
#ifndef FOOD_H
#define FOOD_H

#include <string>
#include <vector>

using namespace std;

class Food {
	public:
		Food();
		void SetName(string n);
		void SetPrice(double p);
		string GetName();
		double GetPrice();
		void PrintMenu(vector<string> items);
	private:
		string name;
		double price;
};

#endif // !FOOD_H