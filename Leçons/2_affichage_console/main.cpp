#include <iostream>

using namespace std;

/*
    cout : affichage standard (il est bufferisé ou en mémoire tampon)
    cerr : erreurs (affichage direct)
    clog : journalisation (il est bufferisé ou en mémoire tampon)
    endl : retour à la ligne + flush
    \n : retour à la ligne (plus légé du endl)
    \t : tabulation
*/

int main()
{
    cout<<"Affichage standard à la console"<<endl;
    cerr<<"Affichage standard d'erreur"<<endl;
    clog<<"Affiche standard clog"<<endl;

    return 0;
}