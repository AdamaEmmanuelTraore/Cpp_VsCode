#include <iostream>

/*
    Écrire  un programme en C++ permettant de saisir deux nombres et d'afficher leur produit.
*/

int main()
{
    int n1, n2, produit;
    std::cout << "Saisie 2 nombres \n";
    std::cin >> n1;
    std::cin >> n2;

    produit = n1 * n2;

    std::cout << "produit = " << produit << "\n";

    return 0;
}