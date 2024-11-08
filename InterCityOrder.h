#ifndef INTERCITYORDER_H
#define INTERCITYORDER_H

#include "Order.h"

class InterCityOrder : public Order {
public:
    InterCityOrder(int orderID, const std::string& name, int id, int price, const std::string& status, int orderPrice);
    void print() const override;
    void fullPrice() const override;
    void Discount(int discount) override;
};

#endif
