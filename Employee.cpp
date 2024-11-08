#include "Employee.h"
#include <iostream>

Employee::Employee(const std::string& Name, int age, const std::string& JobTitle, int salary)
    : Person(Name, age), JobTitle(JobTitle), salary(salary) {}

void Employee::print() const {
    std::cout << Name << "\t" << age << "\t" << JobTitle << "\t" << salary << std::endl;
}

void Employee::award(int sum) {
    if (sum > 0) salary += sum;
    else std::cout << "Incorrect award amount.\n";
}

void Employee::fine(int sum) {
    if (sum > 0) salary -= sum;
    else std::cout << "Incorrect fine amount.\n";
}
