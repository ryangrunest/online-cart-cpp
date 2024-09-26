#include <iostream>
#include "ItemToPurchase.h"

using namespace std;

int main() {
  string itemName;
  int i, itemPrice, itemQuantity, itemOneTotal, itemTwoTotal;
  ItemToPurchase item1, item2;

  for (i = 1; i <= 2; i++) {
    cout << "Item " << i << endl;
    cout << "Enter the item name:" << endl;

    getline(cin, itemName);

    cout << "Enter the item price:" << endl;

    cin >> itemPrice;

    cout << "Enter the item quantity:" << endl;

    cin >> itemQuantity;

    if (i == 1) {
      item1.SetName(itemName);
      item1.SetPrice(itemPrice);
      item1.SetQuantity(itemQuantity);

      itemOneTotal = item1.GetPrice() * item1.GetQuantity();

      cin.ignore();

    } else {
      item2.SetName(itemName);
      item2.SetPrice(itemPrice);
      item2.SetQuantity(itemQuantity);

      itemTwoTotal = item2.GetPrice() * item2.GetQuantity();
    }

    cout << endl;

  }

  cout << "TOTAL COST" << endl;
  cout << item1.GetName() << " " << item1.GetQuantity() << " @ $" << item1.GetPrice() << " = $" << itemOneTotal << endl;
  cout << item2.GetName() << " " << item2.GetQuantity() << " @ $" << item2.GetPrice() << " = $" << itemTwoTotal << endl;
  cout << endl;

  cout << "Total: $" << itemOneTotal + itemTwoTotal << endl;

  return 0;
}