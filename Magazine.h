#ifndef MAGAZINE_H
#define MAGAZINE_H

#include "Book.h"

class Magazine : public Book {
public:
    Magazine(const string& name, int id, int price, const string& author, int pages);
    void print() const override;
};

#endif