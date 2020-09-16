
#include <iostream>
#include <array>
#include <vector>

using namespace std;

#include "Order.h"
#include "Drink.h"
#include "Meat.h"


int main()
{
    string menu[] = { "Drink", "Meat", "Snack", "Veggie" };
    bool isDone = false;
    bool goBack = false;
    bool again = true;
    int choice = 0;

    Order order;
    Drink drink;
    Meat meat;

    //shop:
    do {
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
            default: { // default
                cout << "opps" << " you entered " << menuChoice << endl;
                break;
            }
            } // switch
        } // while

        // 0) improve the printing - needs whitespace/seperators
        order.PrintItems(); // print out order

        // 1)
        // ask if they would like to remove an item - basic

        bool removeItem = true;
        while (removeItem) {
            cout << "\nWould you like to remove an item? 1) Yes 2) No: ";
            cin >> choice;

            // 2)
            // give the user the options to start again?? clearing the list and starting over

            if (choice == 1) { // could loop to allow removing more than 1 item
                order.PrintItemsWithIndex();
                cin >> choice;
                order.RemoveItem(choice - 1);
                order.PrintItems();
                //isDone = false;
                //goBack = false;
                // 3) replace/rearrange/rewrite this code to remove the goto
                //goto shop; // are they good or evil? evil but why? because they produce spagetti code
            }
            else
                removeItem = false;
        }
        
        int shoppingAgain = 0;
        cout << "\nShopping again? 1) Yes 2) No: ";
        cin >> shoppingAgain;
        if (shoppingAgain == 1) {
            isDone = false;
            order.ClearItems();
        }
        else
            isDone = true;

    } while (isDone == false);

    return 0;
}