
#ifndef CART_H
#define CART_H

#include "Item.h"
#include <vector>

class Cart {
private:
    std::vector<Item*> items; 
public:
    void addItem(Item* item);
    void printItems() const; 
};

#endif