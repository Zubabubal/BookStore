#ifndef NONFICTION_H
#define NONFICTION_H

#include "Book.h"

class NonFiction : public Book {
public:
    NonFiction(const std::string& name, int id, int price, const std::string& author, int pages, const Publisher& pub);
    void print() const override;
};

#endif