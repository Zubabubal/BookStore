#ifndef BUYER_H
#define BUYER_H

#include "Person.h"
#include "Item.h"
#include "Cart.h"
#include <string>

class Buyer : public Person {
private:
    Cart cart; 
public:
    Buyer(const std::string& Name, int age);
    void print() const override; 
    void addItemToCart(Item* item); 
};

#endif