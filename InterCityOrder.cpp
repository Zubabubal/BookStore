#include "InterCityOrder.h"
#include <iostream>

InterCityOrder::InterCityOrder(int orderID, const std::string& name, int id, int price, const std::string& status, int orderPrice)
    : Order(orderID, name, id, price, status, orderPrice) {}

void InterCityOrder::print() const {
    std::cout << "Inter City Order#" << orderID << "\t" << name << "\t" << itemID << "\t" << price
        << "\t" << status << "\t" << orderPrice << std::endl;
}

void InterCityOrder::fullPrice() const {
    std::cout << "Full price: " << orderPrice + price << std::endl;
}

void InterCityOrder::Discount(int discount) {
    if (discount > 0 && discount < 100)
        price -= (price * discount / 100);
    else
        std::cout << "Uncorrect discount" << std::endl;
}
