#include <iostream>
#include <string>
#include <stack>

/*
    Piles: Est une structure de données de type LIFO (Last In, First Out), donc
           on va avoir un ensemble d'éléments qu'on va empiler (ajouter) et dépiler (retirer),
           ou le dernier élément ajouté sera le premier à être retiré et vice versa.
           Avec les piles on n'a pas d'accès direct à l'indice comme dans les tableaux.
           Il n'est pas possible de parcourir les éléments de la pile.

    Méthodes:
    std::stack : push()     -> Ajoute un élément au sommet de la pile.
    std::stack : pop()      -> Retire l'élément au sommet de la pile.
    std::stack : top()      -> Renvoie l'élément au sommet de la pile sans le retirer.
    std::stack : empty()    -> Vérifie si la pile est vide.
    std::stack : size()     -> Renvoie le nombre d'éléments dans la pile.
*/

int main()
{
    std::stack<int> pile;

    pile.push(5);
    pile.push(11);
    pile.push(8);

    // taille de la pile
    std::cout << "Taille : " << pile.size() << std::endl;

    pile.pop(); // dépiler le sommet de la pile

    // élément au sommet de la pile
    std::cout << "Sommet : " << pile.top() << std::endl;

    if (pile.empty())
    {
        std::cout << "La pile est vide." << std::endl;
    }

    return 0;
}