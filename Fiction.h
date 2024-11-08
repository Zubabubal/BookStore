#ifndef FICTION_H
#define FICTION_H

#include "Book.h"

class Fiction : public Book {
public:
    Fiction(const string& name, int id, int price, const string& author, int pages);
    void print() const override;
};

#endif