#ifndef LOCALORDER_H
#define LOCALORDER_H

#include "Order.h"

class LocalOrder : public Order {
public:
    LocalOrder(int orderID, const std::string& name, int id, int price, const std::string& status, int orderPrice);
    void print() const override;
    void fullPrice() const override;
    void Discount(int discount) override;
};

#endif
