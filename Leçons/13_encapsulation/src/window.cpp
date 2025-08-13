#include <iostream>
#include "../include/window.hpp"
#include <string>

// une façon d'injecter
// Window::Window(std::string t) : title(t)
Window::Window(std::string t)
{
    // une autre façon d'injecter
    this->title = t;
}

std::string Window::getTitle() const
{
    return this->title;
}

void Window::setTitle(const std::string t)
{
    this->title = t;
}