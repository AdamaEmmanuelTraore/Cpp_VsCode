#include <iostream>

/*
    Le centre de photocopie facture 0,25 DH  pour les 10 premières photocopies, 0,20 DH
    les vingt suivantes et 0,10 DH  au-delà. Ecrire un programme en C++ qui demande à
    l’utilisateur de saisir le nombre de photocopies effectuées et qui affiche la
    facture correspondante.
*/

int main()
{
    int montant;
    float tot, prix = 0.0f;

    std::cout << "Combien de copie veut tu faire ?\n";
    std::cin >> montant;

    if (montant <= 10) {
        prix = 0.25f;
        tot = prix * montant;
        std::cout << "Prix total pour " << montant << " copies est " << tot;
    } else if (montant <= 20) {
        prix = 0.20f;
        tot = prix * montant;
        std::cout << "Prix total pour " << montant << " copies est " << tot;
    } else {
        prix = 0.10f;
        tot = prix * montant;
        std::cout << "Prix total pour " << montant << " copies est " << tot;
    }

    return 0;
}