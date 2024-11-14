#ifndef INTERNATIONALORDER_H
#define INTERNATIONALORDER_H

#include "Order.h"

class InternationalOrder : public Order {
public:
    InternationalOrder(int orderID, const std::string& name, int id, int price, const std::string& status, int orderPrice);
    void print() const override;
    void fullPrice() const override;
    void Discount(int discount) override;
};

#endif
