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

    // Délucidation
    int x = 5;
    int y = x++;                        // y = 5
    int sum = x + y;                    // sum = 11
    cout << x << " - " << y << endl;    // 6 - 5
    cout << sum;                        // 11

    return 0;
}