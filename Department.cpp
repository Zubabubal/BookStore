#include "Department.h"

Department::Department(const std::string& name) : name(name) {}

std::string Department::getName() const {
    return name;
}