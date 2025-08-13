#ifndef ITALIAN_HPP
#define ITALIAN_HPP
#include <string>
#include "../include/someone.hpp"

/*
    Override: Sait une Key-word pour dire q'on fait une redefinition de la méthode virtuel.
*/

class Italian : public Someone
{
    using Someone::Someone;

    public:
    void sayGoodNight() const noexcept override;
};

#endif