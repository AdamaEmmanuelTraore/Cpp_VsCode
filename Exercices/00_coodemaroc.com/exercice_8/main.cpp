#include <iostream>
#include <math.h>

/*
    Écrire un programme en  C++ qui permet de calculer la valeur
    absolue d'un entier saisi  par l'utilisateur.
*/

int main()
{
    int valeur, vAbsolut;
    std::cout << "Saisie une valeur entier\n";
    std::cin >> valeur;

    vAbsolut = abs(valeur);

    std::cout << "La valeur absolut de " << valeur << " est " << vAbsolut << "\n";

    return 0;
}