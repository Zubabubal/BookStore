#include "Employee.h"
#include <iostream>
using namespace std;

Employee::Employee(const string& name, int age, const string& position, double salary)
    : Person(name, age), position(position), salary(salary) {}

void Employee::print() const {
    cout << "Employee: " << Name << "\tAge: " << age << "\tPosition: " << position
        << "\tSalary: " << salary << endl;
}

void Employee::award(double amount) {
    salary += amount;
    cout << position << " " << Name << " awarded: " << amount << endl;
}

void Employee::fine(double amount) {
    salary -= amount;
    cout << position << " " << Name << " fined: " << amount << endl;
}

double Employee::getSalary() const {
    return salary;
}