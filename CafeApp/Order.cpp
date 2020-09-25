#include <iostream>
#include "Order.h"

Order::Order() {} // constructor

void Order::AddItem(string item) {
	items.push_back(item);
} // AddItem()

void Order::RemoveItem(int idx) {
	items.erase(items.begin() + idx);
} // RemoveItem()

void Order::ClearItems() {
	items.clear();
} // ClearItems()

void Order::PrintItems() {
	cout << endl;
	for (int i = 0; i < items.size(); i++) {
		cout << items[i] << endl;
	}
} // PrintItems()

void Order::PrintItemsWithIndex() {
	cout << endl;
	for (int i = 1; i <= items.size(); i++) {
		cout << i << ") " << items[i - 1] << endl;
	}
} // PrintItems()

int Order::GetItemNum() {
	return items.size();
}