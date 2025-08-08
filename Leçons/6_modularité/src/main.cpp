#include "../include/utils.hpp"

using namespace std;

/*
    La modularité consiste a séparer mes fichier pour puvoir les réutiliser
    ailleur dans le meme dossier, il est diviser en:
        - Le corp du fichier (utils.cpp),
        - L'en tete du fichier (utils.hpp) ou nous allons avoir de l'abstraction
          de tout ce que je déclare à l'intérieur du corp du
          fichier (fonctions, classes, enumeration etc...).
    
    Compiler tout les fichier .cpp avec cette comande g++ src/*.cpp -o main -> ./main
*/

int main()
{
    helloWorld();

    return 0;
}