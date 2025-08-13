#include <iostream>
#include "../include/point.hpp"

/*
    Le mot clef "this" représente l'instance courante (place en mémoire).
*/

// Constructeur par defaut
Point::Point()
{
    std::cout << "Creation d'un point: "<< this << std::endl;
}

// Constructeur de copie
Point::Point(const Point& p)
{
    std::cout << "Copie d'un point" << std::endl;
}

// creation du destructeur par defaut
Point::~Point()
{
    std::cout << "Destructeur de lobjet: " << this << std::endl;
}