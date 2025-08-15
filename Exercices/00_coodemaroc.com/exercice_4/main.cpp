#include <iostream>

/*
    Écrire un un programme en C++ qui  permet d'afficher si un nombre 
    entier saisi au  clavier est pair ou impair.
*/

int main()
{
    int n;

    std::cout << "Saisie un nombre\n";
    std::cin >> n;

    if (n % 2 == 0)
    {
        std::cout << "Le nombre est pair\n";
    } else {
        std::cout << "Le nombre est impair\n";
    }

    return 0;
}