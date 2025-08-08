#include <iostream>

using namespace std;

/*
    Passage par valeur vs passage par référence
    Passage par valeur = recopie des variables en paramètre.
    Passage par référence = pas de recopie des variables en paramètre (elle fait une
    alias ou référence a une variable).
*/

/*
    N.B: En modifiant les référence, donc en passant par valeur, le résultat en main()
         ne change pas vue qu'on fait un passage par valeur (donc copie).
*/
void setNumbers(int& x, int& y)
{
    x -= 6;
    y += 2;
}

int main()
{
    int a{5}, b{8};

    cout << a << " " << b << endl;

    setNumbers(a, b);
    cout << a << " " << b << endl;

    return 0;
}