#include <iostream>
#include <string>
#include <unordered_set>    // ensembles non ordonée
#include <set>              // ensembles ordonée

/*
    ensembles: Un ensemble est une collection d'éléments UNIQUES, sans ordre particulier.
    Les ensembles en C++ sont généralement implémentés comme des arbres binaires de recherche
    (BST) ou des tables de hachage. Ils permettent de stocker des valeurs sans doublons
    et offrent des opérations efficaces pour l'insertion, la suppression et la recherche.

    Méthodes:
    std::set : insert()      -> Insère une valeur dans l'ensemble.
    std::set : erase()       -> Supprime une valeur de l'ensemble.
    std::set : contains()    -> Vérifie si une valeur existe dans l'ensemble.
    std::set : find()        -> Recherche une valeur dans l'ensemble et renvoie un itérateur
                                 vers celle-ci.
    std::set : size()        -> Renvoie le nombre d'éléments dans l'ensemble.
    std::set : empty()       -> Vérifie si l'ensemble est vide.
*/

int main()
{
    std::unordered_set<int> s{1, 2, 3, 4, 5};

    // ajoute plusieurs éléments
    s.insert({6, 7, 8});

    // élimine un élément
    s.erase(4);

    // recherche un élément
    auto it = s.find(2);
    if (it != s.end()) {
        std::cout << "Élément trouvé : " << *it << std::endl;
    } else {
        std::cout << "Élément non trouvé" << std::endl;
    }

    // parcourir l'ensemble
    for (const auto& element : s) {
        std::cout << element << " ";
    }
    std::cout << std::endl;

    return 0;
}