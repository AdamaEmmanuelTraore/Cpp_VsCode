#ifndef CHARACTER_HPP
#define CHARACTER_HPP
#include <string>
#include "../include/unit.hpp"

/*
    Héritage: Est un mécanisme qui nous permet de definir des relation
              entre plusieur classe.
*/

class Character : public Unit    // héritage
{
    using Unit::Unit;           // indication manuel (implicite) d'heritage.

    private:
        int level;

    public:
    Character() = delete;     // = delete, pour ne pas avoir le constructeur de defaut
    Character(int i, const std::string& n, int l) noexcept;

    int getLevel() const;

};

#endif