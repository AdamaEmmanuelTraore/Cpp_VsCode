#include <iostream>

using namespace std;

/*
    Arithmétiques : + - * / %
    Booléens      : ! && ||
    Comparaison   : == <= >= != < >
    Affectation   : += -= *= /= %= ++ --
*/

int main()
{
    // Arithmétiques
    int result;
    result = 5 + 5;
    cout<< "Resultat : " << result <<endl;

    // Booléens (return un bool 0 ou 1)
    result = true && true;
    cout<< "Resultat : " << result <<endl;

    // Comparaison (return un bool 0 ou 1)
    result = (5 == 9);
    cout<< "Resultat : " << result <<endl;

    // Affectation
    int player_level{1};
    cout<< "Niveau initial : " << player_level <<endl;
    player_level += 1;
    cout<< "Niveau actuel : " << player_level <<endl;

    return 0;
}