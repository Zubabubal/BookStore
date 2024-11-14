#ifndef MAGAZINE_H
#define MAGAZINE_H

#include "Book.h"

class Magazine : public Book {
private:
    int issueNumber; 
public:
    Magazine(const std::string& name, int id, int price, const std::string& author, int pages, const Publisher& pub, int issueNumber);
    void print() const override;
};

#endif