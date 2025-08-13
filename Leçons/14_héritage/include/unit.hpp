#ifndef UNIT_HPP
#define UNIT_HPP
#include <string>

class Unit
{
    private:
        int id;
        std::string name;

    public:
        Unit() = delete;    // = delete, pour ne pas avoir le constructeur de defaut
        Unit(int i, const std::string& n) noexcept;

        int getId() const noexcept;
        std::string getName() const noexcept;
};

#endif