
#include "Cart.h"
#include <iostream>

void Cart::addItem(Item* item) {
    items.push_back(item);
}

void Cart::printItems() const {
    std::cout << "Items in cart:" << std::endl;
    for (const auto& item : items) {
        item->print(); 
    }
}