#include <iostream>

using namespace std;

/*
    La surchage de fonctions est la possibilité de fournire plusieurs
    signature d'une fonction (sans tenir compte du type de retour).
*/

// surchage de printSum
int printSum(int x, int y)
{
    return x + y;
}

float printSum(float x, float y)
{
    return x + y;
}

int main()
{
    int r1 = printSum(4, 7);
    cout << "Surchage 1 = " << r1 << endl;

    float r2 = printSum(6.9f, 10.03f);
    cout << "Surchage 1 = " << r2 << endl;

    return 0;
}