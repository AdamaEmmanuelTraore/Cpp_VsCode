#include <iostream>
#include <string>
#include "../include/quest.hpp"

Quest::Quest(const std::string& n, const std::string& d, int unitId) noexcept
: name(n), description(d)
{
}

void Quest::show() const noexcept
{
    std::cout << name << std::endl;
    std::cout << description << std::endl;
}