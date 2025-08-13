#include <iostream>
#include "../include/window.hpp"

int main()
{
    // creation d'objets
    Window app{};
    Window newApp{"Mon programme GUI"};
    Window x{"first", 10, 2};

    // appel de méthodes
    app.run();

    return 0;
}