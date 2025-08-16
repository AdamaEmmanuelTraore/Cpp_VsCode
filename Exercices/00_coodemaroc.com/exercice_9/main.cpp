#include <iostream>

/*
    Écrire un programme en C++  qui permet de calculer la moyenne
    de trois entiers saisis par l'utilisateur.
*/

int main()
{
    float n1, n2, n3, moyenne;
    std::cout << "Saisie trois chiffres\n";
    std::cin >> n1;
    std::cin >> n2;
    std::cin >> n3;

    moyenne = (n1 + n2 + n3)/3;

    std::cout << "La moyenne est " << moyenne << "\n";

    return 0;
}