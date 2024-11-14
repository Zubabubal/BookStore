#include "Book.h"
#include <iostream>
using namespace std;

Book::Book(const string& name, int id, int price, const string& author, int pages, const Publisher& pub)
    : Item(name, id, price), author(author), pages(pages), publisher(pub) {}

void Book::print() const {
    cout << "Book:" << "\t" << name << "\t" << itemID << "\t" << price
        << "\t" << author << "\t" << pages << "\t" << publisher.getName() << endl;
}