#include <iostream>
#include <string>
/*
    Chaînes de caractères: Nous permettent de manipuler du texte.
                    Elles sont représentées par la classe (std::string -> std::basic_string<char>).
                    Chaque caractère se termine avec un caractère nul ('\0').
                    Les chaînes de caractères peuvent être modifiées,
                    redimensionnées et manipulées facilement.

    Les méthodes:
    std::string : at()          -> Accède à un caractère à une position donnée.
    std::string : front()       -> Accède au premier caractère de la chaîne (H si Hello World!).
    std::string : back()        -> Accède au dernier caractère de la chaîne ( ! si Hello World!).
    std::string : push_back()   -> Ajoute un caractère à la fin de la chaîne.
    std::string : pop_back()    -> Supprime le dernier caractère de la chaîne.
    std::string : append()      -> Ajoute une chaîne de caractères à la fin de la chaîne.
    std::string : clear()       -> Supprime tous les caractères de la chaîne.
    std::string : size() / length() -> Renvoie la taille de la chaîne.
    std::string : empty()       -> Vérifie si la chaîne est vide.
    std::string : starts_with() -> Vérifie si la chaîne commence par une sous-chaîne donnée.
    std::string : ends_with()   -> Vérifie si la chaîne se termine par une sous-chaîne donnée.
    std::string : contains()    -> Vérifie si la chaîne contient une sous-chaîne donnée.
    std::string : substr()      -> Renvoie une sous-chaîne, substr(ignor, valeur lu).
    std::string : swap()       -> Échange le contenu de la chaîne avec une autre chaîne.
    -------------------------------------------------------------------------------------------
    Les fonctions libres:
    - std::getline()           -> Lit une ligne de texte depuis un flux d'entrée.
    - std::to_string()         -> Convertit une valeur en chaîne de caractères.
    - std::stoi()              -> Convertit une chaîne de caractères en entier.
    - std::stof()              -> Convertit une chaîne de caractères en flottant.
    - std::stod()              -> Convertit une chaîne de caractères en double.
    - std::stold()             -> Convertit une chaîne de caractères en long double.
    - std::size()              -> Renvoie la taille d'une chaîne de caractères.
    - std::empty()             -> Vérifie si une chaîne de caractères est vide.
    - std::string_view         -> Représente une référence constante à une chaîne existante.
*/

int main()
{
    std::string s{"Hello World!"};
    std::string s1{"one"};
    std::string s2{"two"};

    // échanger les chaînes
    std::cout << "s1 = " << s1 << std::endl;
    std::cout << "s2 = " << s2 << std::endl;
    s1.swap(s2);
    std::cout << "Après échange:" << std::endl;
    std::cout << "s1 = " << s1 << std::endl;
    std::cout << "s2 = " << s2 << std::endl;

    // ajouter à la chaîne
    s.append(" I am learning C++");
    s.append(3, '.');

    // parcourire la chaine
    for (const auto& c : s)
    {
        std::cout << c;
    }

    return 0;
}