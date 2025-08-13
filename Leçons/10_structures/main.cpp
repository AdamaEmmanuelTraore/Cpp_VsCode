#include <iostream>

/*
    Une structure nous donne la possibilité de régrouper un certain
    nombre de données.
    struct: données publiques (par défaut)
*/

struct Product
{
    std::string name;
    float price;
    bool isAvailable;
};

int main()
{
    // using Product = struct Product           creation d'un ALIAS
    struct Product p{"Sucre", 2.99f, true};
    std::cout << "Prix: " << p.price << std::endl;

    return 0;
}