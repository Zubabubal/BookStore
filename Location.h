#ifndef LOCATION_H
#define LOCATION_H

#include "Item.h"
#include <string>

class Location : public Item {
private:
    std::string locationInfo;

public:
    Location(const std::string& name, int id, int price, const std::string& locationInfo);
    void print() const override;
};

#endif
