
#ifndef ORDER_H
#define ORDER_H

#include <string>
#include <vector>
using namespace std;

class Order {
public:
	Order();
	void AddItem(string item);
	void RemoveItem(int idx);
	void ClearItems();
	void PrintItems();
	void PrintItemsWithIndex();
	int GetItemNum();
private:
	vector<string> items;
};

#endif // !ORDER_H
