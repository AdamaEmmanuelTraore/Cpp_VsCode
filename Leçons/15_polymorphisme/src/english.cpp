#include <iostream>
#include <string>
#include "../include/english.hpp"

void English::sayGoodNight() const noexcept
{
    std::cout << name << " : Good night" << std::endl;
}