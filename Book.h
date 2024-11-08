#ifndef BOOK_H 
#define BOOK_H 

#include "Item.h"

class Book : public Item {
protected:
    string author;
    int pages;
public:
    Book(const string& name, int id, int price, const string& author, int pages);
    void print() const override;
};

#endif

