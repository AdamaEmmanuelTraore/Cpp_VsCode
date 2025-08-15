#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

/*
    Algorithmes en C++: est une enssemble d'instructions qui permettent de résoudre un problème.

    Méthodes
    erase()       -> permet de supprimer des éléments d'une collection.
    ------------------------------------------------------------------------------------------
    std::fill()    -> permet de remplir une valeur avec quelque chose.
    std::equal()   -> permet de comparer deux collections pour vérifier si elles sont égales.
    std::find()    -> permet de rechercher un élément dans une collection.
    std::search()  -> permet de rechercher une séquence dans une autre séquence (pour les chaînes).
    std::count()   -> permet de compter le nombre d'occurrences d'un élément dans une collection.
    std::sort()    -> permet de trier les éléments d'une collection ASC.
    std::reverse() -> permet d'inverser l'ordre des éléments dans une collection DESC.
    std::replace() -> permet de remplacer un élément par un autre dans une collection.
    std::remove()  -> permet de supprimer les éléments d'une collection.
    std::swap()    -> permet d'inverser les valeurs de deux variables.
    std::for_each()-> permet d'effectuer un traitement sur des éléments d'un conteneur.
    std::all_of()  -> permet de vérifier si tous les éléments d'un conteneur satisfont une condition.
    std::any_of()  -> permet de vérifier si au moins un élément d'un conteneur satisfait une condition.
    std::none_of() -> permet de vérifier si aucun élément d'un conteneur ne satisfait une condition.
    std::max_element() -> permet de trouver l'élément le plus grand dans un conteneur.
*/

// fonction pour multiplier un nombre par 2 (pour for_each)
void multiplier(int& n)
{
    n *= 2;
    std::cout << n << " ";
}

// fonction pour verifier si un nombre est pair (pour all_of)
bool is_pair(int n)
{
    return n % 2 == 0;
}

int main()
{
    std::vector<int> vec_one{1, 2, 3, 4, 5};
    std::vector<int> vec_two{1, 2, 3, 4, 5};
    std::vector<int> vec_three{1, 0, 2, 6, 4, 3, 5};
    std::string st{"lala lolo lolo lala lolo"};
    std::string s{"Bonjour"};
    std::string search_string{"jour"};

    for (const auto& i : vec_one) {
        std::cout << i << " ";
    }
    std::cout << "\n";

/*
    // utilise l'algorithme pour remplir et les itérateurs pour le rendre générique
    std::fill(std::begin(vec_one), std::end(vec_one), 6);

    for (const auto& i : vec_one) {
        std::cout << i << " ";
    }
    std::cout << "\n";
*/
    // égaliter de deux collections
    if (std::equal(std::begin(vec_one), std::end(vec_one), std::begin(vec_two), std::end(vec_two))) {
        std::cout << "Oui \n";
    } else {
        std::cout << "Non \n";
    }

    // recherche de données (recherche d'un élément (3) dans une collection)
    auto begin{std::begin(vec_one)};
    auto end{std::end(vec_one)};
    auto result{std::find(begin, end, 3)};
    std::cout << (result != end ? "Trouvé" : "Non trouvé") << "\n";

    // recherche d'une sous-chaîne dans une autre sous-chaîne
    auto s_begin{std::begin(s)};
    auto s_end{std::end(s)};
    auto search_string_begin{std::begin(search_string)};
    auto search_string_end{std::end(search_string)};
    if (std::search(s_begin, s_end, search_string_begin, search_string_end) != s_end) {
        std::cout << "Sous-chaîne trouvée.\n";
    } else {
        std::cout << "Sous-chaîne non trouvée.\n";
    }

    // compter le nombre d'occurrences d'un élément dans une collection (chaîne dans cette exemple).
    std::cout << std::count(std::begin(s), std::end(s), 'o') << " occurrences de 'o' dans Bonjour" << std::endl;

    // trie d'éléments
    //sort()
    auto start{std::begin(vec_three)};
    auto the_end{std::end(vec_three)};
    std::sort(start, the_end);
    for (const auto& i : vec_three)
    {
        std::cout << i << " ";
    }
    std::cout << "\n";

    // reverse()
    std::reverse(start, the_end);
    for (const auto& i : vec_three)
    {
        std::cout << i << " ";
    }
    std::cout << "\n";

    // remplacement d'éléments (remplace o avec i)
    std::cout << st << "\n";
    std::replace(std::begin(st), std::end(st), 'o', 'i');
    std::cout << st << "\n";

    // suppression d'éléments (supprime toutes les occurrences de l)
    std::cout << st << "\n";
    st.erase(std::remove(std::begin(st), std::end(st), 'l'), std::end(st));
    std::cout << st << "\n";

    // inversion de valeurs
    int a{0};
    int b{1};
    std::cout << "Avant l'inversion: a = " << a << ", b = " << b << "\n";
    std::swap(a, b);
    std::cout << "Après l'inversion: a = " << a << ", b = " << b << "\n";

    // effectuer un traitement sur des éléments d'un conteneur
    // for_each()
    std::vector<int> vec_four{1, 2, 3, 4, 5};
    std::for_each(std::begin(vec_four), std::end(vec_four), multiplier);
    std::cout << "\n";

    // all_of()
    std::cout << std::all_of(std::begin(vec_four), std::end(vec_four), is_pair) << "\n";

    // max_element()
    auto max_element = std::max_element(std::begin(vec_four), std::end(vec_four)); // retourne l'élément le plus grand
    std::cout << *max_element << "\n";

    return 0;
}