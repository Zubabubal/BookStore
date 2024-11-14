#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include "Person.h"
#include <string>

class Employee : public Person {
private:
    std::string position;
    double salary;

public:
    Employee(const std::string& name, int age, const std::string& position, double salary);

    void print() const override;
    void award(double amount);
    void fine(double amount);
    double getSalary() const;
};

#endif