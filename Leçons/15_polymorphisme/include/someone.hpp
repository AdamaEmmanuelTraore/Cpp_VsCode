#ifndef SOMEONE_HPP
#define SOMEONE_HPP
#include <string>

/*
    Méthode virtuel: Sait une fonction membre qui devrait etreredéfinie
                     dans la classe dérivées (fille).

    Classe abstraite ou interface: Elles servent pour exprimer des concepts généraux
                                   à partir desquels des classes plus spécifiques peuvent
                                   etre dérivées (classe vague).
                                   En C++, pour avoir une classe abstraite il faut qu'au moin
                                   une des méthode soit déclarer comme virtual pure
                                   en fesant (virtual retour nom méthode() = 0).
                                   Sait bien aussi d'avoir un destructeur virtuel.
*/

class Someone // classe abstraite
{
    protected:
    std::string name;

    public:
    Someone() = delete;
    Someone(const std::string& n) noexcept;
//    ~Someone() = 0;                                   // destructeur virtuel

    virtual void sayGoodNight() const noexcept = 0;     // méthode abstraite pure
};

#endif