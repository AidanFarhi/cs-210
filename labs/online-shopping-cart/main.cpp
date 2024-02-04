#include <iostream>
using namespace std;

#include "ItemToPurchase.h"

/**
 * \brief   Prompts the user to enter values for an item, including name, price, and quantity.
 *
 * \param   itemName        A reference to a string where the entered item name will be stored.
 * \param   itemPrice       A reference to an integer where the entered item price will be stored.
 * \param   itemQuantity    A reference to an integer where the entered item quantity will be stored.
 */
void getItemValuesFromUser(string& itemName, int& itemPrice, int& itemQuantity) {
    cout << "Enter the item name:" << endl;
    getline(cin, itemName);
    cout << "Enter the item price:" << endl;
    cin >> itemPrice;
    cout << "Enter the item quantity:" << endl;
    cin >> itemQuantity;
}

/**
 * \brief   Sets the values of an ItemToPurchase object with the provided item details.
 *
 * \param   item            An ItemToPurchase object whose values will be set.
 * \param   itemName        The name of the item.
 * \param   itemPrice       The price of the item.
 * \param   itemQuantity    The quantity of the item.
 */
void setItemValuesForItem(ItemToPurchase& item, string itemName, int itemPrice, int itemQuantity) {
    item.SetName(itemName);
    item.SetPrice(itemPrice);
    item.SetQuantity(itemQuantity);
}

/**
 * \brief   Prints the total cost of two ItemToPurchase objects, including individual and combined costs.
 *
 * \param   item1           The first ItemToPurchase object.
 * \param   item2           The second ItemToPurchase object.
 */
void printTotalCost(ItemToPurchase item1, ItemToPurchase item2) {
    int itemOneTotalCost = item1.GetPrice() * item1.GetQuantity();
    int itemTwoTotalCost = item2.GetPrice() * item2.GetQuantity();
    int combinedTotalCost = itemOneTotalCost + itemTwoTotalCost;
    cout << "TOTAL COST" << endl;
    cout << item1.GetName() << " " << item1.GetQuantity() << " @ $";
    cout << item1.GetPrice() << " = $" << itemOneTotalCost << endl;
    cout << item2.GetName() << " " << item2.GetQuantity() << " @ $";
    cout << item2.GetPrice() << " = $" << itemTwoTotalCost << endl;
    cout << endl;
    cout << "Total: $" << combinedTotalCost << endl;
}

int main() {

    // Declare two items.
    ItemToPurchase item1;
    ItemToPurchase item2;

    // Declare variables to hold user input values.
    string itemName;
    int itemPrice;
    int itemQuantity;
    
    // Prompt user to enter values for item1.
    cout << "Item 1" << endl;
    getItemValuesFromUser(itemName, itemPrice, itemQuantity);

    // Set the values for item1.
    setItemValuesForItem(item1, itemName, itemPrice, itemQuantity);

    cout << endl;

    // Allow user to input a new string.
    cin.ignore();

    // Prompt user to enter values for item2.
    cout << "Item 2" << endl;
    getItemValuesFromUser(itemName, itemPrice, itemQuantity);

    // Set the values for item2.
    setItemValuesForItem(item2, itemName, itemPrice, itemQuantity);

    cout << endl;

    // Print total cost.
    printTotalCost(item1, item2);

    return 0;
}