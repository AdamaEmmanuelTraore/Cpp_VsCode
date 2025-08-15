#include <iostream>
#include <algorithm>

/*
    Écrire un programme en C++  qui permet d'afficher le plus
    grand de trois entiers saisis  au clavier.
*/

int main()
{
    int n1, n2, n3, isMax;

    std::cout << "Saisie 3 nombre\n";
    std::cin >> n1;
    std::cin >> n2;
    std::cin >> n3;

    isMax = std::max({n1, n2, n3});

    std::cout << "Le maximum est " << isMax << "\n";

    return 0;
}