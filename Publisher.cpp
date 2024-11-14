#include "Publisher.h"

Publisher::Publisher(const std::string& name, const std::string& address)
    : name(name), address(address) {}

std::string Publisher::getName() const {
    return name;
}