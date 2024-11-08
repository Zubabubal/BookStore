#include "Order.h"
#include <iostream>

Order::Order(int orderID, const std::string& name, int id, int price, const std::string& status, int orderPrice)
    : Item(name, id, price), orderID(orderID), status(status), orderPrice(orderPrice) {}

void Order::print() const {
    std::cout << "Order#" << orderID << "\t" << name << "\t" << itemID << "\t" << price
        << "\t" << status << "\t" << orderPrice << std::endl;
}

void Order::fullPrice() const {
    std::cout << "Full price: " << orderPrice + price << std::endl;
}

void Order::Discount(int discount) {
    if (discount > 0 && discount < 100)
        price -= (price * discount / 100);
    else
        std::cout << "Uncorrect discount" << std::endl;
}
