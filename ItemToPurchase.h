#ifndef ITEM_TO_PURCHASE_H
#define ITEM_TO_PURCHASE_H

#include <string>
using namespace std;

class ItemToPurchase {
  public:
    ItemToPurchase(string itemName = "none", int itmePrice = 0, int itemQuantity = 0);
    void SetName(string name);
    string GetName();

    void SetPrice(int price);
    int GetPrice();
    
    int GetQuantity();
    void SetQuantity(int quantity);
  private:
    string itemName;
    int itemPrice;
    int itemQuantity;
};

#endif