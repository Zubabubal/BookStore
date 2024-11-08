#ifndef PERSON_H
#define PERSON_H

#include <string>
#include <iostream>

class Person {
protected:
    std::string Name;
    int age;

public:
    Person(const std::string& Name, int age);
    virtual void print() const;
    virtual ~Person();
};

#endif
