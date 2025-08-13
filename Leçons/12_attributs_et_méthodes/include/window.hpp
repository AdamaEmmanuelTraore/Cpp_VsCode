#ifndef WINDOW_HPP
#define WINDOW_HPP
#include <string>

/*
    Attribut: Est la variable "attribuer" à la classe.
    Méthode: Est une fonction de la classe.
*/

class Window
{
    // Creation d'attribut
    private:
        std::string title;
        int width;
        int height;

    public:
    // constructeurs
        Window();
        Window(std::string t) noexcept;     // noexcept: pas d'exception attendue .
        Window(std::string t, int w, int h);

    // méthodes
        void run() const noexcept;
};

#endif