#include <iostream>
#include <algorithm>

/*
    Écrire un programme en C++ qui permet d'échanger le contenu de deux
    entiers  A et B  saisis par l'utilisateur. et afficher  ces entiers  après l’échange.
*/

int main()
{
    int n1{0};
    int n2{1};

    std::cout << "Avant swap: n1 = " << n1 << ", n2 = " << n2 << "\n";

    std::swap(n1, n2);

    std::cout << "Après swap: n1 = " << n1 << ", n2 = " << n2 << "\n";

    return 0;
}