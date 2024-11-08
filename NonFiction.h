#ifndef NONFICTION_H
#define NONFICTION_H

#include "Book.h"

class NonFiction : public Book {
public:
    NonFiction(const string& name, int id, int price, const string& author, int pages);
    void print() const override;
};

#endif
