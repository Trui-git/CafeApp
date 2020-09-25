
#include <iostream>
#include <array>
#include <vector>

using namespace std;

#include "Order.h"
#include "Drink.h"
#include "Meat.h"
#include "Snack.h"
#include "Veggie.h"

void shopping();

int main()
{
    int shoppingAgain = 1;
    // give the user the options to start again
    for (;;) {        
        if (shoppingAgain == 1) {
            shopping();
        }
        else
            break;

        cout << "\nShopping again? 1) Yes 2) No: ";
        cin >> shoppingAgain;
    } // for (;;)
    
    return 0;
}


void shopping() {

    string menu[] = { "Drink", "Meat", "Snack", "Veggie" };
    bool isDone = false;
    bool goBack = false;
    bool again = true;
    int choice = 0;

    Order order;
    Drink drink;
    Meat meat;
    Snack snack;
    Veggie veggie;

    while (!isDone) {
        int menuChoice = 0;
        int itemChoice = 0;
        goBack = false;

        // prints menu
        cout << "Select a category: (99) to exit!" << endl;
        for (int i = 1; i < menu->length(); i++) {
            cout << i << ") " << menu[i - 1] << endl;
        }

        cin >> menuChoice;

        switch (menuChoice) {
        case 99: { // exit
            isDone = true;
            break;
        }
        case 1: { // add drink
            while (!goBack) {
                drink.PrintMenu(drink.GetNames());
                cin >> itemChoice;
                if (itemChoice != 99)
                    order.AddItem(drink.GetItem(itemChoice - 1));
                else
                    goBack = true;
            }
            break;
        }
        case 2: { // add meat
            while (!goBack) {
                meat.PrintMenu(meat.GetNames());
                cin >> itemChoice;
                if (itemChoice != 99)
                    order.AddItem(meat.GetItem(itemChoice - 1));
                else
                    goBack = true;
            }
            break;
        }
        case 3: { // add Snack
            while (!goBack) {
                meat.PrintMenu(snack.GetNames());
                cin >> itemChoice;
                if (itemChoice != 99)
                    order.AddItem(snack.GetItem(itemChoice - 1));
                else
                    goBack = true;
            }
            break;
        }
        case 4: { // add Veggie
            while (!goBack) {
                meat.PrintMenu(veggie.GetNames());
                cin >> itemChoice;
                if (itemChoice != 99)
                    order.AddItem(veggie.GetItem(itemChoice - 1));
                else
                    goBack = true;
            }
            break;
        }
        default: { // default
            cout << "opps" << " you entered " << menuChoice << endl;
            break;
        }
        } // switch
    } // while

    order.PrintItems(); // print out order

    // ask if they would like to remove an item - basic
    bool removeItem = true;
    while (removeItem) { // loop to allow removing more than 1 item
        cout << "\nWould you like to remove an item? 1) Yes 2) No: ";
        cin >> choice;

        if ((choice == 1) && (order.GetItemNum() > 0)) { 
            order.PrintItemsWithIndex();
            cin >> choice;
            order.RemoveItem(choice - 1);
            order.PrintItems();
        }
        else
            removeItem = false;
    }// while (removeItem)
}