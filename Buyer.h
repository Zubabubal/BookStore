#ifndef BUYER_H
#define BUYER_H

#include "Person.h"
#include "Item.h"
#include <string>

class Buyer : public Person, public Item {
public:
    Buyer(const std::string& Name, int age, const std::string& name, int id, int price);
    void print() const override;
    void Discount(int discount) override;
};

#endif
