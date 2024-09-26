#ifndef ITEM_TO_PURCHASE_H
#define ITEM_TO_PURCHASE_H

#include <string>
using namespace std;

class ItemToPurchase {
  public:
    ItemToPurchase();
    string GetName();
    int GetPrice();
    int GetQuantity();

    void SetName(string name);
    void SetPrice(int price);
    void SetQuantity(int quantity);
  private:
    string itemName;
    int itemPrice;
    int itemQuantity;
};

#endif