#ifndef COMICS_H
#define COMICS_H

#include "Book.h"

class Comics : public Book {
private:
    std::string illustrator; 
public:
    Comics(const std::string& name, int id, int price, const std::string& author, int pages, const Publisher& pub, const std::string& illustrator);
    void print() const override;
};

#endif