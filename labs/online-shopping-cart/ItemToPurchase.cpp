#include <iostream>
using namespace std;

#include "ItemToPurchase.h"

string ItemToPurchase::GetName() { return itemName; }
void ItemToPurchase::SetName(string itemName) { this->itemName = itemName; }
int ItemToPurchase::GetPrice() { return itemPrice; }
void ItemToPurchase::SetPrice(int itemPrice) { this->itemPrice = itemPrice; }
int ItemToPurchase::GetQuantity() { return itemQuantity; }
void ItemToPurchase::SetQuantity(int itemQuantity) { this->itemQuantity = itemQuantity; }
ItemToPurchase::ItemToPurchase() {
    itemName = "none";
    itemPrice = 0;
    itemQuantity = 0;
}
