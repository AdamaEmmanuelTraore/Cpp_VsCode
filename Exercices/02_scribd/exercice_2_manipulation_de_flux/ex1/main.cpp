#include <iostream>

/*
    Ecrivez un programme C++ qui effectue la lecture d'un nombre entier
    au clavier et l'affiche en octal (std::oct) et en hexadécimal (std::hex).
    Utilisez les deux possibilités existantes. Aussi, les caractères
    alphabétiques hexadécimaux devront etre affichés en majuscules.
    INPUT: entier
    OUTPUT: entier en octal et hexadécimal
*/

int main()
{
    int nombre;
    std::cout << "Entrer un entier" << std::endl;
    std::cin >> nombre;

    // convertion en octal
    std::cout << "Convertion en octal: " << std::oct << nombre << std::endl;

    // convertion en hexadecimal
    std::cout << "Convertion en hexadecimal: " << std::hex << std::uppercase << nombre << std::endl;

    return 0;
}