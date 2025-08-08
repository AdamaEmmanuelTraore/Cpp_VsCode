#include <iostream>
#include <string>
#include <cassert>

using namespace std;

void createPlayer(string name, int level)
{
    /*
        Faire une assertion pour gérer des érreurs assert(<espression requise> && <message>).
        On les utise lors du développement pour le débogage.
    */
    assert(level > 0 && "Le niveau d'un joueur est au minimum de 1");

    cout << "Creation de " << name << ", de niveau " << level << endl;
}

int main()
{
    createPlayer("Malcom", 8);

    return 0;
}