#include <iostream>
#include <string>
#include <vector>

/*
    Tableaux: Sait un conteneur qui va nous pemettre de stocké des données.

    Tableaux de taille dynamique: Est un tableaux dynamique, qu'on peut
                             changer, donc ajouté et diminué comme nous le voulons.

    Méthode de classe
    std::array : push_back() -> Pour ajouter des eléments à la fin du tableau.
    std::array : pop_back()  -> Pour éliminer le dernier elément du tableau.
    std::array : clear()     -> Pour vidé le tableau.
    std::array : at()        -> Pour avoir la position à l'indice spécifié.
    std::array : size()      -> Pour avoir la grandeur du tableau.
    std::array : front()     -> Pour avoir le premier elément du tableau.
    std::array : back()      -> Pour avoir le dernier elément du tableau.
------------------------------------------------------------------------------------
    Fonction libre
    std::size(array) -> Pour avoir la grandeur du tableau.
    std::empty()     -> Pour verifier si le tableau est vide (true=1, false=0).
*/

int main()
{
    // tableaux de taille dynamique
    std::vector<std::string> arr{};

    // ajouter des eléments à la fin du tableau
    arr.push_back("un");
    arr.push_back("deux");
    arr.push_back("trois");
    arr.push_back("quatre");
    arr.push_back("cinq");

    // elimine le dernier elément du tableau
    arr.pop_back();
    
    for (const auto& element : arr)
    {
        std::cout << element << std::endl;
    }

    // copie d'un tableau
    std::vector<std::string> copy{arr};
    std::cout << "\n";

    for (const auto& element : copy)
    {
        std::cout << element << std::endl;
    }

    // vide le tableau
    arr.clear();

    return 0;
}