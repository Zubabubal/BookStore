#include "Review.h"
#include <iostream>

Review::Review(const std::string& name, int id, int price, const std::string& reviewText)
    : Item(name, id, price), reviewText(reviewText) {}

void Review::print() const {
    std::cout << "Book: " << name << "\tID: " << itemID << "\tPrice: " << price
        << "\nReview:\n" << reviewText << std::endl;
}
