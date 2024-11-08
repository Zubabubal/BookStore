#ifndef COMICS_H
#define COMICS_H

#include "Book.h"

class Comics : public Book {
public:
    Comics(const string& name, int id, int price, const string& author, int pages);
    void print() const override;
};

#endif
