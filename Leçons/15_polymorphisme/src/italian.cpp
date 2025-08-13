#include <iostream>
#include <string>
#include "../include/italian.hpp"
#include "../include/someone.hpp"

void Italian::sayGoodNight() const noexcept
{
//    std::cout << name << " : Buongiorno" << std::endl;

    // nous pouvons faire reférence à la classe parent (classe parent::methode())
    Someone::sayGoodNight();
}