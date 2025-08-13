#include <iostream>
#include "../include/unit.hpp"
#include "../include/Character.hpp"
#include "../include/Quest.hpp"

/*
    Composition: On parle de composition quand une classe est contenue
                 a l'interieur d'une autre classe (definis dans les attributs).

    Héritage multiple: Est un enssemble de d'héritage fait par une seul classe.
                       Ex: class x : public y, public a, public b, etc...
*/

int main()
{
    Unit npc{114, "Forgeron Gibbons"}; 
    std::cout << npc.getName() << std::endl;
    std::cout << npc.getId() << std::endl;

    Character c{16, "Jason", 1};
    std::cout << c.getName() << std::endl;
    std::cout << c.getId() << std::endl;
    std::cout << c.getLevel() << std::endl;

    Quest q{"Tourte au sanglier", "Rapporte 5 morceaux de viande", npc.getId()};
    q.show();

    return 0;
}