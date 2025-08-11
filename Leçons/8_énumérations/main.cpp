#include <iostream>

using namespace std;

/*
    Les énumérations sont un moyen de définir un type, ce type possédera une
    valeur listée.
    Nous pouvons rendre les énumération propre à eux meme (locale)
    en utilisant la keyword class ou struct (enum class/struct énumération).
    énumération réguliaire = énumération x{y};
    énumération étendue = énumération x{énumération::y} -> avec ce type, la convertion n'est pas
                                                           explicite, nous devons faire un cast.
    xxxx
*/

// énumération globale
enum NaturalElement
{
    earth,  // 0
    air,    // 1
    fire,   // 2
    water   // 3
};

int main()
{
    NaturalElement ne{water};               // indice 3 dans l'énumération (modifiable)
    cout << ne << endl;

    return 0;
}