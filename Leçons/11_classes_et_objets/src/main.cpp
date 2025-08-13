#include <iostream>
#include "../include/point.hpp"

/*
    POO: Sait un paradigme de programmation qui nous permet d'utiliser 
         les "objets" de la vie réelle pour resoudre des problèmes.

    L'abstraction: Sait un model très abstrait de l'objet choisie, on pourra
                   en suite le réutiliser t'elle qu'elle est.

    Objet: Est une instance de la classe.
                   
    class: données privées (par défaut)
*/

int main()
{
    // creation d'un objet Point
    Point p{};

    // creation d'un objet Point qui appel le constructeur par recopie
    Point p2{p};

    return 0;
}