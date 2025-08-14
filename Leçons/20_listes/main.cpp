#include <iostream>
#include <string>
#include <list>

/*
    Liste: Est une structure de données qui permet de stocker une collection d'éléments.
           Contrairement aux tableaux, les listes peuvent contenir des éléments de taille variable
           et permettent une insertion et une suppression efficaces d'éléments.
           Les listes en C++ sont généralement implémentées comme des listes doublement
           chaînées (parcequ'on peut accéder au début et à la fin de la liste).
           Avec les listes, on peut parcourir la liste, mais on ne peut pas accéder
           directement à un élément par son [index].

    Méthodes:
    std::list : push_back()  -> Ajoute un élément à la fin de la liste.
    std::list : push_front() -> Ajoute un élément au début de la liste.
    std::list : pop_back()   -> Retire le dernier élément de la liste.
    std::list : pop_front()  -> Retire le premier élément de la liste.
    std::list : front()      -> Renvoie le premier élément de la liste.
    std::list : back()       -> Renvoie le dernier élément de la liste.
    std::list : empty()      -> Vérifie si la liste est vide.
    std::list : size()       -> Renvoie le nombre d'éléments dans la liste.
    std::list : insert()     -> Insère un ou plusieurs éléments à une position spécifique dans la liste.
    std::list : sort()       -> Trie les éléments de la liste de manière ascendante.
    std::list : reverse()    -> Inverse l'ordre des éléments dans la liste de manière descendante.
*/

int main()
{
    std::list<std::string> li{"janvier", "février", "mars"};

    // ajout d'éléments
    li.push_front("mai");
    li.push_back("avril");

    // accès aux éléments
    std::cout << "Premier élément : " << li.front() << std::endl;
    std::cout << "Dernier élément : " << li.back() << std::endl;

    // tri de la liste
    li.sort();

    // taille
    std::cout << "Taille de la liste : " << li.size() << "\n" << std::endl;

    for (const auto& mois : li) {
        std::cout << mois << std::endl;
    }

    return 0;
}