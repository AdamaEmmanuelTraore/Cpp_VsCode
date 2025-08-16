#include <iostream>

/*
    Écrire un programme en C++  qui permet d'évaluer une note saisi au 
    clavier (si la note supérieur à 10 alors il affiche validé sinon non validé 
    (NB : la note comprise entre 0 et 20 ).
*/

int main()
{
    int note;

    std::cout << "Saisie une note\n";
    std::cin >> note;

    try
    { 
        if (note >= 0 && note <= 20)
        {
            if (note > 10)
            {
                std::cout << "validé\n";
            } else {
                std::cout << "non validé\n";
        }
        } else {
            throw std::invalid_argument("La note doit etre comprise entre 0 et 20");
        }
    }
    catch(const std::invalid_argument& e)
    {
        std::cerr << e.what() << '\n';
    }
    

    return 0;
}