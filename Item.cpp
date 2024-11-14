#include "Item.h"
#include <iostream>
using namespace std;

Item::Item(const string& name, int id, int price)
    : name(name), itemID(id), price(price) {}

void Item::print() const {
    cout << name << "\t" << itemID << "\t" << price << endl;
}

int Item::getprice() const {
    return price;
}

void Item::Discount(int discount) {
    if (discount > 0 && discount < 100)
        price -= price * discount / 100;
    else
        cout << "Incorrect discount" << endl;
}

Item::~Item() {}
