#include "LocalOrder.h"
#include <iostream>

LocalOrder::LocalOrder(int orderID, const std::string& name, int id, int price, const std::string& status, int orderPrice)
    : Order(orderID, name, id, price, status, orderPrice) {}

void LocalOrder::print() const {
    std::cout << "Local Order#" << orderID << "\t" << name << "\t" << itemID << "\t" << price
        << "\t" << status << "\t" << orderPrice << std::endl;
}

void LocalOrder::fullPrice() const {
    std::cout << "Full price: " << orderPrice + price << std::endl;
}

void LocalOrder::Discount(int discount) {
    if (discount > 0 && discount < 100)
        price -= (price * discount / 100);
    else
        std::cout << "Uncorrect discount" << std::endl;
}
