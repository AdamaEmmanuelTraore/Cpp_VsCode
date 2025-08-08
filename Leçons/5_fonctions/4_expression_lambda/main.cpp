#include <iostream>

using namespace std;

/*
    Une expression lambda est une fonction anonyme qui peut etre affecté à une variable.
*/

int main()
{
    // Syntaxe: []() <spécificateurs> -> <type_retour> { };
    /*
        auto func = []() -> void {cout << "Hello World!" << endl;};
        func();
    */

    /*
        N.B: la fonction n'a pas accès aux données extérieure.
        Si nous avons besoin de transmettre des informations depuis l'extérieur, nous
        devons passé par des paramètres de fonction ().
        Nous pouvons aussi choisir des règles de captures au niveau
        de l'expression [], ces expressions sont imuable (lecture seule), si nous voulons
        la modifier nous devons ajouter la keyword (mutable), et elles sont 4:
            - [=] : Pour passé la totalité des variable externe (capture par copie).
                    Les changement sont locaux (uniquement dans l'expression lambda).
            - [&] : Pour passé la totalité des variable externe (capture par référence).
                    Les changement sont globales (meme en dehor de l'expression lambda).
            - [&, m] : Les passer différaments.
            - [=, &n] : Les passer différaments.

        Nous pouvons indiquer que notre expression lambda ne peut pas déclancher des
        exceptions avec la keyword (noexcept).
    */
    int n{67};
    int m{34};
    cout << n << " - " << m << endl;
    auto func = [&]() mutable noexcept -> void {
        n += 3;
        m -= 4;
        cout << n << " - " << m << endl;
    };
    func();
    cout << n << " - " << m << endl;

    return 0;
}