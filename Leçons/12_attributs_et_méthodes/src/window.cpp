#include <iostream>
#include "../include/window.hpp"
#include <string>

// implémentation de constructeur
Window::Window()
{
    std::cout << "Construction d'une fenetre..." << std::endl;
}

// une façon d'injecter
// Window::Window(std::string t) : title(t)
Window::Window(std::string t) noexcept
{
    // une autre façon d'injecter
    this->title = t;
}

// Window::Window(std::string t) : title(t), width(w), height(h)
Window::Window(std::string t, int w, int h)
{
    this->title = t;
    this->width = w;
    this->height = h;
}

// implémentation de méthodes
void Window::run() const noexcept
{
    std::cout << "Affichage..." << std::endl;
}