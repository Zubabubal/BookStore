#ifndef ITEM_H
#define ITEM_H

#include <string>
using namespace std;

class Item {
protected:
    int itemID;
    string name;
    int price;
public:
    Item(const string& name, int id, int price);
    virtual void print() const;
    int getprice() const;
    virtual void Discount(int discount);
    virtual ~Item();
};

#endif
