#include <iostream>
#include <string>
#include <vector>
#include <array>

/*
    Itérateurs en C++: Sait un objet qui permet de parcourir une collection d'éléments.
                       Sont avantage est qu'ils sont beaucoup génériques, meme en changeant de type.

    <iterator>             : on peut déplacer le curseur, on peut modifier les éléments.
    const <iterator>       : on peut modifier les éléments (du conteneur).
    <const_iterator>       : on ne peut pas déplacer le curseur.
    const <const_iterator> : on ne peut plus rien faire (seul l'affichage).

    Methodes
    type_de_structure::iterator -> begin()
    type_de_structure::iterator -> end()
    type_de_structure::iterator -> rbegin()
    type_de_structure::iterator -> rend()
    type_de_structure::iterator -> next()
    type_de_structure::iterator -> prev()
    ------------------------------------------------------------------------------------------------------------
    std::begin(collection)  -> un itérateur qui pointe vers le premier élément de la collection.
    std::cbegin(collection) -> un itérateur constant qui pointe vers le premier élément de la collection.
    std::end(collection)    -> un itérateur qui pointe vers la fin de la collection (valeur nulle).
    std::cend(collection)   -> un itérateur constant qui pointe vers la fin de la collection (valeur nulle).
    std::next(it)           -> un itérateur qui pointe vers l'élément suivant de l'itérateur (it dans notre exemple).
    std::prev(it)           -> un itérateur qui pointe vers l'élément précédent de l'itérateur.
    std::rbegin(collection) -> un itérateur inverse qui pointe vers le dernier élément de la collection.
    std::rend(collection)   -> un itérateur inverse qui pointe vers le début de la collection (valeur nulle).
*/

int main()
{
    // EX 1
    using namespace std::literals; // Pour utiliser les suffixes de chaîne de caractères
    std::string sentence{"Bonjour tout le monde"s};

    // declaration d'iterateur standard
    std::string::iterator it{std::begin(sentence)};
    std::cout << *it << std::endl;

    // modification de l'élément pointé par l'itérateur
    *it = 'X';
    std::cout << sentence << std::endl;

    // deplacement de l'itérateur
    it = std::end(sentence);
    std::cout << *it << std::endl; // Affiche un caractère nul (fin de chaîne)

    // declaration d'itérateur constant
    std::string::const_iterator cit{std::begin(sentence)};
    std::cout << *cit << std::endl;

    // pointe à l'élément suivant
    cit = std::next(cit);
    std::cout << *cit << "\n" << std::endl;

    // EX 2
    // std::vector<int> vec{1, 2, 3, 4, 5};
    // std::string vec{"Bonjour tout le monde"};
    std::array<int, 5> vec{1, 2, 3, 4, 5};

    // les operateurs sur les itérateurs
    for (auto it = vec.begin(); it != vec.end(); it++)
    {
        auto iter = std::next(it);
        std::cout << *it << std::endl;
    }

    return 0;
}