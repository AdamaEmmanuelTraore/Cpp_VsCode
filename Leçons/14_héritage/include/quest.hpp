#ifndef QUEST_HPP
#define QUEST_HPP
#include <string>

/*
    Héritage: Est un mécanisme qui nous permet de definir des relation
              entre plusieur classes.
*/

class Quest
{
    private:
    std::string name;
    std::string description;

    public:
    Quest() = delete;
    Quest(const std::string& n, const std::string& d, int unitId) noexcept;

    void show() const noexcept;
};

#endif