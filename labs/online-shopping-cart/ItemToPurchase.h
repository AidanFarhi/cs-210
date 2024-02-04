#ifndef ITEM_TO_PURCHASE_H
#define ITEM_TO_PURCHASE_H

#include <string>
using namespace std;

class ItemToPurchase {
    public:
        string GetName();
        void SetName(string itemName);
        int GetPrice();
        void SetPrice(int itemPrice);
        int GetQuantity();
        void SetQuantity(int itemQuantity);
        ItemToPurchase();
    private:
        string itemName;
        int itemPrice;
        int itemQuantity;
};

#endif