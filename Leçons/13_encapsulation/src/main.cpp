#include <iostream>
#include "../include/window.hpp"

int main()
{
    // creation d'objets
    Window newApp{"Mon programme GUI"};
    
    // appel getter
    std::cout << newApp.getTitle() << std::endl;

    // utilise setter pour modifier et getter pour avoir
    newApp.setTitle("Programme changé");
    std::cout << newApp.getTitle() << std::endl;

    return 0;
}