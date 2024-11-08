#include "Location.h"
#include <iostream>

Location::Location(const std::string& name, int id, int price, const std::string& locationInfo)
    : Item(name, id, price), locationInfo(locationInfo) {}

void Location::print() const {
    std::cout << "Book: " << name << "\tID: " << itemID << "\tPrice: " << price
        << "\nLocation:\n" << locationInfo << std::endl;
}
