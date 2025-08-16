#include <iostream>

/*
    Écrire un programme en C++  qui demande deux nombres m et n à l’utilisateur
    et l’informe ensuite si le produit de ces deux nombres est positif ou négatif.
    On inclut dans le programme le cas où le produit peut être nul. 
*/

int main()
{
    int m, n, produit;

    std::cout << "Saisie deux nombres\n";
    std::cin >> m;
    std::cin >> n;

    produit = m * n;

    try
    {
        if (produit == 0) {
            throw std::invalid_argument("Le produit est nul\n");
        } else if (produit >= 0) {
            std::cout << "Le produit des deux nombres est positif\n";
        } else {
            std::cout << "Le produit des deux nombres est négatif\n";
        }
    }
    catch(const std::invalid_argument& e)
    {
        std::cerr << e.what() << '\n';
    }

    return 0;
}