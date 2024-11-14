#ifndef BOOK_H 
#define BOOK_H 

#include "Item.h"
#include "Publisher.h"
#include <string>

class Book : public Item {
protected:
    std::string author;
    int pages;
    Publisher publisher;
public:
    Book(const std::string& name, int id, int price, const std::string& author, int pages, const Publisher& pub);
    void print() const override;
};

#endif