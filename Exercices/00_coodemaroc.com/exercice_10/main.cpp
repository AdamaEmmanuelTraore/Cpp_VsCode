#include <iostream>

/*
    Une boutique propose à ces clients, une réduction de 15% pour les montants
    d’achat supérieurs à 200 dh. Écrire un programme en C++ permettant de saisir
    le prix total HT et de calculer le  montant TTC en prenant en compte la réduction et la TVA=20%.
*/

int main()
{
    float prix, prixTot, gainBoutique, prixTva, promo = 0.15f, tva = 0.2f;

    std::cout << "Saisie un prix\n";
    std::cin >> prix;
    
    if (prix > 200) {
        promo = promo * prix;
        prixTot = prix - promo;
        gainBoutique = prixTot - prixTva;
        prixTva = tva * prixTot;

        std::cout << "Pour un montant de " << prix << "$ avec " << promo << "$ de reduction, tu " <<
        "paieras " << prixTot << "$ e la boutique aura " << gainBoutique
        << "$ avec deja " << prixTva << "$ de TVA.";
    } else {
        std::cout << "Pas de reduction.\n";
    }

    return 0;
}