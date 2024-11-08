#ifndef REVIEW_H
#define REVIEW_H

#include "Item.h"
#include <string>

class Review : public Item {
private:
    std::string reviewText;

public:
    Review(const std::string& name, int id, int price, const std::string& reviewText);
    void print() const override;
};

#endif
