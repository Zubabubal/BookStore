#include "NonFiction.h"
#include <iostream>
using namespace std;

NonFiction::NonFiction(const string& name, int id, int price, const string& author, int pages)
    : Book(name, id, price, author, pages) {}

void NonFiction::print() const {
    cout << "Non-Fiction Book:" << "\t" << name << "\t" << itemID << "\t" << price
        << "\t" << author << "\t" << pages << endl;
}
