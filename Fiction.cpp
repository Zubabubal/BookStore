#include "Fiction.h"
#include <iostream>
using namespace std;

Fiction::Fiction(const string& name, int id, int price, const string& author, int pages, const Publisher& pub)
    : Book(name, id, price, author, pages, pub) {}

void Fiction::print() const {
    cout << "Fiction Book:" << "\t" << name << "\t" << itemID << "\t" << price
        << "\t" << author << "\t" << pages << "\t" << publisher.getName() << endl;
}