#include <iostream>
#include "../include/unit.hpp"
#include <string>

Unit::Unit(int i, const std::string& n) noexcept
{
    this->id = i;
    this->name = n;
}

int Unit::getId() const noexcept
{
    return this->id;
}

std::string Unit::getName() const noexcept
{
    return this->name;
}