#ifndef WINDOW_HPP
#define WINDOW_HPP
#include <string>

/*
    encapsulation: Nous permet de controller l'enssemble des attributs, et
                   aussi de masquer les données de nos classes.
*/

class Window
{
    // Creation d'attribut
    private:
        std::string title;

    public:
    // constructeur
        Window(std::string t);

    // getter
        std::string getTitle() const;          // avec "const" = méthode pas de modification

    // setter
    void setTitle(const std::string t);

};

#endif