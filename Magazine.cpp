#include "Magazine.h"
#include <iostream>
using namespace std;

Magazine::Magazine(const string& name, int id, int price, const string& author, int pages, const Publisher& pub, int issueNumber)
    : Book(name, id, price, author, pages, pub), issueNumber(issueNumber) {}

void Magazine::print() const {
    cout << "Magazine:" << "\t" << name << "\t" << itemID << "\t" << price
        << "\t" << author << "\t" << pages << "\tIssue: " << issueNumber << "\t"
        << publisher.getName() << endl;
}