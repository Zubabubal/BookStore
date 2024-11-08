#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include "Person.h"
#include <string>

class Employee : public Person {
private:
    int salary;
    std::string JobTitle;

public:
    Employee(const std::string& Name, int age, const std::string& JobTitle, int salary);
    void print() const override;
    void award(int sum);
    void fine(int sum);
};

#endif
