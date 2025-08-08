#include <iostream>

using namespace std;

/*
    Fonctions = méthodes
    Les fonctions nous permettent d'éviter les répétition et de pouvoir
    les réutiliser ailleur dans notre code.
*/

// fonction sans paramètre
void printHelloWorld() // N.B: Si la fonction n'a pas de type de retour, on l'appelle "prototype"
{
    cout << "Hello World! \n";
}

// fonction avec paramètre
int somme(int x, int y)
{
    int result = x + y;
    cout << "Resultat = " << result << endl;
    return result;
}

int main()
{
    printHelloWorld();

    somme(5, 10);

    return 0;
}