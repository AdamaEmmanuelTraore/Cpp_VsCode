#include <iostream>
#include <string>
#include "../include/someone.hpp"

Someone::Someone(const std::string& n) noexcept : name(n)
{
}

void Someone::sayGoodNight() const noexcept
{
    std::cout << name << " :..." << std::endl;
}