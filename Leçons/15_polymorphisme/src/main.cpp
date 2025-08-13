#include <iostream>
#include <string>
#include "../include/english.hpp"
#include "../include/italian.hpp"

/*
    Polymorphisme: Est la capacité d'une classe ou d'une méthode a avoir plusieurs formes.
*/

int main()
{
    English en{"Jack"};
    en.sayGoodNight();

    Italian it{"Mario"};
    it.sayGoodNight();

    return 0;
}