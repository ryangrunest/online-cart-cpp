#include <iostream>
#include "ItemToPurchase.h"

using namespace std;

ItemToPurchase::ItemToPurchase() {
  itemName = "none";
  itemPrice = 0;
  itemQuantity = 0;
}

string ItemToPurchase::GetName() {
  return itemName;
}

void ItemToPurchase::SetName(string name) {
  itemName = name;
}

int ItemToPurchase::GetPrice() {
  return itemPrice;
}

void ItemToPurchase::SetPrice(int price) {
  itemPrice = price;
}

int ItemToPurchase::GetQuantity() {
  return itemQuantity;
}

void ItemToPurchase::SetQuantity(int quantity) {
  itemQuantity = quantity;
}
