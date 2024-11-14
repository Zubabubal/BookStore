#ifndef FICTION_H
#define FICTION_H

#include "Book.h"

class Fiction : public Book {
public:
    Fiction(const std::string& name, int id, int price, const std::string& author, int pages, const Publisher& pub);
    void print() const override;
};

#endif