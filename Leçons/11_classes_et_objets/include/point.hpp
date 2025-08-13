#ifndef POINT_HPP       // Sait une sécurité pour éviter les inclusion circulaire
#define POINT_HPP

// creation de la classe
class Point
{
    public:
    // constructeur par defaut.
        Point();
    // constructer de recopie.
        Point(const Point& p);
    // constructeur de déplacement: sert à éviter les copie de donnée.
        Point(Point&& p);

    // creation du destructeur par defaut
        ~Point();
};

#endif