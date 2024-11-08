#include "Buyer.h"
#include <iostream>

Buyer::Buyer(const std::string& Name, int age, const std::string& name, int id, int price)
    : Person(Name, age), Item(name, id, price) {}

void Buyer::print() const {
    std::cout << Name << "\t" << age << "\t" << name << "\t" << itemID << "\t" << price << std::endl;
}

void Buyer::Discount(int discount) {
    if (0 < discount && discount < 100) price = price - (price * discount / 100);
    else std::cout << "Incorrect discount.\n";
}
