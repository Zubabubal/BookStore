#ifndef DEPARTMENT_H 
#define DEPARTMENT_H

#include <string>

class Department {
private:
    std::string name;
public:
    Department(const std::string& name);
    std::string getName() const;
};

#endif