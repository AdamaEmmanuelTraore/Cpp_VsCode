#include <iostream>
#include <string>
#include <unordered_map> // maps non ordonée
#include <map>           // maps ordonée

/*
    maps (carte associative): Est une structure de données qui associe des clés à des valeurs.
    Elle permet de stocker des paires clé-valeur et d'accéder rapidement à une valeur
    en utilisant sa clé. Les maps en C++ sont généralement implémentées comme des arbres
    binaires de recherche (BST) ou des tables de hachage.
    Avec les maps on à un accès direct au élément à travers son [indice].

    Méthodes:
    std::map : insert()      -> Insère une paire clé-valeur dans la map.
    std::map : erase()       -> Supprime une paire clé-valeur de la map.
    std::map : contains()    -> Vérifie si une clé existe dans la map.
    std::map : find()        -> Recherche une clé dans la map et renvoie un itérateur
                                 vers la paire clé-valeur correspondante.
    std::map : operator[]    -> Accède à la valeur associée à une clé.
    std::map : size()        -> Renvoie le nombre d'éléments dans la map.
    std::map : empty()       -> Vérifie si la map est vide.
*/

int main()
{
    std::unordered_map<int, std::string> unMap{ {1, "janvier"}, {2, "février"}, {3, "mars"} };
    std::map<int, std::string> map{ {1, "janvier"}, {2, "février"}, {3, "mars"} };

    // initialisation d'une nouvelle paire clé-valeur
    unMap[4] = "avril";

    // insert une nouvelle paire clé-valeur
    unMap.insert({5, "mai"});

    // insert plusieurs paire clé-valeur
    unMap.insert({{6, "juin"}, {7, "juillet"}, {8, "août"}});

    // supprime une paire clé-valeur
    unMap.erase(5);

    std::cout << "Avec unordered_map : \n";
    for (const auto& [key, value] : unMap) {
        std::cout << "Clé : " << key << ", Valeur : " << value << std::endl;
    }

    std::cout << "Avec map : \n";
    for (const auto& [key, value] : map) {
        std::cout << "Clé : " << key << ", Valeur : " << value << std::endl;
    }
    // affiche x indice
    std::cout << unMap[2] << std::endl; // affiche "février"

    return 0;
}