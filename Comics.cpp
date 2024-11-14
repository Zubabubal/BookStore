#include "Comics.h"
#include <iostream>
using namespace std;

Comics::Comics(const string& name, int id, int price, const std::string& author, int pages, const Publisher& pub, const std::string& illustrator)
    : Book(name, id, price, author, pages, pub), illustrator(illustrator) {}

void Comics::print() const {
    cout << "Comics:" << "\t" << name << "\t" << itemID << "\t" << price
        << "\t" << author << "\t" << pages << "\tIllustrated by: " << illustrator << "\t"
        << publisher.getName() << endl;
}