#ifndef PUBLISHER_H
#define PUBLISHER_H

#include <string>

class Publisher {
private:
    std::string name;
    std::string address;
public:
    Publisher(const std::string& name, const std::string& address);
    std::string getName() const;
};

#endif