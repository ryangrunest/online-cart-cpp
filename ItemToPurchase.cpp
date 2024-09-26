#include <iostream>
using namespace std;

#include "ItemToPurchase.h"

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

