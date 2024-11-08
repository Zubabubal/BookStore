#ifndef ORDER_H
#define ORDER_H

#include "Item.h"
#include <string>

class Order : public Item {
protected:
    int orderID;
    std::string status;
    int orderPrice;

public:
    Order(int orderID, const std::string& name, int id, int price, const std::string& status, int orderPrice);
    virtual void print() const override;
    virtual void fullPrice() const ;
    virtual void Discount(int discount) override;
};

#endif
