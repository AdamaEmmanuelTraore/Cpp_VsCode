#include <iostream>
#include <string>
#include "../include/character.hpp"

Character::Character(int i, const std::string& n, int l) noexcept : Unit(i, n), level(l)
{
}

int Character::getLevel() const
{
    return level;
}