#include <iostream>
#include <string>
#include <array>

/*
    Tableaux: Sait un conteneur qui va nous pemettre de stocké des données.

    Tableaux de taille fixe: Est un tableaux fixe, donc qui ne peut pas etre
                             changer (ajouté ou diminué), la taille du tableau
                             doit etre une constante.

    Méthode de classe
    std::array : fill() -> Pour remplir le tableau.
    std::array : at()   -> Pour avoir la position à l'indice spécifié.
    std::array : size() -> Pour avoir la grandeur du tableau.
    std::array : front()-> Pour avoir le premier elément du tableau.
    std::array : back() -> Pour avoir le dernier elément du tableau.
------------------------------------------------------------------------------------
    Fonction libre
    std::size(array) -> Pour avoir la grandeur du tableau.
    std::empty()     -> Pour verifier si le tableau est vide (true=1, false=0).
*/

int main()
{
    // tableaux de taille fixe
    std::array<int, 5> arr{1, 2, 3, 4, 5};

    // affiche le premier element du tableau
    std::cout << arr[0] << "\n" << std::endl;

    for(const auto& element : arr)
    {
        std::cout << element << std::endl;
    }

    // element à la position x
    std::cout << "\n" << arr.at(2) << std::endl;

    // grandeur du tableau
    std::cout << "\n" << arr.size() << std::endl;
    std::cout << std::size(arr) << std::endl;           // le plus generic et le plus conseillé.

    // verifie si il est vide ou pas
    std::cout << "\n" << std::empty(arr) << std::endl;

    return 0;
}