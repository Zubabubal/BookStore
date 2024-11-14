#include "Person.h"
#include <iostream>

Person::Person(const std::string& Name, int age) : Name(Name), age(age) {}

void Person::print() const {
    std::cout << Name << "\t" << age << std::endl;
}

Person::~Person() {}
