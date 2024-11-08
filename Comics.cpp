#include "Comics.h"
#include <iostream>
using namespace std;

Comics::Comics(const string& name, int id, int price, const string& author, int pages)
    : Book(name, id, price, author, pages) {}

void Comics::print() const {
    cout << "Comics:" << "\t" << name << "\t" << itemID << "\t" << price
        << "\t" << author << "\t" << pages << endl;
}
