#include "Buyer.h"
#include <iostream>

Buyer::Buyer(const std::string& Name, int age)
    : Person(Name, age) {}

void Buyer::print() const {
    std::cout << "Buyer: " << Name << "\tAge: " << age << std::endl;
    cart.printItems(); 
}

void Buyer::addItemToCart(Item* item) {
    cart.addItem(item); 
}